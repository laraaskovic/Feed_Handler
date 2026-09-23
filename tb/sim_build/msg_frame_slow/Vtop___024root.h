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
    VL_IN8(s_byte,7,0);
    VL_IN8(s_valid,0,0);
    VL_IN8(s_last,0,0);
    VL_OUT8(m_len,7,0);
    VL_OUT8(m_valid,0,0);
    CData/*0:0*/ msg_frame_slow__DOT__clk;
    CData/*0:0*/ msg_frame_slow__DOT__rst;
    CData/*7:0*/ msg_frame_slow__DOT__s_byte;
    CData/*0:0*/ msg_frame_slow__DOT__s_valid;
    CData/*0:0*/ msg_frame_slow__DOT__s_last;
    CData/*7:0*/ msg_frame_slow__DOT__m_len;
    CData/*0:0*/ msg_frame_slow__DOT__m_valid;
    CData/*1:0*/ msg_frame_slow__DOT__state;
    CData/*7:0*/ msg_frame_slow__DOT__byte_idx;
    CData/*0:0*/ msg_frame_slow__DOT__len_bad;
    CData/*0:0*/ msg_frame_slow__DOT__end_err;
    CData/*0:0*/ __Vtrigprevexpr___TOP__msg_frame_slow__DOT__clk__0;
    SData/*15:0*/ msg_frame_slow__DOT__len_q;
    SData/*15:0*/ msg_frame_slow__DOT__remaining;
    SData/*15:0*/ msg_frame_slow__DOT__msg_idx;
    SData/*15:0*/ msg_frame_slow__DOT__len_full;
    VL_OUTW(m_msg,399,0,13);
    VL_OUT(stat_messages,31,0);
    VL_OUT(stat_frame_err,31,0);
    VlWide<13>/*399:0*/ msg_frame_slow__DOT__m_msg;
    IData/*31:0*/ msg_frame_slow__DOT__stat_messages;
    IData/*31:0*/ msg_frame_slow__DOT__stat_frame_err;
    VlWide<13>/*399:0*/ msg_frame_slow__DOT__acc;
    VL_IN64(s_sequence,63,0);
    VL_OUT64(m_seq,63,0);
    QData/*63:0*/ msg_frame_slow__DOT__s_sequence;
    QData/*63:0*/ msg_frame_slow__DOT__m_seq;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ msg_frame_slow__DOT__MAX_MSG = 0x00000032U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
