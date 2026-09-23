"""Tests for the golden-model order book (model/book.py).

These are the behaviours the RTL will be held to, so they are written as small
hand-checkable scenarios.  Several of them are exactly the corner cases listed
for step 9 verification: a level emptying and refilling, a replace that moves
an order to a different price, and a reduce that takes the last share.
"""

import pytest

from book import Book, BookError, MultiBook
from itch import AddOrder, OrderCancel, OrderDelete, OrderExecuted, OrderReplace

# Prices in feed units: 1_000_000 == $100.0000, and one tick (a cent) is 100.
P100 = 1_000_000
P101 = 1_000_100
P099 = 999_900


def add(book, ref, side, price, shares):
    book.apply(AddOrder("A", 1, 0, 0, ref, side, shares, "TEST", price))


def test_add_builds_bbo():
    b = Book(1, "TEST")
    add(b, 1, "B", P099, 100)
    add(b, 2, "S", P101, 200)
    assert b.bbo() == (P099, 100, P101, 200)


def test_multiple_orders_share_a_price_level():
    b = Book(1, "TEST")
    add(b, 1, "B", P100, 100)
    add(b, 2, "B", P100, 300)
    assert b.bbo()[:2] == (P100, 400)
    # Deleting one order leaves the level alive with the rest.
    b.apply(OrderDelete("D", 1, 0, 0, 1))
    assert b.bbo()[:2] == (P100, 300)


def test_execute_reduces_then_removes_the_order():
    b = Book(1, "TEST")
    add(b, 1, "S", P100, 500)
    b.apply(OrderExecuted("E", 1, 0, 0, 1, 200, 0))
    assert b.bbo()[2:] == (P100, 300)
    assert b.orders[1][2] == 300
    # Taking the last share must free the order table entry, not leave a
    # zero-share ghost - the same rule the hardware order table follows.
    b.apply(OrderExecuted("E", 1, 0, 0, 1, 300, 0))
    assert 1 not in b.orders
    assert b.bbo()[2:] == (None, 0)


def test_execute_with_price_uses_the_resting_price():
    """'C' prints a different execution price; the book must ignore it.

    Getting this wrong is a classic ITCH bug: shares get removed from a price
    level that never held them, and the book drifts for the rest of the day.
    """
    b = Book(1, "TEST")
    add(b, 1, "B", P100, 400)
    b.apply(OrderExecuted("C", 1, 0, 0, 1, 400, 0, "Y", P099))
    assert b.bids == {}               # the level at P100 emptied, not P099
    assert b.bbo()[:2] == (None, 0)


def test_cancel_is_a_partial_reduce():
    b = Book(1, "TEST")
    add(b, 1, "B", P100, 500)
    b.apply(OrderCancel("X", 1, 0, 0, 1, 150))
    assert b.bbo()[:2] == (P100, 350)
    assert b.orders[1][2] == 350


def test_delete_removes_whatever_remains():
    b = Book(1, "TEST")
    add(b, 1, "B", P100, 500)
    b.apply(OrderCancel("X", 1, 0, 0, 1, 400))
    b.apply(OrderDelete("D", 1, 0, 0, 1))
    assert b.orders == {} and b.bids == {}


def test_replace_inherits_side_and_moves_price():
    """A replace carries no side, so the book must recover it from the old order."""
    b = Book(1, "TEST")
    add(b, 1, "B", P099, 100)
    b.apply(OrderReplace("U", 1, 0, 0, 1, 2, 300, P100))
    assert 1 not in b.orders
    assert b.orders[2] == ("B", P100, 300)   # side "B" came from order 1
    assert b.bids == {P100: 300}             # old level gone, new level created
    assert b.bbo()[:2] == (P100, 300)


def test_best_price_recovers_when_top_level_empties_and_refills():
    """Step 9 corner case: a price level emptying and refilling.

    The model caches the best price and invalidates it when the top level
    empties - the software analogue of the priority encoder re-scanning the
    non-empty bitmap.
    """
    b = Book(1, "TEST")
    add(b, 1, "B", P099, 100)
    add(b, 2, "B", P100, 100)
    assert b.best_bid == P100
    b.apply(OrderDelete("D", 1, 0, 0, 2))    # top level empties
    assert b.best_bid == P099                # falls back to the next level
    add(b, 3, "B", P101, 100)                # refills higher
    assert b.best_bid == P101
    b.apply(OrderDelete("D", 1, 0, 0, 3))
    b.apply(OrderDelete("D", 1, 0, 0, 1))    # book now completely empty
    assert b.best_bid is None and b.bbo() == (None, 0, None, 0)


def test_unknown_reference_counts_as_orphan_not_error():
    """Normal when replaying a prefix: the order was added before the window."""
    b = Book(1, "TEST")
    assert b.delete(999) is False
    assert b.reduce(999, 100) is False
    assert b.replace(999, 1000, P100, 100) is False
    assert b.orphans == 3
    assert b.orders == {}


def test_overlarge_reduce_raises_in_strict_mode():
    b = Book(1, "TEST", strict=True)
    add(b, 1, "B", P100, 100)
    with pytest.raises(BookError):
        b.apply(OrderExecuted("E", 1, 0, 0, 1, 101, 0))


def test_overlarge_reduce_is_clamped_in_lax_mode():
    b = Book(1, "TEST", strict=False)
    add(b, 1, "B", P100, 100)
    b.apply(OrderExecuted("E", 1, 0, 0, 1, 101, 0))
    assert b.bids == {} and 1 not in b.orders   # clamped to 100, order gone


def test_crossed_book_is_counted():
    b = Book(1, "TEST")
    add(b, 1, "B", P101, 100)
    add(b, 2, "S", P099, 100)     # locks the book crossed
    assert b.crossed == 1


def test_peak_counters_track_high_water_marks():
    b = Book(1, "TEST")
    add(b, 1, "B", P099, 100)
    add(b, 2, "B", P100, 100)
    assert (b.peak_orders, b.peak_levels) == (2, 2)
    b.apply(OrderDelete("D", 1, 0, 0, 1))
    assert (b.peak_orders, b.peak_levels) == (2, 2)   # peaks do not go down


def test_multibook_separates_symbols_by_locate():
    """Order references are day-unique across symbols, but books are not.

    The locate field is what keeps them apart - and it is also the hardware
    book index, which is why no RTL module compares symbol strings.
    """
    mb = MultiBook()
    mb.note_directory(1, "AAA")
    mb.note_directory(2, "BBB")
    mb.apply(AddOrder("A", 1, 0, 0, 10, "B", 100, "AAA", P100))
    mb.apply(AddOrder("A", 2, 0, 0, 11, "B", 100, "BBB", P101))
    assert mb.book(1).bbo()[:2] == (P100, 100)
    assert mb.book(2).bbo()[:2] == (P101, 100)
    assert mb.book(1).symbol == "AAA"


def test_multibook_locate_filter_skips_other_symbols():
    mb = MultiBook(locates=[1])
    assert mb.apply(AddOrder("A", 1, 0, 0, 10, "B", 100, "AAA", P100)) is not None
    assert mb.apply(AddOrder("A", 2, 0, 0, 11, "B", 100, "BBB", P101)) is None
    assert 2 not in mb.books


def test_synthetic_replay_holds_all_invariants(tmp_path):
    """End-to-end: generate, replay, and require a spotless run.

    The generator only emits references to live orders, so on this input the
    strict book must survive with zero orphans and (because it never crosses
    the spread) zero crossed messages.  If this test fails, either the book or
    the generator has drifted from the spec.
    """
    import gen
    import replay
    from itch import write_messages

    path = tmp_path / "s.itch"
    write_messages(str(path), gen.generate(n_messages=50_000, seed=3))

    mb = replay.replay(str(path), bbo_path=str(tmp_path / "s.csv"), strict=True)
    assert sum(b.orphans for b in mb.books.values()) == 0
    assert sum(b.crossed for b in mb.books.values()) == 0
    assert sum(b.msgs for b in mb.books.values()) == 50_000

    # Every live order's shares must still add up to its price level, which is
    # the strongest single check on the whole book: it catches any add/reduce
    # that updated one structure but not the other.
    for b in mb.books.values():
        rebuilt: dict[tuple[str, int], int] = {}
        for side, price, shares in b.orders.values():
            assert shares > 0
            rebuilt[(side, price)] = rebuilt.get((side, price), 0) + shares
        for price, qty in b.bids.items():
            assert rebuilt.get(("B", price)) == qty
        for price, qty in b.asks.items():
            assert rebuilt.get(("S", price)) == qty
        assert len(rebuilt) == len(b.bids) + len(b.asks)


def test_bbo_trace_is_reproducible(tmp_path):
    """The same input must produce a byte-identical BBO trace.

    Step 9 diffs the RTL against this file, so any run-to-run instability here
    would show up as a phantom RTL bug.
    """
    import gen
    import replay
    from itch import write_messages

    path = tmp_path / "s.itch"
    write_messages(str(path), gen.generate(n_messages=20_000, seed=5))
    a, c = tmp_path / "a.csv", tmp_path / "c.csv"
    replay.replay(str(path), bbo_path=str(a))
    replay.replay(str(path), bbo_path=str(c))
    assert a.read_bytes() == c.read_bytes()
    assert replay.compare(str(a), str(c)) is True
