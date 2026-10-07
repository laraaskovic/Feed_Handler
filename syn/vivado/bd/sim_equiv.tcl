# -----------------------------------------------------------------------------
# sim_equiv.tcl - simulate the block design against feed_handler_top in xsim.
#
#   python tb/bd_equiv_stim.py                                  # stimulus
#   vivado -mode batch -source syn/vivado/bd/build_bd.tcl       # if not built
#   vivado -mode batch -source syn/vivado/bd/sim_equiv.tcl
#
# Opens the project build_bd.tcl made, adds the reference top and the bench
# (tb/bd_equiv_tb.sv) to the simulation fileset only, and runs to $finish.
# The verdict is the "BD_EQUIV PASS" / "BD_EQUIV FAIL" line; the transcript is
# in syn/out/vivado/bd/feed_handler_bd.sim/sim_1/behav/xsim/simulate.log.
# -----------------------------------------------------------------------------

set here [file dirname [file normalize [info script]]]
set root [file normalize [file join $here .. .. ..]]
set out  [file join $root syn out vivado bd]
set stim [file join $out equiv_stim.txt]
if {![file exists $stim]} {
    error "no stimulus at $stim - run: python tb/bd_equiv_stim.py"
}

open_project [file join $out feed_handler_bd.xpr]

# Reference top and bench go in sim_1 only, so synthesis never sees them.
set sim [get_filesets sim_1]
foreach f [list [file join $root rtl feed_handler_top.sv] \
                [file join $root tb bd_equiv_tb.sv]] {
    if {[llength [get_files -quiet -of_objects $sim $f]] == 0} {
        add_files -fileset sim_1 -norecurse $f
    }
    set_property file_type SystemVerilog [get_files -of_objects $sim $f]
}
set_property top bd_equiv_tb $sim
set_property top_lib xil_defaultlib $sim
# Run to the bench's $finish, not a fixed time. The plusarg is quoted because
# cmd.exe splits an unquoted argument at '='. One dash, not two: the GUI's
# Run Simulation passes this to Vivado's built-in xsim command, which
# rejects --testplusarg; xsim.exe accepts either.
set_property -name {xsim.simulate.runtime} -value {all} -objects $sim
set_property -name {xsim.simulate.xsim.more_options} \
    -value "-testplusarg \"STIM=$stim\"" -objects $sim
update_compile_order -fileset sim_1

# Generate the compile / elaborate / simulate scripts, then run them here by
# absolute path. launch_simulation runs them by bare name, which Windows
# refuses when NoDefaultCurrentDirectoryInExePath is set (some sandboxed and
# hardened shells set it): "Spawn failed" before the compiler even starts.
launch_simulation -simset sim_1 -mode behavioral -scripts_only
set xsim_dir [file join $out feed_handler_bd.sim sim_1 behav xsim]
set ext [expr {$tcl_platform(platform) eq "windows" ? "bat" : "sh"}]
foreach step {compile elaborate simulate} {
    puts "== xsim: $step"
    set script [file nativename [file join $xsim_dir $step.$ext]]
    set cmd [expr {$ext eq "bat" ? [list cmd /c $script] : [list $script]}]
    # The scripts write their own logs; exec only needs the exit status.
    if {[catch {cd $xsim_dir; exec {*}$cmd} msg opts]
        && [lindex [dict get $opts -errorcode] 0] eq "CHILDSTATUS"} {
        error "xsim $step failed - see $xsim_dir/$step.log\n$msg"
    }
}
cd $out

set log [file join $xsim_dir simulate.log]
set fh [open $log r]; set text [read $fh]; close $fh
if {[string first "BD_EQUIV PASS" $text] >= 0} {
    puts "== BD_EQUIV PASS - see $log"
} else {
    error "BD_EQUIV did not pass - see $log"
}
