"""cocotb tests for rtl/order_table.sv - the hashed, set-associative table.

Oracle: a Python dict, which is what book.Book.orders is. The RTL must
produce the same sequence of level updates that the model's add/reduce/
delete/replace would imply.

The table is built small here (16 sets, 2 ways, a 2-entry stash) on
purpose. A 128K-entry table would essentially never fill a set on a few
hundred test orders, so the overflow policy - set, then stash, then drop,
the thing most likely to be wrong - would go untested. A tiny table makes
overflow common and the policy observable.

Placement is predicted by model/table_sim.py, the same code that sized the
real table against whole trading days, so the bench and the sizing study
cannot disagree about what the hardware does.
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

from table_sim import Table, h3                        # noqa: E402

CLK_NS = 6.4          # 156.25 MHz, the 10 GbE datapath clock

# Must match rtl/itch_pkg.sv's op_e encoding.
OP_NONE, OP_ADD, OP_REDUCE, OP_DELETE, OP_REPLACE = 0, 1, 2, 3, 4

# Must match the parameters tb/run.py builds this DUT with.
SETS = 16
WAYS = 2
STASH = 2


def hash_idx(ref: int) -> int:
    """The RTL's H3 hash, from the model, so the test can predict which set
    an order lands in and construct deliberate collisions."""
    return h3(ref, SETS)


def colliding_refs(n: int) -> list[int]:
    """Find n references that all land in the same set.

    Searched rather than hand-constructed: a formula tuned to one hash
    silently stops colliding the moment the hash changes, and the test then
    passes while testing nothing. Searching keeps it honest.
    """
    target = hash_idx(1)
    out = []
    r = 1
    while len(out) < n:
        if hash_idx(r) == target:
            out.append(r)
        r += 1
    return out


class Updates:
    """Collects the level updates the table emits."""

    def __init__(self, dut):
        self.dut = dut
        self.ups: list[tuple[int, int, int, int]] = []   # side, tick, add, qty
        # Sequence numbers of completed ops, one per m_done pulse.
        self.done: list[int] = []

    async def run(self):
        while True:
            # Falling edge: registered outputs are settled mid-cycle.
            await FallingEdge(self.dut.clk)
            if int(self.dut.m_done.value):
                self.done.append(int(self.dut.m_seq.value))
            if int(self.dut.m_valid.value):
                self.ups.append((
                    int(self.dut.m_side.value),
                    int(self.dut.m_tick.value),
                    int(self.dut.m_add.value),
                    int(self.dut.m_qty.value),
                ))


async def setup(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())
    dut.rst.value = 1
    dut.s_valid.value = 0
    dut.s_op.value = OP_NONE
    dut.s_ref.value = 0
    dut.s_new_ref.value = 0
    dut.s_side.value = 0
    dut.s_qty.value = 0
    dut.s_tick.value = 0
    dut.s_tick_ok.value = 1
    dut.s_seq.value = 0
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    # The table clears its valid bits at startup, one set per cycle. Waiting
    # for `ready` is exactly what upstream logic must do, and it is also what
    # makes each test independent: without the sweep, entries left behind by
    # the previous test in this same simulator instance would still look live.
    while not int(dut.ready.value):
        await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    ups = Updates(dut)
    cocotb.start_soon(ups.run())
    return ups


async def op(dut, kind, ref, qty=0, side=0, tick=0, new_ref=0, tick_ok=1,
             spacing=4, seq=0):
    """Issue one op, then idle for `spacing` cycles.

    The next op's valid lands spacing + 2 cycles after this one's, so
    spacing=0 is the tightest the real pipeline can produce (two cycles).
    The default leaves headroom; the minimum-spacing tests go tight.
    """
    await RisingEdge(dut.clk)
    dut.s_valid.value = 1
    dut.s_op.value = kind
    dut.s_ref.value = ref
    dut.s_new_ref.value = new_ref
    dut.s_side.value = side
    dut.s_qty.value = qty
    dut.s_tick.value = tick
    dut.s_tick_ok.value = tick_ok
    dut.s_seq.value = seq
    await RisingEdge(dut.clk)
    dut.s_valid.value = 0
    for _ in range(spacing):
        await RisingEdge(dut.clk)


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_add_then_delete(dut):
    """The simplest round trip: an order goes in and comes back out.

    The delete carries no side, price or quantity - all three must come from
    the table, which is the whole reason it exists.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x1111, qty=500, side=1, tick=100)
    await op(dut, OP_DELETE, ref=0x1111)

    assert ups.ups == [(1, 100, 1, 500), (1, 100, 0, 500)], ups.ups
    assert int(dut.stat_missing.value) == 0


@cocotb.test()
async def test_reduce_partial_then_full(dut):
    """A partial reduce leaves the order live; the last share frees it."""
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x2222, qty=1000, side=0, tick=250)
    await op(dut, OP_REDUCE, ref=0x2222, qty=400)
    await op(dut, OP_REDUCE, ref=0x2222, qty=600)
    # A third reduce must find nothing: the entry was freed.
    await op(dut, OP_REDUCE, ref=0x2222, qty=100)

    assert ups.ups == [(0, 250, 1, 1000), (0, 250, 0, 400), (0, 250, 0, 600)]
    assert int(dut.stat_missing.value) == 1


@cocotb.test()
async def test_reduce_more_than_held_saturates(dut):
    """Over-reducing must remove only what is there, not wrap."""
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x3333, qty=100, side=1, tick=7)
    await op(dut, OP_REDUCE, ref=0x3333, qty=999)
    assert ups.ups == [(1, 7, 1, 100), (1, 7, 0, 100)]


@cocotb.test()
async def test_replace_emits_two_updates(dut):
    """A Replace is one message but two level updates.

    It also carries no side: the new order inherits the old one's, which the
    table has to supply. Getting that wrong puts the replacement on the wrong
    side of the book.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x4444, qty=300, side=1, tick=500)
    await op(dut, OP_REPLACE, ref=0x4444, new_ref=0x5555, qty=250, tick=505,
             side=0)          # side deliberately wrong on the wire

    assert ups.ups == [
        (1, 500, 1, 300),     # the add
        (1, 500, 0, 300),     # remove the old order, at ITS side and price
        (1, 505, 1, 250),     # add the new one, inheriting side 1
    ], ups.ups

    # And the replacement must now be addressable by its new reference.
    await op(dut, OP_DELETE, ref=0x5555)
    assert ups.ups[-1] == (1, 505, 0, 250)
    assert int(dut.stat_missing.value) == 0


@cocotb.test()
async def test_replace_same_price(dut):
    """A replace that does not move price: two updates on the same tick.

    Back to back, these hit the price_levels forwarding path, which is why
    that path is a constant case rather than a rare one.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x6001, qty=100, side=1, tick=42)
    await op(dut, OP_REPLACE, ref=0x6001, new_ref=0x6002, qty=180, tick=42)
    assert ups.ups == [(1, 42, 1, 100), (1, 42, 0, 100), (1, 42, 1, 180)]


@cocotb.test()
async def test_missing_reference_counted_not_crashed(dut):
    """Operations on unknown orders are normal mid-day; count, do not act."""
    ups = await setup(dut)
    await op(dut, OP_DELETE, ref=0xDEAD)
    await op(dut, OP_REDUCE, ref=0xBEEF, qty=10)
    await op(dut, OP_REPLACE, ref=0xCAFE, new_ref=0xF00D, qty=10, tick=1)

    assert ups.ups == [], "no level updates should come from unknown orders"
    assert int(dut.stat_missing.value) == 3


@cocotb.test()
async def test_out_of_band_price_not_placed_on_ladder(dut):
    """An out-of-band order is still tracked, but never reaches the ladder.

    Real data forces this: stub quotes sit at $0.0001 and $199,999.99. The
    order must still be deletable later, so the table holds it even though
    price_levels never sees it.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x7001, qty=100, side=1, tick=0, tick_ok=0)
    assert ups.ups == [], "out-of-band add must not update the ladder"
    # The delete still resolves, because the entry exists.
    await op(dut, OP_DELETE, ref=0x7001)
    assert int(dut.stat_missing.value) == 0


@cocotb.test()
async def test_out_of_band_delete_never_touches_ladder(dut):
    """Deleting an order that never reached the ladder must not remove shares.

    The order was stored with tick_ok low, so its stored tick is meaningless.
    If the delete emitted a level update anyway, it would take shares off
    whatever real level sits at that tick - silent book corruption.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x7101, qty=100, side=1, tick=0, tick_ok=0)
    await op(dut, OP_REDUCE, ref=0x7101, qty=40)
    await op(dut, OP_DELETE, ref=0x7101)
    # Nothing ever went on the ladder, so nothing may ever come off it.
    assert ups.ups == [], f"off-ladder order produced level updates: {ups.ups}"
    assert int(dut.stat_missing.value) == 0


@cocotb.test()
async def test_replace_then_op_at_minimum_spacing(dut):
    """A Replace followed by another op only two cycles later.

    Two cycles is the real minimum: the shortest message with its prefix is
    21 bytes, so a message can complete two beats after the previous one.
    A Delete or Cancel straight after a Replace does exactly that, so the
    table must finish EVERY op - Replace included - in two cycles.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x8001, qty=100, side=1, tick=30)
    # spacing=0 puts the next op's valid exactly two cycles after this one.
    await op(dut, OP_REPLACE, ref=0x8001, new_ref=0x8002, qty=150, tick=31,
             spacing=0)
    await op(dut, OP_DELETE, ref=0x8002)
    assert int(dut.stat_overrun.value) == 0, "op lost behind a Replace"
    assert ups.ups == [(1, 30, 1, 100), (1, 30, 0, 100),
                       (1, 31, 1, 150), (1, 31, 0, 150)], ups.ups


@cocotb.test()
async def test_back_to_back_same_order(dut):
    """Add, reduce, reduce, delete of ONE order, each two cycles apart.

    This is the read-during-write question. Every op reads the set the
    previous op just wrote, as early as the wire allows. The design answer
    is structural - an op's writes land in its EXEC cycle, before the next
    op's read - and this test is the evidence that the answer holds.
    """
    ups = await setup(dut)
    await op(dut, OP_ADD, ref=0x9001, qty=1000, side=0, tick=77, spacing=0)
    await op(dut, OP_REDUCE, ref=0x9001, qty=100, spacing=0)
    await op(dut, OP_REDUCE, ref=0x9001, qty=200, spacing=0)
    # Delete must see the twice-reduced 700, not a stale 1000 or 900.
    await op(dut, OP_DELETE, ref=0x9001)
    assert ups.ups == [(0, 77, 1, 1000), (0, 77, 0, 100),
                       (0, 77, 0, 200), (0, 77, 0, 700)], ups.ups
    assert int(dut.stat_overrun.value) == 0


@cocotb.test()
async def test_replace_within_a_full_set(dut):
    """Replace an order with one that hashes to the SAME, already-full set,
    with the stash full too.

    The new order's set was read before the old order was freed, so it still
    looks full. The table must count the way being vacated by this very op
    as free - otherwise a plain swap on a busy set is refused as a collision.
    """
    ups = await setup(dut)
    refs = colliding_refs(WAYS + STASH + 1)
    # Fill every way of one set, and the whole stash behind it.
    for i, r in enumerate(refs[:WAYS + STASH]):
        await op(dut, OP_ADD, ref=r, qty=100 + i, side=1, tick=60 + i)
    # Swap the first order for a new reference in that same set.
    await op(dut, OP_REPLACE, ref=refs[0], new_ref=refs[-1], qty=555,
             tick=70)
    assert int(dut.stat_collisions.value) == 0, "same-set replace refused"
    assert ups.ups[-2:] == [(1, 60, 0, 100), (1, 70, 1, 555)], ups.ups
    # Both the new order and the untouched one must still be live.
    await op(dut, OP_DELETE, ref=refs[-1])
    await op(dut, OP_DELETE, ref=refs[1])
    assert ups.ups[-2:] == [(1, 70, 0, 555), (1, 61, 0, 101)], ups.ups
    assert int(dut.stat_missing.value) == 0


@cocotb.test()
async def test_every_op_completes_exactly_once(dut):
    """m_done must pulse once per op - hits, misses and drops alike.

    Downstream, m_done is what marks "the BBO now reflects message N". A
    missing pulse makes the checker skip a message, a doubled one makes it
    check a half-applied Replace.
    """
    ups = await setup(dut)
    seqs = []
    script = [
        (OP_ADD, dict(ref=0xA1, qty=10, side=1, tick=5)),
        (OP_ADD, dict(ref=0xA2, qty=10, side=0, tick=9, tick_ok=0)),
        (OP_REDUCE, dict(ref=0xA1, qty=3)),
        (OP_REPLACE, dict(ref=0xA1, new_ref=0xA3, qty=20, tick=6)),
        (OP_DELETE, dict(ref=0xDEAD)),          # miss
        (OP_DELETE, dict(ref=0xA2)),            # off-ladder order
    ]
    for n, (kind, kw) in enumerate(script, start=100):
        seqs.append(n)
        await op(dut, kind, seq=n, spacing=0, **kw)
    for _ in range(6):
        await RisingEdge(dut.clk)
    assert ups.done == seqs, f"done pulses {ups.done} != ops {seqs}"


@cocotb.test()
async def test_overflow_goes_to_stash_then_drops(dut):
    """Fill one set, then the stash, then one more: set, stash, drop.

    With WAYS entries per set and STASH in the stash, the order after
    WAYS + STASH same-set orders has nowhere to go. It is dropped, the book
    becomes quietly incomplete, and the counter is the only evidence - which
    is exactly why the counter is not optional.
    """
    ups = await setup(dut)
    refs = colliding_refs(WAYS + STASH + 1)
    assert len({hash_idx(r) for r in refs}) == 1, "refs must share a set"

    for i, r in enumerate(refs):
        await op(dut, OP_ADD, ref=r, qty=100 + i, side=1, tick=10 + i)

    assert int(dut.stat_collisions.value) == 1, (
        f"expected 1 dropped order, got {int(dut.stat_collisions.value)}"
    )
    # Every order that found a home - set or stash - reached the ladder.
    assert len(ups.ups) == WAYS + STASH
    assert int(dut.stat_stash_peak.value) == STASH


@cocotb.test()
async def test_stash_resident_orders_work(dut):
    """Orders living in the stash must reduce, replace and delete normally.

    A stash that only ever accepts orders would pass the overflow test and
    still corrupt the book the moment one of them traded.
    """
    ups = await setup(dut)
    refs = colliding_refs(WAYS + STASH)
    for r in refs:
        await op(dut, OP_ADD, ref=r, qty=500, side=0, tick=40)
    s1, s2 = refs[WAYS], refs[WAYS + 1]          # these two live in the stash
    await op(dut, OP_REDUCE, ref=s1, qty=200)
    # Replace a stash order with one in the same (full) set: the new order
    # can only go to the stash entry the old one is vacating.
    new = colliding_refs(WAYS + STASH + 1)[-1]
    await op(dut, OP_REPLACE, ref=s2, new_ref=new, qty=50, tick=41)
    await op(dut, OP_DELETE, ref=s1)
    await op(dut, OP_DELETE, ref=new)
    assert ups.ups[WAYS + STASH:] == [
        (0, 40, 0, 200),        # partial reduce of a stash order
        (0, 40, 0, 500),        # replace: old stash order off the ladder...
        (0, 41, 1, 50),         # ...new one on, inheriting side 0
        (0, 40, 0, 300),        # delete of what the reduce left
        (0, 41, 0, 50),         # the replacement is findable by its new ref
    ], ups.ups
    assert int(dut.stat_collisions.value) == 0
    assert int(dut.stat_missing.value) == 0


@cocotb.test()
async def test_freed_way_is_reusable(dut):
    """Deleting an order must return its way to the free pool.

    A table that leaks ways fills up and then collides on everything, which
    looks like a hash problem and is not. The stash is filled first, so the
    only home for the last order is the way just freed.
    """
    ups = await setup(dut)
    refs = colliding_refs(WAYS + STASH + 1)
    for r in refs[:WAYS + STASH]:
        await op(dut, OP_ADD, ref=r, qty=100, side=1, tick=20)
    await op(dut, OP_DELETE, ref=refs[0])
    # This add maps to the same set, so it should fit in the way just freed.
    await op(dut, OP_ADD, ref=refs[-1], qty=777, side=1, tick=21)

    assert int(dut.stat_collisions.value) == 0, "a freed way was not reused"
    assert ups.ups[-1] == (1, 21, 1, 777)


@cocotb.test()
async def test_random_traffic_matches_model(dut):
    """Random adds, reduces, deletes and replaces against the model.

    Two oracles at once: a dict of live orders (what book.Book keeps) says
    WHAT each update must be, and table_sim.Table - the sizing model - says
    WHETHER each new order fits (set, stash, or dropped). With a table this
    small, all three outcomes happen many times.
    """
    ups = await setup(dut)
    rng = random.Random(11)
    occ = Table(SETS, WAYS, STASH, "h3")

    live: dict[int, tuple[int, int, int]] = {}    # ref -> (side, tick, qty)
    expected: list[tuple[int, int, int, int]] = []
    next_ref = 1

    for _ in range(400):
        # Mostly the tightest spacing the wire allows, sometimes relaxed.
        sp = rng.choice([0, 0, 0, 1, 4])
        choices = ["add"] * 3 + (["red", "del", "rep"] if live else [])
        kind = rng.choice(choices)

        if kind == "add":
            ref = next_ref
            next_ref += 1
            side, tick, qty = rng.randrange(2), rng.randrange(50), rng.randrange(1, 900)
            # The model decides whether this order finds a home.
            before = occ.drops
            occ.insert(ref)
            await op(dut, OP_ADD, ref=ref, qty=qty, side=side, tick=tick, spacing=sp)
            if occ.drops == before:
                live[ref] = (side, tick, qty)
                expected.append((side, tick, 1, qty))

        elif kind == "red":
            ref = rng.choice(list(live))
            side, tick, qty = live[ref]
            take = rng.randrange(1, qty + 1)
            await op(dut, OP_REDUCE, ref=ref, qty=take, spacing=sp)
            expected.append((side, tick, 0, take))
            # Taking the last share frees the order's slot.
            if take >= qty:
                del live[ref]
                occ.remove(ref)
            else:
                live[ref] = (side, tick, qty - take)

        elif kind == "del":
            ref = rng.choice(list(live))
            side, tick, qty = live.pop(ref)
            occ.remove(ref)
            await op(dut, OP_DELETE, ref=ref, spacing=sp)
            expected.append((side, tick, 0, qty))

        else:
            ref = rng.choice(list(live))
            side, tick, qty = live.pop(ref)
            new_ref = next_ref
            next_ref += 1
            ntick, nqty = rng.randrange(50), rng.randrange(1, 900)
            # Remove-then-insert: the RTL counts the vacated slot as free.
            occ.remove(ref)
            before = occ.drops
            occ.insert(new_ref)
            await op(dut, OP_REPLACE, ref=ref, new_ref=new_ref, qty=nqty,
                     tick=ntick, spacing=sp)
            expected.append((side, tick, 0, qty))
            if occ.drops == before:
                live[new_ref] = (side, ntick, nqty)
                expected.append((side, ntick, 1, nqty))

    for _ in range(6):
        await RisingEdge(dut.clk)
    # Point at the first divergent update, which is what debugging needs.
    if ups.ups != expected:
        first = next((i for i, (a, b) in enumerate(zip(ups.ups, expected))
                      if a != b), min(len(ups.ups), len(expected)))
        raise AssertionError(
            f"diverged at update {first}: rtl {ups.ups[first:first + 3]} "
            f"model {expected[first:first + 3]} "
            f"({len(ups.ups)} vs {len(expected)} updates)")
    assert int(dut.stat_collisions.value) == occ.drops
    assert occ.drops > 0 and occ.stash_peak == STASH, "overflow never exercised"
    assert int(dut.stat_overrun.value) == 0, "ops arrived faster than allowed"
    # Every op, hit or miss, must have signalled completion exactly once.
    assert len(ups.done) == 400
