"""Step 2c: measure the data to size the hardware.

Every number the RTL hard-codes should come from here rather than from a guess,
and each measurement maps to one design decision:

  1. Peak simultaneously live orders  -> order table depth (step 7).
     The table is shared across symbols because ITCH order references are
     unique per *day*, not per symbol, so the global peak is what matters.

  2. Daily price range, in ticks      -> price band width (step 8).
     The per-tick quantity table only covers a window around the opening
     price.  This measures how wide that window has to be, and how many orders
     would fall outside a given width.

  3. Hash collision rate              -> hash choice and collision policy
     (step 7).  A 64-bit order reference has to be squeezed into a table index.
     This simulates the actual table over the whole day and counts how often an
     insert lands on a bucket another live order already occupies.  That number
     decides whether a direct-mapped table is acceptable or whether it needs
     associativity.

  4. Burst rate                       -> throughput target.
     The peak messages-per-millisecond is the rate the no-backpressure pipeline
     has to survive, not the daily average.

Usage:
    python model/sizing.py data/AAPL.itch
    python model/sizing.py data/01302019.NASDAQ_ITCH50.gz -n 20000000 \
        --table-sizes 8192,16384,65536 --bands 1024,4096,16384
"""

from __future__ import annotations

import argparse
from collections import Counter

from book import MultiBook
from itch import (
    TICK,
    AddOrder,
    OrderCancel,
    OrderDelete,
    OrderExecuted,
    OrderReplace,
    StockDirectory,
    decode,
    price_to_str,
    read_messages,
)

# ---------------------------------------------------------------------------
# Candidate hash functions.
#
# All three are cheap in hardware, which is the point - a feed handler cannot
# afford a multi-cycle hash.  `bits` is log2(table size); each returns an index.
#
#   low     : the bottom bits of the reference.  Free (just wires).  Works only
#             if references are dense and sequential, which is worth testing
#             because Nasdaq order references often *are* roughly sequential.
#   xorfold : XOR the 64-bit reference down to `bits`.  Also free (a tree of
#             XOR gates), and immune to one region of the reference being
#             constant.
#   mult    : multiply by a 64-bit odd constant (the golden ratio) and keep the
#             top bits.  Best mixing of the three, but costs DSP slices and a
#             pipeline stage.
# ---------------------------------------------------------------------------
GOLDEN = 0x9E37_79B9_7F4A_7C15
MASK64 = (1 << 64) - 1


def h_low(ref: int, bits: int) -> int:
    return ref & ((1 << bits) - 1)


def h_xorfold(ref: int, bits: int) -> int:
    x = ref ^ (ref >> 16) ^ (ref >> 32) ^ (ref >> 48)
    return x & ((1 << bits) - 1)


def h_mult(ref: int, bits: int) -> int:
    return ((ref * GOLDEN) & MASK64) >> (64 - bits)


HASHES = {"low": h_low, "xorfold": h_xorfold, "mult": h_mult}


class HashSim:
    """Simulate a direct-mapped order table for one (hash, size) pair.

    Direct-mapped means one entry per bucket, plus a stored tag to tell whether
    the entry belongs to the reference being looked up - the structure step 7
    builds in BRAM.  A collision is an insert into a bucket some other live
    order already holds.  In hardware the choice then is to drop the new order
    (the book goes stale) or evict the old one (the book goes wrong), so this
    rate needs to be genuinely small, not just "usually fine".
    """

    def __init__(self, name: str, fn, bits: int):
        self.name = name
        self.bits = bits
        self.fn = fn
        self.slots: dict[int, int] = {}    # bucket -> order ref currently in it
        self.inserts = 0
        self.collisions = 0
        self.peak_used = 0

    def insert(self, ref: int) -> None:
        self.inserts += 1
        b = self.fn(ref, self.bits)
        occupant = self.slots.get(b)
        if occupant is not None and occupant != ref:
            self.collisions += 1
            return                          # policy here: drop the newcomer
        self.slots[b] = ref
        if len(self.slots) > self.peak_used:
            self.peak_used = len(self.slots)

    def remove(self, ref: int) -> None:
        b = self.fn(ref, self.bits)
        if self.slots.get(b) == ref:
            del self.slots[b]

    @property
    def rate(self) -> float:
        return self.collisions / self.inserts if self.inserts else 0.0


def measure(path: str, limit: int | None = None, table_sizes=(8192, 65536),
            bands=(1024, 4096, 16384), locates: list[int] | None = None):
    mb = MultiBook(strict=False, locates=locates)

    sims = [
        HashSim(name, fn, size.bit_length() - 1)
        for size in table_sizes
        for name, fn in HASHES.items()
    ]

    live: set[int] = set()
    peak_live = 0
    peak_live_ts = 0

    # Per-symbol price statistics, for the price band.
    px_min: dict[int, int] = {}
    px_max: dict[int, int] = {}
    px_open: dict[int, int] = {}           # first price seen, the band centre
    out_of_band = {b: 0 for b in bands}
    priced_msgs = 0

    # Burst rate: messages per millisecond of feed time.
    per_ms: Counter[int] = Counter()
    type_counts: Counter[str] = Counter()

    for raw in read_messages(path, limit):
        t = chr(raw[0])
        if t == "R":
            m = decode(raw)
            if isinstance(m, StockDirectory):
                mb.note_directory(m.locate, m.symbol)
            continue
        if t not in "AFECXDU":
            continue

        m = decode(raw)
        b = mb.apply(m)
        if b is None:
            continue

        type_counts[t] += 1
        per_ms[m.timestamp // 1_000_000] += 1

        # --- liveness tracking, so "live orders" means what the hardware sees
        if isinstance(m, AddOrder):
            live.add(m.order_ref)
            for s in sims:
                s.insert(m.order_ref)
        elif isinstance(m, OrderReplace):
            if m.order_ref in live:
                live.discard(m.order_ref)
                for s in sims:
                    s.remove(m.order_ref)
            live.add(m.new_order_ref)
            for s in sims:
                s.insert(m.new_order_ref)
        elif isinstance(m, OrderDelete):
            live.discard(m.order_ref)
            for s in sims:
                s.remove(m.order_ref)
        elif isinstance(m, (OrderExecuted, OrderCancel)):
            # A reduce only frees the entry if it took the last share, which
            # the book already worked out.
            if m.order_ref not in b.orders:
                live.discard(m.order_ref)
                for s in sims:
                    s.remove(m.order_ref)

        if len(live) > peak_live:
            peak_live = len(live)
            peak_live_ts = m.timestamp

        # --- price range
        price = getattr(m, "price", None)
        if price:
            priced_msgs += 1
            loc = m.locate
            px_open.setdefault(loc, price)
            if price < px_min.get(loc, 1 << 62):
                px_min[loc] = price
            if price > px_max.get(loc, 0):
                px_max[loc] = price
            centre = px_open[loc]
            for width in bands:
                # A band of `width` ticks centred on the opening price reaches
                # width/2 ticks either side.
                if abs(price - centre) > (width // 2) * TICK:
                    out_of_band[width] += 1

    return dict(
        mb=mb, sims=sims, peak_live=peak_live, peak_live_ts=peak_live_ts,
        px_min=px_min, px_max=px_max, px_open=px_open,
        out_of_band=out_of_band, priced_msgs=priced_msgs,
        per_ms=per_ms, type_counts=type_counts, bands=bands,
    )


def report(r: dict) -> None:
    mb: MultiBook = r["mb"]
    total = sum(r["type_counts"].values())

    print("=" * 72)
    print("1. ORDER TABLE DEPTH   (step 7)")
    print("=" * 72)
    peak = r["peak_live"]
    print(f"peak simultaneously live orders, all symbols : {peak:,}")
    print(f"  reached at timestamp                       : "
          f"{r['peak_live_ts'] / 1e9:.3f} s past midnight")
    # Hash tables want headroom: a table loaded much past ~50% collides hard.
    for factor in (2, 4):
        need = 1 << (max(peak * factor - 1, 1)).bit_length()
        print(f"  power-of-two depth at {factor}x headroom        : {need:,} entries")
    per_symbol = sorted((b.peak_orders, b.symbol or b.locate)
                        for b in mb.books.values())[-5:]
    print("  busiest single symbols (peak live orders)  : "
          + ", ".join(f"{s}={n:,}" for n, s in reversed(per_symbol)))

    print()
    print("=" * 72)
    print("2. PRICE BAND WIDTH   (step 8)")
    print("=" * 72)
    ranges = []
    for loc, lo in r["px_min"].items():
        hi = r["px_max"][loc]
        ranges.append(((hi - lo) // TICK, mb.symbols.get(loc, str(loc)), lo, hi))
    ranges.sort(reverse=True)
    print(f"{'symbol':<10}{'range (ticks)':>14}  low .. high")
    for ticks, sym, lo, hi in ranges[:8]:
        print(f"{sym:<10}{ticks:>14,}  {price_to_str(lo)} .. {price_to_str(hi)}")
    if len(ranges) > 8:
        print(f"... {len(ranges) - 8} more symbols")
    print()
    print(f"orders priced outside a band centred on the opening price "
          f"({r['priced_msgs']:,} priced messages):")
    for width in r["bands"]:
        n = r["out_of_band"][width]
        dollars = width * TICK / 10_000
        print(f"  {width:>6} ticks (${dollars:>8,.2f} wide): {n:>12,} "
              f"({n / r['priced_msgs']:.4%} outside)" if r["priced_msgs"] else "")

    print()
    print("=" * 72)
    print("3. HASH QUALITY   (step 7)")
    print("=" * 72)
    print(f"{'hash':<10}{'table':>10}{'inserts':>14}{'collisions':>13}"
          f"{'rate':>10}{'peak load':>11}")
    for s in r["sims"]:
        size = 1 << s.bits
        print(f"{s.name:<10}{size:>10,}{s.inserts:>14,}{s.collisions:>13,}"
              f"{s.rate:>9.3%}{s.peak_used / size:>10.1%}")
    print("  (policy simulated: on collision, drop the new order - so this rate")
    print("   is the fraction of orders the book would silently miss)")

    print()
    print("=" * 72)
    print("4. BURST RATE   (throughput target)")
    print("=" * 72)
    per_ms: Counter[int] = r["per_ms"]
    if per_ms:
        rates = sorted(per_ms.values())
        n = len(rates)
        print(f"active milliseconds            : {n:,}")
        print(f"book messages                  : {total:,}")
        print(f"mean per active ms             : {total / n:,.1f}")
        print(f"median / p99 / max per ms      : {rates[n // 2]:,} / "
              f"{rates[int(n * 0.99)]:,} / {rates[-1]:,}")
        # 8 bytes/beat at 156.25 MHz is 10 Gb/s; a ~36-byte message is 5 beats.
        peak_msgs_per_us = rates[-1] / 1000
        print(f"peak ~{peak_msgs_per_us:,.1f} messages/us -> at 156.25 MHz that is "
              f"~{156.25 / peak_msgs_per_us:,.0f} clocks per message" if peak_msgs_per_us else "")

    orphans = sum(b.orphans for b in mb.books.values())
    crossed = sum(b.crossed for b in mb.books.values())
    print()
    print(f"invariants: orphan refs={orphans:,}  crossed-book msgs={crossed:,}"
          f" ({crossed / total:.4%})" if total else "")


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path")
    p.add_argument("-n", "--limit", type=int, default=None)
    p.add_argument("--locate", type=int, action="append")
    p.add_argument("--table-sizes", default="8192,65536",
                   help="comma-separated power-of-two order table depths")
    p.add_argument("--bands", default="1024,4096,16384",
                   help="comma-separated price band widths, in ticks")
    a = p.parse_args()

    sizes = tuple(int(x) for x in a.table_sizes.split(","))
    for s in sizes:
        if s & (s - 1):
            raise SystemExit(f"table size {s} is not a power of two")
    bands = tuple(int(x) for x in a.bands.split(","))

    report(measure(a.path, a.limit, sizes, bands, a.locate))


if __name__ == "__main__":
    main()
