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
    {"m_count", offsetof(Vtop___024root, m_count), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_sequence", offsetof(Vtop___024root, m_sequence), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_tdata", offsetof(Vtop___024root, m_tdata), VLVT_UINT64, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_tkeep", offsetof(Vtop___024root, m_tkeep), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_tlast", offsetof(Vtop___024root, m_tlast), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tvalid", offsetof(Vtop___024root, m_tvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, s_tdata), VLVT_UINT64, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, s_tkeep), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, s_tlast), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, s_tvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"stat_dropped", offsetof(Vtop___024root, stat_dropped), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_packets", offsetof(Vtop___024root, stat_packets), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"beat_idx", offsetof(Vtop___024root, hdr_parse__DOT__beat_idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, hdr_parse__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"do_emit", offsetof(Vtop___024root, hdr_parse__DOT__do_emit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"emit_start", offsetof(Vtop___024root, hdr_parse__DOT__emit_start), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"emitting", offsetof(Vtop___024root, hdr_parse__DOT__emitting), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ethertype_inner", offsetof(Vtop___024root, hdr_parse__DOT__ethertype_inner), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"ethertype_outer", offsetof(Vtop___024root, hdr_parse__DOT__ethertype_outer), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"flush_pend", offsetof(Vtop___024root, hdr_parse__DOT__flush_pend), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"flushed", offsetof(Vtop___024root, hdr_parse__DOT__flushed), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"hb", offsetof(Vtop___024root, hdr_parse__DOT__hb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {0, 127, 7, 0, 0, 0}},
    {"ihl_bytes", offsetof(Vtop___024root, hdr_parse__DOT__ihl_bytes), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ip_off", offsetof(Vtop___024root, hdr_parse__DOT__ip_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ip_total_len", offsetof(Vtop___024root, hdr_parse__DOT__ip_total_len), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"is_ipv4", offsetof(Vtop___024root, hdr_parse__DOT__is_ipv4), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"is_udp", offsetof(Vtop___024root, hdr_parse__DOT__is_udp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"keep_shift", offsetof(Vtop___024root, hdr_parse__DOT__keep_shift), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"last_bytes", offsetof(Vtop___024root, hdr_parse__DOT__last_bytes), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"last_keep", offsetof(Vtop___024root, hdr_parse__DOT__last_keep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_count", offsetof(Vtop___024root, hdr_parse__DOT__m_count), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"m_sequence", offsetof(Vtop___024root, hdr_parse__DOT__m_sequence), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_tdata", offsetof(Vtop___024root, hdr_parse__DOT__m_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"m_tkeep", offsetof(Vtop___024root, hdr_parse__DOT__m_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"m_tlast", offsetof(Vtop___024root, hdr_parse__DOT__m_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"m_tvalid", offsetof(Vtop___024root, hdr_parse__DOT__m_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"mold_cnt", offsetof(Vtop___024root, hdr_parse__DOT__mold_cnt), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"mold_off", offsetof(Vtop___024root, hdr_parse__DOT__mold_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"mold_seq", offsetof(Vtop___024root, hdr_parse__DOT__mold_seq), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"out_left", offsetof(Vtop___024root, hdr_parse__DOT__out_left), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"pay_len_q", offsetof(Vtop___024root, hdr_parse__DOT__pay_len_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"payload_len", offsetof(Vtop___024root, hdr_parse__DOT__payload_len), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"payload_off", offsetof(Vtop___024root, hdr_parse__DOT__payload_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"pkt_ok", offsetof(Vtop___024root, hdr_parse__DOT__pkt_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"prev_data", offsetof(Vtop___024root, hdr_parse__DOT__prev_data), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"r_off", offsetof(Vtop___024root, hdr_parse__DOT__r_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"reached", offsetof(Vtop___024root, hdr_parse__DOT__reached), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"realigned", offsetof(Vtop___024root, hdr_parse__DOT__realigned), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, hdr_parse__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tdata", offsetof(Vtop___024root, hdr_parse__DOT__s_tdata), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"s_tkeep", offsetof(Vtop___024root, hdr_parse__DOT__s_tkeep), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"s_tlast", offsetof(Vtop___024root, hdr_parse__DOT__s_tlast), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_tvalid", offsetof(Vtop___024root, hdr_parse__DOT__s_tvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sh_hi", offsetof(Vtop___024root, hdr_parse__DOT__sh_hi), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {6, 0, 0, 0, 0, 0}},
    {"sh_lo", offsetof(Vtop___024root, hdr_parse__DOT__sh_lo), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {6, 0, 0, 0, 0, 0}},
    {"stat_dropped", offsetof(Vtop___024root, hdr_parse__DOT__stat_dropped), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"stat_packets", offsetof(Vtop___024root, hdr_parse__DOT__stat_packets), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"udp_off", offsetof(Vtop___024root, hdr_parse__DOT__udp_off), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"vlan_tagged", offsetof(Vtop___024root, hdr_parse__DOT__vlan_tagged), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"b", offsetof(Vtop___024root, hdr_parse__DOT__unnamedblk1__DOT__b), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_hdr_parse), "hdr_parse", "hdr_parse", "hdr_parse", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_hdr_parse__unnamedblk1), "hdr_parse.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER},
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
    Verilated::stackCheck(201);
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
    __Vhier.add(0, __Vscopep_hdr_parse);
    __Vhier.add(__Vscopep_hdr_parse, __Vscopep_hdr_parse__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 14, &(TOP));
    __Vscopep_hdr_parse->varsInsertFromTable(Vtop___024root__VpiVarTable1, 47, &(TOP));
    __Vscopep_hdr_parse->varInsert("BW", const_cast<void*>(static_cast<const void*>(&(TOP.hdr_parse__DOT__BW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_hdr_parse->varInsert("DW", const_cast<void*>(static_cast<const void*>(&(TOP.hdr_parse__DOT__DW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_hdr_parse->varInsert("HDR_BEATS", const_cast<void*>(static_cast<const void*>(&(TOP.hdr_parse__DOT__HDR_BEATS))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_hdr_parse->varInsert("HDR_BYTES", const_cast<void*>(static_cast<const void*>(&(TOP.hdr_parse__DOT__HDR_BYTES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_hdr_parse->varInsert("PARAM_BEAT", const_cast<void*>(static_cast<const void*>(&(TOP.hdr_parse__DOT__PARAM_BEAT))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_hdr_parse__unnamedblk1->varsInsertFromTable(Vtop___024root__VpiVarTable2, 1, &(TOP));
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_hdr_parse);
    __Vhier.remove(__Vscopep_hdr_parse, __Vscopep_hdr_parse__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_hdr_parse, __Vscopep_hdr_parse = nullptr);
    VL_DO_CLEAR(delete __Vscopep_hdr_parse__unnamedblk1, __Vscopep_hdr_parse__unnamedblk1 = nullptr);
    // Tear down sub module instances
}
