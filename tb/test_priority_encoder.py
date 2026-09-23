"""cocotb tests for rtl/priority_encoder.sv.

Oracle: Python's own bit operations. `v.bit_length() - 1` is the highest set
bit and `(v & -v).bit_length() - 1` the lowest, so the expected answer needs
no model of its own - which is the right kind of oracle for a pure function.

The encoder is combinational, so these tests drive inputs and settle rather
than clocking. Two instances are wrapped side by side so the highest-bit and
lowest-bit configurations are both covered by one bench.
"""

from __future__ import annotations

# random drives the seeded random test; sys and Path locate the repo root.
import random
import sys
from pathlib import Path

# Same model/ path setup as the other benches, though this oracle needs
# no model: Python's integers are the reference here.
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

# cocotb supplies the test decorator; Timer lets the combinational encoder
# settle, since there is no clock to wait on.
import cocotb
from cocotb.triggers import Timer

# Bitmap width, matching pe_wrap's W: one bit per price tick in the band.
W = 4096


async def settle():
    """Let combinational logic propagate before sampling."""
    await Timer(1, unit="ns")


def py_highest(v: int) -> int:
    # bit_length counts up to the top set bit, so minus one is its index.
    return v.bit_length() - 1


def py_lowest(v: int) -> int:
    # Isolating the lowest set bit: v & -v clears everything above it.
    return (v & -v).bit_length() - 1


async def apply_and_check(dut, v: int, note: str = ""):
    """Drive one bitmap and check both encoders against Python."""
    # One input feeds both instances in pe_wrap, so one bitmap tests both.
    dut.bitmap.value = v
    await settle()

    # Sample each instance's "any" flag once the inputs have settled.
    hi_any = int(dut.hi_any.value)
    lo_any = int(dut.lo_any.value)
    # Both must be 1 exactly when some bit is set, and so equal each other.
    assert hi_any == lo_any == int(v != 0), (
        f"{note}: any = {hi_any}/{lo_any} for bitmap {'nonzero' if v else 'zero'}"
    )
    # Only a nonzero bitmap has an index worth checking.
    if v == 0:
        # With no bits set there is no index to check: "no best bid" is a
        # distinct state, signalled by `any`, not by a magic index value.
        return

    # Read the index each instance chose from the same bitmap.
    hi = int(dut.hi_index.value)
    lo = int(dut.lo_index.value)
    # Highest set bit: the bid-side configuration, where the top price is best.
    assert hi == py_highest(v), f"{note}: highest {hi} != {py_highest(v)}"
    # Lowest set bit: the ask-side configuration, where the bottom is best.
    assert lo == py_lowest(v), f"{note}: lowest {lo} != {py_lowest(v)}"


@cocotb.test()
async def test_empty_bitmap(dut):
    """An empty book must report no best price, not index zero.

    This is the corner case the model's `best_bid is None` represents, and
    getting it wrong means an empty book quietly quotes tick 0.
    """
    await apply_and_check(dut, 0, "empty")


@cocotb.test()
async def test_single_bit_everywhere(dut):
    """Exactly one bit set, tried at every one of the 4096 positions.

    Exhaustive, and cheap: it proves both the group selection and the
    within-group selection are right at every index, including the group
    boundaries where an off-by-one would hide.
    """
    # Walk a lone bit across all 4096 positions, one bitmap per index.
    for i in range(W):
        # Label with the index so a failure names the exact bit that broke.
        await apply_and_check(dut, 1 << i, f"single bit {i}")


@cocotb.test()
async def test_group_boundaries(dut):
    """Pairs straddling the 64-bit group boundaries.

    The two-level structure is exactly where a flat encoder's bugs move to:
    picking the right group but the wrong bit, or vice versa.
    """
    # Visit every one of the 64 groups of 64 bits.
    for g in range(64):
        base = g * 64
        # Offsets: both group edges (in each order), a lone bit at the group's
        # first index, and a pair across the group's middle (31/32).
        for lo_off, hi_off in ((0, 63), (63, 0), (0, 0), (31, 32)):
            v = (1 << (base + lo_off)) | (1 << (base + hi_off))
            # Both must pick the right group AND the right bit inside it.
            await apply_and_check(dut, v, f"group {g} offs {lo_off},{hi_off}")


@cocotb.test()
async def test_two_bits_far_apart(dut):
    """Lowest and highest must disagree whenever more than one bit is set."""
    # Low bits in the bottom half, including both sides of the 63/64 edge.
    for lo in (0, 1, 63, 64, 100, 2047):
        # High bits in the top half, up to the very last index 4095.
        for hi in (2048, 3000, 4094, 4095):
            v = (1 << lo) | (1 << hi)
            # One bitmap, two answers: highest finds hi, lowest finds lo.
            await apply_and_check(dut, v, f"bits {lo},{hi}")


@cocotb.test()
async def test_dense_bitmaps(dut):
    """Contiguous runs, which is what a busy book's ladder actually looks like."""
    # (start, length) runs: one bit, one full group, the whole bitmap, a run
    # spanning several groups, one ending on bit 4095, and a lone middle bit.
    for start, length in ((0, 1), (0, 64), (0, 4096), (100, 200),
                          (4000, 96), (2048, 1)):
        v = ((1 << length) - 1) << start
        # Highest is the run's top end and lowest its start.
        await apply_and_check(dut, v, f"run {start}+{length}")


@cocotb.test()
async def test_random_bitmaps(dut):
    """Random patterns, including very sparse and very dense ones.

    Sparse matters because a real book at the open has a handful of levels;
    dense matters because the encoder must not depend on how many bits are set.
    """
    # Fixed seed, so any failure reproduces exactly on the next run.
    rng = random.Random(1)
    for _ in range(200):
        # Vary the density deliberately rather than always using ~50%.
        bits = rng.choice([1, 2, 5, 40, 500, 4000])
        # Start empty and OR in `bits` random positions; repeats just overlap,
        # which thins the pattern slightly but never breaks the check.
        v = 0
        for _ in range(bits):
            v |= 1 << rng.randrange(W)
        # The label records the density, so a failure says what kind of bitmap.
        await apply_and_check(dut, v, f"random {bits} bits")


@cocotb.test()
async def test_all_bits_set(dut):
    """The extreme: every level occupied."""
    await apply_and_check(dut, (1 << W) - 1, "all set")
