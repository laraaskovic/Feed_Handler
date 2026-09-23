"""Size the RTL order table against a real day: sets x ways + an overflow stash.

sizing.py answered "which hash?" for a direct-mapped table. This answers the
question the RTL actually has to settle: with a SET-ASSOCIATIVE table of a
given geometry, plus a small fully-associative stash for orders whose set is
full, how many orders does a whole trading day drop?

A dropped order is not a statistic, it is a wrong book: its later executions
and deletes find nothing, and its shares sit on (or vanish from) the ladder
for the rest of the day. So the target is ZERO drops over a full day, with
the stash's peak occupancy showing how much margin is left.

The model mirrors rtl/order_table.sv exactly: the same XOR-fold hash, the
same "an order lives in its set if there is room, else in the stash" policy,
and E/C/X that empty an order free its slot just like D.

Usage:
    python table_sim.py ../data/AAPL.itch
    python table_sim.py ../data/AAPL.itch --geom 32768x4 16384x8 --stash 0 16
"""

from __future__ import annotations

import argparse

from itch import BOOK_TYPES, decode, read_messages


def xorfold(ref: int, sets: int) -> int:
    """The original RTL hash: fold 64 -> 32 -> 16 bits, keep log2(sets)."""
    # Two folds, in the same order the first order_table.sv used.
    f = ((ref >> 32) ^ ref) & 0xFFFFFFFF
    return ((f >> 16) ^ f) & (sets - 1)


# H3 masks for the index bits, shared with rtl/order_table.sv (hash_mask),
# which carries the same 16 constants. Fixed hex rather than a seeded RNG so
# the Python and the SystemVerilog cannot drift apart unnoticed: both
# benches check the RTL against this function.
H3_MASKS = [
    0x9E3779B97F4A7C15, 0xBF58476D1CE4E5B9, 0x94D049BB133111EB,
    0xD6E8FEB86659FD93, 0xA0761D6478BD642F, 0xE7037ED1A0B428DB,
    0x8EBC6AF09C88C6E3, 0x589965CC75374CC3, 0x1D8E4E27C47D124F,
    0xC2B2AE3D27D4EB4F, 0x165667B19E3779F9, 0x85EBCA77C2B2AE63,
    0x27D4EB2F165667C5, 0xFF51AFD7ED558CCD, 0xC4CEB9FE1A85EC53,
    0x9FB21C651E98DF25,
]


def h3(ref: int, sets: int) -> int:
    """The RTL hash: H3 with an identity low block.

    Index bit i is ref bit i XOR the parity of (ref's upper bits AND a fixed
    random mask). In hardware each bit is one XOR tree - three LUT levels -
    and H3 is a universal hash family, so structured references spread like
    random ones. The identity low block is what lets the stored tag omit the
    index bits: two refs in the same set with equal upper bits must also
    have equal lower bits, so a match on the upper bits alone is exact.
    """
    bits = sets.bit_length() - 1
    hi = ref >> bits
    v = 0
    for i in range(bits):
        # Parity of the masked upper bits, folded into index bit i.
        p = bin(hi & (H3_MASKS[i] >> bits)).count("1") & 1
        v |= (((ref >> i) & 1) ^ p) << i
    return v


HASHES = {"xorfold": xorfold, "h3": h3}


class Table:
    """One geometry: `sets` x `ways` plus a stash of `stash` entries."""

    def __init__(self, sets: int, ways: int, stash: int, hash_name: str):
        self.sets, self.ways, self.stash_cap = sets, ways, stash
        self.hash_name = hash_name
        self.hash = HASHES[hash_name]
        # set index -> live refs in that set; a dict of sets stays sparse.
        self.table: dict[int, set[int]] = {}
        self.stash: set[int] = set()
        self.drops = 0            # orders that fit nowhere: book corrupted
        self.stash_peak = 0       # high-water mark of stash occupancy
        self.live = 0
        self.live_peak = 0

    def insert(self, ref: int) -> None:
        s = self.table.setdefault(self.hash(ref, self.sets), set())
        # First choice: the order's own set, if a way is free.
        if len(s) < self.ways:
            s.add(ref)
        # Second choice: the stash, a small fully-associative overflow.
        elif len(self.stash) < self.stash_cap:
            self.stash.add(ref)
            self.stash_peak = max(self.stash_peak, len(self.stash))
        else:
            # Nowhere to go. In hardware this is stat_collisions.
            self.drops += 1
            return
        self.live += 1
        self.live_peak = max(self.live_peak, self.live)

    def remove(self, ref: int) -> None:
        # An order is in its set or in the stash, never both.
        s = self.table.get(self.hash(ref, self.sets))
        if s is not None and ref in s:
            s.discard(ref)
        elif ref in self.stash:
            self.stash.discard(ref)
        else:
            return                 # a dropped order, or never seen
        self.live -= 1


def simulate(path: str, geoms: list[tuple[int, int]], stashes: list[int],
             hashes: list[str], limit: int | None = None) -> list[Table]:
    """Replay one file through every (hash, geometry, stash) combination."""
    tables = [Table(s, w, k, h) for h in hashes for s, w in geoms
              for k in stashes]
    # Remaining shares per live order, to know when E/C/X empty one.
    shares: dict[int, int] = {}
    for raw in read_messages(path, limit):
        # Only the seven book messages touch the order table.
        if chr(raw[0]) not in BOOK_TYPES:
            continue
        m = decode(raw)
        t = m.type
        if t in "AF":
            shares[m.order_ref] = m.shares
            for tb in tables:
                tb.insert(m.order_ref)
        elif t in "ECX":
            # A reduce that takes the last share frees the entry.
            left = shares.get(m.order_ref)
            if left is None:
                continue
            left -= m.shares
            if left > 0:
                shares[m.order_ref] = left
                continue
            del shares[m.order_ref]
            for tb in tables:
                tb.remove(m.order_ref)
        elif t == "D":
            if shares.pop(m.order_ref, None) is not None:
                for tb in tables:
                    tb.remove(m.order_ref)
        elif t == "U":
            # Replace = remove old, insert new; same order as the RTL.
            if shares.pop(m.order_ref, None) is None:
                continue
            shares[m.new_order_ref] = m.shares
            for tb in tables:
                tb.remove(m.order_ref)
                tb.insert(m.new_order_ref)
    return tables


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("path")
    p.add_argument("--geom", nargs="+", default=["32768x4", "16384x8", "32768x8"],
                   help="SETSxWAYS geometries to try")
    p.add_argument("--stash", nargs="+", type=int, default=[0, 8, 16, 32],
                   help="stash sizes to try")
    p.add_argument("--hash", nargs="+", default=["h3"], choices=list(HASHES),
                   help="hash functions to try")
    p.add_argument("-n", "--limit", type=int, default=None)
    a = p.parse_args()
    geoms = [tuple(int(x) for x in g.split("x")) for g in a.geom]

    tables = simulate(a.path, geoms, a.stash, a.hash, a.limit)
    print(f"{a.path}: peak live orders {tables[0].live_peak:,}")
    print(f"{'hash':>8} {'sets':>7} {'ways':>4} {'entries':>8} {'stash':>5} "
          f"{'drops':>7} {'stash peak':>10}")
    for t in tables:
        # One line per configuration; zero drops is the only passing grade.
        print(f"{t.hash_name:>8} {t.sets:>7} {t.ways:>4} {t.sets * t.ways:>8} "
              f"{t.stash_cap:>5} {t.drops:>7} {t.stash_peak:>10}")


if __name__ == "__main__":
    main()
