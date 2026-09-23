"""Tests for the hardware sizing measurements (model/sizing.py).

The sizing numbers justify hard-coded RTL parameters, so the measurement code
needs to be trustworthy itself - a hash simulator that under-counts collisions
would talk us into a table that does not work.
"""

import sizing
from sizing import HASHES, HashSim


def test_hashes_stay_in_range():
    """Every candidate hash must produce a valid index for any 64-bit input."""
    refs = [0, 1, 2**63, 2**64 - 1, 0xDEAD_BEEF_CAFE_1234, 12345678901]
    for bits in (4, 10, 16):
        for name, fn in HASHES.items():
            for ref in refs:
                idx = fn(ref, bits)
                assert 0 <= idx < (1 << bits), f"{name}({ref}, {bits}) = {idx}"


def test_low_bits_hash_is_perfect_on_sequential_refs():
    """Sanity check on the simulator, and a warning about synthetic data.

    Sequential order references map one-to-one onto the low bits, so the 'low'
    hash shows zero collisions until the table wraps.  That is why the
    collision numbers only mean something on the real feed - the generator's
    ids are sequential and flatter this hash.
    """
    sim = HashSim("low", HASHES["low"], bits=8)     # 256 buckets
    for ref in range(256):
        sim.insert(ref)
    assert sim.collisions == 0
    assert sim.peak_used == 256
    sim.insert(256)                                  # wraps onto bucket 0
    assert sim.collisions == 1


def test_removals_free_buckets():
    sim = HashSim("low", HASHES["low"], bits=4)
    sim.insert(0)
    sim.insert(16)              # same bucket as 0 -> collision
    assert sim.collisions == 1
    sim.remove(0)
    sim.insert(16)              # bucket is free now
    assert sim.collisions == 1
    assert sim.slots[0] == 16


def test_remove_of_an_absent_ref_is_harmless():
    """A collided order was never stored, so its later delete must be a no-op
    and must not evict whoever does own the bucket."""
    sim = HashSim("low", HASHES["low"], bits=4)
    sim.insert(0)
    sim.insert(16)              # dropped on collision
    sim.remove(16)              # must not evict order 0
    assert sim.slots[0] == 0


def test_measure_runs_end_to_end(tmp_path):
    import gen
    from itch import write_messages

    path = tmp_path / "s.itch"
    write_messages(str(path), gen.generate(n_messages=20_000, seed=11,
                                           band_ticks=200))
    r = sizing.measure(str(path), table_sizes=(1024, 8192), bands=(64, 1024))

    assert r["peak_live"] > 0
    # Inserts must equal adds plus replaces: a replace creates a new entry.
    counts = r["type_counts"]
    expected_inserts = counts["A"] + counts["F"] + counts["U"]
    for sim in r["sims"]:
        assert sim.inserts == expected_inserts

    # A 64-tick band is far narrower than the generator's 200-tick spread, so
    # some orders must fall outside it; a 1024-tick band must contain them all.
    assert r["out_of_band"][64] > 0
    assert r["out_of_band"][1024] == 0

    sizing.report(r)            # must not raise on any formatting path
