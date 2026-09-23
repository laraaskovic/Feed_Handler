# -----------------------------------------------------------------------------
# run_all.tcl - out-of-context implementation of every module, one by one.
#
#   vivado -mode batch -source syn/vivado/run_all.tcl [-tclargs <part>]
#
# Each module gets a fresh Vivado project in memory (close_project between
# runs), and every result is appended to syn/out/vivado/results.txt - one
# line per module: WNS, Fmax, LUT, FF, BRAM, DSP. That file is the per-module
# table for the write-up; ooc_synth.tcl explains what each number means.
# -----------------------------------------------------------------------------

set part [expr {[llength $argv] > 0 ? [lindex $argv 0] : "xcku5p-ffvb676-2-e"}]
set here [file dirname [file normalize [info script]]]

# Pipeline order, leaf modules first, the whole pipeline last. The priority
# encoder is left out on purpose: on its own it is purely combinational, so
# an out-of-context port budget says nothing useful about it. It is measured
# where it lives, inside price_levels.
set tops {
    hdr_parse msg_frame decode order_table price_levels feed_handler_top
}

# One out-of-context run per module, reusing ooc_synth.tcl.
foreach t $tops {
    # ooc_synth.tcl reads its arguments from argv, so set them per run.
    set argv [list $t $part]
    source [file join $here ooc_synth.tcl]
    # Start the next module from a clean slate.
    close_project -quiet
}
puts "== all modules done - see syn/out/vivado/results.txt"
