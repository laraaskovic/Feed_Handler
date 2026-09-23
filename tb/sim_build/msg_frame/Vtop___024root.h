// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(s_tkeep,7,0);
    VL_IN8(s_tvalid,0,0);
    VL_IN8(s_tlast,0,0);
    VL_OUT8(m_len,7,0);
    VL_OUT8(m_valid,0,0);
    CData/*0:0*/ msg_frame__DOT__clk;
    CData/*0:0*/ msg_frame__DOT__rst;
    CData/*7:0*/ msg_frame__DOT__s_tkeep;
    CData/*0:0*/ msg_frame__DOT__s_tvalid;
    CData/*0:0*/ msg_frame__DOT__s_tlast;
    CData/*7:0*/ msg_frame__DOT__m_len;
    CData/*0:0*/ msg_frame__DOT__m_valid;
    CData/*7:0*/ msg_frame__DOT__nvalid;
    CData/*0:0*/ msg_frame__DOT__desync;
    CData/*3:0*/ msg_frame__DOT__in_bytes;
    CData/*7:0*/ msg_frame__DOT__need;
    CData/*0:0*/ msg_frame__DOT__have_len;
    CData/*0:0*/ msg_frame__DOT__len_sane;
    CData/*0:0*/ msg_frame__DOT__bad_len;
    CData/*7:0*/ msg_frame__DOT__nv_ins;
    CData/*0:0*/ msg_frame__DOT__have_msg;
    CData/*7:0*/ msg_frame__DOT__nv_next;
    CData/*0:0*/ msg_frame__DOT__frame_err;
    CData/*0:0*/ __Vtrigprevexpr___TOP__msg_frame__DOT__clk__0;
    SData/*15:0*/ msg_frame__DOT__msg_idx;
    SData/*15:0*/ msg_frame__DOT__msg_len;
    SData/*10:0*/ msg_frame__DOT__ins_shift;
    VL_OUTW(m_msg,399,0,13);
    VL_OUT(stat_messages,31,0);
    VL_OUT(stat_frame_err,31,0);
    VlWide<13>/*399:0*/ msg_frame__DOT__m_msg;
    IData/*31:0*/ msg_frame__DOT__stat_messages;
    IData/*31:0*/ msg_frame__DOT__stat_frame_err;
    VlWide<16>/*511:0*/ msg_frame__DOT__buf_q;
    VlWide<16>/*511:0*/ msg_frame__DOT__ins_data;
    VlWide<16>/*511:0*/ msg_frame__DOT__wide;
    VlWide<16>/*511:0*/ msg_frame__DOT__buf_next;
    IData/*31:0*/ msg_frame__DOT__unnamedblk1__DOT__i;
    VL_IN64(s_tdata,63,0);
    VL_IN64(s_sequence,63,0);
    VL_OUT64(m_seq,63,0);
    QData/*63:0*/ msg_frame__DOT__s_tdata;
    QData/*63:0*/ msg_frame__DOT__s_sequence;
    QData/*63:0*/ msg_frame__DOT__m_seq;
    QData/*63:0*/ msg_frame__DOT__tail;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ msg_frame__DOT__DW = 0x00000040U;
    static constexpr IData/*31:0*/ msg_frame__DOT__MAX_MSG = 0x00000032U;
    static constexpr IData/*31:0*/ msg_frame__DOT__BUF_BYTES = 0x00000040U;
    static constexpr IData/*31:0*/ msg_frame__DOT__BW = 8U;
    static constexpr IData/*31:0*/ msg_frame__DOT__BUF_W = 0x00000200U;
    static constexpr IData/*31:0*/ msg_frame__DOT__SHIFT_W = 0x0000000bU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
