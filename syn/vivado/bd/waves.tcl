# -----------------------------------------------------------------------------
# waves.tcl - the block design's data flow, stage by stage, in the wave window.
#
# In the Vivado GUI, after Run Simulation (sim_equiv.tcl must have set the
# simulation up once), type in the Tcl Console:
#
#   source C:/Users/<you>/Feed_Handler/syn/vivado/bd/waves.tcl
#
# It adds one group per block, in the order the data flows, using the nets
# between the blocks - the same wires as in the diagram - then re-runs the
# simulation to just past where traffic starts. Zoom into the right-hand end
# (about 105.3 us onward): before that the order table is clearing its RAM.
#
# What to look for, left to right in time:
#   input s       a packet's beats arrive, tvalid high, tlast on the last
#   hdr_parse     ~7 beats later the same packet leaves with headers removed;
#                 TUSER carries its MoldUDP64 sequence number
#   msg_frame     one m_valid pulse per ITCH message, m_len = its length
#   decode        3 cycles later: the op (1 add, 2 reduce, 3 delete,
#                 4 replace), its order reference, side, size and tick
#   locate_filter m_valid only for the tracked symbol's ops
#   order_table   2 cycles later: the ladder update (m_valid) and the
#                 "message finished" marker (m_done)
#   price_levels  5 cycles later: the new best bid/ask ticks and sizes
#   output        1 cycle later: prices in feed units; m_bbo_seq says which
#                 message this top of book reflects
# -----------------------------------------------------------------------------

set bd /bd_equiv_tb/u_bd/feed_handler_i

# One group per stage: {group-name {net radix ...}}.
set stages [list \
    "input s" [list \
        s_tvalid bin  s_tlast bin  s_tkeep hex  s_tdata hex] \
    "1 hdr_parse" [list \
        hdr_parse_m_axis_TVALID bin  hdr_parse_m_axis_TLAST bin \
        hdr_parse_m_axis_TKEEP hex   hdr_parse_m_axis_TDATA hex \
        hdr_parse_m_axis_TUSER hex] \
    "2 msg_frame" [list \
        msg_frame_m_valid bin  msg_frame_m_len unsigned \
        msg_frame_m_seq unsigned  msg_frame_m_msg hex] \
    "3 decode" [list \
        decode_m_valid bin  decode_m_op unsigned  decode_m_locate unsigned \
        decode_m_ref unsigned  decode_m_side bin  decode_m_qty unsigned \
        decode_m_tick unsigned  decode_m_tick_ok bin  decode_m_seq unsigned] \
    "4 locate_filter" [list \
        locate_filter_m_valid bin] \
    "5 order_table" [list \
        order_table_m_valid bin  order_table_m_done bin  order_table_m_side bin \
        order_table_m_add bin  order_table_m_tick unsigned \
        order_table_m_qty unsigned  order_table_m_seq unsigned] \
    "6 price_levels" [list \
        price_levels_m_bbo_valid bin  price_levels_m_bbo_seq unsigned \
        price_levels_m_bid_valid bin  price_levels_m_bid_tick unsigned \
        price_levels_m_bid_qty unsigned  price_levels_m_ask_valid bin \
        price_levels_m_ask_tick unsigned  price_levels_m_ask_qty unsigned] \
    "7 output (top of book)" [list \
        m_bbo_valid bin  m_bbo_seq unsigned  m_bid_valid bin \
        m_bid_price unsigned  m_bid_qty unsigned  m_ask_valid bin \
        m_ask_price unsigned  m_ask_qty unsigned] \
]

add_wave $bd/clk
add_wave $bd/rst_sync_peripheral_reset -name reset
add_wave $bd/ready
foreach {name nets} $stages {
    set g [add_wave_group $name]
    foreach {net radix} $nets {
        add_wave -into $g -radix $radix $bd/$net
    }
}
# The bench's verdict counters, so a mismatch is visible in the waves too.
set g [add_wave_group "checker"]
add_wave -into $g -radix unsigned /bd_equiv_tb/cycles /bd_equiv_tb/mismatches \
                                  /bd_equiv_tb/bbo_pulses

# Re-run to a little past the start of traffic: enough to see packets go all
# the way through, short enough that the window is easy to zoom into.
restart
run 106 us
puts "== waves ready: zoom into ~105.3 us onward (traffic starts there)"
