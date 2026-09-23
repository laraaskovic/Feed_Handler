"""Step 2b: replay a file through the golden book and emit a BBO trace.

This produces the file that every later verification stage compares against:
one line per book message, carrying the message index and the resulting top of
book.  In step 9 the RTL's BBO output is diffed against this line by line, so
the message index is the sequence number that makes a mismatch locatable.

Usage:
    python model/replay.py data/synth_small.itch --bbo data/synth_small.bbo.csv
    python model/replay.py data/AAPL.itch --locate 11 --print 20
    python model/replay.py data/AAPL.itch --bbo mine.csv && \
        python model/replay.py --compare mine.csv theirs.csv
"""

from __future__ import annotations

import argparse
import time

from book import MultiBook
from itch import BOOK_TYPES, StockDirectory, decode, price_to_str, read_messages


def replay(path: str, limit: int | None = None, locates: list[int] | None = None,
           bbo_path: str | None = None, print_first: int = 0,
           strict: bool = True) -> MultiBook:
    """Feed every book message through MultiBook, optionally writing a trace."""
    mb = MultiBook(strict=strict, locates=locates)
    out = open(bbo_path, "w", newline="\n") if bbo_path else None
    if out:
        out.write("msg_index,locate,timestamp,type,bid_px,bid_qty,ask_px,ask_qty\n")

    shown = 0
    index = 0
    t0 = time.perf_counter()

    for raw in read_messages(path, limit):
        t = chr(raw[0])

        # Stock Directory messages are not book messages, but they carry the
        # symbol names that make the output readable.
        if t == "R":
            m = decode(raw)
            if isinstance(m, StockDirectory):
                mb.note_directory(m.locate, m.symbol)
            continue

        if t not in BOOK_TYPES:
            continue

        m = decode(raw)
        b = mb.apply(m)
        if b is None:
            continue                       # filtered out by --locate
        index += 1

        if out:
            bp, bq, ap, aq = b.bbo()
            out.write(
                f"{index},{m.locate},{m.timestamp},{m.type},"
                f"{bp if bp is not None else ''},{bq},"
                f"{ap if ap is not None else ''},{aq}\n"
            )

        if shown < print_first:
            bp, bq, ap, aq = b.bbo()
            bid = f"{bq:>6} @ {price_to_str(bp)}" if bp is not None else " " * 15
            ask = f"{price_to_str(ap)} @ {aq:<6}" if ap is not None else ""
            print(f"{index:>6} {m.type} {b.symbol or m.locate:<8} "
                  f"{bid}  |  {ask}")
            shown += 1

    elapsed = time.perf_counter() - t0
    if out:
        out.close()

    _report(mb, index, elapsed, bbo_path)
    return mb


def _report(mb: MultiBook, index: int, elapsed: float, bbo_path: str | None) -> None:
    print()
    print(f"book messages applied : {index:,}")
    print(f"replay time           : {elapsed:.2f} s"
          + (f"  ({index / elapsed / 1e6:.2f} M msg/s)" if elapsed > 0 else ""))
    print(f"symbols touched       : {len(mb.books):,}")

    orphans = sum(b.orphans for b in mb.books.values())
    crossed = sum(b.crossed for b in mb.books.values())
    print(f"orphan references     : {orphans:,}"
          + ("   <- expected when replaying a prefix or mid-day extract"
             if orphans else "   (clean)"))
    violations = sum(b.violations for b in mb.books.values())
    if violations:
        print(f"INVARIANT VIOLATIONS  : {violations:,}   <- the model and the "
              f"feed disagree; rerun without --lax to see the first one")
    print(f"crossed-book messages : {crossed:,}"
          + (f" ({crossed / index:.4%})" if index else ""))

    # The busiest books are the interesting ones to look at by hand.
    busiest = sorted(mb.books.values(), key=lambda b: b.msgs, reverse=True)[:5]
    print("\nbusiest books:")
    for b in busiest:
        print(f"  {b.symbol or b.locate:<10} msgs={b.msgs:>12,} "
              f"peak_live_orders={b.peak_orders:>8,} "
              f"peak_levels={b.peak_levels:>6,}  {b!r}")
    if bbo_path:
        print(f"\nBBO trace written to {bbo_path}")


def compare(a_path: str, b_path: str, limit: int = 20) -> bool:
    """Diff two BBO traces line by line, reporting the first `limit` mismatches.

    Used two ways: against an independent open-source ITCH book reconstructor
    (to validate this model), and later against the RTL's own BBO output.
    """
    mismatches = 0
    lines = 0
    with open(a_path) as fa, open(b_path) as fb:
        for lines, (la, lb) in enumerate(zip(fa, fb), start=1):
            if la != lb:
                mismatches += 1
                if mismatches <= limit:
                    print(f"line {lines}:\n  a: {la.rstrip()}\n  b: {lb.rstrip()}")
        extra_a = sum(1 for _ in fa)
        extra_b = sum(1 for _ in fb)

    print(f"\ncompared {lines:,} lines, {mismatches:,} mismatches")
    if extra_a or extra_b:
        print(f"length differs: {a_path} has {extra_a} extra, "
              f"{b_path} has {extra_b} extra")
    return mismatches == 0 and not extra_a and not extra_b


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path", nargs="?", help="ITCH BinaryFILE to replay")
    p.add_argument("-n", "--limit", type=int, default=None)
    p.add_argument("--locate", type=int, action="append",
                   help="restrict to these stock locates (repeatable)")
    p.add_argument("--bbo", help="write a BBO trace CSV here")
    p.add_argument("--print", dest="print_first", type=int, default=0,
                   help="print the first N book updates")
    p.add_argument("--lax", action="store_true",
                   help="count invariant violations instead of raising")
    p.add_argument("--compare", nargs=2, metavar=("A", "B"),
                   help="diff two BBO traces instead of replaying")
    a = p.parse_args()

    if a.compare:
        ok = compare(*a.compare)
        raise SystemExit(0 if ok else 1)
    if not a.path:
        p.error("give a file to replay, or --compare A B")

    replay(a.path, a.limit, a.locate, a.bbo, a.print_first, strict=not a.lax)


if __name__ == "__main__":
    main()
