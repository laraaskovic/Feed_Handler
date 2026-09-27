# -----------------------------------------------------------------------------
# ooc.sdc - timing constraints for a standalone Quartus compile.
#
# The Intel equivalent of syn/vivado/ooc.xdc, and deliberately a line-for-line
# translation of it: same clock, same out-of-context port budget, same false
# paths. Two flows that constrain the design differently are not comparable,
# and comparing them is the point of having both.
#
# One clock, and that is the whole story: every module in this design is
# synchronous to the MAC's 156.25 MHz datapath clock, 64 bits per cycle =
# 10 Gb/s. There are no other clocks and no clock-domain crossings.
# -----------------------------------------------------------------------------

# 6.4 ns period = 156.25 MHz, the 10GBASE-R datapath clock.
create_clock -name clk -period 6.400 [get_ports clk]

# Quartus does not infer clock uncertainty unless asked. Without this the
# numbers would be optimistic against Vivado, which applies it by default.
derive_clock_uncertainty

# The ports are not pins: they connect to registers in some surrounding
# design. Budget half a period for whatever drives the inputs and receives
# the outputs outside this module - the usual out-of-context assumption, so
# an unregistered port path cannot hide.
#
# get_ports matches the virtual pins build.tcl creates, so these apply even
# though nothing here reaches a package ball.
set_input_delay  -clock clk 3.2 [remove_from_collection [all_inputs] [get_ports clk]]
set_output_delay -clock clk 3.2 [all_outputs]

# Reset is synchronous and held for many cycles, and the cfg_* inputs are
# static for a whole trading session. Neither is a real single-cycle path.
#
# Guarded, because these constraints are shared by every module and not every
# module has them: priority_encoder has no reset, and only decode takes cfg_*.
# An unguarded get_ports on a missing port warns on every run, and warnings
# you learn to ignore are warnings you will miss when they matter.
if {[get_collection_size [get_ports -nowarn rst]] > 0} {
    set_false_path -from [get_ports rst]
}
if {[get_collection_size [get_ports -nowarn cfg_*]] > 0} {
    set_false_path -from [get_ports cfg_*]
}
