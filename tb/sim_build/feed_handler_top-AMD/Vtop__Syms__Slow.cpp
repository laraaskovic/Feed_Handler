// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable13[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable14[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable15[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable16[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable17[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable18[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable19[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable20[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable21[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable22[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable23[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable24[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable25[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable26[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable27[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable28[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable29[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable30[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable31[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"cfg_band_base", offsetof(Vtop___024root, cfg_band_base), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"cfg_locate", offsetof(Vtop___024root, cfg_locate), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_ask_price", offsetof(Vtop___024root, m_ask_price), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_qty", offsetof(Vtop___024root, m_ask_qty), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_valid", offsetof(Vtop___024root, m_ask_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bbo_seq", offsetof(Vtop___024root, m_bbo_seq), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_bbo_valid", offsetof(Vtop___024root, m_bbo_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bid_price", offsetof(Vtop___024root, m_bid_price), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_qty", offsetof(Vtop___024root, m_bid_qty), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_valid", offsetof(Vtop___024root, m_bid_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ready", offsetof(Vtop___024root, ready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, s_tdata), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, s_tkeep), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, s_tlast), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, s_tvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_collisions", offsetof(Vtop___024root, stat_collisions), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_dropped", offsetof(Vtop___024root, stat_dropped), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, stat_frame_err), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, stat_messages), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_missing", offsetof(Vtop___024root, stat_missing), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_ops", offsetof(Vtop___024root, stat_ops), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_other_symbol", offsetof(Vtop___024root, stat_other_symbol), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_out_of_band", offsetof(Vtop___024root, stat_out_of_band), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_overrun", offsetof(Vtop___024root, stat_overrun), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_packets", offsetof(Vtop___024root, stat_packets), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_stash_peak", offsetof(Vtop___024root, stat_stash_peak), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_subpenny", offsetof(Vtop___024root, stat_subpenny), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_underflow", offsetof(Vtop___024root, stat_underflow), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"cfg_band_base", offsetof(Vtop___024root, feed_handler_top__DOT__cfg_band_base), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"cfg_locate", offsetof(Vtop___024root, feed_handler_top__DOT__cfg_locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"dc_locate", offsetof(Vtop___024root, feed_handler_top__DOT__dc_locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"dc_new_ref", offsetof(Vtop___024root, feed_handler_top__DOT__dc_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"dc_op", offsetof(Vtop___024root, feed_handler_top__DOT__dc_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"dc_price", offsetof(Vtop___024root, feed_handler_top__DOT__dc_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"dc_qty", offsetof(Vtop___024root, feed_handler_top__DOT__dc_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"dc_ref", offsetof(Vtop___024root, feed_handler_top__DOT__dc_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"dc_seq", offsetof(Vtop___024root, feed_handler_top__DOT__dc_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"dc_side", offsetof(Vtop___024root, feed_handler_top__DOT__dc_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"dc_tick", offsetof(Vtop___024root, feed_handler_top__DOT__dc_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"dc_tick_ok", offsetof(Vtop___024root, feed_handler_top__DOT__dc_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"dc_valid", offsetof(Vtop___024root, feed_handler_top__DOT__dc_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hp_count", offsetof(Vtop___024root, feed_handler_top__DOT__hp_count), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"hp_seq", offsetof(Vtop___024root, feed_handler_top__DOT__hp_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"hp_tdata", offsetof(Vtop___024root, feed_handler_top__DOT__hp_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"hp_tkeep", offsetof(Vtop___024root, feed_handler_top__DOT__hp_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"hp_tlast", offsetof(Vtop___024root, feed_handler_top__DOT__hp_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hp_tvalid", offsetof(Vtop___024root, feed_handler_top__DOT__hp_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_ask_price", offsetof(Vtop___024root, feed_handler_top__DOT__m_ask_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_qty", offsetof(Vtop___024root, feed_handler_top__DOT__m_ask_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_valid", offsetof(Vtop___024root, feed_handler_top__DOT__m_ask_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bbo_seq", offsetof(Vtop___024root, feed_handler_top__DOT__m_bbo_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_bbo_valid", offsetof(Vtop___024root, feed_handler_top__DOT__m_bbo_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bid_price", offsetof(Vtop___024root, feed_handler_top__DOT__m_bid_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_qty", offsetof(Vtop___024root, feed_handler_top__DOT__m_bid_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_valid", offsetof(Vtop___024root, feed_handler_top__DOT__m_bid_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mf_len", offsetof(Vtop___024root, feed_handler_top__DOT__mf_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"mf_msg", offsetof(Vtop___024root, feed_handler_top__DOT__mf_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"mf_seq", offsetof(Vtop___024root, feed_handler_top__DOT__mf_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"mf_valid", offsetof(Vtop___024root, feed_handler_top__DOT__mf_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ot_m_add", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ot_m_done", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ot_m_qty", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ot_m_seq", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"ot_m_side", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ot_m_tick", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"ot_m_valid", offsetof(Vtop___024root, feed_handler_top__DOT__ot_m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ot_valid", offsetof(Vtop___024root, feed_handler_top__DOT__ot_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pl_ask_qty", offsetof(Vtop___024root, feed_handler_top__DOT__pl_ask_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"pl_ask_tick", offsetof(Vtop___024root, feed_handler_top__DOT__pl_ask_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"pl_ask_valid", offsetof(Vtop___024root, feed_handler_top__DOT__pl_ask_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pl_bbo_seq", offsetof(Vtop___024root, feed_handler_top__DOT__pl_bbo_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"pl_bbo_valid", offsetof(Vtop___024root, feed_handler_top__DOT__pl_bbo_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pl_bid_qty", offsetof(Vtop___024root, feed_handler_top__DOT__pl_bid_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"pl_bid_tick", offsetof(Vtop___024root, feed_handler_top__DOT__pl_bid_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"pl_bid_valid", offsetof(Vtop___024root, feed_handler_top__DOT__pl_bid_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pl_updates", offsetof(Vtop___024root, feed_handler_top__DOT__pl_updates), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ready", offsetof(Vtop___024root, feed_handler_top__DOT__ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, feed_handler_top__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, feed_handler_top__DOT__s_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, feed_handler_top__DOT__s_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, feed_handler_top__DOT__s_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, feed_handler_top__DOT__s_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_collisions", offsetof(Vtop___024root, feed_handler_top__DOT__stat_collisions), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_dropped", offsetof(Vtop___024root, feed_handler_top__DOT__stat_dropped), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, feed_handler_top__DOT__stat_frame_err), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, feed_handler_top__DOT__stat_messages), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_missing", offsetof(Vtop___024root, feed_handler_top__DOT__stat_missing), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_ops", offsetof(Vtop___024root, feed_handler_top__DOT__stat_ops), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_other_symbol", offsetof(Vtop___024root, feed_handler_top__DOT__stat_other_symbol), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_out_of_band", offsetof(Vtop___024root, feed_handler_top__DOT__stat_out_of_band), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_overrun", offsetof(Vtop___024root, feed_handler_top__DOT__stat_overrun), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_packets", offsetof(Vtop___024root, feed_handler_top__DOT__stat_packets), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_stash_peak", offsetof(Vtop___024root, feed_handler_top__DOT__stat_stash_peak), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_subpenny", offsetof(Vtop___024root, feed_handler_top__DOT__stat_subpenny), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_underflow", offsetof(Vtop___024root, feed_handler_top__DOT__stat_underflow), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"unused_tick_hi", offsetof(Vtop___024root, feed_handler_top__DOT__unused_tick_hi), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"add_price", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__add_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"add_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__add_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"add_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__add_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"add_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__add_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cfg_band_base", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__cfg_band_base), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"delta", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__delta), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"has_price", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__has_price), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"in_band", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__in_band), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"locate", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_locate", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_new_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_op", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"m_price", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_tick_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"msg_type", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__msg_type), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"new_ref_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__new_ref_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__op_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"price_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__price_c), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"qty_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__qty_c), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"red_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__red_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"red_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__red_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"ref_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__ref_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rep_new_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__rep_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rep_price", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__rep_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rep_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__rep_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__s_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_msg", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__s_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__s_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"scaled", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__scaled), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"side_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__side_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_ops", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__stat_ops), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_out_of_band", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__stat_out_of_band), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_subpenny", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__stat_subpenny), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"subpenny_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__subpenny_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tick_c", offsetof(Vtop___024root, feed_handler_top__DOT__u_decode__DOT__tick_c), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[] = {
    {"bad_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__bad_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"buf_next", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__buf_next), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"buf_q", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__buf_q), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"con_shift", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__con_shift), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {10, 0, 0, 0, 0, 0}},
    {"desync", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__desync), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"frame_err", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__frame_err), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__have_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_msg", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__have_msg), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"in_bytes", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__in_bytes), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"ins_data", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__ins_data), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"ins_shift", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__ins_shift), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {10, 0, 0, 0, 0, 0}},
    {"len_sane", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__len_sane), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__m_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_msg", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__m_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"msg_idx", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__msg_idx), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"msg_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__msg_len), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"nv_ins", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__nv_ins), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"nv_next", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__nv_next), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"nvalid", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__nvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_sequence", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__s_sequence), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__s_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__s_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__s_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__s_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__stat_frame_err), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__stat_messages), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"total_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__total_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"wide", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__wide), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"i", offsetof(Vtop___024root, feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"beat_idx", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__beat_idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"do_emit", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__do_emit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"emit_start", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__emit_start), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ethertype_inner", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__ethertype_inner), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"ethertype_outer", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__ethertype_outer), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"flush_pend", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__flush_pend), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"flushed", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__flushed), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"hb", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__hb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 127, 7, 0, 0, 0}},
    {"ihl_bytes", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__ihl_bytes), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ip_off", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__ip_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ip_total_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__ip_total_len), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"is_ipv4", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__is_ipv4), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_udp", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__is_udp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"keep_shift", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__keep_shift), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"last_bytes", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__last_bytes), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"last_keep", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__last_keep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_count", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__m_count), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_sequence", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__m_sequence), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_tdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__m_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_tkeep", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__m_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_tlast", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__m_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tvalid", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__m_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mold_cnt", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__mold_cnt), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"mold_off", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__mold_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"mold_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__mold_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"out_n", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__out_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"out_total", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__out_total), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"pay_len_q", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__pay_len_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"payload_len", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__payload_len), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"payload_off", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__payload_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"pkt_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__pkt_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"prev_data", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__prev_data), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"r_off", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__r_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"realigned", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__realigned), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__s_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__s_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__s_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__s_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_hi", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__sh_hi), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {6, 0, 0, 0, 0, 0}},
    {"sh_lo", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__sh_lo), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {6, 0, 0, 0, 0, 0}},
    {"stat_dropped", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__stat_dropped), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_packets", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__stat_packets), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"udp_off", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__udp_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"vlan_tagged", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__vlan_tagged), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[] = {
    {"b", offsetof(Vtop___024root, feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[] = {
    {"ask_map", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__ask_map), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"ask_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__ask_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"base_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__base_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_ask_q", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__bbo_ask_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_bid_q", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__bbo_bid_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"best_ask_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__best_ask_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"best_bid_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__best_bid_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"bid_map", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__bid_map), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"bid_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__bid_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"fwd_hit", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__fwd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_ask", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__have_ask), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_bid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__have_bid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_ask_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_ask_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_ask_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_ask_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_ask_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bbo_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_bbo_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_bbo_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_bbo_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bid_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_bid_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_bid_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_bid_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__m_bid_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"new_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__new_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rd_ask", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__rd_ask), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rd_bid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__rd_bid), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_add", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_done", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_occupied", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_occupied), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s1_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s1_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s1_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s1_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_add", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_done", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_underflow", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__stat_underflow), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_updates", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__stat_updates), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"underflow", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__underflow), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_done", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__wr_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__wr_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"wr_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__wr_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"wr_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__wr_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__wr_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wr_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__wr_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[] = {
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[] = {
    {"any", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bitmap", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"grp", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"grp_bits", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp_bits), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"index", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"off", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"summary", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[] = {
    {"g", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[] = {
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[] = {
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable13[] = {
    {"any", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bitmap", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"grp", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"grp_bits", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp_bits), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"index", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"off", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"summary", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable14[] = {
    {"g", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable15[] = {
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable16[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"accept", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__accept), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"add_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__add_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"add_st", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__add_st), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"add_to_set", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__add_to_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"add_to_st", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__add_to_st), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"add_way", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__add_way), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"e_ladder", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__e_ladder), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"e_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__e_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"e_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__e_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"e_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__e_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"found_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__found_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"free_a_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__free_a_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"free_b_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__free_b_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"free_way_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__free_way_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"free_way_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__free_way_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"hit_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__hit_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hit_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__hit_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hit_way_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__hit_way_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"hit_way_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__hit_way_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"idx_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__idx_a), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"idx_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__idx_b), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"init_idx", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__init_idx), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"is_add", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__is_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_del", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__is_del), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_red", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__is_red), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_rep", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__is_rep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_add", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_done", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"op_kind", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_kind), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"op_new_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"op_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"op_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"op_tick_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__op_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pend_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__pend_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"pend_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__pend_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"pend_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__pend_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pend_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__pend_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"pend_v", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__pend_v), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pend_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__pend_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rd_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rd_a), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 1, 1, {0, 7, 96, 0, 0, 0}},
    {"rd_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rd_b), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 1, 1, {0, 7, 96, 0, 0, 0}},
    {"ready", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rep_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rep_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rep_st", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rep_st), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rep_to_set", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rep_to_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rep_to_st", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rep_to_st), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rep_way", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rep_way), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_new_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_op", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s_tick_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"same_set", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__same_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__sh_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__sh_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_idx_a", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__sh_idx_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"sh_idx_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__sh_idx_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"st_busy", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_busy), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"st_count", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_count), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"st_free_idx", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_free_idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"st_free_ok", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_free_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"st_ladder", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_ladder), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"st_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 15, 31, 0, 0, 0}},
    {"st_ref", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 15, 63, 0, 0, 0}},
    {"st_side", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_side), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"st_tick", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 15, 11, 0, 0, 0}},
    {"st_valid", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__st_valid), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"stat_collisions", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__stat_collisions), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_missing", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__stat_missing), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_overrun", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__stat_overrun), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_stash_peak", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__stat_stash_peak), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"state", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"take_qty", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__take_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"valid_b", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__valid_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable17[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable18[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable19[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable20[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable21[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable22[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable23[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable24[] = {
    {"a_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {96, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 16383, 96, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable25[] = {
    {"w", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable26[] = {
    {"k", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable27[] = {
    {"w", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable28[] = {
    {"k", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable29[] = {
    {"w", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable30[] = {
    {"k", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable31[] = {
    {"k", offsetof(Vtop___024root, feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top), "feed_handler_top", "feed_handler_top", "feed_handler_top", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_decode), "feed_handler_top.u_decode", "u_decode", "decode", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_frame), "feed_handler_top.u_frame", "u_frame", "msg_frame", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_frame__unnamedblk1), "feed_handler_top.u_frame.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_hdr), "feed_handler_top.u_hdr", "u_hdr", "hdr_parse", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_hdr__unnamedblk1), "feed_handler_top.u_hdr.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels), "feed_handler_top.u_levels", "u_levels", "price_levels", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_ask_bbo), "feed_handler_top.u_levels.u_ask_bbo", "u_ask_bbo", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_ask_pe), "feed_handler_top.u_levels.u_ask_pe", "u_ask_pe", "priority_encoder", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5), "feed_handler_top.u_levels.u_ask_pe.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_ask_upd), "feed_handler_top.u_levels.u_ask_upd", "u_ask_upd", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_bid_bbo), "feed_handler_top.u_levels.u_bid_bbo", "u_bid_bbo", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_bid_pe), "feed_handler_top.u_levels.u_bid_pe", "u_bid_pe", "priority_encoder", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5), "feed_handler_top.u_levels.u_bid_pe.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_levels__u_bid_upd), "feed_handler_top.u_levels.u_bid_upd", "u_bid_upd", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders), "feed_handler_top.u_orders", "u_orders", "order_table", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__), "feed_handler_top.u_orders.g_way[0]", "g_way[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way), "feed_handler_top.u_orders.g_way[0].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__), "feed_handler_top.u_orders.g_way[1]", "g_way[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way), "feed_handler_top.u_orders.g_way[1].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__), "feed_handler_top.u_orders.g_way[2]", "g_way[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way), "feed_handler_top.u_orders.g_way[2].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__), "feed_handler_top.u_orders.g_way[3]", "g_way[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way), "feed_handler_top.u_orders.g_way[3].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__), "feed_handler_top.u_orders.g_way[4]", "g_way[4]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way), "feed_handler_top.u_orders.g_way[4].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__), "feed_handler_top.u_orders.g_way[5]", "g_way[5]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way), "feed_handler_top.u_orders.g_way[5].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__), "feed_handler_top.u_orders.g_way[6]", "g_way[6]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way), "feed_handler_top.u_orders.g_way[6].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__), "feed_handler_top.u_orders.g_way[7]", "g_way[7]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way), "feed_handler_top.u_orders.g_way[7].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk2), "feed_handler_top.u_orders.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk3), "feed_handler_top.u_orders.unnamedblk3", "unnamedblk3", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk4), "feed_handler_top.u_orders.unnamedblk4", "unnamedblk4", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk5), "feed_handler_top.u_orders.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk6), "feed_handler_top.u_orders.unnamedblk6", "unnamedblk6", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk7), "feed_handler_top.u_orders.unnamedblk7", "unnamedblk7", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_feed_handler_top__u_orders__unnamedblk8), "feed_handler_top.u_orders.unnamedblk8", "unnamedblk8", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_itch_pkg), "itch_pkg", "itch_pkg", "itch_pkg", -9, VerilatedScope::SCOPE_PACKAGE},
};
#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1197);
    // Setup sub module instances
    TOP__itch_pkg.ctor(this, "itch_pkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__itch_pkg = &TOP__itch_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__itch_pkg.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 41, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_feed_handler_top);
    __Vhier.add(0, __Vscopep_itch_pkg);
    __Vhier.add(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_decode);
    __Vhier.add(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_frame);
    __Vhier.add(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_hdr);
    __Vhier.add(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_levels);
    __Vhier.add(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_orders);
    __Vhier.add(__Vscopep_feed_handler_top__u_frame, __Vscopep_feed_handler_top__u_frame__unnamedblk1);
    __Vhier.add(__Vscopep_feed_handler_top__u_hdr, __Vscopep_feed_handler_top__u_hdr__unnamedblk1);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_ask_bbo);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_ask_pe);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_ask_upd);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_bid_bbo);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_bid_pe);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_bid_upd);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels__u_ask_pe, __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5);
    __Vhier.add(__Vscopep_feed_handler_top__u_levels__u_bid_pe, __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk2);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk3);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk4);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk5);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk6);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk7);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk8);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way);
    __Vhier.add(__Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 30, &(TOP));
    __Vscopep_feed_handler_top->varsInsertFromTable(Vtop___024root__VpiVarTable1, 69, &(TOP));
    __Vscopep_feed_handler_top->varInsert("BAND_TICKS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__BAND_TICKS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top->varInsert("MAX_MSG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__MAX_MSG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top->varInsert("SETS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__SETS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top->varInsert("STASH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__STASH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top->varInsert("TW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__TW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top->varInsert("WAYS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__WAYS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_decode->varsInsertFromTable(Vtop___024root__VpiVarTable2, 44, &(TOP));
    __Vscopep_feed_handler_top__u_decode->varInsert("BAND_SPAN", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_decode__DOT__BAND_SPAN))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_decode->varInsert("BAND_TICKS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_decode__DOT__BAND_TICKS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_decode->varInsert("MAX_MSG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_decode__DOT__MAX_MSG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_decode->varInsert("RECIP_100", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_decode__DOT__RECIP_100))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame->varsInsertFromTable(Vtop___024root__VpiVarTable3, 32, &(TOP));
    __Vscopep_feed_handler_top__u_frame->varInsert("BUF_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_frame__DOT__BUF_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame->varInsert("BUF_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_frame__DOT__BUF_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame->varInsert("BW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_frame__DOT__BW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_frame__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame->varInsert("MAX_MSG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_frame__DOT__MAX_MSG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame->varInsert("SHIFT_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_frame__DOT__SHIFT_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_frame__unnamedblk1->varsInsertFromTable(Vtop___024root__VpiVarTable4, 1, &(TOP));
    __Vscopep_feed_handler_top__u_hdr->varsInsertFromTable(Vtop___024root__VpiVarTable5, 46, &(TOP));
    __Vscopep_feed_handler_top__u_hdr->varInsert("BW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_hdr__DOT__BW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_hdr->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_hdr__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_hdr->varInsert("HDR_BEATS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_hdr__DOT__HDR_BEATS))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_feed_handler_top__u_hdr->varInsert("HDR_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_hdr__DOT__HDR_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_hdr->varInsert("PARAM_BEAT", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_hdr__DOT__PARAM_BEAT))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_feed_handler_top__u_hdr__unnamedblk1->varsInsertFromTable(Vtop___024root__VpiVarTable6, 1, &(TOP));
    __Vscopep_feed_handler_top__u_levels->varsInsertFromTable(Vtop___024root__VpiVarTable7, 49, &(TOP));
    __Vscopep_feed_handler_top__u_levels->varInsert("BAND_TICKS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__BAND_TICKS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels->varInsert("TW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__TW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_bbo->varsInsertFromTable(Vtop___024root__VpiVarTable8, 8, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_ask_bbo->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_bbo->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_bbo->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varsInsertFromTable(Vtop___024root__VpiVarTable9, 7, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varInsert("GW_LG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__GW_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varInsert("HIGHEST", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__HIGHEST))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varInsert("NG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__NG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varInsert("NG_LG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__NG_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable10, 1, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_ask_upd->varsInsertFromTable(Vtop___024root__VpiVarTable11, 8, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_ask_upd->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_upd->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_ask_upd->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_bbo->varsInsertFromTable(Vtop___024root__VpiVarTable12, 8, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_bid_bbo->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_bbo->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_bbo->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varsInsertFromTable(Vtop___024root__VpiVarTable13, 7, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varInsert("GW_LG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__GW_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varInsert("HIGHEST", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__HIGHEST))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varInsert("NG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__NG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varInsert("NG_LG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__NG_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable14, 1, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_bid_upd->varsInsertFromTable(Vtop___024root__VpiVarTable15, 8, &(TOP));
    __Vscopep_feed_handler_top__u_levels__u_bid_upd->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_upd->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_levels__u_bid_upd->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varsInsertFromTable(Vtop___024root__VpiVarTable16, 94, &(TOP));
    __Vscopep_feed_handler_top__u_orders->varInsert("ENTRY_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__ENTRY_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("E_LADDER", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__E_LADDER))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("E_SIDE", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__E_SIDE))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("E_TAG", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__E_TAG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("E_TICK", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__E_TICK))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("E_VALID", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__E_VALID))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("IDX_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__IDX_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("SETS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__SETS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("STASH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__STASH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("STS_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__STS_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("TAG_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__TAG_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("TICK_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__TICK_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("WAYS", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__WAYS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders->varInsert("WAY_W", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__WAY_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable17, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable18, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable19, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable20, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable21, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable22, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable23, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable24, 12, &(TOP));
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_feed_handler_top__u_orders__unnamedblk2->varsInsertFromTable(Vtop___024root__VpiVarTable25, 1, &(TOP));
    __Vscopep_feed_handler_top__u_orders__unnamedblk3->varsInsertFromTable(Vtop___024root__VpiVarTable26, 1, &(TOP));
    __Vscopep_feed_handler_top__u_orders__unnamedblk4->varsInsertFromTable(Vtop___024root__VpiVarTable27, 1, &(TOP));
    __Vscopep_feed_handler_top__u_orders__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable28, 1, &(TOP));
    __Vscopep_feed_handler_top__u_orders__unnamedblk6->varsInsertFromTable(Vtop___024root__VpiVarTable29, 1, &(TOP));
    __Vscopep_feed_handler_top__u_orders__unnamedblk7->varsInsertFromTable(Vtop___024root__VpiVarTable30, 1, &(TOP));
    __Vscopep_feed_handler_top__u_orders__unnamedblk8->varsInsertFromTable(Vtop___024root__VpiVarTable31, 1, &(TOP));
    __Vscopep_itch_pkg->varInsert("MSG_ADD", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_ADD))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_ADD_MPID", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_ADD_MPID))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_CANCEL", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_CANCEL))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_DELETE", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_DELETE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_EXECUTED", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_EXECUTED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_EXEC_PRICE", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_EXEC_PRICE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_REPLACE", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_REPLACE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("SIDE_BUY", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.SIDE_BUY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("TICK_UNITS", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.TICK_UNITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_feed_handler_top);
    __Vhier.remove(0, __Vscopep_itch_pkg);
    __Vhier.remove(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_decode);
    __Vhier.remove(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_frame);
    __Vhier.remove(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_hdr);
    __Vhier.remove(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_levels);
    __Vhier.remove(__Vscopep_feed_handler_top, __Vscopep_feed_handler_top__u_orders);
    __Vhier.remove(__Vscopep_feed_handler_top__u_frame, __Vscopep_feed_handler_top__u_frame__unnamedblk1);
    __Vhier.remove(__Vscopep_feed_handler_top__u_hdr, __Vscopep_feed_handler_top__u_hdr__unnamedblk1);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_ask_bbo);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_ask_pe);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_ask_upd);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_bid_bbo);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_bid_pe);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels__u_bid_upd);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels__u_ask_pe, __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5);
    __Vhier.remove(__Vscopep_feed_handler_top__u_levels__u_bid_pe, __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk2);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk3);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk4);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk5);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk6);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk7);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders__unnamedblk8);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way);
    __Vhier.remove(__Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top, __Vscopep_feed_handler_top = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_decode, __Vscopep_feed_handler_top__u_decode = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_frame, __Vscopep_feed_handler_top__u_frame = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_frame__unnamedblk1, __Vscopep_feed_handler_top__u_frame__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_hdr, __Vscopep_feed_handler_top__u_hdr = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_hdr__unnamedblk1, __Vscopep_feed_handler_top__u_hdr__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels, __Vscopep_feed_handler_top__u_levels = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_ask_bbo, __Vscopep_feed_handler_top__u_levels__u_ask_bbo = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_ask_pe, __Vscopep_feed_handler_top__u_levels__u_ask_pe = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5, __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_ask_upd, __Vscopep_feed_handler_top__u_levels__u_ask_upd = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_bid_bbo, __Vscopep_feed_handler_top__u_levels__u_bid_bbo = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_bid_pe, __Vscopep_feed_handler_top__u_levels__u_bid_pe = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5, __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_levels__u_bid_upd, __Vscopep_feed_handler_top__u_levels__u_bid_upd = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders, __Vscopep_feed_handler_top__u_orders = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way, __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk2, __Vscopep_feed_handler_top__u_orders__unnamedblk2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk3, __Vscopep_feed_handler_top__u_orders__unnamedblk3 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk4, __Vscopep_feed_handler_top__u_orders__unnamedblk4 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk5, __Vscopep_feed_handler_top__u_orders__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk6, __Vscopep_feed_handler_top__u_orders__unnamedblk6 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk7, __Vscopep_feed_handler_top__u_orders__unnamedblk7 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_feed_handler_top__u_orders__unnamedblk8, __Vscopep_feed_handler_top__u_orders__unnamedblk8 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_itch_pkg, __Vscopep_itch_pkg = nullptr);
    // Tear down sub module instances
    TOP__itch_pkg.dtor();
}
