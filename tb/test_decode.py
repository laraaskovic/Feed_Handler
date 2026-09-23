"""cocotb tests for rtl/decode.sv - message to normalized book operation.

Oracle: itch.decode() for the fields, plus the same add/reduce/delete/replace
mapping that book.Book.apply() uses for dispatch. Both come straight out of
model/, so the RTL is being judged against the code that already agrees with
Wireshark and with 368 million real messages.
"""

from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge

import gen                                                        # noqa: E402
from itch import (                                                # noqa: E402
    TICK,
    AddOrder,
    OrderCancel,
    OrderDelete,
    OrderExecuted,
    OrderReplace,
    decode as py_decode,
)

CLK_NS = 6.4
MAX_MSG = 50

# Must match the op_e encoding in rtl/itch_pkg.sv.
OP_NONE, OP_ADD, OP_REDUCE, OP_DELETE, OP_REPLACE = 0, 1, 2, 3, 4

# Must match BAND_TICKS in rtl/decode.sv.
BAND_TICKS = 4096
BAND_SPAN = BAND_TICKS * TICK


def expected_op(m):
    """The mapping book.Book.apply() performs, as a plain function.

    Returning None for a message type the pipeline does not model mirrors the
    RTL asserting OP_NONE and holding m_valid low.
    """
    if isinstance(m, AddOrder):
        return dict(op=OP_ADD, ref=m.order_ref, new_ref=0,
                    side=1 if m.side == "B" else 0, qty=m.shares,
                    price=m.price)
    if isinstance(m, (OrderExecuted, OrderCancel)):
        # E, C and X are the same operation. For C the printed execution price
        # is deliberately absent here - the book reduces at the resting price.
        return dict(op=OP_REDUCE, ref=m.order_ref, new_ref=0, side=0,
                    qty=m.shares, price=0)
    if isinstance(m, OrderDelete):
        return dict(op=OP_DELETE, ref=m.order_ref, new_ref=0, side=0,
                    qty=0, price=0)
    if isinstance(m, OrderReplace):
        return dict(op=OP_REPLACE, ref=m.order_ref, new_ref=m.new_order_ref,
                    side=0, qty=m.shares, price=m.price)
    return None


def expected_tick(price: int, band_base: int):
    """(tick, tick_ok) exactly as the RTL's reciprocal multiply should give."""
    if price == 0:
        return 0, False
    if price < band_base or (price - band_base) >= BAND_SPAN:
        return 0, False
    delta = price - band_base
    return delta // TICK, (delta % TICK == 0)


class OpSink:
    """Collects every normalized operation the DUT emits."""

    def __init__(self, dut):
        self.dut = dut
        self.ops: list[dict] = []

    async def run(self):
        while True:
            await FallingEdge(self.dut.clk)
            if not int(self.dut.m_valid.value):
                continue
            self.ops.append(dict(
                op=int(self.dut.m_op.value),
                ref=int(self.dut.m_ref.value),
                new_ref=int(self.dut.m_new_ref.value),
                side=int(self.dut.m_side.value),
                qty=int(self.dut.m_qty.value),
                price=int(self.dut.m_price.value),
                tick=int(self.dut.m_tick.value),
                tick_ok=int(self.dut.m_tick_ok.value),
                locate=int(self.dut.m_locate.value),
                seq=int(self.dut.m_seq.value),
            ))


async def setup(dut, band_base: int = 0):
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())
    dut.rst.value = 1
    dut.s_msg.value = 0
    dut.s_len.value = 0
    dut.s_valid.value = 0
    dut.s_seq.value = 0
    dut.cfg_band_base.value = band_base
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    sink = OpSink(dut)
    cocotb.start_soon(sink.run())
    return sink


async def feed(dut, messages: list[bytes], seq0: int = 1, gap: int = 0):
    """Present one message per cycle, exactly as msg_frame would."""
    for i, raw in enumerate(messages):
        await RisingEdge(dut.clk)
        # Pad to the full bus width; bytes beyond the message are don't-care.
        dut.s_msg.value = int.from_bytes(raw.ljust(MAX_MSG, b"\x00"), "little")
        dut.s_len.value = len(raw)
        dut.s_valid.value = 1
        dut.s_seq.value = seq0 + i
        for _ in range(gap):
            await RisingEdge(dut.clk)
            dut.s_valid.value = 0
    await RisingEdge(dut.clk)
    dut.s_valid.value = 0
    for _ in range(4):
        await RisingEdge(dut.clk)


def check(messages, sink, band_base: int):
    """Compare every emitted op against the model, field by field."""
    expected = []
    for i, raw in enumerate(messages):
        e = expected_op(py_decode(raw))
        if e is not None:
            e["seq"] = 1 + i
            expected.append(e)

    got = sink.ops
    assert len(got) == len(expected), (
        f"op count: RTL {len(got)}, model {len(expected)}"
    )

    for i, (e, g) in enumerate(zip(expected, got)):
        for field in ("op", "ref", "qty", "seq"):
            assert g[field] == e[field], (
                f"op {i}: {field} = {g[field]}, expected {e[field]}"
            )
        # Side is only defined for an add; the others carry no side at all.
        if e["op"] == OP_ADD:
            assert g["side"] == e["side"], f"op {i}: side"
        if e["op"] == OP_REPLACE:
            assert g["new_ref"] == e["new_ref"], f"op {i}: new_ref"
        if e["op"] in (OP_ADD, OP_REPLACE):
            assert g["price"] == e["price"], (
                f"op {i}: price {g['price']} != {e['price']}"
            )
            etick, eok = expected_tick(e["price"], band_base)
            assert g["tick_ok"] == int(eok), (
                f"op {i}: tick_ok {g['tick_ok']} != {int(eok)} "
                f"(price {e['price']}, base {band_base})"
            )
            if eok:
                assert g["tick"] == etick, (
                    f"op {i}: tick {g['tick']} != {etick}"
                )


def msgs_of_type(t: str, n: int, seed: int = 0) -> list[bytes]:
    """n messages all of one ITCH type.

    The budget is generous because the generator mirrors real traffic weights:
    'C' is under 1% of messages, so collecting 30 of them needs thousands
    generated. Generation is cheap; running short mid-test is not.
    """
    out = []
    for raw in gen.generate(n_messages=n * 500 + 5000, seed=seed):
        if chr(raw[0]) == t:
            out.append(raw)
            if len(out) == n:
                break
    assert len(out) == n, f"only found {len(out)} of {n} '{t}' messages"
    return out


def band_base_for(messages) -> int:
    """Pick a band base that puts most prices inside the band, as a real
    session would using the opening price."""
    prices = [m.price for m in (py_decode(r) for r in messages)
              if getattr(m, "price", 0)]
    if not prices:
        return 0
    mid = sorted(prices)[len(prices) // 2]
    return max(0, (mid - BAND_SPAN // 2) // TICK * TICK)


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_add_orders(dut):
    """'A' carries side, shares and price - the only type that carries a side."""
    msgs = msgs_of_type("A", 60)
    base = band_base_for(msgs)
    sink = await setup(dut, base)
    await feed(dut, msgs)
    check(msgs, sink, base)


@cocotb.test()
async def test_add_with_mpid(dut):
    """'F' is 'A' plus a trailing MPID the book must ignore."""
    msgs = msgs_of_type("F", 40)
    base = band_base_for(msgs)
    sink = await setup(dut, base)
    await feed(dut, msgs)
    check(msgs, sink, base)


@cocotb.test()
async def test_reduce_family(dut):
    """E, C and X must all produce the identical OP_REDUCE."""
    msgs = (msgs_of_type("E", 20, seed=1) + msgs_of_type("X", 20, seed=2)
            + msgs_of_type("C", 20, seed=3))
    sink = await setup(dut, 0)
    await feed(dut, msgs)
    check(msgs, sink, 0)

    ops = {o["op"] for o in sink.ops}
    assert ops == {OP_REDUCE}, f"expected only OP_REDUCE, saw {ops}"


@cocotb.test()
async def test_exec_with_price_ignores_printed_price(dut):
    """The 'C' trap, tested explicitly.

    'C' carries an execution price at byte 32. The book must reduce at the
    order's RESTING price, so that field must never reach the output. If it
    leaked through, m_price would be nonzero here.
    """
    msgs = msgs_of_type("C", 30, seed=4)
    sink = await setup(dut, 0)
    await feed(dut, msgs)

    assert len(sink.ops) == len(msgs)
    for i, o in enumerate(sink.ops):
        assert o["op"] == OP_REDUCE
        assert o["price"] == 0, (
            f"op {i}: the printed execution price leaked into the book path "
            f"(price={o['price']})"
        )


@cocotb.test()
async def test_delete_and_replace(dut):
    """'D' carries only a reference; 'U' carries two and no side."""
    msgs = msgs_of_type("D", 30, seed=5) + msgs_of_type("U", 30, seed=6)
    base = band_base_for(msgs)
    sink = await setup(dut, base)
    await feed(dut, msgs)
    check(msgs, sink, base)


@cocotb.test()
async def test_replace_is_one_operation(dut):
    """A Replace must emit exactly ONE op, not a delete followed by an add.

    Splitting would double the worst-case work per message, and at 7.39% of
    real traffic that is a throughput decision, not a style one.
    """
    msgs = msgs_of_type("U", 25, seed=7)
    sink = await setup(dut, 0)
    await feed(dut, msgs)

    assert len(sink.ops) == len(msgs), (
        f"{len(msgs)} replaces produced {len(sink.ops)} ops - should be 1:1"
    )
    for o in sink.ops:
        assert o["op"] == OP_REPLACE
        assert o["ref"] != o["new_ref"], "replace must carry two distinct refs"


@cocotb.test()
async def test_mixed_stream(dut):
    """All seven types interleaved, as they arrive in real traffic."""
    msgs = list(gen.generate(n_messages=500, seed=8))
    base = band_base_for(msgs)
    sink = await setup(dut, base)
    await feed(dut, msgs)
    check(msgs, sink, base)

    seen = {chr(m[0]) for m in msgs}
    assert set("AFECXDU") <= seen


@cocotb.test()
async def test_back_to_back_every_cycle(dut):
    """A message on every single cycle - the no-backpressure requirement."""
    msgs = list(gen.generate(n_messages=400, seed=9))
    base = band_base_for(msgs)
    sink = await setup(dut, base)
    await feed(dut, msgs, gap=0)
    check(msgs, sink, base)


@cocotb.test()
async def test_out_of_band_prices_flagged_not_dropped(dut):
    """Prices outside the band must still produce a valid op.

    Real data makes this mandatory: AAPL's observed range on 2019-01-30 runs
    from $0.0001 to $199,999.99 because of stub quotes. Such an order cannot
    go on the ladder, but its delete still has to work later, so the op must
    be emitted with m_tick_ok low rather than suppressed.
    """
    msgs = msgs_of_type("A", 40, seed=10)
    # A base far above every real price forces everything out of band.
    sink = await setup(dut, 0x4000_0000)
    await feed(dut, msgs)

    assert len(sink.ops) == len(msgs), "out-of-band ops must not be dropped"
    assert all(o["tick_ok"] == 0 for o in sink.ops)
    assert int(dut.stat_out_of_band.value) == len(msgs)


@cocotb.test()
async def test_tick_conversion_exact_at_boundaries(dut):
    """The reciprocal multiply must equal integer division everywhere.

    A reciprocal that is one ULP low fails only at exact multiples, so the
    boundaries are where it matters: tick 0, tick 1, and the top of the band.
    """
    from itch import MSG_LENGTHS
    import struct

    base = 1_000_000                      # $100.0000
    tests = [0, 1, 99, 100, 101, 4095 * TICK, 4095 * TICK + 99]
    msgs = []
    for i, delta in enumerate(tests):
        # Hand-built Add Orders, so the price is exactly what we intend.
        body = (b"A" + struct.pack(">HH", 1, 0) + (i).to_bytes(6, "big")
                + struct.pack(">Q", 1000 + i) + b"B" + struct.pack(">I", 100)
                + b"TEST    " + struct.pack(">I", base + delta))
        assert len(body) == MSG_LENGTHS["A"]
        msgs.append(body)

    sink = await setup(dut, base)
    await feed(dut, msgs)

    assert len(sink.ops) == len(tests)
    for delta, o in zip(tests, sink.ops):
        want_tick = delta // TICK
        want_ok = (delta % TICK == 0)
        assert o["tick_ok"] == int(want_ok), (
            f"delta {delta}: tick_ok {o['tick_ok']} != {int(want_ok)}"
        )
        if want_ok:
            assert o["tick"] == want_tick, (
                f"delta {delta}: tick {o['tick']} != {want_tick}"
            )
    # Three of the seven deltas are not whole cents.
    assert int(dut.stat_subpenny.value) == sum(1 for d in tests if d % TICK)
