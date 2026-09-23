"""Check the project's commenting rule: no more than 3 code lines in a row
without a comment.

The rule exists because this is a learning project: every few lines should
say WHAT the code is doing or WHY, so a reader never has to reverse-engineer
a block of hardware from its syntax. A checker makes the rule enforceable
rather than aspirational.

What counts as a comment: `//` or `/* ... */` in SystemVerilog, `#` in
Python, Tcl and XDC, and any line of a Python docstring. Blank lines neither
count as code nor reset the run. A trailing comment on a code line counts.

Run from the repo root (plain Windows Python is fine; no simulator needed):

    python tools/comment_density.py            # the hardware + test files
    python tools/comment_density.py rtl/x.sv   # specific files

Exit status 1 if any file breaks the rule, listing the first line of each
over-long run.
"""

from __future__ import annotations

# Standard library only, so this runs on any Python with no setup.
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MAX_RUN = 3                      # code lines allowed between comments

# The files the rule applies to: all RTL, testbenches and synthesis scripts,
# plus the tools and model code written for the hardware verification.
# Hardware and verification sources; generated files are excluded.
DEFAULT_GLOBS = [
    "rtl/*.sv", "tb/*.sv", "tb/*.py", "syn/*.py", "syn/vivado/*.tcl",
    "syn/vivado/*.xdc", "tools/mutate.py", "tools/comment_density.py",
    "model/table_sim.py",
]


def sv_comment_flags(lines: list[str]) -> list[bool | None]:
    """Per line: True = has a comment, False = code only, None = blank."""
    flags: list[bool | None] = []
    in_block = False
    for line in lines:
        s = line.strip()
        # Inside a /* ... */ block every line is comment.
        if in_block:
            # Block-comment continuation: counted as comment until '*/'.
            flags.append(True)
            if "*/" in s:
                in_block = False
            continue
        # Blank lines are neutral: neither code nor comment.
        if not s:
            flags.append(None)
            continue
        if "/*" in s:
            flags.append(True)
            # A block that does not close on this line continues.
            in_block = "*/" not in s[s.index("/*"):]
            continue
        # Anything else is code, commented if it carries a trailing '//'.
        flags.append("//" in s)
    return flags


def hash_comment_flags(lines: list[str], python: bool) -> list[bool | None]:
    """Same, for '#'-comment languages; Python docstrings count as comment."""
    flags: list[bool | None] = []
    in_doc = False
    for line in lines:
        s = line.strip()
        # Docstring bodies are documentation, line by line.
        if in_doc:
            # Inside a docstring: every line is documentation until it closes.
            flags.append(True)
            if '"""' in s:
                in_doc = False
            continue
        # Blank lines are neutral here too.
        if not s:
            flags.append(None)
            continue
        if python and s.startswith('"""'):
            flags.append(True)
            # A docstring that does not close on its opening line continues.
            in_doc = s.count('"""') == 1
            continue
        flags.append("#" in s)
    return flags


def check(path: Path) -> list[int]:
    """Line numbers (1-based) where an over-long uncommented run starts."""
    lines = path.read_text(encoding="utf-8").splitlines()
    # Pick the comment syntax from the file type.
    if path.suffix == ".sv":
        flags = sv_comment_flags(lines)
    else:
        flags = hash_comment_flags(lines, python=path.suffix == ".py")
    bad: list[int] = []
    run = 0
    start = 0
    for i, f in enumerate(flags, start=1):
        # Blank: skip. Comment: the run is over. Code: extend the run.
        # Walk the flags, counting consecutive code lines since a comment.
        if f is None:
            continue
        if f:
            run = 0
            continue
        # First code line of a new run: remember where it started.
        if run == 0:
            start = i
        run += 1
        # Report each over-long run once, at its first line.
        if run == MAX_RUN + 1:
            bad.append(start)
    # Every run that grew past the limit, by its first line.
    return bad


def main() -> int:
    if len(sys.argv) > 1:
        files = [Path(a) for a in sys.argv[1:]]
    else:
        files = sorted({p for g in DEFAULT_GLOBS for p in ROOT.glob(g)})
    failures = 0
    for f in files:
        bad = check(f)
        name = f.relative_to(ROOT) if f.is_absolute() else f
        # One line per file: OK, or every place that needs a comment.
        if bad:
            # Count the failing file and list where comments are missing.
            failures += 1
            print(f"{name}: {len(bad)} run(s) over {MAX_RUN} lines, at "
                  + ", ".join(map(str, bad)))
        else:
            print(f"{name}: ok")
    print(f"\n{len(files) - failures}/{len(files)} files meet the rule")
    return 1 if failures else 0


if __name__ == "__main__":
    raise SystemExit(main())
