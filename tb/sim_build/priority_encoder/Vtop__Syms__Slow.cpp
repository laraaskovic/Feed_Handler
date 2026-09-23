// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"bitmap", offsetof(Vtop___024root, bitmap), VLVT_WDATA, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"hi_any", offsetof(Vtop___024root, hi_any), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hi_index", offsetof(Vtop___024root, hi_index), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"lo_any", offsetof(Vtop___024root, lo_any), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"lo_index", offsetof(Vtop___024root, lo_index), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"bitmap", offsetof(Vtop___024root, pe_wrap__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"hi_any", offsetof(Vtop___024root, pe_wrap__DOT__hi_any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"hi_index", offsetof(Vtop___024root, pe_wrap__DOT__hi_index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"lo_any", offsetof(Vtop___024root, pe_wrap__DOT__lo_any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"lo_index", offsetof(Vtop___024root, pe_wrap__DOT__lo_index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {11, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"any", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bitmap", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"grp", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__grp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"index", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"off", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"offsets", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__offsets), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"offsets_c", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__offsets_c), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"summary", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__summary), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"summary_c", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__summary_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[] = {
    {"g", offsetof(Vtop___024root, pe_wrap__DOT__u_hi__DOT__unnamedblk5__DOT__g), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"any", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__any), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bitmap", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__bitmap), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4095, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"grp", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__grp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"index", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__index), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {11, 0, 0, 0, 0, 0}},
    {"off", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"offsets", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__offsets), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"offsets_c", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__offsets_c), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {383, 0, 0, 0, 0, 0}},
    {"summary", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__summary), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"summary_c", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__summary_c), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"g", offsetof(Vtop___024root, pe_wrap__DOT__u_lo__DOT__unnamedblk5__DOT__g), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_pe_wrap), "pe_wrap", "pe_wrap", "pe_wrap", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_pe_wrap__u_hi), "pe_wrap.u_hi", "u_hi", "priority_encoder", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_pe_wrap__u_hi__unnamedblk5), "pe_wrap.u_hi.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_pe_wrap__u_lo), "pe_wrap.u_lo", "u_lo", "priority_encoder", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_pe_wrap__u_lo__unnamedblk5), "pe_wrap.u_lo.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER},
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
    Verilated::stackCheck(600);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 6, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_pe_wrap);
    __Vhier.add(__Vscopep_pe_wrap, __Vscopep_pe_wrap__u_hi);
    __Vhier.add(__Vscopep_pe_wrap, __Vscopep_pe_wrap__u_lo);
    __Vhier.add(__Vscopep_pe_wrap__u_hi, __Vscopep_pe_wrap__u_hi__unnamedblk5);
    __Vhier.add(__Vscopep_pe_wrap__u_lo, __Vscopep_pe_wrap__u_lo__unnamedblk5);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 5, &(TOP));
    __Vscopep_pe_wrap->varsInsertFromTable(Vtop___024root__VpiVarTable1, 5, &(TOP));
    __Vscopep_pe_wrap->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_hi->varsInsertFromTable(Vtop___024root__VpiVarTable2, 10, &(TOP));
    __Vscopep_pe_wrap__u_hi->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_hi->varInsert("GW_LG", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__GW_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_hi->varInsert("HIGHEST", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__HIGHEST))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_pe_wrap__u_hi->varInsert("NG", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__NG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_hi->varInsert("NG_LG", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__NG_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_hi->varInsert("REGISTERED", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__REGISTERED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_pe_wrap__u_hi->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_hi__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_hi__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable3, 1, &(TOP));
    __Vscopep_pe_wrap__u_lo->varsInsertFromTable(Vtop___024root__VpiVarTable4, 10, &(TOP));
    __Vscopep_pe_wrap__u_lo->varInsert("GW", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__GW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_lo->varInsert("GW_LG", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__GW_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_lo->varInsert("HIGHEST", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__HIGHEST))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_pe_wrap__u_lo->varInsert("NG", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__NG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_lo->varInsert("NG_LG", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__NG_LG))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_lo->varInsert("REGISTERED", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__REGISTERED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_pe_wrap__u_lo->varInsert("W", const_cast<void*>(static_cast<const void*>(&(TOP.pe_wrap__DOT__u_lo__DOT__W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_pe_wrap__u_lo__unnamedblk5->varsInsertFromTable(Vtop___024root__VpiVarTable5, 1, &(TOP));
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_pe_wrap);
    __Vhier.remove(__Vscopep_pe_wrap, __Vscopep_pe_wrap__u_hi);
    __Vhier.remove(__Vscopep_pe_wrap, __Vscopep_pe_wrap__u_lo);
    __Vhier.remove(__Vscopep_pe_wrap__u_hi, __Vscopep_pe_wrap__u_hi__unnamedblk5);
    __Vhier.remove(__Vscopep_pe_wrap__u_lo, __Vscopep_pe_wrap__u_lo__unnamedblk5);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pe_wrap, __Vscopep_pe_wrap = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pe_wrap__u_hi, __Vscopep_pe_wrap__u_hi = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pe_wrap__u_hi__unnamedblk5, __Vscopep_pe_wrap__u_hi__unnamedblk5 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pe_wrap__u_lo, __Vscopep_pe_wrap__u_lo = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pe_wrap__u_lo__unnamedblk5, __Vscopep_pe_wrap__u_lo__unnamedblk5 = nullptr);
    // Tear down sub module instances
}
