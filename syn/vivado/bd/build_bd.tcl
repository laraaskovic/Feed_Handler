# -----------------------------------------------------------------------------
# build_bd.tcl - the whole feed handler as a Vivado IP Integrator block design.
#
#   vivado -mode batch -source syn/vivado/bd/build_bd.tcl [-tclargs <mode> [<part>]]
#
#   mode  create  (default) project + block design + wrapper, then stop.
#                 Open syn/out/vivado/bd/feed_handler_bd.xpr in the GUI and
#                 the diagram is there: Flow Navigator > Open Block Design.
#         synth   ...and synthesize it out of context.
#         impl    ...and place and route, with the same summary line as
#                 ooc_synth.tcl, so the two flows can be compared directly,
#                 plus register-to-register slack and the worst path ending
#                 in each block.
#   part  default xcku5p-ffvb676-2-e, as everywhere else.
#
# WHAT THE DIAGRAM IS
#
# The same pipeline as rtl/feed_handler_top.sv, one block per stage, drawn
# left to right in the order the data flows:
#
#   s (AXIS) -> hdr_parse =AXIS=> msg_frame -> decode -> locate_filter
#            -> order_table -> price_levels -> bbo_out -> m_* outputs
#
# Each block is an RTL module reference (rtl/bd/*.v wrapping rtl/*.sv), not a
# copy: edit the SystemVerilog and the diagram picks it up (Vivado offers
# "Refresh Changed Modules"). The one Xilinx IP is proc_sys_reset, which
# synchronizes the external reset into the clock domain and fans it out.
#
# The top-level ports are named exactly as feed_handler_top's, so the
# generated feed_handler_wrapper is a drop-in replacement for it, and
# tb/bd_equiv_tb.sv runs both side by side to prove they match.
# -----------------------------------------------------------------------------

set mode [expr {[llength $argv] > 0 ? [lindex $argv 0] : "create"}]
set part [expr {[llength $argv] > 1 ? [lindex $argv 1] : "xcku5p-ffvb676-2-e"}]
if {$mode ni {create synth impl}} {
    error "mode must be create, synth or impl - got '$mode'"
}

set here [file dirname [file normalize [info script]]]
set root [file normalize [file join $here .. .. ..]]
# synth and impl build a separate project in bd_impl/, so a long run never
# fights the GUI over bd/ and never wipes the simulation sim_equiv.tcl set up.
set out  [file join $root syn out vivado [expr {$mode eq "create" ? "bd" : "bd_impl"}]]
puts "== build_bd: mode=$mode part=$part out=$out"

# Pipeline parameters, the same defaults as feed_handler_top.
set DW 64; set MAX_MSG 50
set SETS 16384; set WAYS 8; set STASH 16
set BAND_TICKS 4096; set TW 12

# --- project ------------------------------------------------------------------
create_project feed_handler_bd $out -part $part -force
set_property target_language Verilog [current_project]

# The real RTL, package first, then the block-design wrappers around it.
set sv_sources {
    itch_pkg.sv sdp_ram.sv tdp_ram.sv hdr_parse.sv msg_frame.sv decode.sv
    order_table.sv priority_encoder.sv price_levels.sv
}
foreach f $sv_sources {
    add_files -norecurse [file join $root rtl $f]
    set_property file_type SystemVerilog [get_files $f]
}
add_files -norecurse [glob [file join $root rtl bd *.v]]
update_compile_order -fileset sources_1

# --- block design ---------------------------------------------------------------
create_bd_design feed_handler

# Shorthand: connect pins by "cell/pin" name. One get_bd_pins call for the
# whole list: Vivado objects collected with lappend decay to plain strings,
# which connect_bd_net then rejects.
proc wire {args} {
    connect_bd_net [get_bd_pins $args]
}

# Stage blocks: RTL module references, configured with the shared parameters.
proc stage {name module {params {}}} {
    set c [create_bd_cell -type module -reference $module $name]
    if {[llength $params] > 0} { set_property -dict $params $c }
    return $c
}
stage hdr_parse     bd_hdr_parse     [list CONFIG.DW $DW]
stage msg_frame     bd_msg_frame     [list CONFIG.DW $DW CONFIG.MAX_MSG $MAX_MSG]
stage decode        bd_decode        [list CONFIG.MAX_MSG $MAX_MSG CONFIG.BAND_TICKS $BAND_TICKS]
stage locate_filter bd_locate_filter
stage order_table   bd_order_table   [list CONFIG.SETS $SETS CONFIG.WAYS $WAYS \
                                           CONFIG.STASH $STASH CONFIG.TICK_W $TW]
stage price_levels  bd_price_levels  [list CONFIG.BAND_TICKS $BAND_TICKS]
stage bbo_out       bd_bbo_out       [list CONFIG.BAND_TICKS $BAND_TICKS]
set stages {hdr_parse msg_frame decode locate_filter order_table price_levels bbo_out}

# Reset: the Processor System Reset IP. It synchronizes the external reset to
# clk and holds it for a few cycles after release - the job feed_handler_top
# leaves to its surroundings. Its input polarity is not set here: it follows
# the ACTIVE_HIGH rst port it is connected to. peripheral_reset is active-high.
create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_sync

# --- clock and reset ports ------------------------------------------------------
# 156.25 MHz: the 10GBASE-R datapath clock. FREQ_HZ here propagates to every
# block's clock pin and its AXI-Stream interfaces.
create_bd_port -dir I -type clk -freq_hz 156250000 clk
create_bd_port -dir I -type rst rst
set_property CONFIG.POLARITY ACTIVE_HIGH [get_bd_ports rst]

connect_bd_net [get_bd_ports clk] \
    [get_bd_pins [concat rst_sync/slowest_sync_clk [lmap s $stages {string cat $s/clk}]]]
connect_bd_net [get_bd_ports rst] [get_bd_pins rst_sync/ext_reset_in]
wire rst_sync/peripheral_reset {*}[lmap s $stages {string cat $s/rst}]

# --- stage 1 -> 2: AXI-Stream, one interface connection ---------------------------
# Named "s" so the wrapper's ports come out as s_tdata, s_tkeep, ... exactly
# like feed_handler_top's.
make_bd_intf_pins_external [get_bd_intf_pins hdr_parse/s_axis]
set_property name s [get_bd_intf_ports s_axis_0]
connect_bd_intf_net [get_bd_intf_pins hdr_parse/m_axis] [get_bd_intf_pins msg_frame/s_axis]

# --- stage 2 -> 3: one whole message per pulse ----------------------------------
foreach p {msg len valid seq} { wire msg_frame/m_$p decode/s_$p }

# --- stage 3 -> filter -> stage 4 ----------------------------------------------
# Only the valid bit goes through the filter; the op's fields go straight on.
wire decode/m_valid  locate_filter/s_valid
wire decode/m_locate locate_filter/s_locate
wire locate_filter/m_valid order_table/s_valid
foreach p {op ref new_ref side qty tick tick_ok seq} { wire decode/m_$p order_table/s_$p }

# --- stage 4 -> 5: level updates ------------------------------------------------
foreach p {valid side tick add qty seq} { wire order_table/m_$p price_levels/s_$p }
wire order_table/m_done price_levels/s_done

# --- stage 5 -> output stage ----------------------------------------------------
foreach p {bbo_valid bbo_seq bid_valid bid_tick bid_qty ask_valid ask_tick ask_qty} {
    wire price_levels/m_$p bbo_out/s_$p
}

# --- configuration inputs --------------------------------------------------------
create_bd_port -dir I -from 31 -to 0 cfg_band_base
create_bd_port -dir I -from 15 -to 0 cfg_locate
connect_bd_net [get_bd_ports cfg_band_base] \
    [get_bd_pins decode/cfg_band_base] [get_bd_pins bbo_out/cfg_band_base]
connect_bd_net [get_bd_ports cfg_locate] [get_bd_pins locate_filter/cfg_locate]

# --- outputs: same names as feed_handler_top --------------------------------------
# Each output port is driven by one pin; ports are created to match that pin.
proc out_port {name pin} {
    set p [get_bd_pins $pin]
    set left [get_property LEFT $p]
    if {$left eq ""} {
        create_bd_port -dir O $name
    } else {
        create_bd_port -dir O -from $left -to [get_property RIGHT $p] $name
    }
    connect_bd_net $p [get_bd_ports $name]
}
foreach p {bbo_valid bbo_seq bid_valid bid_price bid_qty ask_valid ask_price ask_qty} {
    out_port m_$p bbo_out/m_$p
}
out_port ready order_table/ready
# Status counters, from whichever stage keeps each one.
foreach {name pin} {
    stat_packets      hdr_parse/stat_packets
    stat_dropped      hdr_parse/stat_dropped
    stat_messages     msg_frame/stat_messages
    stat_frame_err    msg_frame/stat_frame_err
    stat_ops          decode/stat_ops
    stat_other_symbol locate_filter/stat_other_symbol
    stat_out_of_band  decode/stat_out_of_band
    stat_subpenny     decode/stat_subpenny
    stat_collisions   order_table/stat_collisions
    stat_missing      order_table/stat_missing
    stat_overrun      order_table/stat_overrun
    stat_stash_peak   order_table/stat_stash_peak
    stat_underflow    price_levels/stat_underflow
} { out_port $name $pin }

# Left unconnected on purpose, as in feed_handler_top: decode's raw price
# (debug only) and price_levels' update counter (not exported).

# --- tidy, check, save ---------------------------------------------------------
regenerate_bd_layout
validate_bd_design
save_bd_design
# The picture of this diagram in docs/ comes from export_diagram.tcl: Vivado
# only draws the layout in GUI mode, so batch mode cannot export it.

# The HDL wrapper is the design's top level: same ports as feed_handler_top.
set bd_file [get_files feed_handler.bd]
# Global synthesis: no per-block out-of-context runs, so cross-block
# optimisation matches the plain RTL flow and the numbers are comparable.
set_property synth_checkpoint_mode None $bd_file
generate_target all $bd_file
set wrapper [make_wrapper -files $bd_file -top]
add_files -norecurse $wrapper
set_property top feed_handler_wrapper [current_fileset]
update_compile_order -fileset sources_1

if {$mode eq "create"} {
    puts "== done. Open $out/feed_handler_bd.xpr and Open Block Design."
    return
}

# --- synthesis and implementation, out of context ---------------------------------
# Same clock and port budget as the per-module flow: ooc.xdc, plus bd.xdc.
add_files -fileset constrs_1 -norecurse \
    [list [file join $here .. ooc.xdc] [file join $here bd.xdc]]
set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} \
    -value {-mode out_of_context} -objects [get_runs synth_1]
set_property STEPS.SYNTH_DESIGN.ARGS.FLATTEN_HIERARCHY rebuilt [get_runs synth_1]

launch_runs synth_1 -jobs 4
wait_on_run synth_1
if {[get_property PROGRESS [get_runs synth_1]] ne "100%"} {
    error "synthesis failed - see $out/feed_handler_bd.runs/synth_1/runme.log"
}
if {$mode eq "synth"} {
    open_run synth_1
    report_utilization -hierarchical -file [file join $out util_hier_synth.rpt]
    puts "== synthesis done."
    return
}

launch_runs impl_1 -jobs 4
wait_on_run impl_1
if {[get_property PROGRESS [get_runs impl_1]] ne "100%"} {
    error "implementation failed - see $out/feed_handler_bd.runs/impl_1/runme.log"
}
open_run impl_1
report_utilization -hierarchical -file [file join $out util_hier.rpt]
report_timing_summary -max_paths 10 -file [file join $out timing_summary.rpt]

set period 6.4
proc fmax_of {slack} {
    global period
    return [format "%.1f" [expr {1000.0 / ($period - $slack)}]]
}
# All paths, ports included with their 3.2 ns budget: the README's
# "all paths" column.
set wns [get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]]
# Register to register: the design's own logic, the README's second column.
set r2r [get_property SLACK [get_timing_paths -setup -max_paths 1 -nworst 1 \
            -from [all_registers] -to [all_registers]]]
report_timing -setup -max_paths 5 -path_type full \
    -from [all_registers] -to [all_registers] -file [file join $out timing_r2r.rpt]
proc count {pattern} {
    return [llength [get_cells -hierarchical -filter "PRIMITIVE_TYPE =~ $pattern"]]
}
set summary "top=feed_handler_bd part=$part WNS=${wns}ns Fmax=[fmax_of $wns]MHz\
R2R=${r2r}ns R2R_Fmax=[fmax_of $r2r]MHz\
LUT=[count CLB.LUT.*] FF=[count REGISTER.*.*]\
RAMB36=[count BLOCKRAM.BRAM.RAMB36*] RAMB18=[count BLOCKRAM.BRAM.RAMB18*]\
DSP=[count ARITHMETIC.DSP.*]"

# The worst path ENDING in each block, so a failure names its stage. Block
# names survive synthesis because of flatten_hierarchy rebuilt.
set blocks {}
foreach s {hdr_parse msg_frame decode locate_filter order_table price_levels bbo_out} {
    set ends [get_cells -quiet -hierarchical -filter \
        "NAME =~ feed_handler_i/$s/* && IS_SEQUENTIAL"]
    if {[llength $ends] == 0} { continue }
    set p  [get_timing_paths -setup -max_paths 1 -nworst 1 -to $ends]
    set sl [get_property SLACK $p]
    lappend blocks [format "%-14s slack %7s ns  Fmax %6s MHz  from %s" \
        $s $sl [fmax_of $sl] [get_property STARTPOINT_PIN $p]]
}

set fh [open [file join $out results.txt] w]
puts $fh $summary
foreach b $blocks { puts $fh $b }
close $fh
puts "== RESULT $summary"
foreach b $blocks { puts "== $b" }
