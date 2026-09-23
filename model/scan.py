"""Step 1a: count message types in an ITCH BinaryFILE and check the framing.

Run this first on any new data file.  It answers three questions:

  * Is the framing right?  Every message's length prefix is compared against
    the length table in the spec.  If those disagree, the reader has lost sync
    and nothing else in the project will work.
  * What is the traffic mix?  The share of A/F/D/X/E/C/U is what sizes the
    hardware: if 40% of messages are adds, the order table has to absorb adds
    at close to line rate.
  * How fast can plain Python go?  The MB/s number at the bottom is the
    baseline that makes the case for hardware concrete.  A 10 Gb/s link is
    1250 MB/s.

Usage:
    python model/scan.py data/01302019.NASDAQ_ITCH50.gz -n 5000000
"""

from __future__ import annotations

import argparse
import time
from collections import Counter

from itch import BOOK_TYPES, MSG_LENGTHS, decode, read_messages


def scan(path: str, limit: int | None = None):
    counts: Counter[str] = Counter()
    bad_lengths: Counter[str] = Counter()
    unknown: Counter[str] = Counter()
    total_bytes = 0
    first_ts = last_ts = None

    t0 = time.perf_counter()
    for msg in read_messages(path, limit):
        t = chr(msg[0])
        counts[t] += 1
        # +2 for the length prefix, so the throughput number reflects the file.
        total_bytes += len(msg) + 2

        expected = MSG_LENGTHS.get(t)
        if expected is None:
            unknown[t] += 1
        elif expected != len(msg):
            bad_lengths[t] += 1

        # Timestamps come from the 11-byte header, which is the same for every
        # type, so they can be read without a full decode.
        ts = int.from_bytes(msg[5:11], "big")
        if first_ts is None:
            first_ts = ts
        last_ts = ts

    elapsed = time.perf_counter() - t0
    return counts, bad_lengths, unknown, total_bytes, elapsed, first_ts, last_ts


def fmt_ns(ns: int | None) -> str:
    """Nanoseconds since midnight -> HH:MM:SS.fff, for readable output."""
    if ns is None:
        return "-"
    s, frac = divmod(ns, 1_000_000_000)
    h, rem = divmod(s, 3600)
    m, s = divmod(rem, 60)
    return f"{h:02d}:{m:02d}:{s:02d}.{frac // 1_000_000:03d}"


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path", help="ITCH BinaryFILE (.gz or plain)")
    p.add_argument("-n", "--limit", type=int, default=None,
                   help="stop after N messages (a prefix is enough to start)")
    p.add_argument("--sample", type=int, default=0,
                   help="also print the first N decoded book messages")
    a = p.parse_args()

    counts, bad, unknown, nbytes, elapsed, first_ts, last_ts = scan(a.path, a.limit)
    total = sum(counts.values())

    print(f"file           : {a.path}")
    print(f"messages       : {total:,}")
    print(f"bytes read     : {nbytes:,} ({nbytes / 1e6:.1f} MB)")
    print(f"time window    : {fmt_ns(first_ts)} .. {fmt_ns(last_ts)}")
    print(f"parse time     : {elapsed:.2f} s")
    if elapsed > 0:
        print(f"python throughput: {nbytes / elapsed / 1e6:.1f} MB/s, "
              f"{total / elapsed / 1e6:.2f} M msg/s")
    print()

    print(f"{'type':<6}{'count':>14}{'share':>9}  book?")
    for t, c in counts.most_common():
        mark = "yes" if t in BOOK_TYPES else ""
        print(f"{t:<6}{c:>14,}{c / total:>8.2%}  {mark}")

    book_msgs = sum(c for t, c in counts.items() if t in BOOK_TYPES)
    print()
    print(f"book-affecting : {book_msgs:,} ({book_msgs / total:.2%} of all messages)")

    if bad:
        print(f"\n!! length mismatches vs spec table: {dict(bad)}")
        print("   framing is broken, or the file is not ITCH 5.0")
    if unknown:
        print(f"\n?? message types not in the spec table: {dict(unknown)}")

    if a.sample:
        print(f"\nfirst {a.sample} decoded book messages:")
        shown = 0
        for msg in read_messages(a.path):
            if chr(msg[0]) in BOOK_TYPES:
                print(" ", decode(msg))
                shown += 1
                if shown >= a.sample:
                    break


if __name__ == "__main__":
    main()
