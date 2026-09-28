# -----------------------------------------------------------------------------
# ooc_synth.tcl - out-of-context synthesis, place and route in Vivado.
#
# This is the SIGN-OFF flow. syn/yosys_synth.py gives resource counts and a
# logic-only timing estimate on any machine; this gives the real answer -
# Fmax after placement and routing, on a real part - but needs Vivado, which
# only runs on x86-64 Windows or Linux.
#
# "Out of context" means the module is implemented on its own, with no board,
# no pins and no surrounding design. Its ports are left unplaced and its
# inputs and outputs are treated as registered elsewhere. That measures
# exactly THIS logic: the number that belongs in a write-up.
#
# USAGE (from the repo root, in a shell where `vivado` is on the PATH):
#
#   vivado -mode batch -source syn/vivado/ooc_synth.tcl \
#          -tclargs feed_handler_top xcku5p-ffvb676-2-e
#
#   arg 1  top module     default feed_handler_top  (any module in rtl/)
#   arg 2  FPGA part      default xcku5p-ffvb676-2-e
#
# Kintex UltraScale+ KU5P: 10G-class transceivers, 480 BRAM36 (the order
# table needs ~352), and part of the free Vivado ML Standard edition - check
# your install lists it (Tools > Settings > Project > Device). Any part with
# enough block RAM works; only the utilization percentages change.
#
# OUTPUT: syn/out/vivado/<top>/  - reports and a checkpoint. The summary line
# printed at the end is the one to quote: WNS, Fmax, LUT/FF/BRAM/DSP.
# -----------------------------------------------------------------------------

# --- arguments, with defaults -------------------------------------------------
set top  [expr {[llength $argv] > 0 ? [lindex $argv 0] : "feed_handler_top"}]
set part [expr {[llength $argv] > 1 ? [lindex $argv 1] : "xcku5p-ffvb676-2-e"}]

# Paths are resolved from this script's location, so it runs from anywhere.
set here [file dirname [file normalize [info script]]]
set root [file normalize [file join $here .. ..]]
# Every report and checkpoint for this top goes in its own folder.
set out  [file join $root syn out vivado $top]
file mkdir $out
puts "== ooc_synth: top=$top part=$part out=$out"

# --- sources ------------------------------------------------------------------
# Every RTL file, package first. Reading all of them for every top keeps this
# script ignorant of the hierarchy; Vivado discards what the top does not use.
# The file list; order matters only in that the package comes first.
set sources {
    itch_pkg.sv sdp_ram.sv tdp_ram.sv hdr_parse.sv msg_frame.sv
    msg_frame_slow.sv decode.sv order_table.sv priority_encoder.sv
    price_levels.sv feed_handler_top.sv
}
# -sv: these are SystemVerilog files, not plain Verilog.
foreach f $sources {
    read_verilog -sv [file join $root rtl $f]
}

# --- synthesis ------------------------------------------------------------------
# -mode out_of_context: no I/O buffers, ports stay internal nets.
# -flatten_hierarchy rebuilt: optimise across module boundaries, but keep
# names readable in the timing report.
synth_design -top $top -part $part -mode out_of_context \
             -flatten_hierarchy rebuilt

# The 156.25 MHz datapath clock of a 10GBASE-R MAC: 6.4 ns. Constraints go in
# after synthesis because the clock port only exists once the design does.
read_xdc [file join $here ooc.xdc]
# cfg_* inputs are static for a trading session. Only decode has them, so
# the false path is applied only where the ports exist.
if {[llength [get_ports -quiet cfg_*]] > 0} {
    set_false_path -from [get_ports cfg_*]
}

write_checkpoint -force [file join $out post_synth.dcp]
report_utilization    -file [file join $out util_synth.rpt]

# --- implementation -------------------------------------------------------------
# Placement and routing are what make the timing honest: most of a real path
# is wire delay, and only a routed design has wires.
opt_design
# Placement puts each cell on a physical site; its wire lengths are
# what turn the synthesis estimate into real timing.
place_design
phys_opt_design
# Routing connects the placed cells. After this, delays are real.
route_design

write_checkpoint -force [file join $out post_route.dcp]
report_utilization           -file [file join $out util.rpt]
report_utilization -hierarchical -file [file join $out util_hier.rpt]
report_timing_summary -max_paths 10 -file [file join $out timing_summary.rpt]
# The ten worst paths in full: which logic limits Fmax, and why.
report_timing -max_paths 10 -sort_by slack -path_type full \
              -file [file join $out timing_paths.rpt]

# --- the numbers to quote -------------------------------------------------------
set period 6.4
set wns [get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]]
# Fmax from the worst setup slack: the period that would give zero slack.
set fmax [format "%.1f" [expr {1000.0 / ($period - $wns)}]]

# Utilization straight from the routed design, by primitive group.
proc count {pattern} {
    return [llength [get_cells -hierarchical -filter "PRIMITIVE_TYPE =~ $pattern"]]
}
# The groups quoted in the write-up: LUTs, flip-flops, block RAM, DSP.
set luts  [count "CLB.LUT.*"]
set ffs   [count "REGISTER.*.*"]
set bram  [count "BLOCKRAM.BRAM.RAMB36*"]
set bram18 [count "BLOCKRAM.BRAM.RAMB18*"]
set dsps  [count "ARITHMETIC.DSP.*"]

set summary "top=$top part=$part WNS=${wns}ns Fmax=${fmax}MHz\
LUT=$luts FF=$ffs RAMB36=$bram RAMB18=$bram18 DSP=$dsps"
puts "== RESULT $summary"
# Appended, so a run over every module builds one table of results.
set fh [open [file join $root syn out vivado results.txt] a]
puts $fh $summary
close $fh
