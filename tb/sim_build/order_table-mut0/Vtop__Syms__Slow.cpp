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
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_add", offsetof(Vtop___024root, m_add), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_done", offsetof(Vtop___024root, m_done), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_qty", offsetof(Vtop___024root, m_qty), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, m_seq), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_side", offsetof(Vtop___024root, m_side), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tick", offsetof(Vtop___024root, m_tick), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, m_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ready", offsetof(Vtop___024root, ready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_new_ref", offsetof(Vtop___024root, s_new_ref), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_op", offsetof(Vtop___024root, s_op), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_qty", offsetof(Vtop___024root, s_qty), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_ref", offsetof(Vtop___024root, s_ref), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, s_seq), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_side", offsetof(Vtop___024root, s_side), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tick", offsetof(Vtop___024root, s_tick), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s_tick_ok", offsetof(Vtop___024root, s_tick_ok), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, s_valid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_collisions", offsetof(Vtop___024root, stat_collisions), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_missing", offsetof(Vtop___024root, stat_missing), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_overrun", offsetof(Vtop___024root, stat_overrun), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_stash_peak", offsetof(Vtop___024root, stat_stash_peak), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"a_addr", offsetof(Vtop___024root, order_table__DOT__a_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, order_table__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 106, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, order_table__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"accept", offsetof(Vtop___024root, order_table__DOT__accept), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"add_entry", offsetof(Vtop___024root, order_table__DOT__add_entry), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"add_ok", offsetof(Vtop___024root, order_table__DOT__add_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"add_sv", offsetof(Vtop___024root, order_table__DOT__add_sv), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"add_wv", offsetof(Vtop___024root, order_table__DOT__add_wv), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, order_table__DOT__b_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, order_table__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, order_table__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, order_table__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"diff_s", offsetof(Vtop___024root, order_table__DOT__diff_s), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 32, 0, 0, 0}},
    {"diff_w", offsetof(Vtop___024root, order_table__DOT__diff_w), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 32, 0, 0, 0}},
    {"e_ladder", offsetof(Vtop___024root, order_table__DOT__e_ladder), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"e_qty", offsetof(Vtop___024root, order_table__DOT__e_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"e_side", offsetof(Vtop___024root, order_table__DOT__e_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"e_tick", offsetof(Vtop___024root, order_table__DOT__e_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"empties_s", offsetof(Vtop___024root, order_table__DOT__empties_s), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"empties_w", offsetof(Vtop___024root, order_table__DOT__empties_w), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"found_a", offsetof(Vtop___024root, order_table__DOT__found_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"free_a_ok", offsetof(Vtop___024root, order_table__DOT__free_a_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"free_b_ok", offsetof(Vtop___024root, order_table__DOT__free_b_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"freev_a", offsetof(Vtop___024root, order_table__DOT__freev_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"freev_b", offsetof(Vtop___024root, order_table__DOT__freev_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"hit_a", offsetof(Vtop___024root, order_table__DOT__hit_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hit_b", offsetof(Vtop___024root, order_table__DOT__hit_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hitv_a", offsetof(Vtop___024root, order_table__DOT__hitv_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"hitv_b", offsetof(Vtop___024root, order_table__DOT__hitv_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"idx_a", offsetof(Vtop___024root, order_table__DOT__idx_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"idx_b", offsetof(Vtop___024root, order_table__DOT__idx_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"init_idx", offsetof(Vtop___024root, order_table__DOT__init_idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"is_add", offsetof(Vtop___024root, order_table__DOT__is_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_del", offsetof(Vtop___024root, order_table__DOT__is_del), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_red", offsetof(Vtop___024root, order_table__DOT__is_red), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_rep", offsetof(Vtop___024root, order_table__DOT__is_rep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_add", offsetof(Vtop___024root, order_table__DOT__m_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_done", offsetof(Vtop___024root, order_table__DOT__m_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_qty", offsetof(Vtop___024root, order_table__DOT__m_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, order_table__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_side", offsetof(Vtop___024root, order_table__DOT__m_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tick", offsetof(Vtop___024root, order_table__DOT__m_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, order_table__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"op_kind", offsetof(Vtop___024root, order_table__DOT__op_kind), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"op_new_ref", offsetof(Vtop___024root, order_table__DOT__op_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_qty", offsetof(Vtop___024root, order_table__DOT__op_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"op_ref", offsetof(Vtop___024root, order_table__DOT__op_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_seq", offsetof(Vtop___024root, order_table__DOT__op_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_side", offsetof(Vtop___024root, order_table__DOT__op_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"op_tick", offsetof(Vtop___024root, order_table__DOT__op_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"op_tick_ok", offsetof(Vtop___024root, order_table__DOT__op_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pend_qty", offsetof(Vtop___024root, order_table__DOT__pend_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"pend_seq", offsetof(Vtop___024root, order_table__DOT__pend_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"pend_side", offsetof(Vtop___024root, order_table__DOT__pend_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pend_tick", offsetof(Vtop___024root, order_table__DOT__pend_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"pend_v", offsetof(Vtop___024root, order_table__DOT__pend_v), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pend_valid", offsetof(Vtop___024root, order_table__DOT__pend_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rd_a", offsetof(Vtop___024root, order_table__DOT__rd_a), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 1, 1, {0, 1, 106, 0, 0, 0}},
    {"rd_b", offsetof(Vtop___024root, order_table__DOT__rd_b), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 1, 1, {0, 1, 106, 0, 0, 0}},
    {"ready", offsetof(Vtop___024root, order_table__DOT__ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rep_ok", offsetof(Vtop___024root, order_table__DOT__rep_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rep_sv", offsetof(Vtop___024root, order_table__DOT__rep_sv), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rep_wv", offsetof(Vtop___024root, order_table__DOT__rep_wv), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, order_table__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_new_ref", offsetof(Vtop___024root, order_table__DOT__s_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_op", offsetof(Vtop___024root, order_table__DOT__s_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_qty", offsetof(Vtop___024root, order_table__DOT__s_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_ref", offsetof(Vtop___024root, order_table__DOT__s_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, order_table__DOT__s_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_side", offsetof(Vtop___024root, order_table__DOT__s_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tick", offsetof(Vtop___024root, order_table__DOT__s_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s_tick_ok", offsetof(Vtop___024root, order_table__DOT__s_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, order_table__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"same_set", offsetof(Vtop___024root, order_table__DOT__same_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_a", offsetof(Vtop___024root, order_table__DOT__sh_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_b", offsetof(Vtop___024root, order_table__DOT__sh_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"shv_a", offsetof(Vtop___024root, order_table__DOT__shv_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"shv_b", offsetof(Vtop___024root, order_table__DOT__shv_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"st_busy", offsetof(Vtop___024root, order_table__DOT__st_busy), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"st_count", offsetof(Vtop___024root, order_table__DOT__st_count), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"st_free_ok", offsetof(Vtop___024root, order_table__DOT__st_free_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"st_freev", offsetof(Vtop___024root, order_table__DOT__st_freev), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"st_ladder", offsetof(Vtop___024root, order_table__DOT__st_ladder), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"st_left", offsetof(Vtop___024root, order_table__DOT__st_left), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"st_qty", offsetof(Vtop___024root, order_table__DOT__st_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 31, 0, 0, 0}},
    {"st_ref", offsetof(Vtop___024root, order_table__DOT__st_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 63, 0, 0, 0}},
    {"st_side", offsetof(Vtop___024root, order_table__DOT__st_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"st_tick", offsetof(Vtop___024root, order_table__DOT__st_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 11, 0, 0, 0}},
    {"st_valid", offsetof(Vtop___024root, order_table__DOT__st_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"stat_collisions", offsetof(Vtop___024root, order_table__DOT__stat_collisions), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_missing", offsetof(Vtop___024root, order_table__DOT__stat_missing), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_overrun", offsetof(Vtop___024root, order_table__DOT__stat_overrun), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_stash_peak", offsetof(Vtop___024root, order_table__DOT__stat_stash_peak), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"state", offsetof(Vtop___024root, order_table__DOT__state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"su_dec", offsetof(Vtop___024root, order_table__DOT__su_dec), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"su_dec_qty", offsetof(Vtop___024root, order_table__DOT__su_dec_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"su_kill", offsetof(Vtop___024root, order_table__DOT__su_kill), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"su_ladder", offsetof(Vtop___024root, order_table__DOT__su_ladder), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"su_new", offsetof(Vtop___024root, order_table__DOT__su_new), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"su_qty", offsetof(Vtop___024root, order_table__DOT__su_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"su_ref", offsetof(Vtop___024root, order_table__DOT__su_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"su_side", offsetof(Vtop___024root, order_table__DOT__su_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"su_tick", offsetof(Vtop___024root, order_table__DOT__su_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"take_qty", offsetof(Vtop___024root, order_table__DOT__take_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"take_s", offsetof(Vtop___024root, order_table__DOT__take_s), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 31, 0, 0, 0}},
    {"take_w", offsetof(Vtop___024root, order_table__DOT__take_w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 1, 31, 0, 0, 0}},
    {"vld_a", offsetof(Vtop___024root, order_table__DOT__vld_a), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"vld_b", offsetof(Vtop___024root, order_table__DOT__vld_b), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"a_addr", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 15, 106, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[] = {
    {"a_addr", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"a_din", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"a_dout", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"a_en", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"a_we", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_addr", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"b_din", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"b_dout", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {106, 0, 0, 0, 0, 0}},
    {"b_en", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_we", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 15, 106, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"k", offsetof(Vtop___024root, order_table__DOT__unnamedblk10__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"k", offsetof(Vtop___024root, order_table__DOT__unnamedblk11__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[] = {
    {"w", offsetof(Vtop___024root, order_table__DOT__unnamedblk2__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[] = {
    {"k", offsetof(Vtop___024root, order_table__DOT__unnamedblk3__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[] = {
    {"w", offsetof(Vtop___024root, order_table__DOT__unnamedblk4__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[] = {
    {"k", offsetof(Vtop___024root, order_table__DOT__unnamedblk5__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[] = {
    {"w", offsetof(Vtop___024root, order_table__DOT__unnamedblk6__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[] = {
    {"k", offsetof(Vtop___024root, order_table__DOT__unnamedblk7__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[] = {
    {"w", offsetof(Vtop___024root, order_table__DOT__unnamedblk8__DOT__w), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable13[] = {
    {"k", offsetof(Vtop___024root, order_table__DOT__unnamedblk9__DOT__k), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_itch_pkg), "itch_pkg", "itch_pkg", "itch_pkg", -9, VerilatedScope::SCOPE_PACKAGE},
    {offsetof(Vtop__Syms, __Vscopep_order_table), "order_table", "order_table", "order_table", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_order_table__g_way__BRA__0__KET__), "order_table.g_way[0]", "g_way[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__g_way__BRA__0__KET____u_way), "order_table.g_way[0].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_order_table__g_way__BRA__1__KET__), "order_table.g_way[1]", "g_way[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__g_way__BRA__1__KET____u_way), "order_table.g_way[1].u_way", "u_way", "tdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk10), "order_table.unnamedblk10", "unnamedblk10", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk11), "order_table.unnamedblk11", "unnamedblk11", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk2), "order_table.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk3), "order_table.unnamedblk3", "unnamedblk3", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk4), "order_table.unnamedblk4", "unnamedblk4", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk5), "order_table.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk6), "order_table.unnamedblk6", "unnamedblk6", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk7), "order_table.unnamedblk7", "unnamedblk7", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk8), "order_table.unnamedblk8", "unnamedblk8", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_order_table__unnamedblk9), "order_table.unnamedblk9", "unnamedblk9", "<null>", -9, VerilatedScope::SCOPE_OTHER},
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
    Verilated::stackCheck(580);
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
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 17, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_itch_pkg);
    __Vhier.add(0, __Vscopep_order_table);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__g_way__BRA__0__KET__);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__g_way__BRA__1__KET__);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk10);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk11);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk2);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk3);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk4);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk5);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk6);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk7);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk8);
    __Vhier.add(__Vscopep_order_table, __Vscopep_order_table__unnamedblk9);
    __Vhier.add(__Vscopep_order_table__g_way__BRA__0__KET__, __Vscopep_order_table__g_way__BRA__0__KET____u_way);
    __Vhier.add(__Vscopep_order_table__g_way__BRA__1__KET__, __Vscopep_order_table__g_way__BRA__1__KET____u_way);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 23, &(TOP));
    __Vscopep_itch_pkg->varInsert("MSG_ADD", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_ADD))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_ADD_MPID", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_ADD_MPID))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_CANCEL", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_CANCEL))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_DELETE", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_DELETE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_EXECUTED", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_EXECUTED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_EXEC_PRICE", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_EXEC_PRICE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("MSG_REPLACE", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.MSG_REPLACE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("SIDE_BUY", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.SIDE_BUY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_itch_pkg->varInsert("TICK_UNITS", const_cast<void*>(static_cast<const void*>(&(TOP__itch_pkg.TICK_UNITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varsInsertFromTable(Vtop___024root__VpiVarTable1, 108, &(TOP));
    __Vscopep_order_table->varInsert("ENTRY_W", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__ENTRY_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("E_LADDER", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__E_LADDER))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("E_SIDE", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__E_SIDE))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("E_TAG", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__E_TAG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("E_TICK", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__E_TICK))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("E_VALID", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__E_VALID))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("IDX_W", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__IDX_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("SETS", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__SETS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("STASH", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__STASH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("TAG_W", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__TAG_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("TICK_W", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__TICK_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table->varInsert("WAYS", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__WAYS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__g_way__BRA__0__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable2, 12, &(TOP));
    __Vscopep_order_table__g_way__BRA__0__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__g_way__BRA__0__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__g_way__BRA__0__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__g_way__BRA__1__KET____u_way->varsInsertFromTable(Vtop___024root__VpiVarTable3, 12, &(TOP));
    __Vscopep_order_table__g_way__BRA__1__KET____u_way->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__g_way__BRA__1__KET____u_way->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__g_way__BRA__1__KET____u_way->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_order_table__unnamedblk10->varsInsertFromTable(Vtop___024root__VpiVarTable4, 1, &(TOP));
    __Vscopep_order_table__unnamedblk11->varsInsertFromTable(Vtop___024root__VpiVarTable5, 1, &(TOP));
    __Vscopep_order_table__unnamedblk2->varsInsertFromTable(Vtop___024root__VpiVarTable6, 1, &(TOP));
    __Vscopep_order_table__unnamedblk3->varsInsertFromTable(Vtop___024root__VpiVarTable7, 1, &(TOP));
    __Vscopep_order_table__unnamedblk4->varsInsertFromTable(Vtop___024root__VpiVarTable8, 1, &(TOP));
    __Vscopep_order_table__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable9, 1, &(TOP));
    __Vscopep_order_table__unnamedblk6->varsInsertFromTable(Vtop___024root__VpiVarTable10, 1, &(TOP));
    __Vscopep_order_table__unnamedblk7->varsInsertFromTable(Vtop___024root__VpiVarTable11, 1, &(TOP));
    __Vscopep_order_table__unnamedblk8->varsInsertFromTable(Vtop___024root__VpiVarTable12, 1, &(TOP));
    __Vscopep_order_table__unnamedblk9->varsInsertFromTable(Vtop___024root__VpiVarTable13, 1, &(TOP));
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_itch_pkg);
    __Vhier.remove(0, __Vscopep_order_table);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__g_way__BRA__0__KET__);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__g_way__BRA__1__KET__);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk10);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk11);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk2);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk3);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk4);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk5);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk6);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk7);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk8);
    __Vhier.remove(__Vscopep_order_table, __Vscopep_order_table__unnamedblk9);
    __Vhier.remove(__Vscopep_order_table__g_way__BRA__0__KET__, __Vscopep_order_table__g_way__BRA__0__KET____u_way);
    __Vhier.remove(__Vscopep_order_table__g_way__BRA__1__KET__, __Vscopep_order_table__g_way__BRA__1__KET____u_way);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_itch_pkg, __Vscopep_itch_pkg = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table, __Vscopep_order_table = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__g_way__BRA__0__KET__, __Vscopep_order_table__g_way__BRA__0__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__g_way__BRA__0__KET____u_way, __Vscopep_order_table__g_way__BRA__0__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__g_way__BRA__1__KET__, __Vscopep_order_table__g_way__BRA__1__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__g_way__BRA__1__KET____u_way, __Vscopep_order_table__g_way__BRA__1__KET____u_way = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk10, __Vscopep_order_table__unnamedblk10 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk11, __Vscopep_order_table__unnamedblk11 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk2, __Vscopep_order_table__unnamedblk2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk3, __Vscopep_order_table__unnamedblk3 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk4, __Vscopep_order_table__unnamedblk4 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk5, __Vscopep_order_table__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk6, __Vscopep_order_table__unnamedblk6 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk7, __Vscopep_order_table__unnamedblk7 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk8, __Vscopep_order_table__unnamedblk8 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_order_table__unnamedblk9, __Vscopep_order_table__unnamedblk9 = nullptr);
    // Tear down sub module instances
    TOP__itch_pkg.dtor();
}
