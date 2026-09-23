"""Open-source synthesis of every RTL module with Yosys, for a Xilinx target.

Why this exists alongside the Vivado flow (syn/vivado/): Vivado only runs on
x86-64, and this project is developed on an ARM64 laptop. Yosys runs
anywhere - here as YoWASP, a WebAssembly build installed with pip - so every
module can be synthesised on every commit, on any machine.

What it gives you, per module and for the whole pipeline:

  * resource counts in real Xilinx UltraScale+ primitives: LUTs, flip-flops,
    block RAMs, DSPs, carry chains - close to what Vivado reports, because
    synth_xilinx maps onto the same cell library;
  * a STATIC TIMING estimate: Yosys's `sta` pass, run over the cell delay
    models Yosys ships for Xilinx 7-series. It reports the slowest
    register-to-register path in picoseconds of LOGIC delay - no routing,
    because nothing has been placed. Routing is typically about half of a
    real path, so the working rule here is: logic delay <= ~3.2 ns for the
    6.4 ns (156.25 MHz) clock. 7-series models are also conservative for an
    UltraScale+ target, which is faster;
  * logic depth: the longest chain of LUT/MUX/carry cells between registers.

What it does NOT give you: a signed-off Fmax. That needs a placed and routed
design with real wire delays - run syn/vivado/ooc_synth.tcl on an x86 machine
with Vivado for that. The two flows read the same RTL, so the Yosys numbers
are the everyday check and Vivado is the sign-off.

Run from the repo root, inside WSL:

    wsl .venv/bin/python syn/yosys_synth.py                 # every module
    wsl .venv/bin/python syn/yosys_synth.py price_levels    # just one

One-time install:  .venv/bin/pip install yowasp-yosys
Results: syn/reports/yosys_summary.md (committed), logs in syn/out/ (not).
"""

from __future__ import annotations

import argparse
import os
import re
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "syn" / "out"            # raw logs, gitignored
REPORTS = ROOT / "syn" / "reports"    # the summary, committed

# Every RTL file, in dependency order: the package first, then leaf modules,
# then the modules that instantiate them. Reading all of them for every run
# keeps the script ignorant of who instantiates whom.
SOURCES = [
    "rtl/itch_pkg.sv", "rtl/sdp_ram.sv", "rtl/tdp_ram.sv",
    "rtl/hdr_parse.sv", "rtl/msg_frame.sv", "rtl/msg_frame_slow.sv",
    "rtl/decode.sv", "rtl/order_table.sv", "rtl/priority_encoder.sv",
    "rtl/price_levels.sv", "rtl/feed_handler_top.sv",
]

# The modules to synthesise, in pipeline order, with a note on each.
MODULES = {
    "hdr_parse":        "step 4: Ethernet/IP/UDP/Mold header strip",
    "msg_frame":        "step 5: 8 B/cycle message framer",
    "msg_frame_slow":   "step 5: 1 B/cycle reference (not a deliverable)",
    "decode":           "step 6: message -> book operation",
    "order_table":      "step 7: 128K-entry 4-way order table",
    "priority_encoder": "step 8: 4096-bit two-level encoder (one side)",
    "price_levels":     "step 8: tick ladder + both encoders",
    "feed_handler_top": "step 9: the whole pipeline",
}

# Primitive groups, as synth_xilinx names them, for the summary columns.
GROUPS = {
    "LUT":   re.compile(r"^LUT[1-6]$"),
    "FF":    re.compile(r"^FD[CPRS]E$"),
    "BRAM36": re.compile(r"^RAMB36E[12]$"),
    "BRAM18": re.compile(r"^RAMB18E[12]$"),
    "LUTRAM": re.compile(r"^RAM\d+[MSX]|^RAM\d+X1[DS]$"),
    "DSP":   re.compile(r"^DSP48E[12]$"),
    "CARRY": re.compile(r"^CARRY[48]$"),
    "MUXF":  re.compile(r"^MUXF[789]$"),
}


def yosys_script(top: str, log_rel: str) -> str:
    """The Yosys command sequence for one module."""
    return "; ".join([
        # -sv turns on the SystemVerilog subset Yosys supports; the RTL is
        # written to stay inside it (qualified package names, no imports).
        "read_verilog -sv " + " ".join(SOURCES),
        # 7-series (xc7) because that is the family Yosys has cell timing
        # models for; resource counts carry over to UltraScale+ closely.
        # -flatten gives one number per run, the way OOC synthesis reports;
        # -noiopad leaves out I/O buffers, since in a real design these
        # ports connect to other logic, not to package pins; -abc9 is the
        # timing-driven mapper, which is what makes the STA below mean
        # something.
        f"synth_xilinx -family xc7 -top {top} -flatten -noiopad -abc9",
        # Cell counts, written to the log where this script reads them.
        f"tee -o {log_rel}.stat stat",
        # The cell library again, this time with its specify (delay)
        # blocks, then static timing over the mapped netlist.
        "read_verilog -lib -specify +/xilinx/cells_sim.v",
        f"tee -o {log_rel}.sta sta",
        # Longest path through combinational primitives only, i.e. levels
        # of logic between registers or RAM ports. The wires (w:*) must be
        # selected too, or ltp sees cells with no edges between them.
        f"tee -o {log_rel}.ltp ltp t:LUT* t:MUXF* t:CARRY* w:*",
    ])


def parse_stat(text: str) -> dict[str, int]:
    """Sum the primitive counts out of a `stat` report."""
    counts = {g: 0 for g in GROUPS}
    # Lines look like "     1234   LUT6" (count, then cell type).
    for m in re.finditer(r"^\s+(\d+)\s+(?:[\d.]+\s+)?(\S+)\s*$", text, re.M):
        n, cell = int(m.group(1)), m.group(2)
        for g, rx in GROUPS.items():
            if rx.match(cell):
                counts[g] += n
    return counts


def parse_sta(text: str) -> float | None:
    """Worst logic-only arrival, in ns: 'Latest arrival time in X is N'."""
    m = re.search(r"Latest arrival time in '\S+' is (\d+)", text)
    return round(int(m.group(1)) / 1000, 2) if m else None


def parse_ltp(text: str) -> int | None:
    """Logic levels from `ltp`: 'Longest topological path ... (length=N)'."""
    m = re.search(r"length=(\d+)", text)
    return int(m.group(1)) if m else None


def yosys_exe() -> str:
    """Locate the YoWASP Yosys wrapper.

    The default is the project venv, which on Linux/WSL keeps its scripts in
    bin/ and on Windows in Scripts/. FH_YOSYS overrides it, so the same
    script also runs against a scratch venv or a system-wide install - the
    whole point of YoWASP being that synthesis needs no particular machine.
    """
    override = os.environ.get("FH_YOSYS")
    if override:
        return override
    # Both venv layouts, so the flow works from WSL and from a Windows shell.
    for rel in ("bin/yowasp-yosys", "Scripts/yowasp-yosys.exe"):
        cand = ROOT / ".venv" / rel
        if cand.exists():
            return str(cand)
    # Otherwise whatever is on PATH; "yowasp-yosys" itself if nothing is.
    return shutil.which("yowasp-yosys") or "yowasp-yosys"


def run(top: str) -> dict:
    """Synthesise one module; return its numbers, or raise on failure."""
    OUT.mkdir(parents=True, exist_ok=True)
    # YoWASP can only touch files under the working directory, so every
    # path handed to it is relative to the repo root.
    log_rel = f"syn/out/yosys_{top}"
    cmd = [yosys_exe(), "-q",
           "-l", f"{log_rel}.log", "-p", yosys_script(top, log_rel)]
    t0 = time.time()
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        # Show the tail of the log: Yosys puts the actual error last.
        tail = (ROOT / f"{log_rel}.log").read_text()[-2000:] if (
            ROOT / f"{log_rel}.log").exists() else r.stderr
        raise RuntimeError(f"yosys failed on {top}:\n{tail}")
    res = parse_stat((ROOT / f"{log_rel}.stat").read_text())
    res["levels"] = parse_ltp((ROOT / f"{log_rel}.ltp").read_text())
    res["logic_ns"] = parse_sta((ROOT / f"{log_rel}.sta").read_text())
    res["seconds"] = round(time.time() - t0, 1)
    return res


def write_summary(results: dict[str, dict]) -> Path:
    """Markdown table, committed so the numbers are visible in review."""
    REPORTS.mkdir(parents=True, exist_ok=True)
    path = REPORTS / "yosys_summary.md"
    cols = ["LUT", "FF", "BRAM36", "BRAM18", "LUTRAM", "DSP", "CARRY", "MUXF"]
    lines = [
        "# Yosys synthesis summary (Xilinx, `synth_xilinx -family xc7 -abc9`)",
        "",
        "Generated by `syn/yosys_synth.py`. Resource counts are Xilinx",
        "primitives after Yosys technology mapping; Vivado's own numbers",
        "will differ somewhat (it optimises harder and packs differently).",
        "",
        "**Logic ns** is Yosys `sta` over the 7-series cell delay models:",
        "the slowest register-to-register path counting LOGIC delay only,",
        "since nothing is placed or routed. Routing is typically about half",
        "of a real path, so the working target for the 6.4 ns (156.25 MHz)",
        "clock is <= ~3.2 ns here. **Levels** is the longest chain of",
        "LUT/MUXF/CARRY cells on any path. Sign-off Fmax comes from",
        "`syn/vivado/ooc_synth.tcl` on an UltraScale+ part, which is faster",
        "than the 7-series models used here.",
        "",
        "| module | what | " + " | ".join(cols) + " | levels | logic ns |",
        "|---|---|" + "---|" * len(cols) + "---|---|",
    ]
    for top, r in results.items():
        # One row per module, in pipeline order.
        lines.append(f"| `{top}` | {MODULES[top]} | "
                     + " | ".join(str(r[c]) for c in cols)
                     + f" | {r['levels']} | {r['logic_ns']} |")
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return path


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("which", nargs="*", help="modules (default: all)")
    a = p.parse_args()
    names = a.which or list(MODULES)
    # Reject typos before spending minutes synthesising the rest.
    bad = [n for n in names if n not in MODULES]
    if bad:
        print(f"unknown module(s) {bad}; choose from {list(MODULES)}")
        return 2

    results = {}
    for n in names:
        print(f"synthesising {n} ...", flush=True)
        results[n] = run(n)
        r = results[n]
        print(f"  LUT {r['LUT']}  FF {r['FF']}  BRAM36 {r['BRAM36']}  "
              f"BRAM18 {r['BRAM18']}  DSP {r['DSP']}  levels {r['levels']}  "
              f"logic {r['logic_ns']} ns  "
              f"({r['seconds']} s)", flush=True)
    # Only a full run rewrites the committed summary, so a quick one-module
    # check never leaves it half-populated.
    if not a.which:
        print(f"summary written to {write_summary(results).relative_to(ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
