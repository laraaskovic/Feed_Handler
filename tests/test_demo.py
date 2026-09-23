"""Smoke test for the narrated walkthrough (model/demo.py).

The demo is documentation that executes, so it has to keep executing.  It also
asserts nothing itself, which is fine - the value is that it runs the real Book
against hand-written messages, so a regression in the book breaks the demo's
invariant counters and this test catches it.
"""

import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def test_demo_runs_clean():
    r = subprocess.run([sys.executable, str(ROOT / "model" / "demo.py")],
                       capture_output=True, text=True)
    assert r.returncode == 0, r.stderr
    out = r.stdout
    # The walkthrough must reach the end with a spotless book.
    assert "0 violations, 0 orphan refs" in out
    assert "messages applied : 13" in out
    # And the interesting moments must actually appear in the output.
    assert "<- best bid" in out and "<- best ask" in out
    assert "(book is empty)" in out      # step 13 empties it completely
    assert "bid none   |   ask none" in out   # and reports no BBO
