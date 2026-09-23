// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"cfg_band_base", offsetof(Vtop___024root, cfg_band_base), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_locate", offsetof(Vtop___024root, m_locate), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_new_ref", offsetof(Vtop___024root, m_new_ref), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_op", offsetof(Vtop___024root, m_op), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"m_price", offsetof(Vtop___024root, m_price), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_qty", offsetof(Vtop___024root, m_qty), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ref", offsetof(Vtop___024root, m_ref), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, m_seq), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_side", offsetof(Vtop___024root, m_side), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tick", offsetof(Vtop___024root, m_tick), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_tick_ok", offsetof(Vtop___024root, m_tick_ok), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, m_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_len", offsetof(Vtop___024root, s_len), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_msg", offsetof(Vtop___024root, s_msg), VLVT_WDATA, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, s_seq), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, s_valid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_ops", offsetof(Vtop___024root, stat_ops), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_out_of_band", offsetof(Vtop___024root, stat_out_of_band), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_subpenny", offsetof(Vtop___024root, stat_subpenny), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"add_price", offsetof(Vtop___024root, decode__DOT__add_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"add_qty", offsetof(Vtop___024root, decode__DOT__add_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"add_ref", offsetof(Vtop___024root, decode__DOT__add_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"add_side", offsetof(Vtop___024root, decode__DOT__add_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"band_top", offsetof(Vtop___024root, decode__DOT__band_top), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {32, 0, 0, 0, 0, 0}},
    {"cfg_band_base", offsetof(Vtop___024root, decode__DOT__cfg_band_base), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, decode__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"delta_c", offsetof(Vtop___024root, decode__DOT__delta_c), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"has_price", offsetof(Vtop___024root, decode__DOT__has_price), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"in_band_c", offsetof(Vtop___024root, decode__DOT__in_band_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"locate", offsetof(Vtop___024root, decode__DOT__locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_locate", offsetof(Vtop___024root, decode__DOT__m_locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_new_ref", offsetof(Vtop___024root, decode__DOT__m_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_op", offsetof(Vtop___024root, decode__DOT__m_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"m_price", offsetof(Vtop___024root, decode__DOT__m_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_qty", offsetof(Vtop___024root, decode__DOT__m_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"m_ref", offsetof(Vtop___024root, decode__DOT__m_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, decode__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_side", offsetof(Vtop___024root, decode__DOT__m_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tick", offsetof(Vtop___024root, decode__DOT__m_tick), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_tick_ok", offsetof(Vtop___024root, decode__DOT__m_tick_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, decode__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"msg_type", offsetof(Vtop___024root, decode__DOT__msg_type), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"new_ref_c", offsetof(Vtop___024root, decode__DOT__new_ref_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"op_c", offsetof(Vtop___024root, decode__DOT__op_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"p1_delta", offsetof(Vtop___024root, decode__DOT__p1_delta), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {18, 0, 0, 0, 0, 0}},
    {"p1_in_band", offsetof(Vtop___024root, decode__DOT__p1_in_band), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"p1_locate", offsetof(Vtop___024root, decode__DOT__p1_locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"p1_new_ref", offsetof(Vtop___024root, decode__DOT__p1_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"p1_op", offsetof(Vtop___024root, decode__DOT__p1_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"p1_price", offsetof(Vtop___024root, decode__DOT__p1_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"p1_qty", offsetof(Vtop___024root, decode__DOT__p1_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"p1_ref", offsetof(Vtop___024root, decode__DOT__p1_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"p1_seq", offsetof(Vtop___024root, decode__DOT__p1_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"p1_side", offsetof(Vtop___024root, decode__DOT__p1_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"p1_valid", offsetof(Vtop___024root, decode__DOT__p1_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"p2_delta", offsetof(Vtop___024root, decode__DOT__p2_delta), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {18, 0, 0, 0, 0, 0}},
    {"p2_in_band", offsetof(Vtop___024root, decode__DOT__p2_in_band), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"p2_locate", offsetof(Vtop___024root, decode__DOT__p2_locate), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"p2_new_ref", offsetof(Vtop___024root, decode__DOT__p2_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"p2_op", offsetof(Vtop___024root, decode__DOT__p2_op), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"p2_price", offsetof(Vtop___024root, decode__DOT__p2_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"p2_prod", offsetof(Vtop___024root, decode__DOT__p2_prod), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"p2_qty", offsetof(Vtop___024root, decode__DOT__p2_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"p2_ref", offsetof(Vtop___024root, decode__DOT__p2_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"p2_seq", offsetof(Vtop___024root, decode__DOT__p2_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"p2_side", offsetof(Vtop___024root, decode__DOT__p2_side), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"p2_valid", offsetof(Vtop___024root, decode__DOT__p2_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"price_c", offsetof(Vtop___024root, decode__DOT__price_c), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"qty_c", offsetof(Vtop___024root, decode__DOT__qty_c), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"red_qty", offsetof(Vtop___024root, decode__DOT__red_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"red_ref", offsetof(Vtop___024root, decode__DOT__red_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"ref_c", offsetof(Vtop___024root, decode__DOT__ref_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rep_new_ref", offsetof(Vtop___024root, decode__DOT__rep_new_ref), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rep_price", offsetof(Vtop___024root, decode__DOT__rep_price), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rep_qty", offsetof(Vtop___024root, decode__DOT__rep_qty), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, decode__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_len", offsetof(Vtop___024root, decode__DOT__s_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_msg", offsetof(Vtop___024root, decode__DOT__s_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"s_seq", offsetof(Vtop___024root, decode__DOT__s_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, decode__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"side_c", offsetof(Vtop___024root, decode__DOT__side_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_ops", offsetof(Vtop___024root, decode__DOT__stat_ops), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_out_of_band", offsetof(Vtop___024root, decode__DOT__stat_out_of_band), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_subpenny", offsetof(Vtop___024root, decode__DOT__stat_subpenny), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"subpenny_c", offsetof(Vtop___024root, decode__DOT__subpenny_c), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tick_c", offsetof(Vtop___024root, decode__DOT__tick_c), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_decode), "decode", "decode", "decode", -9, VerilatedScope::SCOPE_MODULE},
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
    Verilated::stackCheck(237);
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
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 3, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_decode);
    __Vhier.add(0, __Vscopep_itch_pkg);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 21, &(TOP));
    __Vscopep_decode->varsInsertFromTable(Vtop___024root__VpiVarTable1, 67, &(TOP));
    __Vscopep_decode->varInsert("BAND_SPAN", const_cast<void*>(static_cast<const void*>(&(TOP.decode__DOT__BAND_SPAN))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_decode->varInsert("BAND_TICKS", const_cast<void*>(static_cast<const void*>(&(TOP.decode__DOT__BAND_TICKS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_decode->varInsert("MAX_MSG", const_cast<void*>(static_cast<const void*>(&(TOP.decode__DOT__MAX_MSG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_decode->varInsert("RECIP_25", const_cast<void*>(static_cast<const void*>(&(TOP.decode__DOT__RECIP_25))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,17,0);
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
    __Vhier.remove(0, __Vscopep_decode);
    __Vhier.remove(0, __Vscopep_itch_pkg);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_decode, __Vscopep_decode = nullptr);
    VL_DO_CLEAR(delete __Vscopep_itch_pkg, __Vscopep_itch_pkg = nullptr);
    // Tear down sub module instances
    TOP__itch_pkg.dtor();
}
