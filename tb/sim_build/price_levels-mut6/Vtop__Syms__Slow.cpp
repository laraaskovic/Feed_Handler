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
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_ask_qty", offsetof(Vtop___024root, m_ask_qty), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_tick", offsetof(Vtop___024root, m_ask_tick), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_ask_valid", offsetof(Vtop___024root, m_ask_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bbo_seq", offsetof(Vtop___024root, m_bbo_seq), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_bbo_valid", offsetof(Vtop___024root, m_bbo_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bid_qty", offsetof(Vtop___024root, m_bid_qty), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_tick", offsetof(Vtop___024root, m_bid_tick), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_bid_valid", offsetof(Vtop___024root, m_bid_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_add", offsetof(Vtop___024root, s_add), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_done", offsetof(Vtop___024root, s_done), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_qty", offsetof(Vtop___024root, s_qty), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, s_seq), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_side", offsetof(Vtop___024root, s_side), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tick", offsetof(Vtop___024root, s_tick), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, s_valid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_underflow", offsetof(Vtop___024root, stat_underflow), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_updates", offsetof(Vtop___024root, stat_updates), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"ask_map", offsetof(Vtop___024root, price_levels__DOT__ask_map), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"ask_we", offsetof(Vtop___024root, price_levels__DOT__ask_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"base_qty", offsetof(Vtop___024root, price_levels__DOT__base_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_ask_q", offsetof(Vtop___024root, price_levels__DOT__bbo_ask_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_bid_q", offsetof(Vtop___024root, price_levels__DOT__bbo_bid_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_d1_ask", offsetof(Vtop___024root, price_levels__DOT__bbo_d1_ask), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bbo_d1_bid", offsetof(Vtop___024root, price_levels__DOT__bbo_d1_bid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bbo_d1_qty", offsetof(Vtop___024root, price_levels__DOT__bbo_d1_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_d1_tick", offsetof(Vtop___024root, price_levels__DOT__bbo_d1_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"bbo_d2_ask", offsetof(Vtop___024root, price_levels__DOT__bbo_d2_ask), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bbo_d2_bid", offsetof(Vtop___024root, price_levels__DOT__bbo_d2_bid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bbo_d2_qty", offsetof(Vtop___024root, price_levels__DOT__bbo_d2_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"bbo_d2_tick", offsetof(Vtop___024root, price_levels__DOT__bbo_d2_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"best_ask_tick", offsetof(Vtop___024root, price_levels__DOT__best_ask_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"best_bid_tick", offsetof(Vtop___024root, price_levels__DOT__best_bid_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"bid_map", offsetof(Vtop___024root, price_levels__DOT__bid_map), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"bid_we", offsetof(Vtop___024root, price_levels__DOT__bid_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, price_levels__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"fwd_hit", offsetof(Vtop___024root, price_levels__DOT__fwd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_ask", offsetof(Vtop___024root, price_levels__DOT__have_ask), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_bid", offsetof(Vtop___024root, price_levels__DOT__have_bid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_ask_qty", offsetof(Vtop___024root, price_levels__DOT__m_ask_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ask_tick", offsetof(Vtop___024root, price_levels__DOT__m_ask_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_ask_valid", offsetof(Vtop___024root, price_levels__DOT__m_ask_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bbo_seq", offsetof(Vtop___024root, price_levels__DOT__m_bbo_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_bbo_valid", offsetof(Vtop___024root, price_levels__DOT__m_bbo_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_bid_qty", offsetof(Vtop___024root, price_levels__DOT__m_bid_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_bid_tick", offsetof(Vtop___024root, price_levels__DOT__m_bid_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"m_bid_valid", offsetof(Vtop___024root, price_levels__DOT__m_bid_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"new_qty", offsetof(Vtop___024root, price_levels__DOT__new_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"pe_ask_tick", offsetof(Vtop___024root, price_levels__DOT__pe_ask_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"pe_ask_v", offsetof(Vtop___024root, price_levels__DOT__pe_ask_v), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pe_bid_tick", offsetof(Vtop___024root, price_levels__DOT__pe_bid_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"pe_bid_v", offsetof(Vtop___024root, price_levels__DOT__pe_bid_v), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pub_done1", offsetof(Vtop___024root, price_levels__DOT__pub_done1), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pub_done2", offsetof(Vtop___024root, price_levels__DOT__pub_done2), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"pub_seq1", offsetof(Vtop___024root, price_levels__DOT__pub_seq1), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"pub_seq2", offsetof(Vtop___024root, price_levels__DOT__pub_seq2), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rd_ask", offsetof(Vtop___024root, price_levels__DOT__rd_ask), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rd_bid", offsetof(Vtop___024root, price_levels__DOT__rd_bid), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, price_levels__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_add", offsetof(Vtop___024root, price_levels__DOT__s1_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_done", offsetof(Vtop___024root, price_levels__DOT__s1_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_occupied", offsetof(Vtop___024root, price_levels__DOT__s1_occupied), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_qty", offsetof(Vtop___024root, price_levels__DOT__s1_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s1_seq", offsetof(Vtop___024root, price_levels__DOT__s1_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s1_side", offsetof(Vtop___024root, price_levels__DOT__s1_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s1_tick", offsetof(Vtop___024root, price_levels__DOT__s1_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s1_valid", offsetof(Vtop___024root, price_levels__DOT__s1_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_add", offsetof(Vtop___024root, price_levels__DOT__s_add), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_done", offsetof(Vtop___024root, price_levels__DOT__s_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_qty", offsetof(Vtop___024root, price_levels__DOT__s_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, price_levels__DOT__s_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_side", offsetof(Vtop___024root, price_levels__DOT__s_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tick", offsetof(Vtop___024root, price_levels__DOT__s_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, price_levels__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_underflow", offsetof(Vtop___024root, price_levels__DOT__stat_underflow), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_updates", offsetof(Vtop___024root, price_levels__DOT__stat_updates), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"underflow", offsetof(Vtop___024root, price_levels__DOT__underflow), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_done", offsetof(Vtop___024root, price_levels__DOT__wr_done), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_qty", offsetof(Vtop___024root, price_levels__DOT__wr_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"wr_seq", offsetof(Vtop___024root, price_levels__DOT__wr_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"wr_side", offsetof(Vtop___024root, price_levels__DOT__wr_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_tick", offsetof(Vtop___024root, price_levels__DOT__wr_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wr_valid", offsetof(Vtop___024root, price_levels__DOT__wr_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"clk", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, price_levels__DOT__u_ask_bbo__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[] = {
    {"any", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bitmap", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"grp", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__grp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"index", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"off", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"offsets", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__offsets), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"offsets_c", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__offsets_c), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"summary", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__summary), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"summary_c", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__summary_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"g", offsetof(Vtop___024root, price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"clk", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, price_levels__DOT__u_ask_upd__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[] = {
    {"clk", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, price_levels__DOT__u_bid_bbo__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[] = {
    {"any", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bitmap", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"grp", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__grp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"index", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"off", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"offsets", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__offsets), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"offsets_c", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__offsets_c), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"summary", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__summary), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"summary_c", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__summary_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[] = {
    {"g", offsetof(Vtop___024root, price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[] = {
    {"clk", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mem", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__mem), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 4095, 31, 0, 0, 0}},
    {"raddr", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__raddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"re", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__re), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"waddr", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__waddr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"we", offsetof(Vtop___024root, price_levels__DOT__u_bid_upd__DOT__we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_price_levels), "price_levels", "price_levels", "price_levels", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_ask_bbo), "price_levels.u_ask_bbo", "u_ask_bbo", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_ask_pe), "price_levels.u_ask_pe", "u_ask_pe", "priority_encoder", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_ask_pe__unnamedblk5), "price_levels.u_ask_pe.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_ask_upd), "price_levels.u_ask_upd", "u_ask_upd", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_bid_bbo), "price_levels.u_bid_bbo", "u_bid_bbo", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_bid_pe), "price_levels.u_bid_pe", "u_bid_pe", "priority_encoder", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_bid_pe__unnamedblk5), "price_levels.u_bid_pe.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_price_levels__u_bid_upd), "price_levels.u_bid_upd", "u_bid_upd", "sdp_ram", -9, VerilatedScope::SCOPE_MODULE},
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
    Verilated::stackCheck(971);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 10, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_price_levels);
    __Vhier.add(__Vscopep_price_levels, __Vscopep_price_levels__u_ask_bbo);
    __Vhier.add(__Vscopep_price_levels, __Vscopep_price_levels__u_ask_pe);
    __Vhier.add(__Vscopep_price_levels, __Vscopep_price_levels__u_ask_upd);
    __Vhier.add(__Vscopep_price_levels, __Vscopep_price_levels__u_bid_bbo);
    __Vhier.add(__Vscopep_price_levels, __Vscopep_price_levels__u_bid_pe);
    __Vhier.add(__Vscopep_price_levels, __Vscopep_price_levels__u_bid_upd);
    __Vhier.add(__Vscopep_price_levels__u_ask_pe, __Vscopep_price_levels__u_ask_pe__unnamedblk5);
    __Vhier.add(__Vscopep_price_levels__u_bid_pe, __Vscopep_price_levels__u_bid_pe__unnamedblk5);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 19, &(TOP));
    __Vscopep_price_levels->varsInsertFromTable(Vtop___024root__VpiVarTable1, 65, &(TOP));
    __Vscopep_price_levels->varInsert("BAND_TICKS", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__BAND_TICKS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels->varInsert("TW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__TW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_bbo->varsInsertFromTable(Vtop___024root__VpiVarTable2, 8, &(TOP));
    __Vscopep_price_levels__u_ask_bbo->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_bbo__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_bbo->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_bbo__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_bbo->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_bbo__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_pe->varsInsertFromTable(Vtop___024root__VpiVarTable3, 10, &(TOP));
    __Vscopep_price_levels__u_ask_pe->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_pe->varInsert("GW_LG", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__GW_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_pe->varInsert("HIGHEST", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__HIGHEST))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_price_levels__u_ask_pe->varInsert("NG", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__NG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_pe->varInsert("NG_LG", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__NG_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_pe->varInsert("REGISTERED", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__REGISTERED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_price_levels__u_ask_pe->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_pe__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_pe__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable4, 1, &(TOP));
    __Vscopep_price_levels__u_ask_upd->varsInsertFromTable(Vtop___024root__VpiVarTable5, 8, &(TOP));
    __Vscopep_price_levels__u_ask_upd->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_upd__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_upd->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_upd__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_ask_upd->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_ask_upd__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_bbo->varsInsertFromTable(Vtop___024root__VpiVarTable6, 8, &(TOP));
    __Vscopep_price_levels__u_bid_bbo->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_bbo__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_bbo->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_bbo__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_bbo->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_bbo__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_pe->varsInsertFromTable(Vtop___024root__VpiVarTable7, 10, &(TOP));
    __Vscopep_price_levels__u_bid_pe->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_pe->varInsert("GW_LG", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__GW_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_pe->varInsert("HIGHEST", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__HIGHEST))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_price_levels__u_bid_pe->varInsert("NG", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__NG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_pe->varInsert("NG_LG", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__NG_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_pe->varInsert("REGISTERED", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__REGISTERED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_price_levels__u_bid_pe->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_pe__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_pe__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable8, 1, &(TOP));
    __Vscopep_price_levels__u_bid_upd->varsInsertFromTable(Vtop___024root__VpiVarTable9, 8, &(TOP));
    __Vscopep_price_levels__u_bid_upd->varInsert("AW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_upd__DOT__AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_upd->varInsert("DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_upd__DOT__DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_price_levels__u_bid_upd->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.price_levels__DOT__u_bid_upd__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_price_levels);
    __Vhier.remove(__Vscopep_price_levels, __Vscopep_price_levels__u_ask_bbo);
    __Vhier.remove(__Vscopep_price_levels, __Vscopep_price_levels__u_ask_pe);
    __Vhier.remove(__Vscopep_price_levels, __Vscopep_price_levels__u_ask_upd);
    __Vhier.remove(__Vscopep_price_levels, __Vscopep_price_levels__u_bid_bbo);
    __Vhier.remove(__Vscopep_price_levels, __Vscopep_price_levels__u_bid_pe);
    __Vhier.remove(__Vscopep_price_levels, __Vscopep_price_levels__u_bid_upd);
    __Vhier.remove(__Vscopep_price_levels__u_ask_pe, __Vscopep_price_levels__u_ask_pe__unnamedblk5);
    __Vhier.remove(__Vscopep_price_levels__u_bid_pe, __Vscopep_price_levels__u_bid_pe__unnamedblk5);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels, __Vscopep_price_levels = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_ask_bbo, __Vscopep_price_levels__u_ask_bbo = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_ask_pe, __Vscopep_price_levels__u_ask_pe = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_ask_pe__unnamedblk5, __Vscopep_price_levels__u_ask_pe__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_ask_upd, __Vscopep_price_levels__u_ask_upd = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_bid_bbo, __Vscopep_price_levels__u_bid_bbo = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_bid_pe, __Vscopep_price_levels__u_bid_pe = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_bid_pe__unnamedblk5, __Vscopep_price_levels__u_bid_pe__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_price_levels__u_bid_upd, __Vscopep_price_levels__u_bid_upd = nullptr);
    // Tear down sub module instances
}
