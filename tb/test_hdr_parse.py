"""cocotb tests for rtl/hdr_parse.sv (step 4).

The whole point of this file: **the Python model is the oracle.**  Nothing here
hard-codes an expected byte.  Frames are built by model/packetize.py, fed into
the RTL, and the output is compared against what model/packetize.depacketize()
says should come out.  When the two disagree, one of them is wrong, and the
test prints enough to tell which.

This is why the software half of the project does not get thrown away when the
RTL starts.  It gets imported.

Run with:
    wsl .venv/bin/python tb/run.py
"""

from __future__ import annotations

import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge

import gen                                      # noqa: E402
from packetize import depacketize, packetize, to_beats   # noqa: E402

CLK_NS = 6.4          # 156.25 MHz, the 10 GbE datapath clock


def mold_body(messages: list[bytes]) -> bytes:
    """The MoldUDP64 message block: each message behind its 2-byte length.

    This is exactly what hdr_parse should emit - the packet with all four
    header layers peeled off and nothing else changed.
    """
    return b"".join(struct.pack(">H", len(m)) + m for m in messages)


class Sink:
    """Collects output packets from the DUT's master port.

    Sampling happens on the falling edge, which is the simple and unambiguous
    place to read registered outputs: they settled just after the rising edge
    and are stable for the rest of the cycle.
    """

    def __init__(self, dut):
        self.dut = dut
        self.packets: list[tuple[int, int, bytes]] = []   # (seq, count, payload)
        self._cur = bytearray()

    async def run(self):
        while True:
            await FallingEdge(self.dut.clk)
            if not int(self.dut.m_tvalid.value):
                continue
            data = int(self.dut.m_tdata.value)
            keep = int(self.dut.m_tkeep.value)
            # tkeep marks which byte lanes carry real data.  Only the final
            # beat is ever partial, so popcount is enough - no need to handle
            # holes in the middle.
            n = bin(keep).count("1")
            self._cur += data.to_bytes(8, "little")[:n]
            if int(self.dut.m_tlast.value):
                self.packets.append((
                    int(self.dut.m_sequence.value),
                    int(self.dut.m_count.value),
                    bytes(self._cur),
                ))
                self._cur = bytearray()


async def setup(dut):
    """Start the clock, hold reset, release it, return a running sink."""
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())

    dut.rst.value = 1
    dut.s_tdata.value = 0
    dut.s_tkeep.value = 0
    dut.s_tvalid.value = 0
    dut.s_tlast.value = 0
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)

    sink = Sink(dut)
    cocotb.start_soon(sink.run())
    return sink


async def drive_frame(dut, frame: bytes, gap: int = 1):
    """Push one Ethernet frame in as 64-bit beats, then idle for `gap` cycles.

    Note there is no ready signal to check.  That is the design: the module
    must swallow a beat every single cycle, so driving it is unconditional.
    """
    for tdata, tkeep, tlast in to_beats(frame, 8):
        await RisingEdge(dut.clk)
        dut.s_tdata.value = tdata
        dut.s_tkeep.value = tkeep
        dut.s_tvalid.value = 1
        dut.s_tlast.value = 1 if tlast else 0

    await RisingEdge(dut.clk)
    dut.s_tvalid.value = 0
    dut.s_tlast.value = 0
    for _ in range(gap):
        await RisingEdge(dut.clk)


async def run_frames(dut, packets, gap: int = 1, drain: int = 12):
    """Drive a list of (frame, seq, messages) and return the collected output."""
    sink = await setup(dut)
    for frame, _seq, _msgs in packets:
        await drive_frame(dut, frame, gap)
    for _ in range(drain):
        await RisingEdge(dut.clk)
    return sink


def check(packets, sink, dut):
    """Compare the DUT's output against the Python model, packet by packet."""
    expected = [(seq, len(msgs), mold_body(msgs)) for _f, seq, msgs in packets]
    got = sink.packets

    assert len(got) == len(expected), (
        f"packet count: RTL emitted {len(got)}, model expected {len(expected)}"
    )

    for i, ((eseq, ecnt, epay), (gseq, gcnt, gpay)) in enumerate(
            zip(expected, got)):
        assert gseq == eseq, f"packet {i}: sequence {gseq} != {eseq}"
        assert gcnt == ecnt, f"packet {i}: count {gcnt} != {ecnt}"
        assert len(gpay) == len(epay), (
            f"packet {i}: payload {len(gpay)} bytes, expected {len(epay)}"
        )
        if gpay != epay:
            # Point at the first differing byte - far more useful than a dump.
            off = next(j for j in range(len(epay)) if epay[j] != gpay[j])
            raise AssertionError(
                f"packet {i}: payload differs at byte {off}\n"
                f"  model: {epay[max(0,off-4):off+8].hex()}\n"
                f"  rtl  : {gpay[max(0,off-4):off+8].hex()}"
            )

    # The status counters are the hardware equivalent of the model's invariant
    # counters, so they get checked too rather than left to rot.
    assert int(dut.stat_packets.value) == len(expected), (
        f"stat_packets = {int(dut.stat_packets.value)}, expected {len(expected)}"
    )
    assert int(dut.stat_dropped.value) == 0, (
        f"stat_dropped = {int(dut.stat_dropped.value)}, expected 0"
    )


def build_packets(n_messages=200, seed=1, mpp=8, vlan=None, random_bounds=False):
    """Make frames with the same packetizer the RTL will see in production."""
    msgs = list(gen.generate(n_messages=n_messages, seed=seed))
    return list(packetize(msgs, msgs_per_packet=mpp,
                          random_boundaries=random_bounds, seed=seed, vlan=vlan))


# ---------------------------------------------------------------------------
# Tests.  Each one targets a specific way the header walk can go wrong.
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_single_packet(dut):
    """The simplest case: one untagged frame, eight messages."""
    packets = build_packets(n_messages=8, mpp=8)[:1]
    sink = await run_frames(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_many_packets(dut):
    """A stream of frames, to prove state resets cleanly between them.

    A parser that works once and then drifts is the classic failure here,
    usually because a counter or a latched length was not cleared at tlast.
    """
    packets = build_packets(n_messages=400, mpp=8)
    sink = await run_frames(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_vlan_tagged(dut):
    """A VLAN tag pushes every later header 4 bytes along.

    This is the test that catches a hard-coded 62-byte header: without VLAN the
    payload starts at byte 62 (offset 6 of beat 7), with it at byte 66 (offset
    2 of beat 8).  Both the shift amount and the starting beat change.
    """
    packets = build_packets(n_messages=200, mpp=8, vlan=100)
    sink = await run_frames(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_one_message_per_packet(dut):
    """Smallest realistic payload: a single 19-40 byte message per frame.

    Short frames get padded to the 60-byte Ethernet minimum, so the frame is
    longer than the IP total length claims. A parser that trusts tkeep or the
    frame length instead of the IPv4 header emits the padding as data.
    """
    packets = build_packets(n_messages=40, mpp=1)
    sink = await run_frames(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_large_packets(dut):
    """50 messages per frame - long payloads, many output beats."""
    packets = build_packets(n_messages=400, mpp=50)
    sink = await run_frames(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_random_boundaries(dut):
    """Varying messages per packet, so payload lengths hit every mod-8 case.

    The last output beat is the partial one, and its tkeep depends on
    payload_len mod 8.  Random packing exercises all eight possibilities.
    """
    packets = build_packets(n_messages=600, mpp=12, random_bounds=True, seed=5)
    sink = await run_frames(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_back_to_back_no_gap(dut):
    """Frames with zero idle cycles between them - the line-rate worst case.

    With no backpressure there is nowhere to hide: if the module needs even one
    recovery cycle at a frame boundary, this test loses data.
    """
    packets = build_packets(n_messages=300, mpp=6)
    sink = await run_frames(dut, packets, gap=0)
    check(packets, sink, dut)


@cocotb.test()
async def test_vlan_and_random_together(dut):
    """Both complications at once, which is how real bugs usually show up."""
    packets = build_packets(n_messages=600, mpp=9, vlan=4094,
                            random_bounds=True, seed=7)
    sink = await run_frames(dut, packets, gap=0)
    check(packets, sink, dut)


@cocotb.test()
async def test_non_udp_frame_is_dropped(dut):
    """A frame that is not IPv4/UDP must be counted and discarded, not parsed.

    Hardware has no exceptions, so "reject" means "increment a counter and
    emit nothing" - the status register standing in for a raised error.
    """
    packets = build_packets(n_messages=16, mpp=8)
    sink = await setup(dut)

    # Corrupt the IPv4 protocol byte (offset 14 + 9) to TCP.
    good = packets[0][0]
    bad = bytearray(packets[1][0])
    bad[14 + 9] = 6
    await drive_frame(dut, good)
    await drive_frame(dut, bytes(bad))
    for _ in range(12):
        await RisingEdge(dut.clk)

    assert len(sink.packets) == 1, (
        f"expected only the good frame through, got {len(sink.packets)} packets"
    )
    assert int(dut.stat_packets.value) == 1
    assert int(dut.stat_dropped.value) == 1


@cocotb.test()
async def test_model_agreement_is_bidirectional(dut):
    """Belt and braces: the model must also be able to re-parse the frames.

    If depacketize() and hdr_parse.sv agree with each other, the remaining risk
    is that our packetizer builds frames nobody else would recognise. That risk
    is covered separately by tools/check_pcap.py against Wireshark - this test
    just confirms the two halves of *our* model still line up.
    """
    packets = build_packets(n_messages=120, mpp=5)
    for frame, seq, msgs in packets:
        got_seq, got_msgs = depacketize(frame)
        assert got_seq == seq and got_msgs == msgs

    sink = await run_frames(dut, packets)
    check(packets, sink, dut)
