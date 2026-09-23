// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_itch_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_itch_pkg* __PVT__itch_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(s_len,7,0);
        VL_IN8(s_valid,0,0);
        VL_OUT8(m_op,2,0);
        VL_OUT8(m_valid,0,0);
        VL_OUT8(m_side,0,0);
        VL_OUT8(m_tick_ok,0,0);
        CData/*0:0*/ decode__DOT__clk;
        CData/*0:0*/ decode__DOT__rst;
        CData/*7:0*/ decode__DOT__s_len;
        CData/*0:0*/ decode__DOT__s_valid;
        CData/*2:0*/ decode__DOT__m_op;
        CData/*0:0*/ decode__DOT__m_valid;
        CData/*0:0*/ decode__DOT__m_side;
        CData/*0:0*/ decode__DOT__m_tick_ok;
        CData/*7:0*/ decode__DOT__msg_type;
        CData/*0:0*/ decode__DOT__add_side;
        CData/*2:0*/ decode__DOT__op_c;
        CData/*0:0*/ decode__DOT__side_c;
        CData/*0:0*/ decode__DOT__has_price;
        CData/*0:0*/ decode__DOT__in_band_c;
        CData/*0:0*/ decode__DOT__p1_valid;
        CData/*0:0*/ decode__DOT__p1_side;
        CData/*0:0*/ decode__DOT__p1_in_band;
        CData/*2:0*/ decode__DOT__p1_op;
        CData/*0:0*/ decode__DOT__p2_valid;
        CData/*0:0*/ decode__DOT__p2_side;
        CData/*0:0*/ decode__DOT__p2_in_band;
        CData/*2:0*/ decode__DOT__p2_op;
        CData/*0:0*/ decode__DOT__subpenny_c;
        CData/*0:0*/ __Vtrigprevexpr___TOP__decode__DOT__clk__0;
        VL_OUT16(m_locate,15,0);
        VL_OUT16(m_tick,15,0);
        SData/*15:0*/ decode__DOT__m_locate;
        SData/*15:0*/ decode__DOT__m_tick;
        SData/*15:0*/ decode__DOT__locate;
        SData/*15:0*/ decode__DOT__p1_locate;
        SData/*15:0*/ decode__DOT__p2_locate;
        SData/*11:0*/ decode__DOT__tick_c;
        VL_INW(s_msg,399,0,13);
        VL_IN(cfg_band_base,31,0);
        VL_OUT(m_qty,31,0);
        VL_OUT(m_price,31,0);
        VL_OUT(stat_ops,31,0);
        VL_OUT(stat_out_of_band,31,0);
        VL_OUT(stat_subpenny,31,0);
        VlWide<13>/*399:0*/ decode__DOT__s_msg;
        IData/*31:0*/ decode__DOT__cfg_band_base;
        IData/*31:0*/ decode__DOT__m_qty;
        IData/*31:0*/ decode__DOT__m_price;
        IData/*31:0*/ decode__DOT__stat_ops;
        IData/*31:0*/ decode__DOT__stat_out_of_band;
        IData/*31:0*/ decode__DOT__stat_subpenny;
        IData/*31:0*/ decode__DOT__add_qty;
        IData/*31:0*/ decode__DOT__add_price;
        IData/*31:0*/ decode__DOT__red_qty;
        IData/*31:0*/ decode__DOT__rep_qty;
        IData/*31:0*/ decode__DOT__rep_price;
        IData/*31:0*/ decode__DOT__qty_c;
        IData/*31:0*/ decode__DOT__price_c;
        IData/*31:0*/ decode__DOT__delta_c;
        IData/*31:0*/ decode__DOT__p1_qty;
        IData/*31:0*/ decode__DOT__p1_price;
    };
    struct {
        IData/*18:0*/ decode__DOT__p1_delta;
        IData/*31:0*/ decode__DOT__p2_qty;
        IData/*31:0*/ decode__DOT__p2_price;
        IData/*18:0*/ decode__DOT__p2_delta;
        VL_IN64(s_seq,63,0);
        VL_OUT64(m_ref,63,0);
        VL_OUT64(m_new_ref,63,0);
        VL_OUT64(m_seq,63,0);
        QData/*63:0*/ decode__DOT__s_seq;
        QData/*63:0*/ decode__DOT__m_ref;
        QData/*63:0*/ decode__DOT__m_new_ref;
        QData/*63:0*/ decode__DOT__m_seq;
        QData/*63:0*/ decode__DOT__add_ref;
        QData/*63:0*/ decode__DOT__red_ref;
        QData/*63:0*/ decode__DOT__rep_new_ref;
        QData/*63:0*/ decode__DOT__ref_c;
        QData/*63:0*/ decode__DOT__new_ref_c;
        QData/*32:0*/ decode__DOT__band_top;
        QData/*63:0*/ decode__DOT__p1_ref;
        QData/*63:0*/ decode__DOT__p1_new_ref;
        QData/*63:0*/ decode__DOT__p1_seq;
        QData/*63:0*/ decode__DOT__p2_ref;
        QData/*63:0*/ decode__DOT__p2_new_ref;
        QData/*63:0*/ decode__DOT__p2_seq;
        QData/*34:0*/ decode__DOT__p2_prod;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ decode__DOT__MAX_MSG = 0x00000032U;
    static constexpr IData/*31:0*/ decode__DOT__BAND_TICKS = 0x00001000U;
    static constexpr IData/*31:0*/ decode__DOT__BAND_SPAN = 0x00064000U;
    static constexpr IData/*17:0*/ decode__DOT__RECIP_25 = 0x00028f5dU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
