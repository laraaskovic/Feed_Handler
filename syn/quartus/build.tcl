# -----------------------------------------------------------------------------
# build.tcl - synthesise, place and route one module with Quartus.
#
# The Intel counterpart of syn/vivado/ooc_synth.tcl. It exists because Vivado
# runs only on x86-64 and only where someone has installed it; a lab machine
# with Quartus is a lab machine that can still give a ROUTED Fmax, which is
# the number the Yosys flow cannot produce. Same RTL, same 6.4 ns constraint,
# same per-module out-of-context style - only the vendor differs.
#
# USAGE (from the repo root):
#
#   quartus_sh -t syn/quartus/build.tcl <top> [device] [family]
#
#   arg 1  top module   e.g. priority_encoder   (any module in rtl/)
#   arg 2  device       default 5CSEMA5F31C6    (Cyclone V, the DE1-SoC part)
#   arg 3  family       default "Cyclone V"
#
# Normally you call syn/quartus/run.sh instead, which chains this with sta.tcl.
#
# VIRTUAL PINS - the one thing that makes this work.
#
# Vivado has synth_design -mode out_of_context, which simply leaves ports as
# internal nets. Quartus has no such switch: it insists every top-level port
# becomes a package pin, and these modules have far more port bits than any
# lab device has pins - feed_handler_top alone has a 64-bit datapath plus
# 64-bit sequence numbers plus six 32-bit counters. The fitter would abort
# with "cannot place all pins" before routing a single wire.
#
# VIRTUAL_PIN is the fix: the port becomes an internal node fed by a LUT-less
# register, exactly like Vivado's out-of-context ports. We turn it on for
# everything with a wildcard, then turn it back OFF for clk alone, because a
# virtual clock would give us no clock tree and therefore meaningless timing.
# A more specific assignment wins in Quartus, so the ordering here is safe.
#
# DEVICE SIZE. order_table needs ~12.7 Mbit of block RAM (16384 sets x 8 ways
# x 97 bits), which is more than any Cyclone V carries once width fragmenting
# is counted. It will not fit the default device and is not meant to - run the
# modules whose timing is actually in question:
#
#   priority_encoder   no block RAM at all   fits anything
#   price_levels       16 BRAM36 equivalent  fits the default
#   order_table        ~12.7 Mbit            needs Stratix V / Arria 10
#
# To see what your install actually offers:
#   quartus_sh --tcl_eval "puts [get_family_list]"
#   quartus_sh --tcl_eval "puts [get_part_list -family {Cyclone V}]"
#
# OUTPUT: syn/out/quartus/<top>/ - project, reports, logs.
# -----------------------------------------------------------------------------

package require ::quartus::project
package require ::quartus::flow

# --- arguments, with defaults -------------------------------------------------
set argv $quartus(args)
set top    [expr {[llength $argv] > 0 ? [lindex $argv 0] : "feed_handler_top"}]
set device [expr {[llength $argv] > 1 ? [lindex $argv 1] : "5CSEMA5F31C6"}]
set family [expr {[llength $argv] > 2 ? [lindex $argv 2] : "Cyclone V"}]

# This script lives in syn/quartus/; the repo root is two levels up. Deriving
# it means the script works from any working directory.
set here [file dirname [file normalize [info script]]]
set root [file dirname [file dirname $here]]
set out  [file join $root syn out quartus $top]

file mkdir $out
puts "== build: top=$top device=$device family=$family out=$out"

# Quartus scatters dozens of intermediate files beside the project, so give
# each module its own directory rather than sharing one.
cd $out

# --- project ------------------------------------------------------------------
project_new -overwrite $top
set_global_assignment -name FAMILY $family
set_global_assignment -name DEVICE $device
set_global_assignment -name TOP_LEVEL_ENTITY $top

# Every RTL file, package first. Reading all of them for every top keeps this
# script ignorant of the hierarchy; Quartus discards what the top does not use.
set sources {
    itch_pkg.sv sdp_ram.sv tdp_ram.sv hdr_parse.sv msg_frame.sv
    msg_frame_slow.sv decode.sv order_table.sv priority_encoder.sv
    price_levels.sv feed_handler_top.sv
}
foreach f $sources {
    set_global_assignment -name SYSTEMVERILOG_FILE [file join $root rtl $f]
}
set_global_assignment -name SDC_FILE [file join $here ooc.sdc]

# The RTL uses packages, typed enums and `default_nettype. Files added as
# SYSTEMVERILOG_FILE already parse as SV; this pins the dialect explicitly so
# the result does not depend on the install's default.
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
# Chase frequency rather than area - the comparable setting to Vivado's
# default synthesis strategy plus phys_opt_design.
set_global_assignment -name OPTIMIZATION_MODE "HIGH PERFORMANCE EFFORT"
set_global_assignment -name NUM_PARALLEL_PROCESSORS ALL

# --- out-of-context ports -----------------------------------------------------
# See the header: every port virtual, except the clock. A wildcard ON plus a
# specific OFF for clk does NOT work - Quartus 18.1 still virtualises clk and
# warns "clock port is fed by virtual pin", which makes every timing number
# meaningless. So elaborate first to learn the port names, then assign each
# non-clock port explicitly.
export_assignments
puts "== build: elaborating to enumerate ports"
execute_module -tool map -args "--analysis_and_elaboration"
set nvpin 0
foreach_in_collection p [get_names -filter * -node_type pin] {
    set name [get_name_info -info full_path $p]
    if {$name ne "clk"} {
        set_instance_assignment -name VIRTUAL_PIN ON -to $name
        incr nvpin
    }
}
puts "== build: $nvpin ports made virtual (clk left as a real pin)"
export_assignments

# --- synthesis, then place and route ------------------------------------------
# map = analysis and synthesis. After this the netlist exists but has no
# physical location, so its timing is an estimate, exactly like Yosys's.
puts "== build: analysis and synthesis"
execute_module -tool map

# fit = placement and routing. This is what makes the timing honest: most of a
# real path is wire delay, and only a routed design has wires.
puts "== build: place and route"
execute_module -tool fit

# No assembler: a .sof would only matter if we were programming a board, and
# the whole point is that we do not have one.

puts "== build: done, reports in $out"
project_close
