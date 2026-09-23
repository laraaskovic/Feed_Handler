"""cocotb tests for rtl/price_levels.sv - the tick ladder and the BBO.

Oracle: a tiny Python mirror of the same two dicts book.Book keeps, plus
max()/min() for the best price. Using max() as the reference is the point:
the RTL must produce the same answer the slow, obviously-correct method gives,
while doing it in fixed time.

The BBO is pipelined, so tests drive a batch of updates, let the pipeline
drain, and then compare the settled top of book. Where the transient matters -
a level emptying and refilling - the test steps one update at a time.
"""

from __future__ import annotations

import random
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge

CLK_NS = 6.4
BAND_TICKS = 4096
# Cycles for an update to reach the published BBO: read, apply, publish.
DRAIN = 6


class Ladder:
    """The oracle: exactly what book.Book does with its bids/asks dicts."""

    def __init__(self):
        self.bid: dict[int, int] = {}
        self.ask: dict[int, int] = {}

    def update(self, side: int, tick: int, add: bool, qty: int):
        d = self.bid if side else self.ask
        cur = d.get(tick, 0)
        new = cur + qty if add else max(0, cur - qty)
        if new:
            d[tick] = new
        else:
            d.pop(tick, None)

    def bbo(self):
        # max()/min() is the reference the priority encoder must match.
        b = max(self.bid) if self.bid else None
        a = min(self.ask) if self.ask else None
        return (b, self.bid.get(b, 0) if b is not None else 0,
                a, self.ask.get(a, 0) if a is not None else 0)


async def setup(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())
    dut.rst.value = 1
    dut.s_valid.value = 0
    dut.s_side.value = 0
    dut.s_tick.value = 0
    dut.s_add.value = 0
    dut.s_qty.value = 0
    dut.s_done.value = 0
    dut.s_seq.value = 0
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)


async def push(dut, side: int, tick: int, add: bool, qty: int,
               done: int = 0, seq: int = 0):
    """Present one level update for a single cycle."""
    await RisingEdge(dut.clk)
    dut.s_valid.value = 1
    dut.s_side.value = side
    dut.s_tick.value = tick
    dut.s_add.value = 1 if add else 0
    dut.s_qty.value = qty
    # The completion marker rides with the update, as the order table sends it.
    dut.s_done.value = done
    dut.s_seq.value = seq
    await RisingEdge(dut.clk)
    dut.s_valid.value = 0
    dut.s_done.value = 0


async def drain(dut, n: int = DRAIN):
    dut.s_valid.value = 0
    for _ in range(n):
        await RisingEdge(dut.clk)


async def read_bbo(dut):
    """Sample the published top of book on a falling edge."""
    await FallingEdge(dut.clk)
    b = int(dut.m_bid_tick.value) if int(dut.m_bid_valid.value) else None
    a = int(dut.m_ask_tick.value) if int(dut.m_ask_valid.value) else None
    return (b, int(dut.m_bid_qty.value) if b is not None else 0,
            a, int(dut.m_ask_qty.value) if a is not None else 0)


async def check_bbo(dut, ref: Ladder, note: str = ""):
    await drain(dut)
    got = await read_bbo(dut)
    want = ref.bbo()
    assert got == want, f"{note}: BBO {got} != oracle {want}"


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_empty_book_has_no_bbo(dut):
    """Before anything arrives, neither side is valid."""
    await setup(dut)
    await check_bbo(dut, Ladder(), "empty")


@cocotb.test()
async def test_single_level_each_side(dut):
    await setup(dut)
    ref = Ladder()
    for side, tick, qty in ((1, 100, 500), (0, 110, 300)):
        await push(dut, side, tick, True, qty)
        ref.update(side, tick, True, qty)
    await check_bbo(dut, ref, "one level per side")


@cocotb.test()
async def test_best_price_moves_with_new_levels(dut):
    """Adding a better price must move the BBO; a worse one must not."""
    await setup(dut)
    ref = Ladder()
    for side, tick, qty in ((1, 100, 100), (1, 90, 100), (1, 105, 100),
                            (0, 200, 100), (0, 210, 100), (0, 195, 100)):
        await push(dut, side, tick, True, qty)
        ref.update(side, tick, True, qty)
        await check_bbo(dut, ref, f"after add {side}@{tick}")


@cocotb.test()
async def test_level_empties_and_refills(dut):
    """The step 9 corner case, stepped one update at a time.

    When the top level empties, the best price must fall back to the next
    occupied rung. In software that is a cache invalidation; here the bitmap
    bit clears and the encoder's answer changes by itself.
    """
    await setup(dut)
    ref = Ladder()

    for tick in (100, 99, 98):
        await push(dut, 1, tick, True, 100)
        ref.update(1, tick, True, 100)
    await check_bbo(dut, ref, "three bid levels")

    # Empty the top: best bid must drop to 99.
    await push(dut, 1, 100, False, 100)
    ref.update(1, 100, False, 100)
    await check_bbo(dut, ref, "top emptied")

    # Refill higher: best bid must jump to 101.
    await push(dut, 1, 101, True, 250)
    ref.update(1, 101, True, 250)
    await check_bbo(dut, ref, "refilled higher")

    # Drain the side completely: no best bid at all.
    for tick in (101, 99, 98):
        await push(dut, 1, tick, False, 1000)
        ref.update(1, tick, False, 1000)
    await check_bbo(dut, ref, "bid side empty")
    assert int(dut.m_bid_valid.value) == 0


@cocotb.test()
async def test_partial_reduce_keeps_level(dut):
    """Taking some shares must shrink the level, not remove it."""
    await setup(dut)
    ref = Ladder()
    await push(dut, 1, 500, True, 1000)
    ref.update(1, 500, True, 1000)
    await push(dut, 1, 500, False, 400)
    ref.update(1, 500, False, 400)
    await check_bbo(dut, ref, "partial reduce")
    assert (await read_bbo(dut))[1] == 600


@cocotb.test()
async def test_back_to_back_same_tick_forwarding(dut):
    """Two updates to the same tick on consecutive cycles.

    This is the read-during-write path. The second update's RAM read is
    issued before the first update's write lands, so without forwarding it
    reads stale data and the level ends up wrong. A Replace that does not move
    price produces exactly this pattern, so it is a constant case, not a rare
    one.
    """
    await setup(dut)
    ref = Ladder()

    # No gap at all between the two updates.
    await RisingEdge(dut.clk)
    dut.s_valid.value = 1
    dut.s_side.value = 1
    dut.s_tick.value = 700
    dut.s_add.value = 1
    dut.s_qty.value = 300
    ref.update(1, 700, True, 300)
    await RisingEdge(dut.clk)
    dut.s_tick.value = 700
    dut.s_add.value = 1
    dut.s_qty.value = 200
    ref.update(1, 700, True, 200)
    await RisingEdge(dut.clk)
    dut.s_valid.value = 0

    await check_bbo(dut, ref, "back-to-back same tick")
    assert (await read_bbo(dut))[1] == 500, "forwarding lost an update"


@cocotb.test()
async def test_long_run_of_back_to_back_updates(dut):
    """Many consecutive same-tick updates, the hardest case for forwarding."""
    await setup(dut)
    ref = Ladder()
    await RisingEdge(dut.clk)
    dut.s_valid.value = 1
    dut.s_side.value = 1
    dut.s_tick.value = 1234
    dut.s_add.value = 1
    for _ in range(20):
        dut.s_qty.value = 10
        ref.update(1, 1234, True, 10)
        await RisingEdge(dut.clk)
    dut.s_valid.value = 0
    await check_bbo(dut, ref, "20 back-to-back adds")
    assert (await read_bbo(dut))[1] == 200


@cocotb.test()
async def test_band_edges(dut):
    """Tick 0 and tick 4095 must work like any other.

    The encoder's group selection is most likely to be wrong at the extremes,
    and those are real prices - the bottom and top of the configured band.
    """
    await setup(dut)
    ref = Ladder()
    for side, tick in ((1, 0), (1, BAND_TICKS - 1), (0, 0), (0, BAND_TICKS - 1)):
        await push(dut, side, tick, True, 100)
        ref.update(side, tick, True, 100)
    await check_bbo(dut, ref, "band edges")


@cocotb.test()
async def test_underflow_is_counted_and_saturates(dut):
    """Removing more than a level holds must saturate at zero and be counted.

    Wrapping would turn a small level into a four-billion-share one and
    poison the BBO for the rest of the session, so this is a counter rather
    than an ignored condition.
    """
    await setup(dut)
    await push(dut, 1, 300, True, 100)
    await push(dut, 1, 300, False, 500)
    await drain(dut)
    assert int(dut.stat_underflow.value) == 1
    assert int(dut.m_bid_valid.value) == 0, "level should be empty, not huge"


@cocotb.test()
async def test_random_traffic_matches_oracle(dut):
    """Random adds and removes, checked against max()/min() throughout.

    Deliberately clustered into a narrow tick range so levels genuinely empty
    and refill rather than every update touching a fresh tick.
    """
    await setup(dut)
    ref = Ladder()
    rng = random.Random(7)
    resting: list[tuple[int, int, int]] = []

    for i in range(300):
        add = (not resting) or rng.random() < 0.6
        if add:
            side = rng.randrange(2)
            tick = rng.randrange(1000, 1040)
            qty = rng.randrange(1, 500)
            await push(dut, side, tick, True, qty)
            ref.update(side, tick, True, qty)
            resting.append((side, tick, qty))
        else:
            side, tick, qty = resting.pop(rng.randrange(len(resting)))
            await push(dut, side, tick, False, qty)
            ref.update(side, tick, False, qty)

        # Checking every update is slow but catches the exact one that broke.
        if i % 10 == 0:
            await check_bbo(dut, ref, f"random step {i}")

    await check_bbo(dut, ref, "random final")
    assert int(dut.stat_underflow.value) == 0


@cocotb.test()
async def test_bbo_marker_matches_each_message(dut):
    """Every m_bbo_valid pulse must carry the BBO as of THAT message.

    Updates arrive back to back, two per "message" for the replace-like
    pairs, with the completion marker on the second. The top of book read at
    each marker is compared with the oracle's state after that message - the
    same per-message check the full-pipeline test performs, done here in
    isolation so a failure points at this module.
    """
    await setup(dut)
    ref = Ladder()
    rng = random.Random(3)
    want: dict[int, tuple] = {}          # seq -> BBO the oracle expects
    got: dict[int, tuple] = {}           # seq -> BBO the RTL published

    async def watch():
        # Sample each published BBO on the cycle its marker is high.
        while True:
            await FallingEdge(dut.clk)
            if int(dut.m_bbo_valid.value):
                b = int(dut.m_bid_tick.value) if int(dut.m_bid_valid.value) else None
                a = int(dut.m_ask_tick.value) if int(dut.m_ask_valid.value) else None
                got[int(dut.m_bbo_seq.value)] = (
                    b, int(dut.m_bid_qty.value), a, int(dut.m_ask_qty.value))

    cocotb.start_soon(watch())
    resting: list[tuple[int, int, int]] = []
    await RisingEdge(dut.clk)
    for seq in range(1, 201):
        # One or two updates per message, driven with no idle cycles at all.
        n = 2 if (resting and rng.random() < 0.3) else 1
        for k in range(n):
            if resting and (k == 0 and n == 2 or rng.random() < 0.4):
                side, tick, qty = resting.pop(rng.randrange(len(resting)))
                add = False
            else:
                side, tick, qty = rng.randrange(2), rng.randrange(900, 930), rng.randrange(1, 300)
                resting.append((side, tick, qty))
                add = True
            ref.update(side, tick, add, qty)
            last = k == n - 1
            dut.s_valid.value = 1
            dut.s_side.value = side
            dut.s_tick.value = tick
            dut.s_add.value = int(add)
            dut.s_qty.value = qty
            dut.s_done.value = int(last)
            dut.s_seq.value = seq
            await RisingEdge(dut.clk)
        want[seq] = ref.bbo()
    dut.s_valid.value = 0
    dut.s_done.value = 0
    await drain(dut)

    assert sorted(got) == sorted(want), "a message produced no (or two) markers"
    for seq in sorted(want):
        assert got[seq] == want[seq], f"message {seq}: BBO {got[seq]} != {want[seq]}"
