"""cocotb tests for rtl/feed_handler_top.sv - the whole pipeline (step 9).

Ethernet frames go in; the top of book comes out. The oracle is the golden
model itself: book.MultiBook applied message by message, exactly as replay.py
does to produce its BBO trace. After EVERY book message for the tracked
symbol, the RTL's published BBO must equal the model's. Not "at the end",
not "on a sample" - every message, keyed by its MoldUDP64 sequence number.

One honest difference between the two is modelled explicitly rather than
papered over: the hardware ladder only covers BAND_TICKS cents around
cfg_band_base, while the Python dicts hold any price. So the oracle's BBO is
taken over the in-band, whole-cent levels only (inband_bbo below). Levels are
sums of orders AT that price, so filtering levels by price is exactly
equivalent to the RTL keeping out-of-band orders off the ladder.

Frames are built by model/packetize.py, the same code Wireshark has
cross-checked, so this bench tests the RTL against the real wire format.
"""

from __future__ import annotations

import os
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge

import gen                                              # noqa: E402
from book import MultiBook                              # noqa: E402
from itch import BOOK_TYPES, TICK, decode, read_messages  # noqa: E402
from packetize import packetize, to_beats               # noqa: E402

CLK_NS = 6.4                 # 156.25 MHz, the 10 GbE datapath clock
BAND_TICKS = 4096            # must match the DUT's BAND_TICKS parameter
BAND_SPAN = BAND_TICKS * TICK

# Header bytes before the MoldUDP64 message block: Ethernet 14 (+4 with a
# VLAN tag), IPv4 20, UDP 8, MoldUDP64 20. Used to find where each message's
# last byte sits on the wire, for the latency measurement.
HDR_LEN = 14 + 20 + 8 + 20


# ---------------------------------------------------------------------------
# The oracle
# ---------------------------------------------------------------------------


def inband_bbo(book, base: int):
    """The model's BBO restricted to what the hardware ladder can hold.

    Returns (bid_valid, bid_px, bid_qty, ask_valid, ask_px, ask_qty) in feed
    price units - the same tuple the RTL monitor builds.
    """
    def ok(p):
        # In the band, and a whole number of cents (else it has no tick).
        return base <= p < base + BAND_SPAN and (p - base) % TICK == 0

    bids = [p for p in book.bids if ok(p)]
    asks = [p for p in book.asks if ok(p)]
    # max()/min() over live levels: the very thing the priority encoder
    # replaces, used here as the obviously-correct reference.
    bp = max(bids) if bids else None
    ap = min(asks) if asks else None
    return (int(bp is not None), bp or 0, book.bids.get(bp, 0) if bp else 0,
            int(ap is not None), ap or 0, book.asks.get(ap, 0) if ap else 0)


def expected_trace(messages, locate: int, base: int, seq0: int = 1):
    """seq -> in-band BBO after that message, for every book message of
    `locate`. Also returns the message type per seq, for latency stats."""
    mb = MultiBook(strict=True, locates=[locate])
    want: dict[int, tuple] = {}
    kinds: dict[int, str] = {}
    for i, raw in enumerate(messages):
        # Only the seven book types reach the ladder; the rest are dropped
        # by decode in the RTL and skipped here.
        if chr(raw[0]) not in BOOK_TYPES:
            continue
        m = decode(raw)
        b = mb.apply(m)
        if b is None:
            continue                  # another symbol: filtered by cfg_locate
        want[seq0 + i] = inband_bbo(b, base)
        kinds[seq0 + i] = chr(raw[0])
    return want, kinds


def band_base_for(messages, locate: int) -> int:
    """Centre the band on the symbol's median add price, as a real session
    would centre it on the opening price."""
    prices = sorted(
        m.price for m in (decode(r) for r in messages if chr(r[0]) in "AF")
        if m.locate == locate
    )
    mid = prices[len(prices) // 2]
    # Round down to a whole cent so tick 0 is a real price.
    return max(0, (mid - BAND_SPAN // 2) // TICK * TICK)


# ---------------------------------------------------------------------------
# DUT driving and monitoring
# ---------------------------------------------------------------------------


class Env:
    """Clock-cycle counter, BBO monitor and frame driver in one place."""

    def __init__(self, dut):
        self.dut = dut
        self.cycle = 0
        # seq -> (BBO tuple, cycle the marker was registered)
        self.got: dict[int, tuple] = {}
        self.marker_cycle: dict[int, int] = {}
        # seq -> cycle the beat holding that message's last byte was taken
        self.last_byte_cycle: dict[int, int] = {}
        # seq -> cycle msg_frame registered the whole message
        self.framed_cycle: dict[int, int] = {}
        self.dupes = 0

    async def count(self):
        # One tick per rising edge; everything else reads this counter.
        while True:
            await RisingEdge(self.dut.clk)
            self.cycle += 1

    async def monitor(self):
        dut = self.dut
        # Internal probe: when the framer completes each message. Used only
        # for the latency breakdown, never for pass/fail on correctness.
        frame = dut.u_frame
        while True:
            # Falling edge: registered outputs are settled mid-cycle.
            await FallingEdge(dut.clk)
            if int(frame.m_valid.value):
                self.framed_cycle[int(frame.m_seq.value)] = self.cycle
            if not int(dut.m_bbo_valid.value):
                continue
            seq = int(dut.m_bbo_seq.value)
            # A second marker for one message would mean a half-applied
            # Replace was published as if it were final.
            if seq in self.got:
                self.dupes += 1
            self.got[seq] = (
                int(dut.m_bid_valid.value), int(dut.m_bid_price.value),
                int(dut.m_bid_qty.value),
                int(dut.m_ask_valid.value), int(dut.m_ask_price.value),
                int(dut.m_ask_qty.value),
            )
            self.marker_cycle[seq] = self.cycle

    async def drive(self, frame: bytes, seq: int, msgs: list[bytes],
                    vlan: bool, gap: int = 0):
        """Push one frame in as 64-bit beats; record when each message's
        final byte enters the DUT."""
        dut = self.dut
        # Where each message's last byte sits in the frame, then its beat.
        pos = HDR_LEN + (4 if vlan else 0)
        last_beat = {}
        for k, m in enumerate(msgs):
            pos += 2 + len(m)
            last_beat[(pos - 1) // 8] = seq + k
        for b, (tdata, tkeep, tlast) in enumerate(to_beats(frame, 8)):
            await RisingEdge(dut.clk)
            dut.s_tdata.value = tdata
            dut.s_tkeep.value = tkeep
            dut.s_tvalid.value = 1
            dut.s_tlast.value = int(tlast)
            # The DUT takes this beat on the NEXT edge.
            if b in last_beat:
                self.last_byte_cycle[last_beat[b]] = self.cycle + 1
        await RisingEdge(dut.clk)
        dut.s_tvalid.value = 0
        dut.s_tlast.value = 0
        for _ in range(gap):
            await RisingEdge(dut.clk)


async def setup(dut, base: int, locate: int) -> Env:
    """Clock, reset, configuration, then wait out the order-table sweep."""
    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())
    dut.rst.value = 1
    dut.s_tdata.value = 0
    dut.s_tkeep.value = 0
    dut.s_tvalid.value = 0
    dut.s_tlast.value = 0
    # Configuration is static for the session, so it is set during reset.
    dut.cfg_band_base.value = base
    dut.cfg_locate.value = locate
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    # The order table clears its RAM one set per cycle after reset. A real
    # system brings the MAC up only after this, and so does the bench.
    while not int(dut.ready.value):
        await RisingEdge(dut.clk)
    env = Env(dut)
    cocotb.start_soon(env.count())
    cocotb.start_soon(env.monitor())
    return env


async def run_stream(dut, messages, locate: int, base: int | None = None,
                     mpp: int = 8, random_bounds: bool = True,
                     vlan: int | None = None, gap: int = 0, seed: int = 0):
    """Packetize, drive, drain, then compare every message with the model."""
    if base is None:
        base = band_base_for(messages, locate)
    env = await setup(dut, base, locate)
    frames = list(packetize(messages, msgs_per_packet=mpp,
                            random_boundaries=random_bounds, seed=seed,
                            vlan=vlan))
    for frame, seq, msgs in frames:
        await env.drive(frame, seq, msgs, vlan is not None, gap)
    # Let the last message work its way out of the pipeline.
    for _ in range(40):
        await RisingEdge(dut.clk)

    want, kinds = expected_trace(messages, locate, base)
    # Every book message for this symbol must publish exactly one BBO...
    missing = sorted(set(want) - set(env.got))
    extra = sorted(set(env.got) - set(want))
    assert not missing, f"{len(missing)} messages never published, e.g. {missing[:5]}"
    assert not extra, f"markers for unexpected sequence numbers {extra[:5]}"
    assert env.dupes == 0, f"{env.dupes} messages published more than once"
    # ...and it must be the model's BBO after exactly that message.
    for seq in sorted(want):
        assert env.got[seq] == want[seq], (
            f"seq {seq} ({kinds[seq]}): RTL {env.got[seq]} != model {want[seq]}"
        )
    # The status counters are part of the contract, not decoration.
    assert int(dut.stat_frame_err.value) == 0
    assert int(dut.stat_dropped.value) == 0
    assert int(dut.stat_overrun.value) == 0, "an op arrived while table busy"
    assert int(dut.stat_underflow.value) == 0, "ladder and orders diverged"
    # Zero dropped orders is a hard requirement, not a statistic.
    assert int(dut.stat_collisions.value) == 0, "the order table dropped orders"
    assert int(dut.stat_packets.value) == len(frames)
    assert int(dut.stat_messages.value) == len(messages)
    return env, want, kinds


def latency_report(env, kinds) -> dict[str, set[int]]:
    """Cycles from a message's last byte entering the DUT to its BBO."""
    by_type: dict[str, set[int]] = {}
    for seq, t in kinds.items():
        # Wire-to-BBO: the whole pipeline, headers included.
        lat = env.marker_cycle[seq] - env.last_byte_cycle[seq]
        by_type.setdefault(t, set()).add(lat)
    return by_type


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------


@cocotb.test()
async def test_synthetic_day_matches_model(dut):
    """Three symbols interleaved, track one, compare after every message.

    Frames back to back with no idle cycles, message counts per packet
    randomised so every message lands at every byte offset of a beat.
    """
    msgs = list(gen.generate(n_messages=4000, seed=101))
    env, want, _ = await run_stream(dut, msgs, locate=1, mpp=10, seed=1)
    # The other two symbols' ops were decoded and then filtered out.
    assert int(dut.stat_other_symbol.value) > 0
    dut._log.info("%d messages checked message-by-message", len(want))


@cocotb.test()
async def test_other_symbol_selected(dut):
    """Same stream, a different cfg_locate: the filter really selects."""
    msgs = list(gen.generate(n_messages=1500, seed=102))
    await run_stream(dut, msgs, locate=3, mpp=6, seed=2)


@cocotb.test()
async def test_replace_heavy_minimum_spacing(dut):
    """Mostly Replaces, Deletes and Cancels, one symbol, dense packets.

    This is the stream that broke the old three-cycle order table: a
    Replace followed two beats later by a 19-byte Delete or 23-byte Cancel.
    With one symbol every op is tracked, so the tightest spacings the wire
    can produce all reach the table.
    """
    w = {"A": 30, "F": 2, "U": 35, "D": 18, "X": 12, "E": 2, "C": 1}
    msgs = list(gen.generate(n_messages=3000, symbols=["TSLA"], seed=103,
                             weights=w))
    await run_stream(dut, msgs, locate=1, mpp=40, random_bounds=False)


@cocotb.test()
async def test_vlan_tagged_frames(dut):
    """A VLAN tag moves every header 4 bytes; nothing downstream may care."""
    msgs = list(gen.generate(n_messages=1500, seed=104))
    await run_stream(dut, msgs, locate=2, vlan=77, mpp=12, seed=3)


@cocotb.test()
async def test_out_of_band_orders(dut):
    """A band that deliberately misses half the book.

    Bids sit below the symbol's base price, so starting the band just under
    it puts most bids out of band. They must be tracked (their deletes still
    resolve: stat_missing stays zero), counted, and kept off the ladder.
    """
    msgs = list(gen.generate(n_messages=2000, symbols=["QQQ"], seed=105))
    first_add = next(decode(r) for r in msgs if chr(r[0]) == "A")
    # Most bids are more than 50 ticks under their ask counterparts' base.
    base = (first_add.price // TICK - 50) * TICK
    await run_stream(dut, msgs, locate=1, base=base, seed=4)
    assert int(dut.stat_out_of_band.value) > 0, "the band missed nothing"
    assert int(dut.stat_missing.value) == 0, "an out-of-band order was lost"


@cocotb.test()
async def test_fixed_latency(dut):
    """The latency is a constant, not a distribution.

    Measured per message type from the cycle the beat holding a message's
    last byte enters the DUT to the cycle its BBO is registered at the
    output. The whole point of the design is that this does not depend on
    the data, so the test asserts a single value per type (header offset
    aside - see below).
    """
    msgs = list(gen.generate(n_messages=1200, symbols=["AMD"], seed=106))
    env, _want, kinds = await run_stream(dut, msgs, locate=1, mpp=8, seed=5)

    wire = latency_report(env, kinds)
    # Framer-to-BBO strips out hdr_parse, whose own latency depends on
    # whether a message's last byte needs the NEXT beat for realignment.
    framed = {}
    for seq, t in kinds.items():
        framed.setdefault(t, set()).add(env.marker_cycle[seq] - env.framed_cycle[seq])
    for t in sorted(wire):
        dut._log.info("type %s: wire->BBO %s cycles, framer->BBO %s cycles",
                      t, sorted(wire[t]), sorted(framed[t]))
    # Every non-Replace type takes the same number of cycles once framed...
    base_types = [t for t in framed if t != "U"]
    fixed = {c for t in base_types for c in framed[t]}
    assert len(fixed) == 1, f"framer->BBO latency varies: {framed}"
    # ...and a Replace exactly one more (its second ladder update).
    assert framed["U"] == {next(iter(fixed)) + 1}, framed
    # hdr_parse adds at most one beat of realignment on top.
    spread = {c for s in wire.values() for c in s}
    assert max(spread) - min(spread) <= 2, f"wire latency spread {spread}"


@cocotb.test()
async def test_real_data_replay(dut):
    """Real Nasdaq data: the first N messages of a one-symbol extract.

    The file is data/AAPL.itch unless REAL_FILE names another extract from
    model/extract.py (MSFT, SPY, QQQ, AMD...). Skipped when absent: data/ is
    never committed. N comes from REAL_N, default 20000; REAL_N=0 replays
    the whole file, a complete trading day - slow, but it is the claim.
    """
    path = ROOT / "data" / os.environ.get("REAL_FILE", "AAPL.itch")
    if not path.exists():
        dut._log.warning("%s not present - skipping real-data replay", path)
        return
    # REAL_N=0 means the whole file: a complete trading day.
    n = int(os.environ.get("REAL_N", "20000")) or None
    msgs = list(read_messages(str(path), n))
    # AAPL's locate comes from its Stock Directory ('R') message.
    locate = next(decode(r).locate for r in msgs if chr(r[0]) == "R")
    env, want, _ = await run_stream(dut, msgs, locate=locate, mpp=20, seed=6)
    dut._log.info("real data: %d book messages matched the model "
                  "(stash peak %d)", len(want), int(dut.stat_stash_peak.value))
    # A full-day extract from the first message has no orphans, and at
    # these depths the 128K-entry table must not have dropped anything.
    assert int(dut.stat_collisions.value) == 0
    assert int(dut.stat_missing.value) == 0
