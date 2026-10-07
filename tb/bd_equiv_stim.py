"""Stimulus for tb/bd_equiv_tb.sv: one beat file both tops are driven from.

The block design (syn/vivado/bd/build_bd.tcl) is the same pipeline as
rtl/feed_handler_top.sv, rewired as IP Integrator blocks. bd_equiv_tb.sv runs
the two side by side on this stream and requires every output to match on
every cycle. feed_handler_top is already checked against the golden model by
tb/test_feed_handler_top.py, so equality here carries that result over to the
block design.

Runs on plain Windows Python (no cocotb): only model/ is imported.

    python tb/bd_equiv_stim.py [out_path] [--n 20000] [--seed 7]

File format, read by $fscanf in the bench:
    line 1        cfg_band_base cfg_locate        (decimal)
    then per beat tvalid tdata tkeep tlast        (hex)
Idle beats (tvalid 0) are mixed in between frames, so the comparison covers
both back-to-back frames and gaps.
"""

from __future__ import annotations

import argparse
import random
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import gen                                              # noqa: E402
from itch import TICK, decode                           # noqa: E402
from packetize import packetize, to_beats               # noqa: E402

# Must match BAND_TICKS in both tops.
BAND_SPAN = 4096 * TICK


def band_base_for(messages, locate: int) -> int:
    """Centre the band on the symbol's median add price, the same rule as
    test_feed_handler_top.band_base_for."""
    prices = sorted(
        m.price for m in (decode(r) for r in messages if chr(r[0]) in "AF")
        if m.locate == locate
    )
    mid = prices[len(prices) // 2]
    return max(0, (mid - BAND_SPAN // 2) // TICK * TICK)


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("out", nargs="?",
                   default=str(ROOT / "syn" / "out" / "vivado" / "bd" / "equiv_stim.txt"))
    p.add_argument("--n", type=int, default=20_000, help="ITCH messages")
    p.add_argument("--seed", type=int, default=7)
    p.add_argument("--locate", type=int, default=1)
    args = p.parse_args()

    msgs = list(gen.generate(n_messages=args.n, seed=args.seed))
    base = band_base_for(msgs, args.locate)
    rng = random.Random(args.seed)

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    beats = 0
    with open(out, "w", newline="\n") as f:
        f.write(f"{base} {args.locate}\n")
        for frame, _seq, _batch in packetize(msgs, msgs_per_packet=20,
                                             random_boundaries=True,
                                             seed=args.seed):
            for tdata, tkeep, tlast in to_beats(frame):
                f.write(f"1 {tdata:016x} {tkeep:02x} {int(tlast)}\n")
                beats += 1
            # Half the frames back to back, the rest after a short gap.
            for _ in range(rng.choice((0, 0, 1, 3))):
                f.write("0 0000000000000000 00 0\n")
                beats += 1
    print(f"{out}: {beats} beats, {args.n} messages, "
          f"cfg_band_base={base} cfg_locate={args.locate}")


if __name__ == "__main__":
    main()
