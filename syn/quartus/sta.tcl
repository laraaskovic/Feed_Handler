# -----------------------------------------------------------------------------
# sta.tcl - read the routed design's timing and print the numbers to quote.
#
# Runs under quartus_sta, after build.tcl has fitted the design:
#
#   quartus_sta -t syn/quartus/sta.tcl <top>
#
# WHY FMAX IS REPORTED TWO WAYS.
#
# syn/vivado/ooc_synth.tcl derives Fmax as 1000/(period - WNS). That is an
# extrapolation, and it UNDERSTATES the truth: once slack goes positive the
# tools stop optimising, so the slack measured at 6.4 ns is not the slack you
# would get at the real limit. Quartus ships the honest answer as a built-in,
# report_clock_fmax_summary, which re-derives the maximum frequency for the
# clock including hold and duty-cycle restrictions. So this prints:
#
#   FMAX_CORE      - register-to-register Fmax, the one to quote. See the
#                    note at its computation for why ports are excluded.
#   WNS_CORE       - the slack that FMAX_CORE is derived from
#   WNS_ALL        - worst slack over every path, ports included
#   FMAX_REPORTED  - Quartus's own Fmax summary
#
# FMAX_REPORTED and a slack-derived Fmax can differ. The gap between them is itself the thing worth
# understanding: it is how much headroom the tool left on the table because
# the constraint was already met.
#
# OUTPUT
#   fmax.rpt          Quartus's Fmax summary
#   timing_core.rpt   the ten worst register-to-register paths, full detail -
#                     which logic limits Fmax, and why. This is the file to
#                     read when asked "what was your critical path?"
#   timing_paths.rpt  the ten worst paths of any kind, ports included
#   results.txt       one appended line per module, in syn/out/quartus/
# -----------------------------------------------------------------------------

package require ::quartus::sta
# get_global_assignment, used for the device name in the summary line.
package require ::quartus::project

set argv $quartus(args)
set top [expr {[llength $argv] > 0 ? [lindex $argv 0] : "feed_handler_top"}]

# The clock period build.tcl constrained, needed only for the Vivado-style
# extrapolation. Keep in step with ooc.sdc.
set period 6.4

set here [file dirname [file normalize [info script]]]
set root [file dirname [file dirname $here]]
set out  [file join $root syn out quartus $top]
cd $out

project_open $top

# The slow corner is where setup fails: maximum temperature, minimum voltage.
# Vivado's default setup analysis uses the equivalent, so the two are aligned.
create_timing_netlist -model slow
read_sdc
update_timing_netlist

# --- the reports --------------------------------------------------------------
# Ten worst paths in full. -detail full_path prints every cell and every wire
# delay along the way, which is what identifies the limiting logic.
report_timing -setup -npaths 10 -detail full_path -file timing_paths.rpt
report_timing -setup -npaths 10 -detail summary   -file timing_summary.rpt
report_clock_fmax_summary -file fmax.rpt

# --- worst setup slack --------------------------------------------------------
set wns ""
foreach_in_collection p [get_timing_paths -setup -npaths 1 -detail summary] {
    set wns [get_path_info $p -slack]
}
if {$wns eq ""} {
    # No timed paths at all: a purely combinational module, or the clock never
    # reached a register. Either way there is no Fmax to report.
    puts "== RESULT top=$top NO_TIMED_PATHS"
    project_close
    return
}

set fmax_slack [format "%.1f" [expr {1000.0 / ($period - $wns)}]]

# --- core (register-to-register) Fmax ------------------------------------------
# The overall worst path above is often a port path, and those are distorted
# here: the virtual I/O budget in ooc.sdc is referenced to an ideal clock, but
# the registers behind the ports see ~4 ns of real clock-tree insertion delay,
# so a register driving an output with ZERO logic in between still "fails".
# That measures the constraint, not the design. The logic's own speed limit
# is the worst register-to-register path, so that is the headline number;
# the all-paths WNS (ports included) is still printed, as WNS_ALL.
set wns_core ""
foreach_in_collection p [get_timing_paths -setup -npaths 1 -detail summary \
                             -from [get_registers *] -to [get_registers *]] {
    set wns_core [get_path_info $p -slack]
}
if {$wns_core eq ""} {
    set wns_core "n/a"
    set fmax_core "n/a"
} else {
    set fmax_core [format "%.1f" [expr {1000.0 / ($period - $wns_core)}]]
}
report_timing -setup -npaths 10 -detail full_path \
    -from [get_registers *] -to [get_registers *] -file timing_core.rpt

# --- Quartus's own Fmax -------------------------------------------------------
# Parsed from the report file rather than the report-panel API, because panel
# names moved between Quartus versions ("TimeQuest Timing Analyzer||..." vs
# "Timing Analyzer||...") and a text file does not.
set fmax_reported "n/a"
if {[file exists fmax.rpt]} {
    set fh [open fmax.rpt r]
    set txt [read $fh]
    close $fh
    # Row format: ; <fmax> MHz ; <restricted fmax> MHz ; clk ; <note> ;
    if {[regexp {;\s*([0-9]+\.[0-9]+)\s*MHz\s*;\s*([0-9]+\.[0-9]+)\s*MHz\s*;\s*clk\s*;} \
             $txt -> f_unrestricted f_restricted]} {
        set fmax_reported $f_restricted
    }
}

# --- resources ----------------------------------------------------------------
# From the fitter's own summary file. Same reasoning as above: the .fit.summary
# text format has been stable for years, the report API has not.
proc fit_field {file key} {
    if {![file exists $file]} { return "?" }
    set fh [open $file r]; set txt [read $fh]; close $fh
    foreach line [split $txt \n] {
        if {[string match "*$key*:*" $line]} {
            set v [string trim [lindex [split $line :] 1]]
            # Keep only the count, dropping "/ 32,070 ( 4 % )" and commas.
            regsub {\s*/.*$} $v "" v
            regsub -all {,} $v "" v
            return [string trim $v]
        }
    }
    return "?"
}
set fitsum "$top.fit.summary"
set alms  [fit_field $fitsum "Logic utilization"]
set regs  [fit_field $fitsum "Total registers"]
set mbits [fit_field $fitsum "Total block memory bits"]
set dsps  [fit_field $fitsum "Total DSP Blocks"]
set vpins [fit_field $fitsum "Total virtual pins"]

set summary "top=$top device=[get_global_assignment -name DEVICE]\
FMAX_CORE=${fmax_core}MHz WNS_CORE=${wns_core}ns WNS_ALL=${wns}ns\
FMAX_REPORTED=${fmax_reported}MHz ALM=$alms REG=$regs MEMBITS=$mbits DSP=$dsps VPIN=$vpins"
puts "== RESULT $summary"

# Appended, so a run over every module builds one table of results.
set fh [open [file join $root syn out quartus results.txt] a]
puts $fh $summary
close $fh

delete_timing_netlist
project_close
