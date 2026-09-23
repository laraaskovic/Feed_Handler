// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__we) {
                __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata;
        }
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__we) {
                __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata;
        }
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__we) {
                __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem[__Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__we) {
                __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem[__Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata;
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t;
            __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t;
            __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t = 0;
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol;
            __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol = 0;
            __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol 
                = vlSelfRef.feed_handler_top__DOT__stat_other_symbol;
            if (vlSelfRef.feed_handler_top__DOT__rst) {
                __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol = 0U;
                vlSelfRef.feed_handler_top__DOT__m_bbo_seq = 0ULL;
                vlSelfRef.feed_handler_top__DOT__m_bid_qty = 0U;
                vlSelfRef.feed_handler_top__DOT__m_ask_qty = 0U;
                vlSelfRef.feed_handler_top__DOT__m_bid_price = 0U;
                vlSelfRef.feed_handler_top__DOT__m_ask_price = 0U;
            } else {
                if (((IData)(vlSelfRef.feed_handler_top__DOT__dc_valid) 
                     & (~ (IData)(vlSelfRef.feed_handler_top__DOT__ot_valid)))) {
                    __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__stat_other_symbol);
                }
                vlSelfRef.feed_handler_top__DOT__m_bbo_seq 
                    = vlSelfRef.feed_handler_top__DOT__pl_bbo_seq;
                vlSelfRef.feed_handler_top__DOT__m_bid_qty 
                    = vlSelfRef.feed_handler_top__DOT__pl_bid_qty;
                vlSelfRef.feed_handler_top__DOT__m_ask_qty 
                    = vlSelfRef.feed_handler_top__DOT__pl_ask_qty;
                if (vlSelfRef.feed_handler_top__DOT__pl_bid_valid) {
                    __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t 
                        = vlSelfRef.feed_handler_top__DOT__pl_bid_tick;
                    vlSelfRef.feed_handler_top__DOT____VlemCall_0__tick_to_price 
                        = (vlSelfRef.feed_handler_top__DOT__cfg_band_base 
                           + ((IData)(0x00000064U) 
                              * (IData)(__Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t)));
                    vlSelfRef.feed_handler_top__DOT____VlemCond_1 
                        = vlSelfRef.feed_handler_top__DOT____VlemCall_0__tick_to_price;
                } else {
                    vlSelfRef.feed_handler_top__DOT____VlemCond_1 = 0U;
                }
                vlSelfRef.feed_handler_top__DOT__m_bid_price 
                    = vlSelfRef.feed_handler_top__DOT____VlemCond_1;
                if (vlSelfRef.feed_handler_top__DOT__pl_ask_valid) {
                    __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t 
                        = vlSelfRef.feed_handler_top__DOT__pl_ask_tick;
                    vlSelfRef.feed_handler_top__DOT____VlemCall_2__tick_to_price 
                        = (vlSelfRef.feed_handler_top__DOT__cfg_band_base 
                           + ((IData)(0x00000064U) 
                              * (IData)(__Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t)));
                    vlSelfRef.feed_handler_top__DOT____VlemCond_3 
                        = vlSelfRef.feed_handler_top__DOT____VlemCall_2__tick_to_price;
                } else {
                    vlSelfRef.feed_handler_top__DOT____VlemCond_3 = 0U;
                }
                vlSelfRef.feed_handler_top__DOT__m_ask_price 
                    = vlSelfRef.feed_handler_top__DOT____VlemCond_3;
            }
            vlSelfRef.feed_handler_top__DOT__m_bbo_valid 
                = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__rst))) 
                   && (IData)(vlSelfRef.feed_handler_top__DOT__pl_bbo_valid));
            vlSelfRef.feed_handler_top__DOT__m_bid_valid 
                = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__rst))) 
                   && (IData)(vlSelfRef.feed_handler_top__DOT__pl_bid_valid));
            vlSelfRef.feed_handler_top__DOT__m_ask_valid 
                = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__rst))) 
                   && (IData)(vlSelfRef.feed_handler_top__DOT__pl_ask_valid));
            vlSelfRef.feed_handler_top__DOT__stat_other_symbol 
                = __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol;
            vlSelfRef.stat_other_symbol = vlSelfRef.feed_handler_top__DOT__stat_other_symbol;
            vlSelfRef.m_bbo_valid = vlSelfRef.feed_handler_top__DOT__m_bbo_valid;
            vlSelfRef.m_bbo_seq = vlSelfRef.feed_handler_top__DOT__m_bbo_seq;
            vlSelfRef.m_bid_qty = vlSelfRef.feed_handler_top__DOT__m_bid_qty;
            vlSelfRef.m_ask_qty = vlSelfRef.feed_handler_top__DOT__m_ask_qty;
            vlSelfRef.m_bid_valid = vlSelfRef.feed_handler_top__DOT__m_bid_valid;
            vlSelfRef.m_ask_valid = vlSelfRef.feed_handler_top__DOT__m_ask_valid;
            vlSelfRef.m_bid_price = vlSelfRef.feed_handler_top__DOT__m_bid_price;
            vlSelfRef.m_ask_price = vlSelfRef.feed_handler_top__DOT__m_ask_price;
        }
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x00000000000003feULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__20
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 0U;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_seq 
                = vlSelfRef.feed_handler_top__DOT__mf_seq;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c = 0U;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c = 0U;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c = 0U;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__locate 
                = ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]) 
                   | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
                                     >> 0x00000010U)));
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_valid 
                = vlSelfRef.feed_handler_top__DOT__mf_valid;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 0U;
            if (((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                 || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
                vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
                vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c 
                    = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side;
                vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                    = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty;
                vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                    = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price;
                vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 1U;
            } else {
                if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                               || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                              || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
                    if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                        if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
                            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_price;
                        }
                    }
                }
                if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                      || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                     || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty;
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 2U;
                } else {
                    if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                        if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty;
                        }
                    }
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c 
                        = ((0x44U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                            ? 3U : ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                                     ? 4U : 0U));
                }
            }
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c = 0ULL;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref;
            if ((1U & (~ ((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                          || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
                if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                               || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                              || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
                    if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                        if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c 
                                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_new_ref;
                        }
                    }
                }
                if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                      || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                     || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref;
                }
            }
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta_c 
                = (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                   - vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base);
        }
    }
    if ((0x0000000000020002ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__21
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_qty 
                = vlSelfRef.feed_handler_top__DOT__ot_m_qty;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_add 
                = vlSelfRef.feed_handler_top__DOT__ot_m_add;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick 
                = vlSelfRef.feed_handler_top__DOT__ot_m_tick;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_valid 
                = vlSelfRef.feed_handler_top__DOT__ot_m_valid;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_side 
                = vlSelfRef.feed_handler_top__DOT__ot_m_side;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_done 
                = vlSelfRef.feed_handler_top__DOT__ot_m_done;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_seq 
                = vlSelfRef.feed_handler_top__DOT__ot_m_seq;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
        }
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty 
                = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
                   & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid))));
            vlSelfRef.feed_handler_top__DOT__pl_ask_qty 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty;
        }
    }
    if ((0x0000000000001400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty 
                = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
                   & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid))));
            vlSelfRef.feed_handler_top__DOT__pl_bid_qty 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty;
        }
    }
    if ((0x0000000000006400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__fwd_hit 
                = ((((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_valid) 
                     & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid)) 
                    & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_side) 
                       == (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side))) 
                   & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_tick) 
                      == (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick)));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__fwd_hit)
                    ? vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_qty
                    : ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_occupied)
                        ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side)
                            ? vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid
                            : vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask)
                        : 0U));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow 
                = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid) 
                    & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add))) 
                   & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty 
                      > vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty 
                = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add)
                    ? (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                       + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty)
                    : ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow)
                        ? 0U : (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                                - vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty)));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
        }
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band_c 
                = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price) 
                   & ((vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                       >= vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base) 
                      & ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c)) 
                         < vlSelfRef.feed_handler_top__DOT__u_decode__DOT__band_top)));
        }
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
    if (VL_UNLIKELY(((vlSelfRef.s_tvalid & 0xfeU)))) {
        Verilated::overWidthError("s_tvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_tlast & 0xfeU)))) {
        Verilated::overWidthError("s_tlast");
    }
}
#endif  // VL_DEBUG
