"""Step 3: wrap ITCH messages in MoldUDP64 / UDP / IPv4 / Ethernet.

The sample file gives us bare messages.  On a real feed those arrive inside
network packets, and the first two RTL modules exist purely to undo the
wrapping this module applies.  So this file defines the input format for the
whole hardware pipeline, which makes it worth getting exactly right.

The layers, outermost first:

    Ethernet   14 bytes   dst MAC, src MAC, ethertype        (+4 if VLAN)
    IPv4       20 bytes   incl. header checksum
    UDP         8 bytes   checksum optional over IPv4, sent as 0 here
    MoldUDP64  20 bytes   session(10) sequence(8) msg count(2)
    payload               [2-byte length][message] x msg count

MoldUDP64 is the interesting layer.  Two things about it drive the design:

  * It packs *several* messages into one packet, each with its own 2-byte
    big-endian length prefix - the same framing as the BinaryFILE on disk.
    Messages are NOT aligned to anything, so with a 64-bit datapath a message
    can start at any byte offset in a beat and can straddle beats.  That is the
    entire difficulty of the step 5 framer, and `--random-boundaries` below is
    how we deliberately provoke it.
  * The sequence number counts *messages*, not packets, and it names the first
    message in the packet.  So the receiver detects loss by checking that
    sequence + count of the previous packet equals the sequence of the next.
    The step 4 parser passes this out as sideband data for exactly that reason.

Output formats:
  --pcap   a real capture file, openable in Wireshark (see tools/README.md)
  --beats  64-bit AXI-Stream beats as text: tdata, tkeep, tlast per line,
           which is what the cocotb testbenches will drive into the RTL

Usage:
    python model/packetize.py data/synth.itch --pcap data/synth.pcap
    python model/packetize.py data/synth.itch --beats data/synth.beats \
        --msgs-per-packet 8 --random-boundaries --vlan 100
"""

from __future__ import annotations

import argparse
import random
import struct
from typing import Iterable, Iterator

from itch import read_messages

# ---------------------------------------------------------------------------
# Defaults.  The addresses are in documentation/private ranges on purpose: the
# real Nasdaq multicast groups are not ours to bake into a public repo.
# ---------------------------------------------------------------------------
DST_MAC = bytes.fromhex("01005e010101")     # IPv4 multicast MAC for 233.x
SRC_MAC = bytes.fromhex("020000000001")     # locally administered
SRC_IP = "10.0.0.1"
DST_IP = "233.54.12.1"                      # multicast, matching DST_MAC shape
SRC_PORT = 26400
DST_PORT = 26477
SESSION = b"ITCHFPGA01"                     # MoldUDP64 session id, exactly 10 B

MOLD_HEADER_LEN = 20
ETH_MIN_PAYLOAD = 46                        # 60-byte min frame minus 14 header


def ipv4_checksum(header: bytes) -> int:
    """The standard 16-bit one's-complement checksum over the IPv4 header.

    Worth reading once, because it is the same algorithm the RTL would need if
    it ever had to *validate* checksums.  (A feed handler usually does not: the
    switch already dropped corrupt frames, and there is no time to buffer a
    whole packet to check it before processing.)
    """
    if len(header) % 2:
        header += b"\x00"
    total = 0
    for i in range(0, len(header), 2):
        total += (header[i] << 8) | header[i + 1]
    # Fold the carries back in, then invert.
    while total >> 16:
        total = (total & 0xFFFF) + (total >> 16)
    return (~total) & 0xFFFF


def mold_packet(session: bytes, sequence: int, messages: list[bytes]) -> bytes:
    """One MoldUDP64 downstream packet: 20-byte header + length-prefixed msgs."""
    assert len(session) == 10, "MoldUDP64 session id is exactly 10 bytes"
    body = b"".join(struct.pack(">H", len(m)) + m for m in messages)
    return session + struct.pack(">QH", sequence, len(messages)) + body


def udp_datagram(payload: bytes, src_port: int, dst_port: int) -> bytes:
    # Checksum 0 means "not computed", which IPv4 permits for UDP.  Real feeds
    # usually do send one; Wireshark will flag it as unverified either way.
    return struct.pack(">HHHH", src_port, dst_port, 8 + len(payload), 0) + payload


def ipv4_packet(payload: bytes, src_ip: str, dst_ip: str, ident: int = 0) -> bytes:
    src = bytes(int(x) for x in src_ip.split("."))
    dst = bytes(int(x) for x in dst_ip.split("."))
    header = (
        bytes([0x45, 0x00])                 # version 4, header length 5 words
        + struct.pack(">H", 20 + len(payload))
        + struct.pack(">H", ident)
        + struct.pack(">H", 0x0000)         # flags / fragment offset: none
        + bytes([16, 17])                   # TTL 16, protocol 17 = UDP
        + b"\x00\x00"                       # checksum placeholder
        + src
        + dst
    )
    csum = ipv4_checksum(header)
    header = header[:10] + struct.pack(">H", csum) + header[12:]
    return header + payload


def eth_frame(payload: bytes, vlan: int | None = None) -> bytes:
    """Ethernet II frame.  A VLAN tag adds 4 bytes and shifts everything after
    it by 4 - which is precisely why the step 4 parser must handle both: a
    hard-coded header length silently misparses every field downstream."""
    if vlan is None:
        head = DST_MAC + SRC_MAC + b"\x08\x00"                  # ethertype IPv4
    else:
        head = (DST_MAC + SRC_MAC + b"\x81\x00"                 # 802.1Q TPID
                + struct.pack(">H", vlan & 0x0FFF) + b"\x08\x00")
    frame = head + payload
    if len(frame) < 60:
        frame += b"\x00" * (60 - len(frame))     # pad to the 60-byte minimum
    return frame


def packetize(
    messages: Iterable[bytes],
    msgs_per_packet: int = 8,
    random_boundaries: bool = False,
    seed: int = 0,
    vlan: int | None = None,
    session: bytes = SESSION,
    start_sequence: int = 1,
) -> Iterator[tuple[bytes, int, list[bytes]]]:
    """Yield (ethernet frame, sequence number, messages in that packet).

    random_boundaries varies the message count per packet, which varies where
    each message lands inside a 64-bit beat.  Over a few thousand packets that
    covers every byte offset, and is the cheapest way to stress the step 5
    framer without writing a single directed test.
    """
    rng = random.Random(seed)
    seq = start_sequence
    batch: list[bytes] = []
    target = msgs_per_packet

    def flush():
        nonlocal batch, seq, target
        if not batch:
            return None
        payload = mold_packet(session, seq, batch)
        frame = eth_frame(ipv4_packet(udp_datagram(payload, SRC_PORT, DST_PORT),
                                      SRC_IP, DST_IP, ident=seq & 0xFFFF), vlan)
        out = (frame, seq, batch)
        # MoldUDP64 sequence numbers count messages, not packets.
        seq += len(batch)
        batch = []
        target = rng.randint(1, msgs_per_packet) if random_boundaries else msgs_per_packet
        return out

    for m in messages:
        batch.append(m)
        if len(batch) >= target:
            packet = flush()
            if packet:
                yield packet
    packet = flush()
    if packet:
        yield packet


# ---------------------------------------------------------------------------
# Depacketizer - the software model of RTL steps 4 and 5 combined.
#
# Keeping this next to the packetizer means the round-trip test ("packetize,
# depacketize, get the original messages back") lives in one place, and the
# same function can later parse whatever the RTL emits.
# ---------------------------------------------------------------------------


def depacketize(frame: bytes) -> tuple[int, list[bytes]]:
    """Undo eth/ip/udp/mold and return (sequence number, messages).

    Deliberately written the way the hardware has to think about it: walk
    forward by header lengths read from the packet itself, never assume.
    """
    off = 12
    ethertype = int.from_bytes(frame[off:off + 2], "big")
    off += 2
    if ethertype == 0x8100:                 # 802.1Q VLAN tag: skip 2 more
        off += 2
        ethertype = int.from_bytes(frame[off:off + 2], "big")
        off += 2
    if ethertype != 0x0800:
        raise ValueError(f"not IPv4: ethertype 0x{ethertype:04x}")

    ihl = (frame[off] & 0x0F) * 4           # IPv4 header length is variable
    total_len = int.from_bytes(frame[off + 2:off + 4], "big")
    proto = frame[off + 9]
    if proto != 17:
        raise ValueError(f"not UDP: protocol {proto}")
    ip_end = off + total_len                # ignores the Ethernet padding
    off += ihl

    udp_len = int.from_bytes(frame[off + 4:off + 6], "big")
    off += 8
    payload = frame[off:min(off + udp_len - 8, ip_end)]

    session = payload[:10]
    sequence, count = struct.unpack(">QH", payload[10:20])
    del session                             # unused here, but it is in the spec

    messages = []
    p = MOLD_HEADER_LEN
    for _ in range(count):
        (length,) = struct.unpack(">H", payload[p:p + 2])
        p += 2
        messages.append(payload[p:p + length])
        p += length
    return sequence, messages


# ---------------------------------------------------------------------------
# Output: AXI-Stream beats, and pcap
# ---------------------------------------------------------------------------


def to_beats(frame: bytes, width: int = 8) -> Iterator[tuple[int, int, bool]]:
    """Chop a frame into (tdata, tkeep, tlast) AXI-Stream beats.

    Byte 0 of the frame goes in the LOWEST byte lane (tdata[7:0]), which is the
    convention cocotbext-axi uses and the one the RTL should follow.  tkeep
    marks which lanes hold real bytes - only the final beat can be partial, so
    tkeep is all-ones until then.
    """
    for i in range(0, len(frame), width):
        chunk = frame[i:i + width]
        tdata = int.from_bytes(chunk.ljust(width, b"\x00"), "little")
        tkeep = (1 << len(chunk)) - 1
        yield tdata, tkeep, i + width >= len(frame)


def write_beats(path: str, frames: Iterable[bytes], width: int = 8) -> int:
    """Text beats, one per line: hex tdata, hex tkeep, tlast.

    A text file (rather than a binary one) so a failing cocotb test can be
    diffed by eye against a waveform.
    """
    n = 0
    with open(path, "w", newline="\n") as f:
        f.write(f"# tdata[{width * 8 - 1}:0] tkeep[{width - 1}:0] tlast\n")
        for frame in frames:
            for tdata, tkeep, tlast in to_beats(frame, width):
                f.write(f"{tdata:0{width * 2}x} {tkeep:02x} {int(tlast)}\n")
                n += 1
    return n


PCAP_MAGIC = 0xA1B2C3D4
LINKTYPE_ETHERNET = 1


def write_pcap(path: str, frames: Iterable[bytes], ts_ns: int = 0,
               ts_step_ns: int = 1000) -> int:
    """Write a classic libpcap file so Wireshark can open the result.

    The format is tiny: a 24-byte global header, then per packet a 16-byte
    record header (seconds, microseconds, captured length, original length)
    followed by the raw bytes.  Microsecond resolution is used here because it
    is the universally supported flavour; nanosecond pcap exists but adds a
    second magic number for no benefit to us.
    """
    n = 0
    with open(path, "wb") as f:
        f.write(struct.pack("<IHHiIII", PCAP_MAGIC, 2, 4, 0, 0, 65535,
                            LINKTYPE_ETHERNET))
        t = ts_ns
        for frame in frames:
            f.write(struct.pack("<IIII", t // 1_000_000_000,
                                (t % 1_000_000_000) // 1000,
                                len(frame), len(frame)))
            f.write(frame)
            t += ts_step_ns
            n += 1
    return n


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path", help="input ITCH BinaryFILE")
    p.add_argument("-n", "--limit", type=int, default=None,
                   help="only use the first N messages")
    p.add_argument("--pcap", help="write a Wireshark-openable capture here")
    p.add_argument("--beats", help="write AXI-Stream beats as text here")
    p.add_argument("--msgs-per-packet", type=int, default=8)
    p.add_argument("--random-boundaries", action="store_true",
                   help="vary messages per packet, to straddle beat boundaries")
    p.add_argument("--vlan", type=int, default=None, help="add an 802.1Q tag")
    p.add_argument("--seed", type=int, default=0)
    p.add_argument("--width", type=int, default=8, help="datapath bytes per beat")
    p.add_argument("--check", action="store_true",
                   help="verify the packetize/depacketize round trip")
    a = p.parse_args()

    msgs = list(read_messages(a.path, a.limit))
    packets = list(packetize(msgs, a.msgs_per_packet, a.random_boundaries,
                             a.seed, a.vlan))
    frames = [f for f, _, _ in packets]

    total_bytes = sum(len(f) for f in frames)
    payload_bytes = sum(len(m) + 2 for m in msgs)
    print(f"messages        : {len(msgs):,}")
    print(f"packets         : {len(frames):,} "
          f"({len(msgs) / len(frames):.1f} messages/packet)")
    print(f"frame bytes     : {total_bytes:,}")
    print(f"header overhead : {1 - payload_bytes / total_bytes:.1%} of the wire")

    if a.check:
        ok = True
        recovered: list[bytes] = []
        expected_seq = 1
        for frame, seq, batch in packets:
            got_seq, got_msgs = depacketize(frame)
            if got_seq != seq or got_msgs != batch:
                print(f"!! round trip failed at sequence {seq}")
                ok = False
                break
            if got_seq != expected_seq:
                print(f"!! sequence gap: expected {expected_seq}, got {got_seq}")
                ok = False
            expected_seq = got_seq + len(got_msgs)
            recovered.extend(got_msgs)
        if ok and recovered == msgs:
            print(f"round trip      : OK, {len(recovered):,} messages recovered "
                  f"byte-for-byte, sequence numbers contiguous")
        else:
            raise SystemExit("round trip FAILED")

    if a.pcap:
        n = write_pcap(a.pcap, frames)
        print(f"wrote {n:,} packets to {a.pcap}  (open with Wireshark)")
    if a.beats:
        n = write_beats(a.beats, frames, a.width)
        print(f"wrote {n:,} x {a.width * 8}-bit beats to {a.beats}")


if __name__ == "__main__":
    main()
