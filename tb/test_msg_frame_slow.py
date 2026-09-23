"""cocotb tests for rtl/msg_frame_slow.sv - the 1-byte/cycle reference framer.

This module is not a deliverable; it is the obviously-correct version the fast
framer is judged against when the two disagree. So its tests are the same
questions asked of msg_frame.sv, built from the same stimulus (frame_stim.py)
and judged by the same oracle, itch.read_messages()'s length-prefix walk.

If both benches pass, the two RTL framers agree with each other on every
case here, because they agree with the same expected output.
"""

from __future__ import annotations

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge

import gen                                              # noqa: E402
from frame_stim import (                                # noqa: E402
    MAX_MSG,
    bad_packets,
    expected_messages,
    mold_body,
    msgs_of_type,
)

CLK_NS = 6.4          # same clock as everything else, though 8x too slow


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
            # Message byte i sits in bits [8i+7:8i], so little-endian unpack.
            n = int(self.dut.m_len.value)
            raw = int(self.dut.m_msg.value).to_bytes(MAX_MSG, "little")
            self.msgs.append((int(self.dut.m_seq.value), raw[:n]))


async def setup(dut):
    """Start the clock, hold reset, return a running sink."""
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())
    dut.rst.value = 1
    dut.s_byte.value = 0
    dut.s_valid.value = 0
    dut.s_last.value = 0
    dut.s_sequence.value = 0
    # Five cycles of reset is plenty; the module has no startup sweep.
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    sink = MsgSink(dut)
    cocotb.start_soon(sink.run())
    return sink


async def drive_payload(dut, payload: bytes, sequence: int, gap: int = 0):
    """Feed one packet's message block in, one byte per cycle."""
    dut.s_sequence.value = sequence
    for i, b in enumerate(payload):
        await RisingEdge(dut.clk)
        dut.s_byte.value = b
        dut.s_valid.value = 1
        # s_last marks the packet's final byte, as tlast marks its final beat.
        dut.s_last.value = int(i == len(payload) - 1)
    await RisingEdge(dut.clk)
    dut.s_valid.value = 0
    dut.s_last.value = 0
    for _ in range(gap):
        await RisingEdge(dut.clk)


async def run_and_check(dut, packets, gap: int = 0):
    """Drive (messages, seq) packets and compare everything with the oracle."""
    sink = await setup(dut)
    for messages, seq in packets:
        await drive_payload(dut, mold_body(messages), seq, gap)
    for _ in range(8):
        await RisingEdge(dut.clk)

    expected = expected_messages(packets)
    # Count first: a length mismatch makes the per-message diff misleading.
    assert len(sink.msgs) == len(expected), (
        f"message count: RTL {len(sink.msgs)}, oracle {len(expected)}"
    )
    for i, ((eseq, emsg), (gseq, gmsg)) in enumerate(zip(expected, sink.msgs)):
        assert gmsg == emsg, (
            f"message {i} differs\n  oracle: {emsg.hex()}\n  rtl   : {gmsg.hex()}"
        )
        assert gseq == eseq, f"message {i}: sequence {gseq} != {eseq}"
    # Status counters are checked too, exactly as for the fast framer.
    assert int(dut.stat_messages.value) == len(expected)
    assert int(dut.stat_frame_err.value) == 0


# ---------------------------------------------------------------------------
# Tests - the same cases the fast framer faces
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_single_message(dut):
    """One Delete in one packet - the degenerate case."""
    await run_and_check(dut, [(msgs_of_type("D", 1), 1)])


@cocotb.test()
async def test_shortest_and_longest(dut):
    """19-byte Deletes and 40-byte MPID Adds, mixed in one packet."""
    msgs = msgs_of_type("D", 5, seed=1) + msgs_of_type("F", 5, seed=2)
    await run_and_check(dut, [(msgs, 7)])


@cocotb.test()
async def test_mixed_stream(dut):
    """All seven book types, packed 12 per packet, packets back to back."""
    msgs = list(gen.generate(n_messages=150, seed=3))
    packets = [(msgs[i:i + 12], 1 + i) for i in range(0, 144, 12)]
    await run_and_check(dut, packets)


@cocotb.test()
async def test_packets_with_gaps(dut):
    """Idle cycles between packets must not disturb anything."""
    msgs = list(gen.generate(n_messages=60, seed=4))
    packets = [(msgs[i:i + 5], 1 + i) for i in range(0, 60, 5)]
    await run_and_check(dut, packets, gap=3)


@cocotb.test()
async def test_malformed_packets_count_once_and_recover(dut):
    """Identical expectations to the fast framer's version of this test.

    This is where the two framers most need to agree: on what counts as ONE
    framing error, and on which messages survive a damaged packet.
    """
    sink = await setup(dut)
    clean = msgs_of_type("A", 3, seed=30)
    expected: list[tuple[int, bytes]] = []
    errs = 0
    seq = 1
    for payload, survivors, n_err in bad_packets():
        # Damaged packet: only what came before the damage survives.
        await drive_payload(dut, payload, seq)
        expected += [(seq + i, m) for i, m in enumerate(survivors)]
        errs += n_err
        seq += 100
        # Then a clean packet, which must frame perfectly.
        await drive_payload(dut, mold_body(clean), seq)
        expected += [(seq + i, m) for i, m in enumerate(clean)]
        seq += 100
    for _ in range(8):
        await RisingEdge(dut.clk)

    assert sink.msgs == expected, "wrong messages around damaged packets"
    assert int(dut.stat_frame_err.value) == errs, (
        f"stat_frame_err = {int(dut.stat_frame_err.value)}, expected {errs}"
    )
