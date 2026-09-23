#!/usr/bin/env bash
# Install the simulation toolchain inside WSL Ubuntu.
#
# Run this from INSIDE Ubuntu, after `wsl --install -d Ubuntu` has completed on
# the Windows side:
#
#     cd /mnt/c/Users/laraa/Documents/GitHub/Feed_Handler
#     bash tools/setup-sim.sh
#
# What gets installed and why:
#
#   verilator      The simulator. Compiles SystemVerilog to C++ and runs it,
#                  which is why it is an order of magnitude faster than
#                  interpreted simulators - it matters once we are replaying
#                  millions of real messages through the pipeline in step 9.
#   cocotb         Lets the testbench be Python instead of SystemVerilog. That
#                  is the whole point for this project: the testbench can
#                  import model/ directly and compare RTL against the golden
#                  model in the same process, with no file marshalling.
#   cocotbext-axi  Ready-made AXI-Stream drivers and monitors, so we are not
#                  debugging our own bus driver while also debugging the parser.
#   gtkwave        Waveform viewer, for when a test fails and the diff is not
#                  enough to explain why.
#
# Everything is idempotent: re-running it is safe.

set -euo pipefail

echo "=== checking we are actually inside Linux ==="
if [[ "$(uname -s)" != "Linux" ]]; then
    echo "This script must run inside WSL Ubuntu, not Windows." >&2
    echo "Open Ubuntu from the Start menu, then re-run it." >&2
    exit 1
fi
echo "ok: $(uname -sr)"

echo
echo "=== apt packages ==="
sudo apt-get update -qq
# build-essential and the rest are Verilator's own build/runtime dependencies;
# apt pulls most in automatically but being explicit makes failures readable.
sudo apt-get install -y --no-install-recommends \
    verilator \
    gtkwave \
    build-essential \
    python3 python3-pip python3-venv \
    git

echo
echo "=== versions ==="
verilator --version
python3 --version

echo
echo "=== python packages (in a venv, to avoid fighting apt's python) ==="
# Ubuntu 24.04+ marks the system python as externally managed, so pip refuses
# to install into it. A venv is the clean answer and keeps this project's
# packages separate from anything else in the distro.
VENV="$HOME/.venvs/itch"
python3 -m venv "$VENV"
"$VENV/bin/pip" install --upgrade pip -q
"$VENV/bin/pip" install -q cocotb cocotb-bus cocotbext-axi pytest

echo
echo "=== verifying ==="
"$VENV/bin/python" -c "import cocotb; print('cocotb', cocotb.__version__)"
"$VENV/bin/python" -c "import cocotbext.axi as a; print('cocotbext-axi ok')"

echo
echo "=== checking the model still runs under Linux python ==="
# The golden model is pure stdlib, so it must work identically here. If this
# fails, something is wrong with the line endings or the mount, not the code.
cd "$(dirname "$0")/.."
"$VENV/bin/python" -m pytest tests -q 2>&1 | tail -3

cat <<'EOF'

=== done ===

Activate the environment in each new shell:

    source ~/.venvs/itch/bin/activate

Then, from the repo root inside WSL:

    cd /mnt/c/Users/laraa/Documents/GitHub/Feed_Handler
    python -m pytest tests -q          # the golden model, same as on Windows
    make -C tb                         # the cocotb tests (once step 4 exists)

Note on the mount: working out of /mnt/c means one copy of the repo, shared
with Windows and VS Code. Cross-filesystem access is slow in WSL, but these
files are tiny and Verilator's own build output is what dominates - not worth
keeping a second clone in sync over.

The tshark cross-check still runs on the Windows side, where Wireshark lives.
EOF
