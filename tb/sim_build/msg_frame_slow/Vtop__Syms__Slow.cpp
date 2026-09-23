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
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_len", offsetof(Vtop___024root, m_len), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_msg", offsetof(Vtop___024root, m_msg), VLVT_WDATA, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, m_seq), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, m_valid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_byte", offsetof(Vtop___024root, s_byte), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_last", offsetof(Vtop___024root, s_last), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_sequence", offsetof(Vtop___024root, s_sequence), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, s_valid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, stat_frame_err), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, stat_messages), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"acc", offsetof(Vtop___024root, msg_frame_slow__DOT__acc), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"byte_idx", offsetof(Vtop___024root, msg_frame_slow__DOT__byte_idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, msg_frame_slow__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"end_err", offsetof(Vtop___024root, msg_frame_slow__DOT__end_err), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"len_bad", offsetof(Vtop___024root, msg_frame_slow__DOT__len_bad), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"len_full", offsetof(Vtop___024root, msg_frame_slow__DOT__len_full), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"len_q", offsetof(Vtop___024root, msg_frame_slow__DOT__len_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_len", offsetof(Vtop___024root, msg_frame_slow__DOT__m_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_msg", offsetof(Vtop___024root, msg_frame_slow__DOT__m_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, msg_frame_slow__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, msg_frame_slow__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"msg_idx", offsetof(Vtop___024root, msg_frame_slow__DOT__msg_idx), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"remaining", offsetof(Vtop___024root, msg_frame_slow__DOT__remaining), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, msg_frame_slow__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_byte", offsetof(Vtop___024root, msg_frame_slow__DOT__s_byte), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_last", offsetof(Vtop___024root, msg_frame_slow__DOT__s_last), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_sequence", offsetof(Vtop___024root, msg_frame_slow__DOT__s_sequence), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_valid", offsetof(Vtop___024root, msg_frame_slow__DOT__s_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, msg_frame_slow__DOT__stat_frame_err), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, msg_frame_slow__DOT__stat_messages), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"state", offsetof(Vtop___024root, msg_frame_slow__DOT__state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_msg_frame_slow), "msg_frame_slow", "msg_frame_slow", "msg_frame_slow", -9, VerilatedScope::SCOPE_MODULE},
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
    Verilated::stackCheck(253);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 2, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_msg_frame_slow);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 12, &(TOP));
    __Vscopep_msg_frame_slow->varsInsertFromTable(Vtop___024root__VpiVarTable1, 21, &(TOP));
    __Vscopep_msg_frame_slow->varInsert("MAX_MSG", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame_slow__DOT__MAX_MSG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_msg_frame_slow);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_msg_frame_slow, __Vscopep_msg_frame_slow = nullptr);
    // Tear down sub module instances
}
