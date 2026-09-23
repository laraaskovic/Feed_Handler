# -----------------------------------------------------------------------------
# ooc.xdc - timing constraints for out-of-context implementation.
#
# One clock, and that is the whole story: every module in this design is
# synchronous to the MAC's 156.25 MHz datapath clock, 64 bits per cycle =
# 10 Gb/s. There are no other clocks and no clock-domain crossings.
# -----------------------------------------------------------------------------

# 6.4 ns period = 156.25 MHz, the 10GBASE-R datapath clock.
create_clock -name clk -period 6.400 [get_ports clk]

# Out of context, the ports are not pins: they connect to registers in some
# surrounding design. Budget half a period for whatever drives the inputs
# and receives the outputs outside this module - the usual out-of-context
# assumption, so an unregistered port path cannot hide.
set_input_delay  -clock clk 3.2 [get_ports -filter {DIRECTION == IN && NAME != "clk"}]
set_output_delay -clock clk 3.2 [get_ports -filter {DIRECTION == OUT}]

# Reset is synchronous and held for many cycles, and the cfg_* inputs are
# static for a whole trading session. Neither is a real single-cycle path.
set_false_path -from [get_ports rst]
set_false_path -from [get_ports -quiet cfg_*]
