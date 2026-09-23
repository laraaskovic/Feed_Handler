"""cocotb tests for rtl/msg_frame.sv - the 8-byte/cycle message framer.

Oracle: itch.read_messages(), the six-line Python framer. Every message the
RTL emits must match, byte for byte, in order, with the right length and the
right MoldUDP64 sequence number.

The interesting failures in this module are all alignment failures, so the
tests are built to force messages to start at every byte offset within a beat
and to span every plausible number of beats.
"""

from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge

import gen                                              # noqa: E402
from frame_stim import (                                # noqa: E402
    MAX_MSG,
    bad_packets,
    mold_body,
    msgs_of_type,
)
from itch import MSG_LENGTHS                            # noqa: E402
from packetize import to_beats                          # noqa: E402

CLK_NS = 6.4          # 156.25 MHz, the 10 GbE datapath clock


class MsgSink:
    """Collects (sequence, message bytes) from the DUT's message port."""

    def __init__(self, dut):
        self.dut = dut
        self.msgs: list[tuple[int, bytes]] = []

    async def run(self):
        while True:
            # Falling edge: registered outputs have settled and are stable.
            await FallingEdge(self.dut.clk)
            if not int(self.dut.m_valid.value):
                continue
            n = int(self.dut.m_len.value)
            raw = int(self.dut.m_msg.value).to_bytes(MAX_MSG, "little")
            self.msgs.append((int(self.dut.m_seq.value), raw[:n]))


async def setup(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())
    dut.rst.value = 1
    dut.s_tdata.value = 0
    dut.s_tkeep.value = 0
    dut.s_tvalid.value = 0
    dut.s_tlast.value = 0
    dut.s_sequence.value = 0
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    sink = MsgSink(dut)
    cocotb.start_soon(sink.run())
    return sink


async def drive_payload(dut, payload: bytes, sequence: int, gap: int = 0):
    """Feed one packet's message block in as beats, exactly as hdr_parse would."""
    dut.s_sequence.value = sequence
    for tdata, tkeep, tlast in to_beats(payload, 8):
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


async def run_packets(dut, packets, gap: int = 0, drain: int = 8):
    """packets is a list of (messages, sequence)."""
    sink = await setup(dut)
    for messages, seq in packets:
        await drive_payload(dut, mold_body(messages), seq, gap)
    for _ in range(drain):
        await RisingEdge(dut.clk)
    return sink


def check(packets, sink, dut, expect_errs: int = 0):
    """Every message, in order, with its sequence number."""
    expected: list[tuple[int, bytes]] = []
    for messages, seq in packets:
        for i, m in enumerate(messages):
            expected.append((seq + i, m))

    got = sink.msgs
    assert len(got) == len(expected), (
        f"message count: RTL emitted {len(got)}, oracle expected {len(expected)}"
    )
    for i, ((eseq, emsg), (gseq, gmsg)) in enumerate(zip(expected, got)):
        assert gmsg == emsg, (
            f"message {i} (type {chr(emsg[0])}, {len(emsg)} B) differs\n"
            f"  oracle: {emsg.hex()}\n"
            f"  rtl   : {gmsg.hex()}"
        )
        assert gseq == eseq, f"message {i}: sequence {gseq} != {eseq}"

    assert int(dut.stat_messages.value) == len(expected)
    assert int(dut.stat_frame_err.value) == expect_errs, (
        f"stat_frame_err = {int(dut.stat_frame_err.value)}, "
        f"expected {expect_errs}"
    )


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_single_message(dut):
    """One message in one packet - the degenerate case."""
    msgs = msgs_of_type("D", 1)
    packets = [(msgs, 1)]
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_uniform_add_orders(dut):
    """36-byte Add Orders: 38 bytes with prefix, so offsets walk 0,6,4,2,...

    This is the canonical alignment stress. Four consecutive messages start at
    four different byte offsets, and the cycle repeats every four messages.
    """
    msgs = msgs_of_type("A", 40)
    packets = [(msgs, 1)]
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_shortest_messages(dut):
    """19-byte Deletes: 21 bytes with prefix, the minimum.

    This is the case the "at most one completion per beat" argument depends
    on. If that argument were wrong, this test is where the backlog would
    overflow and messages would be lost.
    """
    msgs = msgs_of_type("D", 60)
    packets = [(msgs, 1)]
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_mixed_lengths(dut):
    """Real traffic: all seven types interleaved, every length 19..40."""
    msgs = list(gen.generate(n_messages=300, seed=3))
    packets = [(msgs[i:i + 12], 1 + i) for i in range(0, 240, 12)]
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_every_start_offset(dut):
    """Force a message to begin at each of the eight byte offsets in a beat.

    Padding the packet with a leading Delete of a chosen length shifts where
    the following message starts. Doing this for all eight cases proves the
    barrel shifter is right in every position rather than just the common ones.
    """
    deletes = msgs_of_type("D", 8)     # 19 bytes -> 21 with prefix
    adds = msgs_of_type("A", 8)        # 36 bytes -> 38 with prefix

    packets = []
    for k in range(8):
        # k leading Deletes put the next message at (21*k) mod 8 - which runs
        # through 0,5,2,7,4,1,6,3: every offset exactly once.
        packets.append((deletes[:k] + [adds[k]], 100 + k * 16))

    sink = await run_packets(dut, packets)
    check(packets, sink, dut)

    offsets = sorted({(21 * k) % 8 for k in range(8)})
    assert offsets == list(range(8)), f"only covered offsets {offsets}"


@cocotb.test()
async def test_many_packets_back_to_back(dut):
    """No idle cycles between packets - the line-rate worst case."""
    msgs = list(gen.generate(n_messages=600, seed=5))
    packets = [(msgs[i:i + 8], 1 + i) for i in range(0, 560, 8)]
    sink = await run_packets(dut, packets, gap=0)
    check(packets, sink, dut)


@cocotb.test()
async def test_packets_with_gaps(dut):
    """Idle cycles between packets must not disturb held state."""
    msgs = list(gen.generate(n_messages=200, seed=6))
    packets = [(msgs[i:i + 7], 1 + i) for i in range(0, 168, 7)]
    sink = await run_packets(dut, packets, gap=5)
    check(packets, sink, dut)


@cocotb.test()
async def test_large_packet(dut):
    """50 messages in one packet - a long run with no resynchronisation."""
    msgs = list(gen.generate(n_messages=50, seed=7))
    packets = [(msgs, 42)]
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_sequence_numbers_count_messages(dut):
    """MoldUDP64 numbers messages, not packets.

    Getting this wrong gives a gap detector that fires constantly or never, so
    it is worth an explicit test rather than relying on the bulk comparisons.
    """
    msgs = list(gen.generate(n_messages=100, seed=8))
    packets = []
    seq = 1
    for i in range(0, 90, 9):
        chunk = msgs[i:i + 9]
        packets.append((chunk, seq))
        seq += len(chunk)          # advance by MESSAGES, not by one
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)


@cocotb.test()
async def test_all_message_types_appear(dut):
    """Coverage check: the stimulus really does exercise all seven types.

    A passing test over stimulus that never contained a Replace would be
    quietly worthless, so the test asserts its own coverage.
    """
    msgs = list(gen.generate(n_messages=1000, seed=9))
    packets = [(msgs[i:i + 10], 1 + i) for i in range(0, 1000, 10)]
    sink = await run_packets(dut, packets)
    check(packets, sink, dut)

    seen = {chr(m[0]) for _s, m in sink.msgs}
    assert set("AFECXDU") <= seen, f"types not exercised: {set('AFECXDU') - seen}"
    lengths = {len(m) for _s, m in sink.msgs}
    assert lengths <= set(MSG_LENGTHS.values())


@cocotb.test()
async def test_malformed_packets_count_once_and_recover(dut):
    """Broken framing: count ONE error per bad packet, then recover.

    Four kinds of damage (see frame_stim.bad_packets), each followed straight
    away by a clean packet. The framer must emit whatever preceded the damage,
    discard the rest of that packet, and frame the next packet perfectly.
    Before the desync fix a bad length was counted on every beat and let the
    holding buffer grow without bound, so this test pins both behaviours.
    """
    sink = await setup(dut)
    clean = msgs_of_type("A", 3, seed=30)
    expected: list[tuple[int, bytes]] = []
    errs = 0
    seq = 1
    for payload, survivors, n_err in bad_packets():
        # The damaged packet: only the messages before the damage survive.
        await drive_payload(dut, payload, seq)
        expected += [(seq + i, m) for i, m in enumerate(survivors)]
        errs += n_err
        seq += 100
        # A clean packet immediately after proves the resynchronisation.
        await drive_payload(dut, mold_body(clean), seq)
        expected += [(seq + i, m) for i, m in enumerate(clean)]
        seq += 100
    for _ in range(8):
        await RisingEdge(dut.clk)

    assert sink.msgs == expected, "wrong messages around damaged packets"
    assert int(dut.stat_frame_err.value) == errs, (
        f"stat_frame_err = {int(dut.stat_frame_err.value)}, expected {errs}"
    )
