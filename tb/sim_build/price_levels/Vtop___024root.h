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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(s_valid,0,0);
        VL_IN8(s_side,0,0);
        VL_IN8(s_add,0,0);
        VL_IN8(s_done,0,0);
        VL_OUT8(m_bbo_valid,0,0);
        VL_OUT8(m_bid_valid,0,0);
        VL_OUT8(m_ask_valid,0,0);
        CData/*0:0*/ price_levels__DOT__clk;
        CData/*0:0*/ price_levels__DOT__rst;
        CData/*0:0*/ price_levels__DOT__s_valid;
        CData/*0:0*/ price_levels__DOT__s_side;
        CData/*0:0*/ price_levels__DOT__s_add;
        CData/*0:0*/ price_levels__DOT__s_done;
        CData/*0:0*/ price_levels__DOT__m_bbo_valid;
        CData/*0:0*/ price_levels__DOT__m_bid_valid;
        CData/*0:0*/ price_levels__DOT__m_ask_valid;
        CData/*0:0*/ price_levels__DOT__s1_valid;
        CData/*0:0*/ price_levels__DOT__s1_side;
        CData/*0:0*/ price_levels__DOT__s1_add;
        CData/*0:0*/ price_levels__DOT__s1_done;
        CData/*0:0*/ price_levels__DOT__s1_occupied;
        CData/*0:0*/ price_levels__DOT__wr_valid;
        CData/*0:0*/ price_levels__DOT__wr_side;
        CData/*0:0*/ price_levels__DOT__wr_done;
        CData/*0:0*/ price_levels__DOT__fwd_hit;
        CData/*0:0*/ price_levels__DOT__underflow;
        CData/*0:0*/ price_levels__DOT__have_bid;
        CData/*0:0*/ price_levels__DOT__have_ask;
        CData/*0:0*/ price_levels__DOT__pe_bid_v;
        CData/*0:0*/ price_levels__DOT__pe_ask_v;
        CData/*0:0*/ price_levels__DOT__pub_done1;
        CData/*0:0*/ price_levels__DOT__pub_done2;
        CData/*0:0*/ price_levels__DOT__bbo_d1_bid;
        CData/*0:0*/ price_levels__DOT__bbo_d1_ask;
        CData/*0:0*/ price_levels__DOT__bbo_d2_bid;
        CData/*0:0*/ price_levels__DOT__bbo_d2_ask;
        CData/*0:0*/ price_levels__DOT__bid_we;
        CData/*0:0*/ price_levels__DOT__ask_we;
        CData/*0:0*/ price_levels__DOT__u_ask_bbo__DOT__clk;
        CData/*0:0*/ price_levels__DOT__u_ask_bbo__DOT__we;
        CData/*0:0*/ price_levels__DOT__u_ask_bbo__DOT__re;
        CData/*0:0*/ price_levels__DOT__u_bid_bbo__DOT__clk;
        CData/*0:0*/ price_levels__DOT__u_bid_bbo__DOT__we;
        CData/*0:0*/ price_levels__DOT__u_bid_bbo__DOT__re;
        CData/*0:0*/ price_levels__DOT__u_ask_upd__DOT__clk;
        CData/*0:0*/ price_levels__DOT__u_ask_upd__DOT__we;
        CData/*0:0*/ price_levels__DOT__u_ask_upd__DOT__re;
        CData/*0:0*/ price_levels__DOT__u_bid_upd__DOT__clk;
        CData/*0:0*/ price_levels__DOT__u_bid_upd__DOT__we;
        CData/*0:0*/ price_levels__DOT__u_bid_upd__DOT__re;
        CData/*5:0*/ price_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group;
        CData/*0:0*/ price_levels__DOT__u_ask_pe__DOT__clk;
        CData/*0:0*/ price_levels__DOT__u_ask_pe__DOT__any;
        CData/*5:0*/ price_levels__DOT__u_ask_pe__DOT__grp;
        CData/*5:0*/ price_levels__DOT__u_ask_pe__DOT__off;
        CData/*5:0*/ price_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group;
        CData/*0:0*/ price_levels__DOT__u_bid_pe__DOT__clk;
        CData/*0:0*/ price_levels__DOT__u_bid_pe__DOT__any;
        CData/*5:0*/ price_levels__DOT__u_bid_pe__DOT__grp;
        CData/*5:0*/ price_levels__DOT__u_bid_pe__DOT__off;
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__u_ask_bbo__DOT__clk__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__u_bid_bbo__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__u_ask_upd__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__u_bid_upd__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__u_ask_pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__price_levels__DOT__u_bid_pe__DOT__clk__0;
        VL_IN16(s_tick,11,0);
        VL_OUT16(m_bid_tick,11,0);
        VL_OUT16(m_ask_tick,11,0);
        SData/*11:0*/ price_levels__DOT__s_tick;
        SData/*11:0*/ price_levels__DOT__m_bid_tick;
        SData/*11:0*/ price_levels__DOT__m_ask_tick;
        SData/*11:0*/ price_levels__DOT__s1_tick;
        SData/*11:0*/ price_levels__DOT__wr_tick;
        SData/*11:0*/ price_levels__DOT__best_bid_tick;
        SData/*11:0*/ price_levels__DOT__best_ask_tick;
        SData/*11:0*/ price_levels__DOT__pe_bid_tick;
        SData/*11:0*/ price_levels__DOT__pe_ask_tick;
        SData/*11:0*/ price_levels__DOT__bbo_d1_tick;
        SData/*11:0*/ price_levels__DOT__bbo_d2_tick;
        SData/*11:0*/ price_levels__DOT__u_ask_bbo__DOT__waddr;
        SData/*11:0*/ price_levels__DOT__u_ask_bbo__DOT__raddr;
        SData/*11:0*/ price_levels__DOT__u_bid_bbo__DOT__waddr;
        SData/*11:0*/ price_levels__DOT__u_bid_bbo__DOT__raddr;
        SData/*11:0*/ price_levels__DOT__u_ask_upd__DOT__waddr;
        SData/*11:0*/ price_levels__DOT__u_ask_upd__DOT__raddr;
        SData/*11:0*/ price_levels__DOT__u_bid_upd__DOT__waddr;
        SData/*11:0*/ price_levels__DOT__u_bid_upd__DOT__raddr;
        SData/*11:0*/ price_levels__DOT__u_ask_pe__DOT__index;
        SData/*11:0*/ price_levels__DOT__u_bid_pe__DOT__index;
        VL_IN(s_qty,31,0);
        VL_OUT(m_bid_qty,31,0);
        VL_OUT(m_ask_qty,31,0);
        VL_OUT(stat_updates,31,0);
        VL_OUT(stat_underflow,31,0);
        IData/*31:0*/ price_levels__DOT__s_qty;
        IData/*31:0*/ price_levels__DOT__m_bid_qty;
        IData/*31:0*/ price_levels__DOT__m_ask_qty;
        IData/*31:0*/ price_levels__DOT__stat_updates;
        IData/*31:0*/ price_levels__DOT__stat_underflow;
        VlWide<128>/*4095:0*/ price_levels__DOT__bid_map;
        VlWide<128>/*4095:0*/ price_levels__DOT__ask_map;
        IData/*31:0*/ price_levels__DOT__s1_qty;
        IData/*31:0*/ price_levels__DOT__rd_bid;
        IData/*31:0*/ price_levels__DOT__rd_ask;
        IData/*31:0*/ price_levels__DOT__wr_qty;
        IData/*31:0*/ price_levels__DOT__base_qty;
        IData/*31:0*/ price_levels__DOT__new_qty;
        IData/*31:0*/ price_levels__DOT__bbo_d1_qty;
        IData/*31:0*/ price_levels__DOT__bbo_d2_qty;
        IData/*31:0*/ price_levels__DOT__bbo_bid_q;
        IData/*31:0*/ price_levels__DOT__bbo_ask_q;
        IData/*31:0*/ price_levels__DOT__u_ask_bbo__DOT__wdata;
        IData/*31:0*/ price_levels__DOT__u_ask_bbo__DOT__rdata;
        IData/*31:0*/ price_levels__DOT__u_bid_bbo__DOT__wdata;
        IData/*31:0*/ price_levels__DOT__u_bid_bbo__DOT__rdata;
        IData/*31:0*/ price_levels__DOT__u_ask_upd__DOT__wdata;
        IData/*31:0*/ price_levels__DOT__u_ask_upd__DOT__rdata;
        IData/*31:0*/ price_levels__DOT__u_bid_upd__DOT__wdata;
        IData/*31:0*/ price_levels__DOT__u_bid_upd__DOT__rdata;
        VlWide<128>/*4095:0*/ price_levels__DOT__u_ask_pe__DOT__bitmap;
        VlWide<12>/*383:0*/ price_levels__DOT__u_ask_pe__DOT__offsets_c;
        VlWide<12>/*383:0*/ price_levels__DOT__u_ask_pe__DOT__offsets;
        IData/*31:0*/ price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g;
        VlWide<128>/*4095:0*/ price_levels__DOT__u_bid_pe__DOT__bitmap;
    };
    struct {
        VlWide<12>/*383:0*/ price_levels__DOT__u_bid_pe__DOT__offsets_c;
        VlWide<12>/*383:0*/ price_levels__DOT__u_bid_pe__DOT__offsets;
        IData/*31:0*/ price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g;
        VlWide<12>/*383:0*/ __Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx;
        VlWide<12>/*383:0*/ __Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n;
        VlWide<12>/*383:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx;
        VlWide<12>/*383:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n;
        VL_IN64(s_seq,63,0);
        VL_OUT64(m_bbo_seq,63,0);
        QData/*63:0*/ price_levels__DOT__s_seq;
        QData/*63:0*/ price_levels__DOT__m_bbo_seq;
        QData/*63:0*/ price_levels__DOT__s1_seq;
        QData/*63:0*/ price_levels__DOT__wr_seq;
        QData/*63:0*/ price_levels__DOT__pub_seq1;
        QData/*63:0*/ price_levels__DOT__pub_seq2;
        QData/*63:0*/ price_levels__DOT__u_ask_pe__DOT__summary_c;
        QData/*63:0*/ price_levels__DOT__u_ask_pe__DOT__summary;
        QData/*63:0*/ price_levels__DOT__u_bid_pe__DOT__summary_c;
        QData/*63:0*/ price_levels__DOT__u_bid_pe__DOT__summary;
        QData/*63:0*/ __Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__v;
        QData/*63:0*/ __Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld;
        QData/*63:0*/ __Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        QData/*63:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__v;
        QData/*63:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld;
        QData/*63:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        VlUnpacked<IData/*31:0*/, 4096> price_levels__DOT__u_ask_bbo__DOT__mem;
        VlUnpacked<IData/*31:0*/, 4096> price_levels__DOT__u_bid_bbo__DOT__mem;
        VlUnpacked<IData/*31:0*/, 4096> price_levels__DOT__u_ask_upd__DOT__mem;
        VlUnpacked<IData/*31:0*/, 4096> price_levels__DOT__u_bid_upd__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*0:0*/ price_levels__DOT__u_ask_pe__DOT__HIGHEST = 0U;
    static constexpr CData/*0:0*/ price_levels__DOT__u_ask_pe__DOT__REGISTERED = 1U;
    static constexpr CData/*0:0*/ price_levels__DOT__u_bid_pe__DOT__HIGHEST = 1U;
    static constexpr CData/*0:0*/ price_levels__DOT__u_bid_pe__DOT__REGISTERED = 1U;
    static constexpr IData/*31:0*/ price_levels__DOT__BAND_TICKS = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__GW = 0x00000040U;
    static constexpr IData/*31:0*/ price_levels__DOT__TW = 0x0000000cU;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_bbo__DOT__DW = 0x00000020U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_bbo__DOT__DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_bbo__DOT__AW = 0x0000000cU;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_bbo__DOT__DW = 0x00000020U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_bbo__DOT__DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_bbo__DOT__AW = 0x0000000cU;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_upd__DOT__DW = 0x00000020U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_upd__DOT__DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_upd__DOT__AW = 0x0000000cU;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_upd__DOT__DW = 0x00000020U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_upd__DOT__DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_upd__DOT__AW = 0x0000000cU;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_pe__DOT__W = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_pe__DOT__GW = 0x00000040U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_pe__DOT__NG = 0x00000040U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_pe__DOT__GW_LG = 6U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_ask_pe__DOT__NG_LG = 6U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_pe__DOT__W = 0x00001000U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_pe__DOT__GW = 0x00000040U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_pe__DOT__NG = 0x00000040U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_pe__DOT__GW_LG = 6U;
    static constexpr IData/*31:0*/ price_levels__DOT__u_bid_pe__DOT__NG_LG = 6U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
