#!/usr/bin/env bash
# -----------------------------------------------------------------------------
# run.sh - drive the Quartus flow: build, then time, then print the table.
#
#   ./syn/quartus/run.sh                        # the modules worth timing
#   ./syn/quartus/run.sh price_levels           # just one
#   ./syn/quartus/run.sh price_levels 5CGXFC9E7F35C8 "Cyclone V"
#
# Two Quartus executables are involved and they are not interchangeable:
# quartus_sh runs the project and the fitter, quartus_sta owns the timing
# netlist. Hence two scripts and this wrapper, rather than one file.
#
# WHICH MODULES. The default list is the three whose timing is actually in
# question, and it deliberately omits two things:
#
#   priority_encoder  purely combinational - it has a clk port but registers
#                     nothing, so there are no register-to-register paths and
#                     no Fmax. Its delay shows up inside price_levels, which
#                     instantiates it and registers the result. Time that.
#   order_table       ~12.7 Mbit of block RAM. Will not fit a Cyclone V. Pass
#                     it explicitly with a Stratix V or Arria 10 device if
#                     your install has one.
# -----------------------------------------------------------------------------
set -u

here="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
root="$(dirname "$(dirname "$here")")"

device="${2:-5CSEMA5F31C6}"
family="${3:-Cyclone V}"

if [ $# -ge 1 ]; then
    tops=("$1")
else
    tops=(price_levels hdr_parse msg_frame decode)
fi


command -v quartus_sh  >/dev/null || { echo "quartus_sh not on PATH - source the Quartus settings script first"; exit 1; }
command -v quartus_sta >/dev/null || { echo "quartus_sta not on PATH"; exit 1; }

fail=0
for top in "${tops[@]}"; do
    echo
    echo "################ $top ################"
    if ! quartus_sh -t "$here/build.tcl" "$top" "$device" "$family"; then
        echo "!! build failed for $top - see $root/syn/out/quartus/$top/"
        fail=1
        continue
    fi
    if ! quartus_sta -t "$here/sta.tcl" "$top"; then
        echo "!! timing analysis failed for $top"
        fail=1
    fi
done

echo
echo "================ results ================"
cat "$root/syn/out/quartus/results.txt" 2>/dev/null || echo "(nothing - every module failed)"
echo
echo "Critical paths in full: syn/out/quartus/<top>/timing_paths.rpt"
exit $fail
