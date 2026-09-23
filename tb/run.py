"""Build and run the cocotb testbenches with Verilator.

cocotb 2.x drives simulators from Python (the old Makefile flow is on its way
out), which suits this project: the same interpreter that runs the golden model
also runs the simulation, so the testbench imports model/ directly instead of
marshalling expected values through files.

Run from the repo root, inside WSL:

    wsl .venv/bin/python tb/run.py                 # everything
    wsl .venv/bin/python tb/run.py hdr_parse       # one module
    wsl .venv/bin/python tb/run.py hdr_parse -w    # ...and dump waves

A real-data soak of one complete day (extracts made by model/extract.py):

    REAL_FILE=MSFT.itch REAL_N=0 COCOTB_TEST_FILTER=test_real_data_replay
        .venv/bin/python tb/run.py feed_handler_top --tag msft

Waves land in tb/sim_build/dump.fst; open with:  gtkwave tb/sim_build/dump.fst
"""

from __future__ import annotations

import argparse
import os
import sys
from pathlib import Path

from cocotb_tools.runner import get_runner

ROOT = Path(__file__).resolve().parent.parent
# FH_RTL_DIR lets tools/mutate.py point a run at a mutated COPY of rtl/, so a
# deliberately broken design never touches the real sources.
RTL = Path(os.environ.get("FH_RTL_DIR", ROOT / "rtl"))
TB = ROOT / "tb"

# One entry per module under test: the RTL it needs and its top-level name.
BENCHES = {
    "hdr_parse": {
        "sources": [RTL / "hdr_parse.sv"],
        "toplevel": "hdr_parse",
        "module": "test_hdr_parse",
    },
    "msg_frame": {
        "sources": [RTL / "msg_frame.sv"],
        "toplevel": "msg_frame",
        "module": "test_msg_frame",
    },
    "decode": {
        "sources": [RTL / "itch_pkg.sv", RTL / "decode.sv"],
        "toplevel": "decode",
        "module": "test_decode",
    },
    "priority_encoder": {
        "sources": [RTL / "priority_encoder.sv", TB / "pe_wrap.sv"],
        "toplevel": "pe_wrap",
        "module": "test_priority_encoder",
    },
    "price_levels": {
        "sources": [RTL / "priority_encoder.sv", RTL / "sdp_ram.sv",
                    RTL / "price_levels.sv"],
        "toplevel": "price_levels",
        "module": "test_price_levels",
    },
    "order_table": {
        "sources": [RTL / "itch_pkg.sv", RTL / "tdp_ram.sv",
                    RTL / "order_table.sv"],
        "toplevel": "order_table",
        "module": "test_order_table",
        # Deliberately tiny: a 128K-entry table would never overflow on a
        # few hundred test orders, leaving the set/stash/drop policy untested.
        "parameters": {"SETS": 16, "WAYS": 2, "STASH": 2},
    },
    "msg_frame_slow": {
        "sources": [RTL / "msg_frame_slow.sv"],
        "toplevel": "msg_frame_slow",
        "module": "test_msg_frame_slow",
    },
    # The whole pipeline. Listed last because it is the slowest bench and
    # the one that only means something once every stage above passes.
    "feed_handler_top": {
        "sources": [RTL / f for f in (
            "itch_pkg.sv", "sdp_ram.sv", "tdp_ram.sv", "hdr_parse.sv",
            "msg_frame.sv", "decode.sv", "order_table.sv",
            "priority_encoder.sv", "price_levels.sv", "feed_handler_top.sv",
        )],
        "toplevel": "feed_handler_top",
        "module": "test_feed_handler_top",
    },
}


def run_one(name: str, spec: dict, waves: bool, verbose: bool,
            tag: str = "") -> bool:
    print(f"\n{'=' * 70}\n  {name}\n{'=' * 70}")
    runner = get_runner("verilator")
    # A tag gives a private build directory, so several runs of the same
    # bench (e.g. one real-data soak per symbol) can go in parallel.
    build_dir = TB / "sim_build" / (f"{name}-{tag}" if tag else name)

    runner.build(
        sources=spec["sources"],
        hdl_toplevel=spec["toplevel"],
        build_dir=build_dir,
        parameters=spec.get("parameters", {}),
        always=True,
        waves=waves,
        verbose=verbose,
        # -Wall turns on Verilator's lint checks.  Worth keeping on: it catches
        # width mismatches and unused signals, which in RTL are usually real
        # bugs rather than style complaints.
        build_args=["-Wall", "--trace-structs"] if waves else ["-Wall"],
        timescale=("1ns", "1ps"),
    )

    runner.test(
        hdl_toplevel=spec["toplevel"],
        test_module=spec["module"],
        build_dir=build_dir,
        parameters=spec.get("parameters", {}),
        test_dir=TB,
        waves=waves,
        verbose=verbose,
        timescale=("1ns", "1ps"),
    )
    return True


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("which", nargs="*", default=None,
                   help="which benches to run (default: all)")
    p.add_argument("-w", "--waves", action="store_true", help="dump an FST")
    p.add_argument("-v", "--verbose", action="store_true")
    p.add_argument("--tag", default="",
                   help="private build dir suffix, for parallel runs")
    a = p.parse_args()

    names = a.which or list(BENCHES)
    unknown = [n for n in names if n not in BENCHES]
    if unknown:
        print(f"unknown bench(es): {', '.join(unknown)}")
        print(f"available: {', '.join(BENCHES)}")
        return 2

    # cocotb needs to be able to import the test module and, through it, model/.
    sys.path.insert(0, str(TB))
    sys.path.insert(0, str(ROOT / "model"))

    for name in names:
        run_one(name, BENCHES[name], a.waves, a.verbose, a.tag)

    print("\nall benches finished - see the cocotb summary above for pass/fail")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
