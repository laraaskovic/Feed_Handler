# -----------------------------------------------------------------------------
# export_diagram.tcl - save the block design as docs/block_design.svg.
#
#   vivado -mode gui -source syn/vivado/bd/export_diagram.tcl
#
# Needs GUI mode: write_bd_layout renders the canvas, and batch mode has none
# ("write_bd_layout failed. Please run the tool in GUI mode"). The window
# opens, the image is written, and Vivado exits. Run build_bd.tcl first.
# -----------------------------------------------------------------------------

set here [file dirname [file normalize [info script]]]
set root [file normalize [file join $here .. .. ..]]

open_project [file join $root syn out vivado bd feed_handler_bd.xpr]
open_bd_design [get_files feed_handler.bd]
# The same automatic layout build_bd.tcl saved: stages left to right.
regenerate_bd_layout
write_bd_layout -force -format svg -orientation portrait \
    [file join $root docs block_design.svg]
puts "== wrote docs/block_design.svg"
exit
