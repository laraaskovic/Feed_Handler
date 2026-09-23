// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlWide<12>/*383:0*/ Vtop__ConstPool__CONST_h997e551f_0;

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__Vfuncout;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__v;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__v = 0;
    QData/*63:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld = 0;
    QData/*63:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0;
    VlWide<12>/*383:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx;
    VL_ZERO_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx);
    VlWide<12>/*383:0*/ __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n;
    VL_ZERO_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n);
    // Body
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[0U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[0U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[1U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[1U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[2U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[2U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[3U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[3U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[4U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[4U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[5U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[5U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[6U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[6U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[7U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[7U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[8U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[8U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[9U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[9U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[10U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[10U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets[11U] 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c[11U];
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__summary 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__summary_c;
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__any 
        = (0U != vlSelfRef.price_levels__DOT__u_bid_pe__DOT__summary);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__v 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__summary;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__v;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld)))));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                             >> 1U))) ? 1U : 0U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 1U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 3U))) ? 1U : 0U) << 6U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 5U))) ? 1U : 0U) << 0x0000000cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 3U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 7U))) ? 1U : 0U) << 0x00000012U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 9U))) ? 1U : 0U) << 0x00000018U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 5U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x0bU))) ? 1U : 0U) 
              << 0x0000001eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x0bU))) ? 1U : 0U) 
              >> 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 6U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x0dU))) ? 1U : 0U) 
              << 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 7U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x0fU))) ? 1U : 0U) 
              << 0x0000000aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffeffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000030000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 8U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xffc0ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x11U))) ? 1U : 0U) 
              << 0x00000010U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffdffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000c0000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 9U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xf03fffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x13U))) ? 1U : 0U) 
              << 0x00000016U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffbffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000300000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0x0fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x15U))) ? 1U : 0U) 
              << 0x0000001cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xfffffffcU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x15U))) ? 1U : 0U) 
              >> 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffff7ffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000c00000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000bU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xffffff03U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x17U))) ? 1U : 0U) 
              << 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffefffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000003000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xffffc0ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x19U))) ? 1U : 0U) 
              << 8U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffdfffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000c000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000dU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xfff03fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x1bU))) ? 1U : 0U) 
              << 0x0000000eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffbfffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000030000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xfc0fffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x1dU))) ? 1U : 0U) 
              << 0x00000014U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffff7fffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000c0000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000fU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0x03ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x1fU))) ? 1U : 0U) 
              << 0x0000001aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffeffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000300000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000010U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U]) 
           | ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                             >> 0x21U))) ? 1U : 0U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffdffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000c00000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000011U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U] 
        = ((0xfffff03fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x23U))) ? 1U : 0U) 
              << 6U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffbffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000003000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000012U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U] 
        = ((0xfffc0fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x25U))) ? 1U : 0U) 
              << 0x0000000cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffff7ffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000c000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000013U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U] 
        = ((0xff03ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x27U))) ? 1U : 0U) 
              << 0x00000012U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffefffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000030000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000014U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U] 
        = ((0xc0ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x29U))) ? 1U : 0U) 
              << 0x00000018U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffdfffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000c0000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000015U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U] 
        = ((0x3fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x2bU))) ? 1U : 0U) 
              << 0x0000001eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U] 
        = ((0xfffffff0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x2bU))) ? 1U : 0U) 
              >> 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffbfffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000300000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000016U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U] 
        = ((0xfffffc0fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x2dU))) ? 1U : 0U) 
              << 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffff7fffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000c00000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000017U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U] 
        = ((0xffff03ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x2fU))) ? 1U : 0U) 
              << 0x0000000aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffeffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0003000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000018U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U] 
        = ((0xffc0ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x31U))) ? 1U : 0U) 
              << 0x00000010U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffdffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000c000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x00000019U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U] 
        = ((0xf03fffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x33U))) ? 1U : 0U) 
              << 0x00000016U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffbffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0030000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000001aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U] 
        = ((0x0fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x35U))) ? 1U : 0U) 
              << 0x0000001cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U] 
        = ((0xfffffffcU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x35U))) ? 1U : 0U) 
              >> 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffff7ffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00c0000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000001bU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U] 
        = ((0xffffff03U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x37U))) ? 1U : 0U) 
              << 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffefffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0300000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000001cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U] 
        = ((0xffffc0ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x39U))) ? 1U : 0U) 
              << 8U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffdfffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0c00000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000001dU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U] 
        = ((0xfff03fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x3bU))) ? 1U : 0U) 
              << 0x0000000eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffbfffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x3000000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000001eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U] 
        = ((0xfc0fffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x3dU))) ? 1U : 0U) 
              << 0x00000014U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffff7fffffffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0xc000000000000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000001fU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U] 
        = ((0x03ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x3fU))) ? 1U : 0U) 
              << 0x0000001aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[6U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[6U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[7U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[7U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[8U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[8U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[9U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[9U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[10U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[10U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[11U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[11U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld)))));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                            >> 1U)))
                              ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                          >> 6U))) : __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U])));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 1U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 3U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 5U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 2U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                                   >> 0x0000001eU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 8U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                             >> 0x00000018U))) 
                             << 0x0000000cU)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 3U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 7U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                     >> 4U))) << 0x00000012U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x3f000000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 9U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                           >> 0x00000016U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                     >> 0x00000010U))) 
                             << 0x00000018U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 5U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x0bU))) ? (2U | (
                                                   (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                                    << 0x0000001eU) 
                                                   | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                                      >> 2U)))
                : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                    << 4U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                              >> 0x0000001cU))) << 0x0000001eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x0000000fU & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x0bU)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                           >> 2U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                   << 4U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                             >> 0x0000001cU))) 
                             >> 2U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 6U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x000003f0U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x0dU)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                         << 0x00000012U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                           >> 0x0000000eU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                     >> 8U))) << 4U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 7U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x0000fc00U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x0fU)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                         << 6U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                                   >> 0x0000001aU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                   << 0x0000000cU) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                     >> 0x00000014U))) 
                             << 0x0000000aU)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffeffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000030000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 8U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xffc0ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x003f0000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x11U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                         << 0x0000001aU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                           >> 6U)))
                               : __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U]) 
                             << 0x00000010U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffdffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000c0000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 9U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xf03fffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x0fc00000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x13U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                     >> 0x0000000cU))) 
                             << 0x00000016U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffbffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000300000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0x0fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x15U))) ? (2U | (
                                                   (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                                    << 2U) 
                                                   | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                                      >> 0x0000001eU)))
                : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                    << 8U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                              >> 0x00000018U))) << 0x0000001cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xfffffffcU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (3U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                    >> 0x15U))) ? (2U 
                                                   | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                                       << 2U) 
                                                      | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                                         >> 0x0000001eU)))
                      : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                          << 8U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
                                    >> 0x00000018U))) 
                    >> 4U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffff7ffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000c00000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000bU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xffffff03U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (0x000000fcU & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x17U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                     >> 4U))) << 2U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffefffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000003000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000cU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xffffc0ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (0x00003f00U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x19U)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                           >> 0x00000016U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                     >> 0x00000010U))) 
                             << 8U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffdfffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000c000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000dU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xfff03fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (0x000fc000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x1bU)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                           >> 2U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                   << 4U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
                                             >> 0x0000001cU))) 
                             << 0x0000000eU)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffbfffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000030000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0xfc0fffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (0x03f00000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x1dU)))
                               ? (2U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                         << 0x00000012U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                           >> 0x0000000eU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                     >> 8U))) << 0x00000014U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffff7fffULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000c0000000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 0x0000000fU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U] 
        = ((0x03ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x1fU))) ? (2U | (
                                                   (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                                    << 6U) 
                                                   | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                                      >> 0x0000001aU)))
                : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                    << 0x0000000cU) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
                                       >> 0x00000014U))) 
              << 0x0000001aU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[6U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[6U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[7U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[7U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[8U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[8U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[9U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[9U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[10U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[10U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[11U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[11U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld)))));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                            >> 1U)))
                              ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                          >> 6U))) : __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U])));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 1U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 3U)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 5U)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 2U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                                   >> 0x0000001eU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 8U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                             >> 0x00000018U))) 
                             << 0x0000000cU)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 3U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 7U)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                     >> 4U))) << 0x00000012U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 4U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x3f000000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 9U)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                           >> 0x00000016U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                     >> 0x00000010U))) 
                             << 0x00000018U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 5U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                              >> 0x0bU))) ? (4U | (
                                                   (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                                    << 0x0000001eU) 
                                                   | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                                      >> 2U)))
                : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                    << 4U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                              >> 0x0000001cU))) << 0x0000001eU));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x0000000fU & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x0bU)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                           >> 2U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                   << 4U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                             >> 0x0000001cU))) 
                             >> 2U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 6U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x000003f0U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x0dU)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                         << 0x00000012U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                           >> 0x0000000eU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                     >> 8U))) << 4U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 7U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U]) 
           | (0x0000fc00U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 0x0fU)))
                               ? (4U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                         << 6U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                                   >> 0x0000001aU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                   << 0x0000000cU) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
                                     >> 0x00000014U))) 
                             << 0x0000000aU)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[6U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[6U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[7U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[7U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[8U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[8U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[9U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[9U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[10U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[10U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[11U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[11U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld)))));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                            >> 1U)))
                              ? (8U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                          >> 6U))) : __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U])));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 1U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 3U)))
                               ? (8U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 2U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 5U)))
                               ? (8U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 2U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                                   >> 0x0000001eU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 8U) | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                             >> 0x00000018U))) 
                             << 0x0000000cU)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 3U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 7U)))
                               ? (8U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
                                     >> 4U))) << 0x00000012U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[6U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[6U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[7U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[7U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[8U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[8U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[9U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[9U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[10U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[10U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[11U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[11U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld)))));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                            >> 1U)))
                              ? (0x10U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                           << 0x0000001aU) 
                                          | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                             >> 6U)))
                              : __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U])));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld))))) 
              << 1U));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                             >> 3U)))
                               ? (0x10U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                            << 0x0000000eU) 
                                           | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                              >> 0x00000012U)))
                               : ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[6U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[6U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[7U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[7U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[8U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[8U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[9U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[9U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[10U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[10U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[11U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[11U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld)))));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
                                            >> 1U)))
                              ? (0x20U | ((__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                           << 0x0000001aU) 
                                          | (__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
                                             >> 6U)))
                              : __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U])));
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__vld_n;
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[0U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[1U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[1U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[2U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[2U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[3U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[3U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[4U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[4U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[5U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[5U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[6U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[6U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[7U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[7U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[8U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[8U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[9U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[9U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[10U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[10U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[11U] 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx_n[11U];
    __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__Vfuncout 
        = (0x0000003fU & __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__idx[0U]);
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp 
        = __Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_summary__3__Vfuncout;
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__off 
        = ((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                       * (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp))))
            ? (0x0000003fU & (((0U == (0x0000001fU 
                                       & ((IData)(6U) 
                                          * (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp))))
                                ? 0U : (vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets
                                        [(((IData)(5U) 
                                           + (0x000001ffU 
                                              & ((IData)(6U) 
                                                 * (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(6U) 
                                               * (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp)))))) 
                              | (vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets
                                 [(0x0000000fU & (((IData)(6U) 
                                                   * (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp)) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((IData)(6U) * (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp))))))
            : 0U);
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__index 
        = (((IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__off));
    vlSelfRef.price_levels__DOT__have_bid = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__any;
    vlSelfRef.price_levels__DOT__best_bid_tick = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__index;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.price_levels__DOT__u_ask_pe__DOT__summary_c 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.price_levels__DOT__u_ask_pe__DOT__summary_c) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.price_levels__DOT__u_ask_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.price_levels__DOT__u_ask_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__v 
            = (((QData)((IData)(vlSelfRef.price_levels__DOT__u_ask_pe__DOT__bitmap
                                [(((IData)(0x0000003fU) 
                                   + (0x00000fffU & 
                                      (vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                       << 6U))) >> 5U)])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.price_levels__DOT__u_ask_pe__DOT__bitmap
                                                  [
                                                  (0x0000007eU 
                                                   & (vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                      << 1U))])));
        vlSelfRef.price_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group = 0;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld = 0;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0;
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx);
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__v;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | ((1U & (IData)(vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))
                   ? 0U : 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 2U))) ? 0U : 1U) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 4U))) ? 0U : 1U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 6U))) ? 0U : 1U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 8U))) ? 0U : 1U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x0aU))) ? 0U : 1U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x0aU))) ? 0U : 1U) 
                  >> 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x0cU))) ? 0U : 1U) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x0eU))) ? 0U : 1U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x10U))) ? 0U : 1U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x12U))) ? 0U : 1U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x14U))) ? 0U : 1U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x14U))) ? 0U : 1U) 
                  >> 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x16U))) ? 0U : 1U) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x18U))) ? 0U : 1U) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x1aU))) ? 0U : 1U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x1cU))) ? 0U : 1U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x1eU))) ? 0U : 1U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000300000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U]) 
               | ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                 >> 0x20U))) ? 0U : 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000c00000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000011U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x22U))) ? 0U : 1U) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000003000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x24U))) ? 0U : 1U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000c000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000013U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x26U))) ? 0U : 1U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000030000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x28U))) ? 0U : 1U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000c0000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000015U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x2aU))) ? 0U : 1U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x2aU))) ? 0U : 1U) 
                  >> 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000300000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x2cU))) ? 0U : 1U) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000c00000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000017U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x2eU))) ? 0U : 1U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0003000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x30U))) ? 0U : 1U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000c000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x00000019U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x32U))) ? 0U : 1U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0030000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x34U))) ? 0U : 1U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x34U))) ? 0U : 1U) 
                  >> 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00c0000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000001bU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x36U))) ? 0U : 1U) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0300000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x38U))) ? 0U : 1U) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0c00000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000001dU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x3aU))) ? 0U : 1U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x3000000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x3cU))) ? 0U : 1U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0xc000000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000001fU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x3eU))) ? 0U : 1U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))
                                  ? vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U]
                                  : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                              >> 6U))))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                         >> 0x0000000cU))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 4U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                 >> 0x00000018U))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               >> 0x0000001eU)))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 6U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                         >> 4U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                            >> 0x0000000aU)))) 
                                 << 0x00000012U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 8U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                         >> 0x00000010U))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                               >> 0x00000016U)))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x0aU))) ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                                  << 4U) 
                                                 | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                                    >> 0x0000001cU))
                    : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                              << 0x0000001eU) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                                 >> 2U)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x0aU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                                 >> 0x0000001cU))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                               >> 2U)))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x0cU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                         >> 8U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                          << 0x00000012U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                            >> 0x0000000eU)))) 
                                 << 4U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x0eU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                         >> 0x00000014U))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                               >> 0x0000001aU)))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x003f0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x10U)))
                                   ? vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U]
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                             << 0x0000001aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                               >> 6U)))) 
                                 << 0x00000010U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x0fc00000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x12U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                         >> 0x0000000cU))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                               >> 0x00000012U)))) 
                                 << 0x00000016U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x14U))) ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                                    >> 0x00000018U))
                    : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                              << 2U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                        >> 0x0000001eU)))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (3U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                        >> 0x14U)))
                          ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                              << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                        >> 0x00000018U))
                          : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                    << 2U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
                                              >> 0x0000001eU)))) 
                        >> 4U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (0x000000fcU & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x16U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                         >> 4U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                            >> 0x0000000aU)))) 
                                 << 2U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (0x00003f00U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x18U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                         >> 0x00000010U))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                               >> 0x00000016U)))) 
                                 << 8U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (0x000fc000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x1aU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                       << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
                                                 >> 0x0000001cU))
                                   : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                               >> 2U)))) 
                                 << 0x0000000eU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (0x03f00000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x1cU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                         >> 8U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                          << 0x00000012U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                            >> 0x0000000eU)))) 
                                 << 0x00000014U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x1eU))) ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                                    >> 0x00000014U))
                    : (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                              << 6U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
                                        >> 0x0000001aU)))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))
                                  ? vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U]
                                  : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                              >> 6U))))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                         >> 0x0000000cU))
                                   : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 4U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                 >> 0x00000018U))
                                   : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               >> 0x0000001eU)))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 6U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                         >> 4U)) : 
                                  (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                            >> 0x0000000aU)))) 
                                 << 0x00000012U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 8U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                         >> 0x00000010U))
                                   : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                               >> 0x00000016U)))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                  >> 0x0aU))) ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                                  << 4U) 
                                                 | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                                    >> 0x0000001cU))
                    : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                              << 0x0000001eU) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                                 >> 2U)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x0aU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                                 >> 0x0000001cU))
                                   : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                               >> 2U)))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x0cU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                         >> 8U)) : 
                                  (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                          << 0x00000012U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                            >> 0x0000000eU)))) 
                                 << 4U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 0x0eU)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                         >> 0x00000014U))
                                   : (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
                                               >> 0x0000001aU)))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))
                                  ? vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U]
                                  : (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                              >> 6U))))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                         >> 0x0000000cU))
                                   : (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 4U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                 >> 0x00000018U))
                                   : (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               >> 0x0000001eU)))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 6U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                         >> 4U)) : 
                                  (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
                                            >> 0x0000000aU)))) 
                                 << 0x00000012U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))
                                  ? vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U]
                                  : (0x10U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                 >> 6U))))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                         >> 0x0000000cU))
                                   : (0x10U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                  >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld))
                                  ? vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U]
                                  : (0x20U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
                                                 >> 6U))))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n[11U];
        vlSelfRef.price_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group 
            = (0x0000003fU & vlSelfRef.__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx[0U]);
        if (VL_LIKELY(((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                                   * vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)))))) {
            VL_ASSIGNSEL_WI(384, 6, (0x000001ffU & 
                                     ((IData)(6U) * vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)), vlSelfRef.price_levels__DOT__u_ask_pe__DOT__offsets_c, vlSelfRef.price_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group);
        }
        vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.price_levels__DOT__u_bid_pe__DOT__summary_c 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.price_levels__DOT__u_bid_pe__DOT__summary_c) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__v 
            = (((QData)((IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__bitmap
                                [(((IData)(0x0000003fU) 
                                   + (0x00000fffU & 
                                      (vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                       << 6U))) >> 5U)])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.price_levels__DOT__u_bid_pe__DOT__bitmap
                                                  [
                                                  (0x0000007eU 
                                                   & (vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                      << 1U))])));
        vlSelfRef.price_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group = 0;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld = 0;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0;
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx);
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__v;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                 >> 1U))) ? 1U : 0U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 3U))) ? 1U : 0U) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 5U))) ? 1U : 0U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 7U))) ? 1U : 0U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 9U))) ? 1U : 0U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x0bU))) ? 1U : 0U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x0bU))) ? 1U : 0U) 
                  >> 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x0dU))) ? 1U : 0U) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x0fU))) ? 1U : 0U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x11U))) ? 1U : 0U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x13U))) ? 1U : 0U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x15U))) ? 1U : 0U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x15U))) ? 1U : 0U) 
                  >> 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x17U))) ? 1U : 0U) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x19U))) ? 1U : 0U) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x1bU))) ? 1U : 0U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x1dU))) ? 1U : 0U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x1fU))) ? 1U : 0U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000300000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U]) 
               | ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                 >> 0x21U))) ? 1U : 0U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000c00000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000011U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x23U))) ? 1U : 0U) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000003000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x25U))) ? 1U : 0U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000c000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000013U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x27U))) ? 1U : 0U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000030000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x29U))) ? 1U : 0U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000c0000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000015U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x2bU))) ? 1U : 0U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x2bU))) ? 1U : 0U) 
                  >> 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000300000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x2dU))) ? 1U : 0U) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000c00000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000017U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x2fU))) ? 1U : 0U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0003000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x31U))) ? 1U : 0U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000c000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x00000019U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x33U))) ? 1U : 0U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0030000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x35U))) ? 1U : 0U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x35U))) ? 1U : 0U) 
                  >> 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00c0000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000001bU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x37U))) ? 1U : 0U) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0300000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x39U))) ? 1U : 0U) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0c00000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000001dU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x3bU))) ? 1U : 0U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x3000000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x3dU))) ? 1U : 0U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0xc000000000000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000001fU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x3fU))) ? 1U : 0U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                >> 1U)))
                                  ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                              >> 6U)))
                                  : vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U])));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 3U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 5U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               >> 0x0000001eU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                 >> 0x00000018U))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 7U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                         >> 4U))) << 0x00000012U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 9U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                               >> 0x00000016U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                         >> 0x00000010U))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x0bU))) ? (2U 
                                                 | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                                     << 0x0000001eU) 
                                                    | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                                       >> 2U)))
                    : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                        << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                  >> 0x0000001cU))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x0bU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                               >> 2U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                                 >> 0x0000001cU))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x0dU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                               >> 0x0000000eU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                         >> 8U))) << 4U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x0fU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                               >> 0x0000001aU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                         >> 0x00000014U))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x003f0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x11U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                             << 0x0000001aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                               >> 6U)))
                                   : vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U]) 
                                 << 0x00000010U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x0fc00000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x13U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                         >> 0x0000000cU))) 
                                 << 0x00000016U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x15U))) ? (2U 
                                                 | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                                     << 2U) 
                                                    | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                                       >> 0x0000001eU)))
                    : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                        << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                  >> 0x00000018U))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (3U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                        >> 0x15U)))
                          ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                    << 2U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                              >> 0x0000001eU)))
                          : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                              << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
                                        >> 0x00000018U))) 
                        >> 4U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (0x000000fcU & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x17U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                         >> 4U))) << 2U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (0x00003f00U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x19U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                               >> 0x00000016U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                         >> 0x00000010U))) 
                                 << 8U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (0x000fc000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x1bU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                               >> 2U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                       << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
                                                 >> 0x0000001cU))) 
                                 << 0x0000000eU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (0x03f00000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x1dU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                               >> 0x0000000eU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                         >> 8U))) << 0x00000014U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x1fU))) ? (2U 
                                                 | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                                     << 6U) 
                                                    | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                                       >> 0x0000001aU)))
                    : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                        << 0x0000000cU) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
                                           >> 0x00000014U))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                >> 1U)))
                                  ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                              >> 6U)))
                                  : vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U])));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 3U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 5U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               >> 0x0000001eU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                 >> 0x00000018U))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 7U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                         >> 4U))) << 0x00000012U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 9U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                               >> 0x00000016U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                         >> 0x00000010U))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                  >> 0x0bU))) ? (4U 
                                                 | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                                     << 0x0000001eU) 
                                                    | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                                       >> 2U)))
                    : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                        << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                  >> 0x0000001cU))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x0bU)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                               >> 2U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                                 >> 0x0000001cU))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x0dU)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                               >> 0x0000000eU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                         >> 8U))) << 4U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 0x0fU)))
                                   ? (4U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                               >> 0x0000001aU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
                                         >> 0x00000014U))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                >> 1U)))
                                  ? (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                              >> 6U)))
                                  : vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U])));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 3U)))
                                   ? (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 5U)))
                                   ? (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               >> 0x0000001eU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                 >> 0x00000018U))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 7U)))
                                   ? (8U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
                                         >> 4U))) << 0x00000012U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                >> 1U)))
                                  ? (0x10U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                 >> 6U)))
                                  : vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U])));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                 >> 3U)))
                                   ? (0x10U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                  >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[11U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld)))));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
                                                >> 1U)))
                                  ? (0x20U | ((vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
                                                 >> 6U)))
                                  : vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U])));
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n;
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[0U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[1U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[1U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[2U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[2U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[3U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[3U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[4U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[4U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[5U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[5U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[6U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[6U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[7U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[7U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[8U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[8U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[9U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[9U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[10U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[10U];
        vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[11U] 
            = vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n[11U];
        vlSelfRef.price_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group 
            = (0x0000003fU & vlSelfRef.__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx[0U]);
        if (VL_LIKELY(((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                                   * vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)))))) {
            VL_ASSIGNSEL_WI(384, 6, (0x000001ffU & 
                                     ((IData)(6U) * vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)), vlSelfRef.price_levels__DOT__u_bid_pe__DOT__offsets_c, vlSelfRef.price_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group);
        }
        vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g);
    }
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__price_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__price_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__price_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__price_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__price_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__price_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__price_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0U;
            if (vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__we) {
                __Vinline_0__nba_sequent__TOP__0___VdlyVal__price_levels__DOT__u_ask_bbo__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__0___VdlyDim0__price_levels__DOT__u_ask_bbo__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__0___VdlySet__price_levels__DOT__u_ask_bbo__DOT__mem__v0 = 1U;
            }
            vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__rdata 
                = vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__mem
                [vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__price_levels__DOT__u_ask_bbo__DOT__mem__v0) {
                vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__price_levels__DOT__u_ask_bbo__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__0___VdlyVal__price_levels__DOT__u_ask_bbo__DOT__mem__v0;
            }
            vlSelfRef.price_levels__DOT__bbo_ask_q 
                = vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__rdata;
        }
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__price_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__price_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__price_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__price_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__price_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__price_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__price_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0U;
            if (vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__we) {
                __Vinline_0__nba_sequent__TOP__1___VdlyVal__price_levels__DOT__u_bid_bbo__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__1___VdlyDim0__price_levels__DOT__u_bid_bbo__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__1___VdlySet__price_levels__DOT__u_bid_bbo__DOT__mem__v0 = 1U;
            }
            vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__rdata 
                = vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__mem
                [vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__price_levels__DOT__u_bid_bbo__DOT__mem__v0) {
                vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__mem[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__price_levels__DOT__u_bid_bbo__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__price_levels__DOT__u_bid_bbo__DOT__mem__v0;
            }
            vlSelfRef.price_levels__DOT__bbo_bid_q 
                = vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__rdata;
        }
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyVal__price_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlyVal__price_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyDim0__price_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlyDim0__price_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__2___VdlySet__price_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__price_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__price_levels__DOT__u_ask_upd__DOT__mem__v0 = 0U;
            if (vlSelfRef.price_levels__DOT__u_ask_upd__DOT__we) {
                __Vinline_0__nba_sequent__TOP__2___VdlyVal__price_levels__DOT__u_ask_upd__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_ask_upd__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__2___VdlyDim0__price_levels__DOT__u_ask_upd__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_ask_upd__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__2___VdlySet__price_levels__DOT__u_ask_upd__DOT__mem__v0 = 1U;
            }
            vlSelfRef.price_levels__DOT__u_ask_upd__DOT__rdata 
                = vlSelfRef.price_levels__DOT__u_ask_upd__DOT__mem
                [vlSelfRef.price_levels__DOT__u_ask_upd__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__2___VdlySet__price_levels__DOT__u_ask_upd__DOT__mem__v0) {
                vlSelfRef.price_levels__DOT__u_ask_upd__DOT__mem[__Vinline_0__nba_sequent__TOP__2___VdlyDim0__price_levels__DOT__u_ask_upd__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__2___VdlyVal__price_levels__DOT__u_ask_upd__DOT__mem__v0;
            }
            vlSelfRef.price_levels__DOT__rd_ask = vlSelfRef.price_levels__DOT__u_ask_upd__DOT__rdata;
        }
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__3___VdlyVal__price_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlyVal__price_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__3___VdlyDim0__price_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlyDim0__price_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__3___VdlySet__price_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlySet__price_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__3___VdlySet__price_levels__DOT__u_bid_upd__DOT__mem__v0 = 0U;
            if (vlSelfRef.price_levels__DOT__u_bid_upd__DOT__we) {
                __Vinline_0__nba_sequent__TOP__3___VdlyVal__price_levels__DOT__u_bid_upd__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_bid_upd__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__3___VdlyDim0__price_levels__DOT__u_bid_upd__DOT__mem__v0 
                    = vlSelfRef.price_levels__DOT__u_bid_upd__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__3___VdlySet__price_levels__DOT__u_bid_upd__DOT__mem__v0 = 1U;
            }
            vlSelfRef.price_levels__DOT__u_bid_upd__DOT__rdata 
                = vlSelfRef.price_levels__DOT__u_bid_upd__DOT__mem
                [vlSelfRef.price_levels__DOT__u_bid_upd__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__3___VdlySet__price_levels__DOT__u_bid_upd__DOT__mem__v0) {
                vlSelfRef.price_levels__DOT__u_bid_upd__DOT__mem[__Vinline_0__nba_sequent__TOP__3___VdlyDim0__price_levels__DOT__u_bid_upd__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__3___VdlyVal__price_levels__DOT__u_bid_upd__DOT__mem__v0;
            }
            vlSelfRef.price_levels__DOT__rd_bid = vlSelfRef.price_levels__DOT__u_bid_upd__DOT__rdata;
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.price_levels__DOT__m_ask_qty 
                = (vlSelfRef.price_levels__DOT__bbo_ask_q 
                   & (- (IData)((IData)(vlSelfRef.price_levels__DOT__m_ask_valid))));
            vlSelfRef.m_ask_qty = vlSelfRef.price_levels__DOT__m_ask_qty;
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.price_levels__DOT__m_bid_qty 
                = (vlSelfRef.price_levels__DOT__bbo_bid_q 
                   & (- (IData)((IData)(vlSelfRef.price_levels__DOT__m_bid_valid))));
            vlSelfRef.m_bid_qty = vlSelfRef.price_levels__DOT__m_bid_qty;
        }
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.price_levels__DOT__fwd_hit = 0U;
            vlSelfRef.price_levels__DOT__base_qty = 
                ((IData)(vlSelfRef.price_levels__DOT__fwd_hit)
                  ? vlSelfRef.price_levels__DOT__wr_qty
                  : ((IData)(vlSelfRef.price_levels__DOT__s1_occupied)
                      ? ((IData)(vlSelfRef.price_levels__DOT__s1_side)
                          ? vlSelfRef.price_levels__DOT__rd_bid
                          : vlSelfRef.price_levels__DOT__rd_ask)
                      : 0U));
            vlSelfRef.price_levels__DOT__underflow 
                = (((IData)(vlSelfRef.price_levels__DOT__s1_valid) 
                    & (~ (IData)(vlSelfRef.price_levels__DOT__s1_add))) 
                   & (vlSelfRef.price_levels__DOT__s1_qty 
                      > vlSelfRef.price_levels__DOT__base_qty));
            vlSelfRef.price_levels__DOT__new_qty = 
                ((IData)(vlSelfRef.price_levels__DOT__s1_add)
                  ? (vlSelfRef.price_levels__DOT__base_qty 
                     + vlSelfRef.price_levels__DOT__s1_qty)
                  : ((IData)(vlSelfRef.price_levels__DOT__underflow)
                      ? 0U : (vlSelfRef.price_levels__DOT__base_qty 
                              - vlSelfRef.price_levels__DOT__s1_qty)));
            vlSelfRef.price_levels__DOT__u_ask_upd__DOT__wdata 
                = vlSelfRef.price_levels__DOT__new_qty;
            vlSelfRef.price_levels__DOT__u_bid_upd__DOT__wdata 
                = vlSelfRef.price_levels__DOT__new_qty;
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_valid & 0xfeU)))) {
        Verilated::overWidthError("s_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_side & 0xfeU)))) {
        Verilated::overWidthError("s_side");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_tick & 0xf000U)))) {
        Verilated::overWidthError("s_tick");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_add & 0xfeU)))) {
        Verilated::overWidthError("s_add");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_done & 0xfeU)))) {
        Verilated::overWidthError("s_done");
    }
}
#endif  // VL_DEBUG
