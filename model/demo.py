"""A narrated walkthrough of what the order book actually does.

Run it:   python model/demo.py

This exists to answer one question: what are we modelling?  The answer is that
we are building a *listener*, not a market.  Nasdaq runs the auction, matches
buyers to sellers, and then broadcasts a description of everything that
happened.  Our job is to hear those announcements and keep an accurate picture
of the book.  We never decide anything.

So there are two very different senses of "simulating" in this repo:

  gen.py   DOES invent activity.  It makes up orders being added, cancelled
           and executed, so the pipeline has something to chew on without a
           4.7 GB download.  That is a simulation of a *feed*.

  book.py  invents nothing.  It *reconstructs* the book from whatever message
           stream it is given.  With real Nasdaq data, every add and cancel
           below really happened, placed by real people on a real day.  That is
           reconstruction, not simulation.

The hardware being built is the second thing: a machine that listens.

Each step below prints the two data structures the book keeps, because those
two are what the RTL has to reproduce with block RAM and priority encoders:

  order table  ref -> (side, price, shares)   ->  step 7, hashed BRAM
  price levels price -> total shares, per side ->  step 8, per-tick table
"""

from __future__ import annotations

from book import Book
from itch import (
    AddOrder,
    OrderCancel,
    OrderDelete,
    OrderExecuted,
    OrderReplace,
    price_to_str,
)

# $100.0000 in feed units.  One tick (a cent) is 100 units.
P = 1_000_000
TICK = 100


def ladder(book: Book) -> list[str]:
    """Render the book the way a trader would see it: price rungs, bids on the
    left, asks on the right, best prices marked.

    In hardware this picture *is* the price-level table: one row per tick, and
    a bitmap saying which rows are non-empty.  Finding the two marked rows is
    the priority encoder's whole job.
    """
    prices = sorted(set(book.bids) | set(book.asks), reverse=True)
    if not prices:
        return ["      (book is empty)"]

    best_bid, best_ask = book.best_bid, book.best_ask
    lines = ["        price     bids | asks", "      " + "-" * 27]
    for p in prices:
        bid = book.bids.get(p, 0)
        ask = book.asks.get(p, 0)
        mark = ""
        if p == best_ask:
            mark = "  <- best ask"
        elif p == best_bid:
            mark = "  <- best bid"
        lines.append(f"      {price_to_str(p):>9}  {bid or '':>6} | "
                     f"{ask or '':<6}{mark}")
    return lines


def order_table(book: Book) -> list[str]:
    if not book.orders:
        return ["      (no live orders)"]
    lines = []
    for ref, (side, price, shares) in sorted(book.orders.items()):
        lines.append(f"      {ref}  {side}  {shares:>5} @ {price_to_str(price)}")
    return lines


def show(step: int, msg, note: str, book: Book) -> None:
    print()
    print("=" * 72)
    print(f"step {step}:  {msg.type}   {note}")
    print("=" * 72)

    book.apply(msg)

    left = order_table(book)
    right = ladder(book)
    print("\n  ORDER TABLE (step 7 in hardware)")
    for line in left:
        print(line)
    print("\n  PRICE LEVELS (step 8 in hardware)")
    for line in right:
        print(line)

    bp, bq, ap, aq = book.bbo()
    bid = f"{bq} @ {price_to_str(bp)}" if bp is not None else "none"
    ask = f"{price_to_str(ap)} @ {aq}" if ap is not None else "none"
    spread = f"{(ap - bp) / 10_000:.2f}" if bp is not None and ap is not None else "-"
    print(f"\n  BBO OUT:  bid {bid}   |   ask {ask}   (spread ${spread})")


def main() -> None:
    print(__doc__)
    book = Book(locate=1, symbol="DEMO")

    # Every message below is a real ITCH 5.0 message, built with the same
    # NamedTuples model/itch.py produces when it decodes bytes off the wire.
    # Only the seven book-affecting types appear, because those are the only
    # ones that change anything.

    show(1, AddOrder("A", 1, 0, 0, 1001, "B", 100, "DEMO", P - 2 * TICK),
         "someone offers to BUY 100 shares at $99.98", book)

    show(2, AddOrder("A", 1, 0, 0, 1002, "S", 200, "DEMO", P + 2 * TICK),
         "someone offers to SELL 200 shares at $100.02", book)

    show(3, AddOrder("A", 1, 0, 0, 1003, "B", 300, "DEMO", P - 2 * TICK),
         "a second buyer joins the SAME price - the level now holds 400",
         book)

    show(4, AddOrder("A", 1, 0, 0, 1004, "B", 500, "DEMO", P - TICK),
         "a buyer bids HIGHER, $99.99 - this moves the best bid", book)

    show(5, OrderExecuted("E", 1, 0, 0, 1004, 200, 555),
         "200 of order 1004 TRADED - a real transaction happened", book)

    show(6, OrderCancel("X", 1, 0, 0, 1004, 100),
         "the owner of 1004 cancels 100 more - order shrinks, stays alive",
         book)

    show(7, OrderDelete("D", 1, 0, 0, 1004),
         "1004 is pulled entirely - watch the best bid FALL BACK to $99.98",
         book)

    show(8, OrderReplace("U", 1, 0, 0, 1001, 1005, 150, P - 3 * TICK),
         "1001 is REPLACED by 1005: new id, new price $99.97, new size.\n"
         "        note the replace never said 'buy' - the book had to look\n"
         "        up order 1001 to know it was a bid.  that lookup is why\n"
         "        the hardware order table sits on the critical path",
         book)

    show(9, AddOrder("F", 1, 0, 0, 1006, "S", 100, "DEMO", P + TICK),
         "an 'F' add - same as 'A' plus a market-participant id.  the seller\n"
         "        undercuts to $100.01, tightening the spread", book)

    show(10, OrderExecuted("C", 1, 0, 0, 1006, 100, 556, "Y", P + 5 * TICK),
         "a 'C' execute: printed at $100.05, but the BOOK loses shares at\n"
         "        1006's RESTING price of $100.01.  using the printed price\n"
         "        here is the classic ITCH bug", book)

    show(11, OrderDelete("D", 1, 0, 0, 1002),
         "the last ask is pulled - there is now NO best ask at all", book)

    show(12, OrderDelete("D", 1, 0, 0, 1003),
         "another delete empties the $99.98 LEVEL - the best bid drops to\n"
         "        $99.97, the next non-empty rung down.  in hardware that is\n"
         "        the priority encoder re-scanning the bitmap", book)

    show(13, OrderDelete("D", 1, 0, 0, 1005),
         "the last order goes: the book is now COMPLETELY EMPTY and there is\n"
         "        no BBO to report.  an easy case to get wrong in RTL, since\n"
         "        'no best bid' is different from 'best bid of zero'", book)

    print()
    print("=" * 72)
    print("what just happened")
    print("=" * 72)
    print(f"""
  messages applied : {book.msgs}
  invariants       : {book.violations} violations, {book.orphans} orphan refs
  peak live orders : {book.peak_orders}   <- sizes the hardware order table
  peak price levels: {book.peak_levels}   <- sizes the price-level table

  Notice what the book NEVER did: it never matched a buyer to a seller, never
  decided a price, never created or rejected an order.  Nasdaq did all of that
  and then told us about it.  Every line above is bookkeeping in response to an
  announcement.

  Notice also how little information the messages carry.  Steps 5, 6, 7, 10 and
  11 named an order only by its number - no side, no price, no symbol.  The
  book could only act because it had order 1004 and 1002 stored from earlier.
  That is the single fact that shapes the whole hardware design: you cannot
  process this feed without a fast lookup table, and every message has to wait
  for it.

  Try it on real activity:
      python model/gen.py data/synth.itch -n 200000     (invented feed)
      python model/replay.py data/synth.itch --print 20 (watch the BBO move)
""")


if __name__ == "__main__":
    main()
