"""Mutation testing: prove the testbenches can fail.

A green test suite means nothing until it has been shown capable of going
red. Each mutation below breaks the RTL in one specific, realistic way - the
kind of bug that would really be written - and names the bench that should
catch it. The script copies rtl/ to a scratch directory, applies ONE mutation
to the copy, runs the bench against the copy, and reports whether the
mutation was KILLED (some test failed, as it should) or SURVIVED (every test
still passed: the suite has a blind spot). rtl/ itself is never modified.

Run from the repo root, inside WSL:

    wsl .venv/bin/python tools/mutate.py            # every mutation
    wsl .venv/bin/python tools/mutate.py 3 7        # just mutations 3 and 7

Results: printed, and written to tb/mutation_report.md.
"""

from __future__ import annotations

import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SCRATCH = ROOT / "tb" / "sim_build" / "mutants"

# (file, original text, mutated text, bench, what the mutation models)
# The original text must appear exactly once, so each mutation is unambiguous.
MUTATIONS = [
    ("order_table.sv",
     "      : (same_set && hit_a)      ? hitv_a",
     "      : 1'b0                     ? hitv_a",
     "order_table",
     "Replace into the SAME full set forgets the way it is vacating"),
    ("order_table.sv",
     "              // Only orders that went on the ladder may come off it.\n"
     "              m_valid <= e_ladder;",
     "              // Only orders that went on the ladder may come off it.\n"
     "              m_valid <= 1'b1;",
     "order_table",
     "Delete of an out-of-band order still removes shares from the ladder"),
    ("order_table.sv",
     "    add_sv = (|add_wv) ? '0 : (sh_a ? shv_a : (st_free_ok ? st_freev : '0));",
     "    add_sv = '0;",
     "order_table",
     "The overflow stash is never used: full sets drop orders"),
    ("order_table.sv",
     "      hash_idx[i] = r[i] ^ (^(hi & (h3_mask(i) >> IDX_W)));",
     "      hash_idx[i] = r[i];",
     "order_table",
     "H3 hash replaced by plain low-bit indexing"),
    ("order_table.sv",
     "          m_done <= !(is_rep && found_a);",
     "          m_done <= 1'b1;",
     "order_table",
     "A Replace signals completion twice (half-applied BBO published)"),
    ("price_levels.sv",
     "    fwd_hit = wr_valid && s1_valid",
     "    fwd_hit = 1'b0 && s1_valid",
     "price_levels",
     "Read-during-write forwarding removed from the tick ladder"),
    ("price_levels.sv",
     "      .clk(clk), .we(bbo_d2_bid), .waddr(bbo_d2_tick), .wdata(bbo_d2_qty),",
     "      .clk(clk), .we(bbo_d1_bid), .waddr(bbo_d1_tick), .wdata(bbo_d1_qty),",
     "price_levels",
     "BBO RAM write delay one cycle short: size and price out of step"),
    ("msg_frame.sv",
     "        desync <= 1'b1;",
     "        desync <= 1'b0;",
     "msg_frame",
     "A bad length never desynchronises: garbage framed as messages"),
    ("msg_frame.sv",
     "    tail     = s_tdata >> {need[3:0], 3'b000};",
     "    tail     = s_tdata >> {need[3:0] - 4'd1, 3'b000};",
     "msg_frame",
     "Off-by-one in the leftover shift after a message completes"),
    ("decode.sv",
     "    subpenny_c = p2_in_band",
     "    subpenny_c = 1'b0 && p2_in_band",
     "decode",
     "Sub-penny prices silently truncated onto a tick"),
    ("hdr_parse.sv",
     "    vlan_tagged     = (ethertype_outer == 16'h8100);",
     "    vlan_tagged     = 1'b0;",
     "hdr_parse",
     "VLAN tags not detected: hard-coded 62-byte header"),
    ("feed_handler_top.sv",
     "  assign ot_valid = dc_valid && (dc_locate == cfg_locate);",
     "  assign ot_valid = dc_valid;",
     "feed_handler_top",
     "Symbol filter removed: every symbol's orders reach one book"),
]


def run_mutation(n: int) -> tuple[str, int, int, list[str]]:
    """Apply mutation n to a copy of rtl/, run its bench, return the result."""
    fname, old, new, bench, _why = MUTATIONS[n]
    rtl_copy = SCRATCH / f"m{n}" / "rtl"
    # A fresh copy each time, so mutations never stack.
    if rtl_copy.exists():
        shutil.rmtree(rtl_copy)
    shutil.copytree(ROOT / "rtl", rtl_copy)
    target = rtl_copy / fname
    text = target.read_text(encoding="utf-8")
    # Exactly one match, or the mutation is ambiguous (or stale) - an error.
    hits = text.count(old)
    if hits != 1:
        raise SystemExit(f"mutation {n}: original text found {hits} times in {fname}")
    target.write_text(text.replace(old, new), encoding="utf-8")

    env = dict(os.environ, FH_RTL_DIR=str(rtl_copy))
    # Real-data replay is slow and adds nothing here; skip it for the top.
    if bench == "feed_handler_top":
        env["REAL_FILE"] = "absent.itch"
    r = subprocess.run(
        [sys.executable, str(ROOT / "tb" / "run.py"), bench, "--tag", f"mut{n}"],
        cwd=ROOT, env=env, capture_output=True, text=True)
    out = r.stdout + r.stderr
    # The cocotb summary line: ** TESTS=n PASS=p FAIL=f SKIP=s **
    m = re.search(r"TESTS=(\d+) PASS=(\d+) FAIL=(\d+)", out)
    if not m:
        # No summary at all means the mutant did not even build or load -
        # which still counts as caught, but say so.
        return ("KILLED (did not build)", 0, 0, [])
    tests, fails = int(m.group(1)), int(m.group(3))
    failed = re.findall(r"\*\* \S+\.(test_\w+)\s+FAIL", out)
    return ("KILLED" if fails else "SURVIVED", tests, fails, failed)


def main() -> int:
    which = [int(a) for a in sys.argv[1:]] or list(range(len(MUTATIONS)))
    SCRATCH.mkdir(parents=True, exist_ok=True)
    rows = []
    for n in which:
        fname, _o, _n, bench, why = MUTATIONS[n]
        print(f"[{n}] {fname}: {why} ...", flush=True)
        verdict, tests, fails, failed = run_mutation(n)
        print(f"    {verdict}: {fails}/{tests} tests failed {failed}", flush=True)
        rows.append((n, fname, why, bench, verdict, fails, tests, failed))

    # A markdown report, committed alongside the benches it vouches for.
    lines = [
        "# Mutation testing report",
        "",
        "Generated by `tools/mutate.py`. Each row breaks the RTL in one",
        "deliberate way and runs the bench that should notice. KILLED means",
        "at least one test failed - the suite can see that bug. SURVIVED",
        "would mean a blind spot.",
        "",
        "| # | file | mutation | bench | verdict | tests failed |",
        "|---|---|---|---|---|---|",
    ]
    for n, fname, why, bench, verdict, fails, tests, failed in rows:
        names = ", ".join(f"`{t}`" for t in failed) or "-"
        lines.append(f"| {n} | `{fname}` | {why} | {bench} | **{verdict}** | "
                     f"{fails}/{tests}: {names} |")
    report = ROOT / "tb" / "mutation_report.md"
    # Only a full run rewrites the committed report.
    if len(which) == len(MUTATIONS):
        report.write_text("\n".join(lines) + "\n", encoding="utf-8")
        print(f"report written to {report.relative_to(ROOT)}")
    survived = [r for r in rows if r[4] == "SURVIVED"]
    return 1 if survived else 0


if __name__ == "__main__":
    raise SystemExit(main())
