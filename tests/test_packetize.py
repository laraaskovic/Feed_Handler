"""Tests for the packetizer (model/packetize.py).

The packetizer defines the input format for the entire hardware pipeline, so a
mistake here becomes a mistake in the RTL's stimulus - the worst kind, because
the RTL then looks broken while being correct.

These tests check the layering arithmetic and the round trip.  The independent
check against Wireshark's own dissector lives in tools/check_pcap.py, and
test_tshark_agrees_with_our_model below runs it when tshark is installed.
"""

import shutil
import struct
import subprocess
import sys
from pathlib import Path

import pytest

import gen
from itch import MSG_LENGTHS, write_messages
from packetize import (
    MOLD_HEADER_LEN,
    depacketize,
    eth_frame,
    ipv4_checksum,
    ipv4_packet,
    mold_packet,
    packetize,
    to_beats,
    udp_datagram,
    write_pcap,
)

ROOT = Path(__file__).resolve().parent.parent


def sample_messages(n=500, seed=2):
    return list(gen.generate(n_messages=n, seed=seed))


# --- header arithmetic ------------------------------------------------------


def test_mold_header_is_twenty_bytes():
    """10-byte session + 8-byte sequence + 2-byte count."""
    pkt = mold_packet(b"0123456789", 42, [])
    assert len(pkt) == MOLD_HEADER_LEN == 20
    assert pkt[:10] == b"0123456789"
    assert struct.unpack(">QH", pkt[10:20]) == (42, 0)


def test_mold_session_must_be_ten_bytes():
    with pytest.raises(AssertionError):
        mold_packet(b"short", 1, [])


def test_mold_payload_is_length_prefixed():
    """Same framing as the BinaryFILE on disk, which is why step 5's framer
    logic is reusable between the file reader and the wire."""
    msgs = [b"A" * 36, b"D" * 19]
    pkt = mold_packet(b"ITCHFPGA01", 7, msgs)
    body = pkt[20:]
    assert body == struct.pack(">H", 36) + b"A" * 36 + struct.pack(">H", 19) + b"D" * 19


def test_ipv4_checksum_of_a_complete_header_is_zero():
    """The defining property of the one's-complement checksum: run it over a
    header that already contains its own checksum and you get 0.  This checks
    the algorithm without needing Wireshark to agree.
    """
    pkt = ipv4_packet(b"payload" * 10, "10.0.0.1", "233.54.12.1", ident=99)
    assert ipv4_checksum(pkt[:20]) == 0


def test_ipv4_checksum_known_value():
    """A hand-checkable case: a header of all zeros has checksum 0xFFFF."""
    assert ipv4_checksum(b"\x00" * 20) == 0xFFFF
    # And flipping one byte must change it.
    assert ipv4_checksum(b"\x00" * 19 + b"\x01") != 0xFFFF


def test_ipv4_total_length_and_protocol():
    payload = b"x" * 100
    pkt = ipv4_packet(payload, "10.0.0.1", "233.54.12.1")
    assert len(pkt) == 120
    assert struct.unpack(">H", pkt[2:4])[0] == 120     # total length
    assert pkt[9] == 17                                 # UDP


def test_udp_length_includes_its_own_header():
    dg = udp_datagram(b"x" * 100, 26400, 26477)
    assert struct.unpack(">H", dg[4:6])[0] == 108
    assert struct.unpack(">HH", dg[:4]) == (26400, 26477)


def test_vlan_tag_shifts_everything_by_four_bytes():
    """The reason step 4's parser must not hard-code the header length."""
    payload = b"x" * 100
    plain = eth_frame(payload)
    tagged = eth_frame(payload, vlan=100)
    assert len(tagged) == len(plain) + 4
    assert plain[12:14] == b"\x08\x00"          # ethertype IPv4
    assert tagged[12:14] == b"\x81\x00"         # 802.1Q TPID
    assert tagged[14:16] == struct.pack(">H", 100)
    assert tagged[16:18] == b"\x08\x00"         # real ethertype, 4 bytes later


def test_short_frames_are_padded_to_the_ethernet_minimum():
    """Padding matters: it means the frame is longer than the IP total length,
    so a parser that trusts the frame size will read trailing zeros as data."""
    frame = eth_frame(b"tiny")
    assert len(frame) == 60


# --- round trip -------------------------------------------------------------


def test_round_trip_recovers_every_message_exactly():
    msgs = sample_messages()
    packets = list(packetize(msgs, msgs_per_packet=8))
    recovered = []
    for frame, seq, batch in packets:
        got_seq, got_msgs = depacketize(frame)
        assert got_seq == seq
        assert got_msgs == batch
        recovered.extend(got_msgs)
    assert recovered == msgs


@pytest.mark.parametrize("mpp", [1, 2, 3, 8, 50])
def test_round_trip_at_various_packing_densities(mpp):
    """One message per packet through dozens: the step 5 stress cases."""
    msgs = sample_messages(300)
    recovered = []
    for frame, _, _ in packetize(msgs, msgs_per_packet=mpp):
        recovered.extend(depacketize(frame)[1])
    assert recovered == msgs


def test_round_trip_with_vlan_and_random_boundaries():
    msgs = sample_messages(1000)
    recovered = []
    for frame, _, _ in packetize(msgs, msgs_per_packet=12,
                                 random_boundaries=True, seed=5, vlan=4094):
        recovered.extend(depacketize(frame)[1])
    assert recovered == msgs


def test_sequence_numbers_count_messages_not_packets():
    """A MoldUDP64 sequence number names the packet's first message, so the
    receiver detects loss with `prev_seq + prev_count == this_seq`.  Getting
    this wrong means a gap detector that fires constantly or never.
    """
    msgs = sample_messages(200)
    expected = 1
    for _, seq, batch in packetize(msgs, msgs_per_packet=7,
                                   random_boundaries=True, seed=1):
        assert seq == expected
        expected += len(batch)
    assert expected == len(msgs) + 1


# --- AXI-Stream beats -------------------------------------------------------


def test_beats_are_little_endian_lane_order():
    """Frame byte 0 goes in tdata[7:0] - the cocotbext-axi convention, and the
    one the RTL must follow or every field lands byte-swapped."""
    frame = bytes(range(16))
    beats = list(to_beats(frame, width=8))
    assert len(beats) == 2
    assert beats[0][0] == 0x0706050403020100
    assert beats[0][1] == 0xFF and beats[0][2] is False
    assert beats[1][2] is True


def test_only_the_last_beat_may_be_partial():
    frame = b"x" * 21                        # 2 full beats + 5 bytes
    beats = list(to_beats(frame, width=8))
    assert [b[1] for b in beats] == [0xFF, 0xFF, 0b00011111]
    assert [b[2] for b in beats] == [False, False, True]


def test_beats_reassemble_into_the_original_frame():
    frame = bytes(range(256)) * 3
    out = bytearray()
    for tdata, tkeep, _ in to_beats(frame, width=8):
        n = bin(tkeep).count("1")
        out += tdata.to_bytes(8, "little")[:n]
    assert bytes(out) == frame


def test_messages_land_at_many_byte_offsets():
    """The point of --random-boundaries: confirm the stimulus really does put
    message starts at every offset within a beat, so the step 5 barrel shifter
    gets exercised on all 8 alignments rather than just offset 4.
    """
    msgs = sample_messages(4000, seed=9)
    offsets = set()
    for frame, _, batch in packetize(msgs, msgs_per_packet=10,
                                     random_boundaries=True, seed=9):
        # Walk the payload the way the framer does, recording where each
        # message begins relative to the start of the frame.
        start = 14 + 20 + 8 + MOLD_HEADER_LEN       # eth + ip + udp + mold
        pos = start
        for m in batch:
            pos += 2                                 # the length prefix
            offsets.add(pos % 8)
            pos += len(m)
    assert offsets == set(range(8)), f"only hit offsets {sorted(offsets)}"


# --- pcap output ------------------------------------------------------------


def test_pcap_header_is_wellformed(tmp_path):
    msgs = sample_messages(100)
    frames = [f for f, _, _ in packetize(msgs, msgs_per_packet=4)]
    path = tmp_path / "t.pcap"
    n = write_pcap(str(path), frames)
    raw = path.read_bytes()

    magic, major, minor, _tz, _sig, snaplen, link = struct.unpack("<IHHiIII", raw[:24])
    assert magic == 0xA1B2C3D4
    assert (major, minor) == (2, 4)
    assert snaplen == 65535
    assert link == 1                          # LINKTYPE_ETHERNET

    # Walk the records and confirm the lengths tile the file exactly.
    off, count = 24, 0
    while off < len(raw):
        _s, _us, caplen, origlen = struct.unpack("<IIII", raw[off:off + 16])
        assert caplen == origlen
        off += 16 + caplen
        count += 1
    assert off == len(raw)
    assert count == n == len(frames)


def test_pcap_frames_still_depacketize(tmp_path):
    """Whatever we write to the capture must be the same bytes we modelled."""
    msgs = sample_messages(200)
    packets = list(packetize(msgs, msgs_per_packet=5))
    path = tmp_path / "t.pcap"
    write_pcap(str(path), [f for f, _, _ in packets])

    raw = path.read_bytes()
    off, recovered = 24, []
    while off < len(raw):
        _s, _us, caplen, _o = struct.unpack("<IIII", raw[off:off + 16])
        off += 16
        recovered.extend(depacketize(raw[off:off + caplen])[1])
        off += caplen
    assert recovered == msgs


def test_generated_messages_keep_spec_lengths_through_the_wire():
    """End to end: generator -> packets -> depacketize -> spec length table."""
    msgs = sample_messages(500, seed=4)
    for frame, _, _ in packetize(msgs, msgs_per_packet=6, random_boundaries=True):
        for m in depacketize(frame)[1]:
            assert len(m) == MSG_LENGTHS[chr(m[0])]


# --- the independent check, when Wireshark is available ---------------------


def _tshark() -> str | None:
    found = shutil.which("tshark")
    if found:
        return found
    for guess in (r"C:\Program Files\Wireshark\tshark.exe",
                  r"C:\Program Files (x86)\Wireshark\tshark.exe"):
        if Path(guess).exists():
            return guess
    return None


@pytest.mark.skipif(_tshark() is None,
                    reason="tshark not installed; install Wireshark to enable")
def test_tshark_agrees_with_our_model(tmp_path):
    """Run tools/check_pcap.py and require a clean bill of health.

    This is the check that catches a shared misunderstanding: our round-trip
    tests would happily pass if we had misread the MoldUDP64 header, because
    both directions would be wrong identically.  Wireshark's dissector was
    written independently from the same public spec.
    """
    src = tmp_path / "s.itch"
    write_messages(str(src), gen.generate(n_messages=1000, seed=6))
    r = subprocess.run(
        [sys.executable, str(ROOT / "tools" / "check_pcap.py"), str(src),
         "--random-boundaries", "--msgs-per-packet", "6"],
        capture_output=True, text=True,
    )
    print(r.stdout)
    print(r.stderr)
    assert r.returncode == 0, "tshark disagreed with model/packetize.py"
