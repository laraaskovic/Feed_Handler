# -----------------------------------------------------------------------------
# bd.xdc - the block design's one constraint on top of ../ooc.xdc.
#
# cfg_* are static for a trading session, so not real single-cycle paths.
# ooc_synth.tcl applies this in Tcl because most of its tops have no cfg_*
# ports; the block design always has them, so it can live in an XDC.
# -----------------------------------------------------------------------------

set_false_path -from [get_ports cfg_*]
