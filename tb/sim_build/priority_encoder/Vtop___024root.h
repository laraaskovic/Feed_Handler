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
    VL_OUT8(hi_any,0,0);
    VL_OUT8(lo_any,0,0);
    CData/*0:0*/ pe_wrap__DOT__hi_any;
    CData/*0:0*/ pe_wrap__DOT__lo_any;
    CData/*5:0*/ pe_wrap__DOT__u_lo__DOT____VlemCall_0__enc_group;
    CData/*0:0*/ pe_wrap__DOT__u_lo__DOT__clk;
    CData/*0:0*/ pe_wrap__DOT__u_lo__DOT__any;
    CData/*5:0*/ pe_wrap__DOT__u_lo__DOT__grp;
    CData/*5:0*/ pe_wrap__DOT__u_lo__DOT__off;
    CData/*5:0*/ pe_wrap__DOT__u_hi__DOT____VlemCall_0__enc_group;
    CData/*0:0*/ pe_wrap__DOT__u_hi__DOT__clk;
    CData/*0:0*/ pe_wrap__DOT__u_hi__DOT__any;
    CData/*5:0*/ pe_wrap__DOT__u_hi__DOT__grp;
    CData/*5:0*/ pe_wrap__DOT__u_hi__DOT__off;
    VL_OUT16(hi_index,11,0);
    VL_OUT16(lo_index,11,0);
    SData/*11:0*/ pe_wrap__DOT__hi_index;
    SData/*11:0*/ pe_wrap__DOT__lo_index;
    SData/*11:0*/ pe_wrap__DOT__u_lo__DOT__index;
    SData/*11:0*/ pe_wrap__DOT__u_hi__DOT__index;
    VL_INW(bitmap,4095,0,128);
    VlWide<128>/*4095:0*/ pe_wrap__DOT__bitmap;
    VlWide<128>/*4095:0*/ pe_wrap__DOT__u_lo__DOT__bitmap;
    VlWide<12>/*383:0*/ pe_wrap__DOT__u_lo__DOT__offsets_c;
    VlWide<12>/*383:0*/ pe_wrap__DOT__u_lo__DOT__offsets;
    IData/*31:0*/ pe_wrap__DOT__u_lo__DOT__unnamedblk5__DOT__g;
    VlWide<128>/*4095:0*/ pe_wrap__DOT__u_hi__DOT__bitmap;
    VlWide<12>/*383:0*/ pe_wrap__DOT__u_hi__DOT__offsets_c;
    VlWide<12>/*383:0*/ pe_wrap__DOT__u_hi__DOT__offsets;
    IData/*31:0*/ pe_wrap__DOT__u_hi__DOT__unnamedblk5__DOT__g;
    VlWide<12>/*383:0*/ __Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__idx;
    VlWide<12>/*383:0*/ __Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__idx_n;
    VlWide<12>/*383:0*/ __Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__idx;
    VlWide<12>/*383:0*/ __Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__idx_n;
    QData/*63:0*/ pe_wrap__DOT__u_lo__DOT__summary_c;
    QData/*63:0*/ pe_wrap__DOT__u_lo__DOT__summary;
    QData/*63:0*/ pe_wrap__DOT__u_hi__DOT__summary_c;
    QData/*63:0*/ pe_wrap__DOT__u_hi__DOT__summary;
    QData/*63:0*/ __Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__v;
    QData/*63:0*/ __Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__vld;
    QData/*63:0*/ __Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__vld_n;
    QData/*63:0*/ __Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__v;
    QData/*63:0*/ __Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__vld;
    QData/*63:0*/ __Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__vld_n;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*0:0*/ pe_wrap__DOT__u_lo__DOT__HIGHEST = 0U;
    static constexpr CData/*0:0*/ pe_wrap__DOT__u_lo__DOT__REGISTERED = 0U;
    static constexpr CData/*0:0*/ pe_wrap__DOT__u_hi__DOT__HIGHEST = 1U;
    static constexpr CData/*0:0*/ pe_wrap__DOT__u_hi__DOT__REGISTERED = 0U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__W = 0x00001000U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__GW = 0x00000040U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_lo__DOT__W = 0x00001000U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_lo__DOT__GW = 0x00000040U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_lo__DOT__NG = 0x00000040U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_lo__DOT__GW_LG = 6U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_lo__DOT__NG_LG = 6U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_hi__DOT__W = 0x00001000U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_hi__DOT__GW = 0x00000040U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_hi__DOT__NG = 0x00000040U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_hi__DOT__GW_LG = 6U;
    static constexpr IData/*31:0*/ pe_wrap__DOT__u_hi__DOT__NG_LG = 6U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
