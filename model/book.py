"""Step 2: the golden-model order book.

This is the reference every RTL module gets checked against, so it is written
to be obviously correct rather than fast, and its data structures deliberately
mirror the hardware ones:

    Book.orders   -> step 7's order table (BRAM, hashed by order reference)
    Book.bids/asks-> step 8's per-tick quantity table
    Book.best_bid -> step 8's priority encoder over the non-empty bitmap

Three rules cover all seven book messages:

  add     (A, F)     insert an order, add its shares to its price level
  reduce  (E, C, X)  take shares off an order and its price level; if nothing
                     remains, the order is gone
  delete  (D)        remove whatever remains of the order
  replace (U)        delete the old order, then add a new one that inherits the
                     old order's side and symbol but gets a new id/price/size

Two facts drive most of the subtlety:

  * An order reference is unique per day across all symbols, and E/C/X/D carry
    *only* that reference - no side, no price, no quantity of the resting
    order.  So the book cannot be maintained without a lookup table.  This is
    why step 7 exists.
  * 'C' (execute at a different price) removes shares at the order's *original*
    price.  The printed execution price is trade-reporting information and must
    not touch the book.

On missing orders: an execute or delete for an order this book never saw is
normal when replaying a *prefix* or a mid-day extract, because the order was
added before the replay window opened.  Those are counted as `orphans` rather
than treated as errors.  A nonzero orphan count in a full-day replay from the
first message, however, is a real bug.
"""

from __future__ import annotations

from typing import Iterable

from itch import (
    AddOrder,
    OrderCancel,
    OrderDelete,
    OrderExecuted,
    OrderReplace,
    price_to_str,
)

# Indices into the order tuple stored in Book.orders.  A plain tuple is used
# instead of a class because there can be millions of live orders and this is
# the single hottest structure in the model.
SIDE, PRICE, SHARES = 0, 1, 2


class BookError(AssertionError):
    """An invariant was violated: the model and the feed disagree."""


class Book:
    """The book for one symbol (one stock locate)."""

    def __init__(self, locate: int, symbol: str = "", strict: bool = True):
        self.locate = locate
        self.symbol = symbol
        self.strict = strict

        # order reference -> (side, price, remaining shares)
        self.orders: dict[int, tuple[str, int, int]] = {}
        # price -> total shares resting at that price, per side
        self.bids: dict[int, int] = {}
        self.asks: dict[int, int] = {}

        # Cached best prices.  None means "unknown, recompute on demand".
        # A best price only has to be recomputed when the top level empties,
        # which is exactly what the hardware's priority encoder does in one
        # cycle; here it is an occasional max()/min() over the live levels.
        self._best_bid: int | None = None
        self._best_ask: int | None = None

        # Counters used for sizing (step 2) and as invariant evidence.
        self.msgs = 0
        self.orphans = 0          # reference to an order this book never saw
        self.crossed = 0          # messages that left best bid >= best ask
        self.peak_orders = 0      # high-water mark of simultaneously live orders
        self.peak_levels = 0      # high-water mark of non-empty price levels
        self.violations = 0       # invariant breaches (counted even when lax)

    # -- price levels ------------------------------------------------------

    def _levels(self, side: str) -> dict[int, int]:
        return self.bids if side == "B" else self.asks

    def _add_qty(self, side: str, price: int, qty: int) -> None:
        levels = self._levels(side)
        levels[price] = levels.get(price, 0) + qty
        # A new or growing level can only improve the best price, so the cache
        # can be updated without a rescan.
        if side == "B":
            if self._best_bid is not None and price > self._best_bid:
                self._best_bid = price
        else:
            if self._best_ask is not None and price < self._best_ask:
                self._best_ask = price

    def _sub_qty(self, side: str, price: int, qty: int) -> None:
        levels = self._levels(side)
        remaining = levels.get(price, 0) - qty
        if remaining < 0:
            self._fail(f"level {price_to_str(price)} {side} went negative "
                       f"({levels.get(price, 0)} - {qty})")
            remaining = 0
        if remaining == 0:
            levels.pop(price, None)
            # The top of book may have just emptied; force a recompute.
            if side == "B" and price == self._best_bid:
                self._best_bid = None
            elif side == "S" and price == self._best_ask:
                self._best_ask = None
        else:
            levels[price] = remaining

    @property
    def best_bid(self) -> int | None:
        if self._best_bid is None and self.bids:
            self._best_bid = max(self.bids)
        return self._best_bid

    @property
    def best_ask(self) -> int | None:
        if self._best_ask is None and self.asks:
            self._best_ask = min(self.asks)
        return self._best_ask

    def bbo(self) -> tuple[int | None, int, int | None, int]:
        """(bid price, bid size, ask price, ask size) at the top of book.

        This four-tuple is the pipeline's output, and the thing compared
        message-by-message against the RTL in step 9.
        """
        bp, ap = self.best_bid, self.best_ask
        return (bp, self.bids.get(bp, 0) if bp is not None else 0,
                ap, self.asks.get(ap, 0) if ap is not None else 0)

    # -- the three primitive operations ------------------------------------

    def add(self, ref: int, side: str, price: int, shares: int) -> None:
        if ref in self.orders:
            # Order references are unique per day, so this never happens on a
            # sound feed; _fail raises in strict mode and counts in lax mode.
            self._fail(f"add of order {ref} that is already live")
        self.orders[ref] = (side, price, shares)
        self._add_qty(side, price, shares)
        if len(self.orders) > self.peak_orders:
            self.peak_orders = len(self.orders)
        levels = len(self.bids) + len(self.asks)
        if levels > self.peak_levels:
            self.peak_levels = levels

    def reduce(self, ref: int, shares: int) -> bool:
        """Take `shares` off an order.  Returns False if the order is unknown."""
        order = self.orders.get(ref)
        if order is None:
            self.orphans += 1
            return False
        if shares > order[SHARES]:
            self._fail(f"reduce of {shares} on order {ref} holding "
                       f"{order[SHARES]}")
            shares = order[SHARES]
        self._sub_qty(order[SIDE], order[PRICE], shares)
        remaining = order[SHARES] - shares
        if remaining == 0:
            del self.orders[ref]
        else:
            self.orders[ref] = (order[SIDE], order[PRICE], remaining)
        return True

    def delete(self, ref: int) -> bool:
        order = self.orders.pop(ref, None)
        if order is None:
            self.orphans += 1
            return False
        self._sub_qty(order[SIDE], order[PRICE], order[SHARES])
        return True

    def replace(self, old_ref: int, new_ref: int, price: int, shares: int) -> bool:
        """Delete `old_ref`, add `new_ref` inheriting the old order's side.

        The side lookup is the reason a replace cannot be handled without
        reading the order table first - worth remembering for step 6, where a
        replace can either be split into two operations or kept as one.
        """
        order = self.orders.get(old_ref)
        if order is None:
            self.orphans += 1
            return False
        side = order[SIDE]
        self.delete(old_ref)
        self.add(new_ref, side, price, shares)
        return True

    # -- message dispatch --------------------------------------------------

    def apply(self, m) -> None:
        """Apply one decoded message.  Unknown types are ignored."""
        self.msgs += 1

        if isinstance(m, AddOrder):
            self.add(m.order_ref, m.side, m.price, m.shares)
        elif isinstance(m, (OrderExecuted, OrderCancel)):
            # E, C and X are all the same operation as far as the book is
            # concerned: reduce the named order by `shares`.
            self.reduce(m.order_ref, m.shares)
        elif isinstance(m, OrderDelete):
            self.delete(m.order_ref)
        elif isinstance(m, OrderReplace):
            self.replace(m.order_ref, m.new_order_ref, m.price, m.shares)
        else:
            self.msgs -= 1
            return

        bp, ap = self.best_bid, self.best_ask
        if bp is not None and ap is not None and bp >= ap:
            # A locked or crossed book is not impossible in a real feed (odd
            # lots, hidden liquidity, halts), but it should be rare.  A high
            # count means the book maintenance is wrong.
            self.crossed += 1

    def _fail(self, msg: str) -> None:
        # Counted unconditionally, so a --lax run still reports how many times
        # the feed and the model disagreed instead of hiding it.
        self.violations += 1
        text = f"[locate {self.locate} {self.symbol} msg #{self.msgs}] {msg}"
        if self.strict:
            raise BookError(text)

    def __repr__(self) -> str:
        bp, bq, ap, aq = self.bbo()
        b = f"{bq}@{price_to_str(bp)}" if bp is not None else "-"
        a = f"{aq}@{price_to_str(ap)}" if ap is not None else "-"
        return f"<Book {self.symbol or self.locate} {b} / {a}>"


class MultiBook:
    """One Book per stock locate, created on demand.

    The hardware equivalent is a per-locate set of tables indexed directly by
    the locate field, which is exactly why the RTL never compares 8-character
    symbol strings: the feed hands over an integer index for free.
    """

    def __init__(self, strict: bool = True, locates: Iterable[int] | None = None):
        self.strict = strict
        self.books: dict[int, Book] = {}
        self.symbols: dict[int, str] = {}       # locate -> symbol, from 'R'
        self.only = set(locates) if locates else None

    def note_directory(self, locate: int, symbol: str) -> None:
        self.symbols[locate] = symbol
        if locate in self.books:
            self.books[locate].symbol = symbol

    def book(self, locate: int) -> Book:
        b = self.books.get(locate)
        if b is None:
            b = Book(locate, self.symbols.get(locate, ""), self.strict)
            self.books[locate] = b
        return b

    def apply(self, m) -> Book | None:
        """Apply a decoded message, returning the Book it touched (or None)."""
        if self.only is not None and m.locate not in self.only:
            return None
        b = self.book(m.locate)
        before = b.msgs
        b.apply(m)
        return b if b.msgs != before else None
