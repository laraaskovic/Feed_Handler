"""Measure the GLOBAL peak of simultaneously live orders across all symbols.

This is the one number that sets the order table depth in step 7, and it cannot
be taken from a single-symbol extract.  ITCH order references are unique per
*day across every symbol*, so one shared table serves all 8,713 books, and what
it must hold is the global high-water mark - not AAPL's 42,774.

Deliberately narrow and fast: no order book, no price levels, no hash
simulation.  Just "is this reference still live?", which is the only question
the depth depends on.  sizing.py does the richer analysis on a single symbol
where it can afford to.

Tracking liveness still needs remaining shares, because E/C/X only free an
entry when they take the last share - the same rule the hardware follows when
it decides whether to invalidate a table entry.

Usage:
    python model/peak_orders.py data/01302019.NASDAQ_ITCH50.gz
    python model/peak_orders.py data/01302019.NASDAQ_ITCH50.gz -n 50000000
"""

from __future__ import annotations

import argparse
import time

from itch import open_maybe_gzip


def measure(path: str, limit: int | None = None, report_every: int = 20_000_000):
    # ref -> remaining shares.  A plain dict is the fastest structure Python
    # has for this, and it is the hottest object in the whole model.
    live: dict[int, int] = {}

    peak = 0
    peak_ts = 0
    peak_msg = 0
    n = 0
    # Sampled occupancy over the day, so the shape is visible and not just the
    # single maximum: a table sized for a brief spike is wasteful, one sized
    # for the median is wrong.
    samples: list[tuple[int, int]] = []

    t0 = time.perf_counter()
    f = open_maybe_gzip(path)
    try:
        while limit is None or n < limit:
            hdr = f.read(2)
            if len(hdr) < 2:
                break
            length = (hdr[0] << 8) | hdr[1]
            m = f.read(length)
            if len(m) < length:
                break
            n += 1
            t = m[0]

            # Inlined field slicing rather than struct.unpack: this loop runs
            # 368 million times, and the unpack call overhead dominates.
            if t == 0x41 or t == 0x46:              # 'A' / 'F'  add order
                ref = int.from_bytes(m[11:19], "big")
                live[ref] = int.from_bytes(m[20:24], "big")
                if len(live) > peak:
                    peak = len(live)
                    peak_ts = int.from_bytes(m[5:11], "big")
                    peak_msg = n

            elif t == 0x44:                          # 'D'  delete
                live.pop(int.from_bytes(m[11:19], "big"), None)

            elif t == 0x55:                          # 'U'  replace
                live.pop(int.from_bytes(m[11:19], "big"), None)
                live[int.from_bytes(m[19:27], "big")] = int.from_bytes(m[27:31], "big")

            elif t == 0x45 or t == 0x43:             # 'E' / 'C'  executed
                ref = int.from_bytes(m[11:19], "big")
                rem = live.get(ref)
                if rem is not None:
                    rem -= int.from_bytes(m[19:23], "big")
                    if rem > 0:
                        live[ref] = rem
                    else:
                        del live[ref]

            elif t == 0x58:                          # 'X'  cancel
                ref = int.from_bytes(m[11:19], "big")
                rem = live.get(ref)
                if rem is not None:
                    rem -= int.from_bytes(m[19:23], "big")
                    if rem > 0:
                        live[ref] = rem
                    else:
                        del live[ref]

            if n % report_every == 0:
                ts = int.from_bytes(m[5:11], "big")
                samples.append((ts, len(live)))
                rate = n / (time.perf_counter() - t0) / 1e6
                print(f"  {n:>12,} messages  live={len(live):>9,}  "
                      f"peak={peak:>9,}  ({rate:.2f} M msg/s)", flush=True)
    finally:
        f.close()

    return dict(messages=n, peak=peak, peak_ts=peak_ts, peak_msg=peak_msg,
                final_live=len(live), elapsed=time.perf_counter() - t0,
                samples=samples)


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path")
    p.add_argument("-n", "--limit", type=int, default=None)
    a = p.parse_args()

    r = measure(a.path, a.limit)

    print()
    print("=" * 68)
    print("GLOBAL ORDER TABLE SIZING  (step 7)")
    print("=" * 68)
    print(f"messages scanned            : {r['messages']:,}")
    print(f"scan time                   : {r['elapsed']:.0f} s")
    print(f"PEAK live orders (all symbols): {r['peak']:,}")
    print(f"  at message                : {r['peak_msg']:,}")
    print(f"  at time                   : {r['peak_ts'] / 1e9 / 3600:.2f} h "
          f"past midnight")
    print(f"live at end of scan         : {r['final_live']:,}")

    print()
    print("power-of-two depths, with headroom (a hash table collides at")
    print("roughly its load factor, so headroom is not optional):")
    for factor in (1, 2, 4, 8):
        need = 1 << max(r["peak"] * factor - 1, 1).bit_length()
        load = r["peak"] / need
        print(f"  {factor}x -> {need:>10,} entries   peak load {load:>6.1%}")

    # An entry is {tag, side, price, qty}; the tag is what is left of the
    # 64-bit reference after the index bits, so wider tables need smaller tags.
    print()
    print("BRAM cost, assuming a 64-bit entry {tag, side, price_ticks, qty}:")
    for factor in (2, 4):
        need = 1 << max(r["peak"] * factor - 1, 1).bit_length()
        bits = need * 64
        print(f"  {factor}x -> {need:>10,} x 64b = {bits / 8 / 1024:>9,.0f} KiB "
              f"= {bits / (36 * 1024):>5.0f} x 36Kb BRAM")


if __name__ == "__main__":
    main()
