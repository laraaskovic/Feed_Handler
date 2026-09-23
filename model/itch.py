"""Nasdaq TotalView-ITCH 5.0 message definitions and decoder.

This is the single place in the project that knows the wire format.  Everything
else (scanner, extractor, order book, packetizer, and later the cocotb tests)
imports from here, so there is exactly one definition of the spec to get wrong.

Two things to know about the file format before reading the code:

1. BinaryFILE framing.  Nasdaq's downloadable sample files are NOT pcap, even
   when the download page says "pcap".  A file is just a flat sequence of
      [2-byte big-endian length][length bytes of message]
   repeated to EOF.  That 2-byte length prefix is also what MoldUDP64 uses
   inside a packet, so the framing logic written here comes back in step 3 and
   again in the RTL message framer (step 5).

2. Everything is big-endian ("network byte order"), which is why every struct
   format string below starts with '>'.  Timestamps are an awkward 6 bytes
   (nanoseconds since midnight Eastern), which struct cannot express, so they
   are unpacked as a 6-byte blob and converted by hand.

Field layout reference: every message begins with an 11-byte header
      type(1) locate(2) tracking(2) timestamp(6)
and the message-specific fields follow.
"""

from __future__ import annotations

import gzip
import io
import struct
from typing import Iterator, NamedTuple

# ---------------------------------------------------------------------------
# Message lengths, straight from the spec's "Message Formats" tables.
# Used to sanity-check the file: if a length prefix disagrees with the table,
# framing has drifted and everything downstream is garbage.
# ---------------------------------------------------------------------------
MSG_LENGTHS: dict[str, int] = {
    "S": 12,   # System Event
    "R": 39,   # Stock Directory
    "H": 25,   # Stock Trading Action
    "Y": 20,   # Reg SHO Short Sale Price Test Restriction
    "L": 26,   # Market Participant Position
    "V": 35,   # MWCB Decline Level
    "W": 12,   # MWCB Status
    "K": 28,   # IPO Quoting Period Update
    "J": 35,   # LULD Auction Collar
    "h": 21,   # Operational Halt
    "A": 36,   # Add Order - no MPID attribution
    "F": 40,   # Add Order with MPID attribution
    "E": 31,   # Order Executed
    "C": 36,   # Order Executed with Price
    "X": 23,   # Order Cancel
    "D": 19,   # Order Delete
    "U": 35,   # Order Replace
    "P": 44,   # Trade (non-cross)
    "Q": 40,   # Cross Trade
    "B": 19,   # Broken Trade
    "I": 50,   # Net Order Imbalance Indicator (NOII)
    "N": 20,   # Retail Price Improvement Indicator (RPII)
}

# The only seven types that change the order book.  The whole hardware
# pipeline exists to process these; everything else is dropped early.
BOOK_TYPES = frozenset("AFECXDU")

# Prices are integers with four implied decimals: 1234500 -> $123.45.
PRICE_SCALE = 10_000

# One cent, expressed in the feed's price units.  This is the "tick" used
# everywhere for the price-level table in step 8.
TICK = 100


def price_to_str(price: int) -> str:
    """Render a raw feed price as dollars, for human-readable output only."""
    return f"{price / PRICE_SCALE:.4f}"


# ---------------------------------------------------------------------------
# Decoded message types.
#
# NamedTuple (not dataclass) on purpose: it is as readable as a dataclass but
# allocates like a tuple, which matters when replaying tens of millions of
# messages.  Every message carries the common header fields plus its own.
# ---------------------------------------------------------------------------


class AddOrder(NamedTuple):
    """'A' / 'F' - a new resting order joins the book."""

    type: str            # 'A' or 'F'
    locate: int          # stock locate: per-day integer index for the symbol
    tracking: int
    timestamp: int       # nanoseconds since midnight
    order_ref: int       # 64-bit order id, unique per day across all symbols
    side: str            # 'B' buy or 'S' sell
    shares: int
    symbol: str          # 8 chars space padded in the wire format, stripped here
    price: int
    mpid: str = ""       # 'F' only: market participant id


class OrderExecuted(NamedTuple):
    """'E' / 'C' - shares of a resting order traded away.

    'C' reports a different execution price (e.g. a cross).  The important
    subtlety: the *book* still loses shares at the order's original price, so
    the exec price does not matter for book maintenance.  It is decoded only so
    the model can print trades.
    """

    type: str            # 'E' or 'C'
    locate: int
    tracking: int
    timestamp: int
    order_ref: int
    shares: int          # executed shares
    match: int           # match number, ties the two sides of a trade together
    printable: str = "Y"  # 'C' only: 'N' means exclude from trade statistics
    exec_price: int = 0   # 'C' only


class OrderCancel(NamedTuple):
    """'X' - partial cancel: reduce the order by `shares`, leave it resting."""

    type: str            # always 'X'
    locate: int
    tracking: int
    timestamp: int
    order_ref: int
    shares: int          # cancelled shares


class OrderDelete(NamedTuple):
    """'D' - remove the order entirely, whatever is left of it."""

    type: str            # always 'D'
    locate: int
    tracking: int
    timestamp: int
    order_ref: int


class OrderReplace(NamedTuple):
    """'U' - atomically delete `order_ref` and add `new_order_ref`.

    Note there is no side or symbol field: the replacement inherits both from
    the original order, so the model (and the hardware) must look the old order
    up before it can place the new one.  This is the message that makes the
    order table a hard requirement rather than a convenience.
    """

    type: str            # always 'U'
    locate: int
    tracking: int
    timestamp: int
    order_ref: int       # original, to be removed
    new_order_ref: int   # replacement id
    shares: int          # new displayed quantity
    price: int           # new price


class StockDirectory(NamedTuple):
    """'R' - the locate <-> symbol mapping, re-issued every trading day.

    Locate numbers are assigned per day, so these must be read from the start
    of the file in use; yesterday's number is meaningless.
    """

    type: str            # always 'R'
    locate: int
    tracking: int
    timestamp: int
    symbol: str
    round_lot_size: int


class SystemEvent(NamedTuple):
    """'S' - start/end of messages, start/end of market hours.

    Codes: 'O' start of messages, 'S' start of system hours, 'Q' start of
    market hours, 'M' end of market hours, 'E' end of system hours, 'C' end of
    messages.
    """

    type: str            # always 'S'
    locate: int
    tracking: int
    timestamp: int
    code: str


# ---------------------------------------------------------------------------
# struct formats.  Pre-compiled once; struct.Struct.unpack is noticeably
# faster than struct.unpack(fmt, ...) in a hot loop.
#
# Read these as: > big-endian, c 1 char, H uint16, 6s the timestamp blob,
# Q uint64, I uint32, 8s symbol.
# ---------------------------------------------------------------------------
_ADD = struct.Struct(">cHH6sQcI8sI")         # A, 36 bytes
_ADD_MPID = struct.Struct(">cHH6sQcI8sI4s")  # F, 40 bytes
_EXEC = struct.Struct(">cHH6sQIQ")           # E, 31 bytes
_EXEC_PRICE = struct.Struct(">cHH6sQIQcI")   # C, 36 bytes
_CANCEL = struct.Struct(">cHH6sQI")          # X, 23 bytes
_DELETE = struct.Struct(">cHH6sQ")           # D, 19 bytes
_REPLACE = struct.Struct(">cHH6sQQII")       # U, 35 bytes
_STOCK_DIR = struct.Struct(">cHH6s8sccIc")   # R, the first 27 of 39 bytes
_SYS_EVENT = struct.Struct(">cHH6sc")        # S, 12 bytes


def _ts(raw: bytes) -> int:
    """The 6-byte big-endian timestamp, as a helper so this appears once."""
    return int.from_bytes(raw, "big")


def decode(msg: bytes):
    """Decode one raw message body (no length prefix), or return None.

    None means "a message type this project does not model", so callers that
    only care about the seven book types can simply skip the Nones.
    """
    t = msg[0:1]

    if t == b"A":
        _, loc, trk, ts, ref, side, shares, sym, price = _ADD.unpack(msg)
        return AddOrder("A", loc, trk, _ts(ts), ref, side.decode(), shares,
                        sym.decode().rstrip(), price)

    if t == b"F":
        _, loc, trk, ts, ref, side, shares, sym, price, mpid = _ADD_MPID.unpack(msg)
        return AddOrder("F", loc, trk, _ts(ts), ref, side.decode(), shares,
                        sym.decode().rstrip(), price, mpid.decode().rstrip())

    if t == b"E":
        _, loc, trk, ts, ref, shares, match = _EXEC.unpack(msg)
        return OrderExecuted("E", loc, trk, _ts(ts), ref, shares, match)

    if t == b"C":
        _, loc, trk, ts, ref, shares, match, printable, px = _EXEC_PRICE.unpack(msg)
        return OrderExecuted("C", loc, trk, _ts(ts), ref, shares, match,
                             printable.decode(), px)

    if t == b"X":
        _, loc, trk, ts, ref, shares = _CANCEL.unpack(msg)
        return OrderCancel("X", loc, trk, _ts(ts), ref, shares)

    if t == b"D":
        _, loc, trk, ts, ref = _DELETE.unpack(msg)
        return OrderDelete("D", loc, trk, _ts(ts), ref)

    if t == b"U":
        _, loc, trk, ts, old, new, shares, price = _REPLACE.unpack(msg)
        return OrderReplace("U", loc, trk, _ts(ts), old, new, shares, price)

    if t == b"R":
        # Unpack only the prefix in use; the trailing flag bytes are ignored.
        _, loc, trk, ts, sym, _cat, _fin, lot, _lots_only = _STOCK_DIR.unpack(
            msg[: _STOCK_DIR.size]
        )
        return StockDirectory("R", loc, trk, _ts(ts), sym.decode().rstrip(), lot)

    if t == b"S":
        _, loc, trk, ts, code = _SYS_EVENT.unpack(msg)
        return SystemEvent("S", loc, trk, _ts(ts), code.decode())

    return None


# ---------------------------------------------------------------------------
# File reading
# ---------------------------------------------------------------------------


def open_maybe_gzip(path: str):
    """Open .gz transparently, plain files directly, both in binary mode."""
    if str(path).endswith(".gz"):
        # Wrapping gzip in a big BufferedReader matters: gzip's own reads are
        # small, and this is the difference between ~10 MB/s and ~100 MB/s.
        return io.BufferedReader(gzip.open(path, "rb"), buffer_size=1 << 20)
    return open(path, "rb", buffering=1 << 20)


def read_messages(path: str, limit: int | None = None) -> Iterator[bytes]:
    """Yield raw message bodies from a BinaryFILE, length prefix stripped.

    This is deliberately the dumbest possible framer: read 2 bytes, read that
    many bytes, repeat.  The RTL in step 5 does exactly this, except it has to
    do it 8 bytes per clock with messages straddling beat boundaries, which is
    why that version is hundreds of lines of SystemVerilog instead of six lines
    of Python.
    """
    n = 0
    with open_maybe_gzip(path) as f:
        while limit is None or n < limit:
            hdr = f.read(2)
            if len(hdr) < 2:
                return                      # clean EOF
            (length,) = struct.unpack(">H", hdr)
            body = f.read(length)
            if len(body) < length:
                raise EOFError(
                    f"truncated message after {n} messages: "
                    f"wanted {length} bytes, got {len(body)}"
                )
            yield body
            n += 1


def write_messages(path: str, messages: Iterator[bytes]) -> int:
    """Write message bodies back out in BinaryFILE form (length prefix added).

    Extracts stay in the same format as the original download, so every tool in
    model/ works on a full-day file and on a one-symbol extract alike.
    """
    count = 0
    with open(path, "wb") as f:
        for body in messages:
            f.write(struct.pack(">H", len(body)))
            f.write(body)
            count += 1
    return count
