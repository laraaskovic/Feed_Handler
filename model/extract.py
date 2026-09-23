"""Step 1b: list symbols, and extract one symbol's messages into data/.

Why a separate step: a full trading day is ~30 GB uncompressed and mixes ~8500
symbols together.  A single liquid symbol is a few hundred MB at most, which is
small enough to replay through a simulator after every RTL edit.

The mechanism that makes this easy is the *stock locate*.  Stock Directory
('R') messages at the head of the file map each 8-character symbol to a small
integer, and every subsequent message carries that integer in its header.  So:

  * filtering by locate catches all seven book message types, including the
    ones (E, C, X, D, U) that never mention the symbol at all,
  * the same integer becomes the book index in hardware, which is why no RTL
    module ever has to compare 8-byte strings.

Locates are reassigned every trading day, so they must be read from the same
file being replayed.

Usage:
    python model/extract.py data/01302019.NASDAQ_ITCH50.gz --list | head -20
    python model/extract.py data/01302019.NASDAQ_ITCH50.gz --symbol AAPL \
        --out data/AAPL.itch
"""

from __future__ import annotations

import argparse
import struct
import time
from pathlib import Path

from itch import (
    BOOK_TYPES,
    StockDirectory,
    decode,
    open_maybe_gzip,
    read_messages,
    write_messages,
)


def read_directory(path: str, max_scan: int = 2_000_000) -> dict[str, int]:
    """Return {symbol: locate} by reading the 'R' messages near the file head.

    Stock Directory messages are all emitted before the trading session opens,
    so scanning a prefix is enough; max_scan just stops this from walking the
    whole 30 GB if the file turns out not to look as expected.
    """
    mapping: dict[str, int] = {}
    seen = 0
    with open_maybe_gzip(path) as f:
        while seen < max_scan:
            hdr = f.read(2)
            if len(hdr) < 2:
                break
            (length,) = struct.unpack(">H", hdr)
            body = f.read(length)
            if len(body) < length:
                break
            seen += 1
            if body[0:1] == b"R":
                m = decode(body)
                assert isinstance(m, StockDirectory)
                mapping[m.symbol] = m.locate
            elif mapping and body[0:1] in (b"A", b"F"):
                # Order flow has started, so the directory section is over.
                break
    return mapping


def extract(path: str, locate: int, out: str, limit: int | None = None) -> int:
    """Copy every book message for `locate` into `out`, plus its 'R' message.

    The output is the same BinaryFILE format as the input, so every other tool
    in model/ reads a full-day file and a one-symbol extract identically.
    """
    return extract_many(path, {locate: out}, limit)[locate]


def extract_many(path: str, targets: dict[int, str],
                 limit: int | None = None) -> dict[int, int]:
    """Extract several symbols in ONE pass, given {locate: output path}.

    A pass over a full-day file costs minutes, almost all of it gzip
    decompression, and that cost is identical whether we filter for one symbol
    or twenty.  So pulling several at once is nearly free, and having a few
    symbols with different liquidity profiles on hand is useful: a heavily
    traded name and a quiet one stress the order table very differently.
    """
    files = {loc: open(out, "wb") for loc, out in targets.items()}
    counts = {loc: 0 for loc in targets}
    try:
        for msg in read_messages(path, limit):
            t = chr(msg[0])
            if t not in BOOK_TYPES and t != "R":
                continue
            # The header layout is identical for all types, so the locate can
            # be read at bytes 1..3 without decoding the whole message.
            (msg_locate,) = struct.unpack(">H", msg[1:3])
            f = files.get(msg_locate)
            if f is not None:
                f.write(struct.pack(">H", len(msg)))
                f.write(msg)
                counts[msg_locate] += 1
    finally:
        for f in files.values():
            f.close()
    return counts


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path", help="full-day ITCH BinaryFILE (.gz or plain)")
    p.add_argument("--list", action="store_true", help="print symbol -> locate")
    p.add_argument("--symbol", action="append", default=None,
                   help="symbol to extract, e.g. AAPL (repeatable; all are "
                        "extracted in a single pass over the input)")
    p.add_argument("--out", help="output file, only valid with one --symbol "
                                 "(default data/<SYMBOL>.itch)")
    p.add_argument("-n", "--limit", type=int, default=None,
                   help="only scan the first N messages of the input")
    a = p.parse_args()

    directory = read_directory(a.path)
    print(f"found {len(directory)} Stock Directory entries")

    if a.list or not a.symbol:
        for sym, loc in sorted(directory.items()):
            print(f"{sym:<10}{loc}")
        if not a.symbol:
            return

    if a.out and len(a.symbol) > 1:
        raise SystemExit("--out only makes sense with a single --symbol")

    missing = [s for s in a.symbol if s not in directory]
    if missing:
        raise SystemExit(
            f"not in this day's Stock Directory: {', '.join(missing)}. "
            f"Run with --list to see valid symbols."
        )

    # Default outputs go to the repo's data/ directory no matter which
    # directory this was invoked from - the other tools in model/ are normally
    # run from inside model/, where a bare "data/" would not resolve.
    data_dir = Path(__file__).resolve().parent.parent / "data"
    data_dir.mkdir(exist_ok=True)

    targets = {
        directory[s]: (a.out if a.out else str(data_dir / f"{s}.itch"))
        for s in a.symbol
    }
    names = {directory[s]: s for s in a.symbol}
    for loc, out in targets.items():
        print(f"{names[loc]:<8} locate {loc:<6} -> {out}")

    t0 = time.perf_counter()
    counts = extract_many(a.path, targets, a.limit)
    elapsed = time.perf_counter() - t0

    print()
    for loc, n in sorted(counts.items(), key=lambda kv: -kv[1]):
        print(f"{names[loc]:<8} {n:>12,} messages")
    print(f"\none pass, {elapsed:.1f} s")
    print("remember: these locate numbers are only valid for this trading day")


if __name__ == "__main__":
    main()
