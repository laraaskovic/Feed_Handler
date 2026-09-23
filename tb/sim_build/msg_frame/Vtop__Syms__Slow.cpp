// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[];
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
    {"s_sequence", offsetof(Vtop___024root, s_sequence), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, s_tdata), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, s_tkeep), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, s_tlast), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, s_tvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, stat_frame_err), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, stat_messages), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"bad_len", offsetof(Vtop___024root, msg_frame__DOT__bad_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"buf_next", offsetof(Vtop___024root, msg_frame__DOT__buf_next), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"buf_q", offsetof(Vtop___024root, msg_frame__DOT__buf_q), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, msg_frame__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"desync", offsetof(Vtop___024root, msg_frame__DOT__desync), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"frame_err", offsetof(Vtop___024root, msg_frame__DOT__frame_err), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_len", offsetof(Vtop___024root, msg_frame__DOT__have_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"have_msg", offsetof(Vtop___024root, msg_frame__DOT__have_msg), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"in_bytes", offsetof(Vtop___024root, msg_frame__DOT__in_bytes), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"ins_data", offsetof(Vtop___024root, msg_frame__DOT__ins_data), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"ins_shift", offsetof(Vtop___024root, msg_frame__DOT__ins_shift), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {10, 0, 0, 0, 0, 0}},
    {"len_sane", offsetof(Vtop___024root, msg_frame__DOT__len_sane), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_len", offsetof(Vtop___024root, msg_frame__DOT__m_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_msg", offsetof(Vtop___024root, msg_frame__DOT__m_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {399, 0, 0, 0, 0, 0}},
    {"m_seq", offsetof(Vtop___024root, msg_frame__DOT__m_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_valid", offsetof(Vtop___024root, msg_frame__DOT__m_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"msg_idx", offsetof(Vtop___024root, msg_frame__DOT__msg_idx), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"msg_len", offsetof(Vtop___024root, msg_frame__DOT__msg_len), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"need", offsetof(Vtop___024root, msg_frame__DOT__need), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"nv_ins", offsetof(Vtop___024root, msg_frame__DOT__nv_ins), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"nv_next", offsetof(Vtop___024root, msg_frame__DOT__nv_next), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"nvalid", offsetof(Vtop___024root, msg_frame__DOT__nvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, msg_frame__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_sequence", offsetof(Vtop___024root, msg_frame__DOT__s_sequence), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, msg_frame__DOT__s_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, msg_frame__DOT__s_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, msg_frame__DOT__s_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, msg_frame__DOT__s_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_frame_err", offsetof(Vtop___024root, msg_frame__DOT__stat_frame_err), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_messages", offsetof(Vtop___024root, msg_frame__DOT__stat_messages), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"tail", offsetof(Vtop___024root, msg_frame__DOT__tail), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"wide", offsetof(Vtop___024root, msg_frame__DOT__wide), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"i", offsetof(Vtop___024root, msg_frame__DOT__unnamedblk1__DOT__i), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_msg_frame), "msg_frame", "msg_frame", "msg_frame", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_msg_frame__unnamedblk1), "msg_frame.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER},
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
    Verilated::stackCheck(387);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 3, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_msg_frame);
    __Vhier.add(__Vscopep_msg_frame, __Vscopep_msg_frame__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 13, &(TOP));
    __Vscopep_msg_frame->varsInsertFromTable(Vtop___024root__VpiVarTable1, 32, &(TOP));
    __Vscopep_msg_frame->varInsert("BUF_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame__DOT__BUF_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_msg_frame->varInsert("BUF_W", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame__DOT__BUF_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_msg_frame->varInsert("BW", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame__DOT__BW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_msg_frame->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_msg_frame->varInsert("MAX_MSG", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame__DOT__MAX_MSG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_msg_frame->varInsert("SHIFT_W", const_cast<void*>(static_cast<const void*>(&(TOP.msg_frame__DOT__SHIFT_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_msg_frame__unnamedblk1->varsInsertFromTable(Vtop___024root__VpiVarTable2, 1, &(TOP));
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_msg_frame);
    __Vhier.remove(__Vscopep_msg_frame, __Vscopep_msg_frame__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_msg_frame, __Vscopep_msg_frame = nullptr);
    VL_DO_CLEAR(delete __Vscopep_msg_frame__unnamedblk1, __Vscopep_msg_frame__unnamedblk1 = nullptr);
    // Tear down sub module instances
}
