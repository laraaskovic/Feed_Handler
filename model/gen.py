"""Synthetic ITCH 5.0 feed generator.

Why this exists: the real Nasdaq sample file is 4.7 GB compressed, and nothing
in this project should be blocked on a download.  This module emits a *valid*
BinaryFILE that every other tool here reads exactly like the real thing, so the
parser, order book, sizing script and (later) the cocotb tests can all be
developed and regression-tested in seconds.

It is not a market simulator and does not try to be realistic about market
microstructure.  It only guarantees the properties the pipeline actually cares
about:

  * every E/C/X/D/U references an order that is currently live,
  * executions and cancels never take more shares than remain,
  * replaces carry a genuinely new order reference,
  * the message mix and the ratio of adds to deletes are in the right ballpark.

Later, in step 9, the `weights` and `--seed` knobs become the constrained-random
stimulus generator: crank up replaces, or squeeze the price band, to target a
specific corner case in the RTL.
"""

from __future__ import annotations

import argparse
import random
import struct
from typing import Iterator

from itch import MSG_LENGTHS, TICK, write_messages

# Message mix, roughly the shape of a real trading day: adds dominate, most
# orders die by cancel or delete rather than trading.
DEFAULT_WEIGHTS = {
    "A": 40,   # add, no attribution
    "F": 4,    # add with MPID
    "D": 28,   # delete
    "X": 12,   # partial cancel
    "E": 8,    # execute
    "C": 1,    # execute at a different price
    "U": 7,    # replace
}


class _Sym:
    """Per-symbol generator state: a price level to wander around, and the
    live orders available to be cancelled, executed or replaced."""

    def __init__(self, name: str, locate: int, base_price: int):
        self.name = name
        self.locate = locate
        self.base = base_price          # in feed price units (1/10000 dollar)
        self.live: dict[int, tuple[str, int, int]] = {}  # ref -> (side, price, shares)


def _hdr(msg_type: str, locate: int, tracking: int, ts: int) -> bytes:
    """The common 11-byte header: type, stock locate, tracking, timestamp."""
    return (
        msg_type.encode()
        + struct.pack(">HH", locate, tracking)
        + ts.to_bytes(6, "big")
    )


def generate(
    n_messages: int = 100_000,
    symbols: list[str] | None = None,
    seed: int = 0,
    weights: dict[str, int] | None = None,
    band_ticks: int = 400,
) -> Iterator[bytes]:
    """Yield raw ITCH message bodies (no length prefix).

    band_ticks bounds how far prices wander from the opening price, which is
    what step 8's price-level table has to cover.  Shrinking it is how to test
    a dense book; widening it past the hardware band is how to test the
    out-of-band flag.
    """
    rng = random.Random(seed)
    symbols = symbols or ["AAPL", "MSFT", "SPY"]
    w = dict(weights or DEFAULT_WEIGHTS)

    syms = [
        _Sym(name, locate=i + 1, base_price=rng.randrange(50, 400) * 10_000)
        for i, name in enumerate(symbols)
    ]

    # Nanoseconds since midnight; start at 09:30:00 and advance by a random
    # gap each message so timestamps are monotonic like the real feed.
    ts = 9 * 3600 * 1_000_000_000 + 30 * 60 * 1_000_000_000
    next_ref = 1000

    # System event: start of messages.
    yield _hdr("S", 0, 0, ts) + b"O"

    # Stock Directory, one per symbol.  These carry the locate <-> symbol
    # mapping, exactly as they do at the head of a real file.
    for s in syms:
        body = (
            _hdr("R", s.locate, 0, ts)
            + s.name.ljust(8).encode()      # 8-byte space-padded symbol
            + b"Q"                          # market category: Nasdaq Global Select
            + b"N"                          # financial status indicator
            + struct.pack(">I", 100)        # round lot size
            + b"N"                          # round lots only
            + b"C"                          # issue classification
            + b"  "                         # issue subtype
            + b"P"                          # authenticity: live/production
            + b"N"                          # short sale threshold
            + b"N"                          # IPO flag
            + b"1"                          # LULD reference price tier
            + b"N"                          # ETP flag
            + struct.pack(">I", 0)          # ETP leverage factor
            + b"N"                          # inverse indicator
        )
        assert len(body) == MSG_LENGTHS["R"], len(body)
        yield body

    # Start of market hours.
    yield _hdr("S", 0, 0, ts) + b"Q"

    types = list(w)
    cum_weights = list(w.values())

    for _ in range(n_messages):
        ts += rng.randrange(1, 50_000)      # 1ns .. 50us between messages
        s = rng.choice(syms)
        t = rng.choices(types, weights=cum_weights, k=1)[0]

        # Any message that touches an existing order needs one to exist.
        # Falling back to an add keeps the mix honest without ever emitting a
        # reference to a dead order.
        if t not in ("A", "F") and not s.live:
            t = "A"

        if t in ("A", "F"):
            ref = next_ref
            next_ref += 1
            side = rng.choice("BS")
            # Bids sit below the base price, offers above, both within the band.
            offset = rng.randrange(1, band_ticks // 2) * TICK
            price = s.base - offset if side == "B" else s.base + offset
            shares = rng.choice([100, 100, 200, 300, 500, 1000])
            body = (
                _hdr(t, s.locate, 0, ts)
                + struct.pack(">Q", ref)
                + side.encode()
                + struct.pack(">I", shares)
                + s.name.ljust(8).encode()
                + struct.pack(">I", price)
            )
            if t == "F":
                body += b"NSDQ"             # market participant id
            s.live[ref] = (side, price, shares)

        else:
            # O(live) per message; fine for the file sizes used here, and kept
            # simple on purpose since generator speed is not the point.
            ref = rng.choice(list(s.live))
            side, price, shares = s.live[ref]

            # A cancel that would take the whole order is a Delete on the real
            # feed, so never emit an 'X' that empties an order.
            if t == "X" and shares <= 1:
                t = "D"

            if t == "D":
                body = _hdr("D", s.locate, 0, ts) + struct.pack(">Q", ref)
                del s.live[ref]

            elif t == "X":
                # Partial cancel only: a cancel that would take everything is
                # expressed as a Delete on the real feed.
                take = rng.randrange(1, shares) if shares > 1 else 1
                body = (
                    _hdr("X", s.locate, 0, ts)
                    + struct.pack(">QI", ref, take)
                )
                s.live[ref] = (side, price, shares - take)

            elif t in ("E", "C"):
                take = rng.randrange(1, shares + 1)
                match = rng.randrange(1, 1 << 32)
                body = (
                    _hdr(t, s.locate, 0, ts)
                    + struct.pack(">QIQ", ref, take, match)
                )
                if t == "C":
                    body += b"Y" + struct.pack(">I", price)
                if take >= shares:
                    del s.live[ref]
                else:
                    s.live[ref] = (side, price, shares - take)

            else:  # 'U' replace
                new_ref = next_ref
                next_ref += 1
                offset = rng.randrange(1, band_ticks // 2) * TICK
                new_price = s.base - offset if side == "B" else s.base + offset
                new_shares = rng.choice([100, 200, 300, 500])
                body = (
                    _hdr("U", s.locate, 0, ts)
                    + struct.pack(">QQII", ref, new_ref, new_shares, new_price)
                )
                del s.live[ref]
                s.live[new_ref] = (side, new_price, new_shares)

        assert len(body) == MSG_LENGTHS[t], f"{t}: {len(body)} != {MSG_LENGTHS[t]}"
        yield body

    yield _hdr("S", 0, 0, ts) + b"M"        # end of market hours
    yield _hdr("S", 0, 0, ts) + b"C"        # end of messages


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("out", help="output .itch file (BinaryFILE format)")
    p.add_argument("-n", "--messages", type=int, default=100_000)
    p.add_argument("-s", "--symbols", default="AAPL,MSFT,SPY")
    p.add_argument("--seed", type=int, default=0)
    p.add_argument("--band-ticks", type=int, default=400,
                   help="how wide a price band prices wander over")
    a = p.parse_args()

    n = write_messages(
        a.out,
        generate(a.messages, a.symbols.split(","), a.seed, band_ticks=a.band_ticks),
    )
    print(f"wrote {n} messages to {a.out}")


if __name__ == "__main__":
    main()
