// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_hdr__DOT__clk__0))) 
                                                           << 0x00000011U) 
                                                          | (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_frame__DOT__clk__0))) 
                                                             << 0x00000010U)) 
                                                         | ((((((((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_decode__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk__0))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0))))) 
                                                                << 8U)) 
                                                            | (((((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk__0))))) 
                                                                << 4U) 
                                                               | (((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk__0))) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk__0))) 
                                                                      << 2U)) 
                                                                  | ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__clk__0))) 
                                                                      << 1U) 
                                                                     | ((IData)(vlSelfRef.feed_handler_top__DOT__clk) 
                                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__clk__0))))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_decode__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_frame__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__feed_handler_top__DOT__u_hdr__DOT__clk__0 
            = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_body__nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi = 0;
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    VlWide<16>/*511:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    vlSelfRef.m_bbo_valid = vlSelfRef.feed_handler_top__DOT__m_bbo_valid;
    vlSelfRef.m_bbo_seq = vlSelfRef.feed_handler_top__DOT__m_bbo_seq;
    vlSelfRef.m_bid_valid = vlSelfRef.feed_handler_top__DOT__m_bid_valid;
    vlSelfRef.m_bid_price = vlSelfRef.feed_handler_top__DOT__m_bid_price;
    vlSelfRef.m_bid_qty = vlSelfRef.feed_handler_top__DOT__m_bid_qty;
    vlSelfRef.m_ask_valid = vlSelfRef.feed_handler_top__DOT__m_ask_valid;
    vlSelfRef.m_ask_price = vlSelfRef.feed_handler_top__DOT__m_ask_price;
    vlSelfRef.m_ask_qty = vlSelfRef.feed_handler_top__DOT__m_ask_qty;
    vlSelfRef.stat_other_symbol = vlSelfRef.feed_handler_top__DOT__stat_other_symbol;
    vlSelfRef.feed_handler_top__DOT__pl_bbo_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_valid;
    vlSelfRef.feed_handler_top__DOT__pl_bbo_seq = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_seq;
    vlSelfRef.feed_handler_top__DOT__pl_bid_tick = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_tick;
    vlSelfRef.feed_handler_top__DOT__pl_bid_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid;
    vlSelfRef.feed_handler_top__DOT__pl_ask_tick = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_tick;
    vlSelfRef.feed_handler_top__DOT__pl_ask_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid;
    vlSelfRef.feed_handler_top__DOT__pl_updates = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_updates;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__dc_price = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_price;
    vlSelfRef.feed_handler_top__DOT__hp_count = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_count;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
               + (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                        >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__s_tkeep = vlSelfRef.s_tkeep;
    vlSelfRef.feed_handler_top__DOT__s_tlast = vlSelfRef.s_tlast;
    vlSelfRef.feed_handler_top__DOT__ready = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__ready;
    vlSelfRef.feed_handler_top__DOT__stat_packets = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_packets;
    vlSelfRef.feed_handler_top__DOT__stat_dropped = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_dropped;
    vlSelfRef.feed_handler_top__DOT__stat_messages 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_messages;
    vlSelfRef.feed_handler_top__DOT__stat_frame_err 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_frame_err;
    vlSelfRef.feed_handler_top__DOT__stat_ops = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_ops;
    vlSelfRef.feed_handler_top__DOT__stat_out_of_band 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_out_of_band;
    vlSelfRef.feed_handler_top__DOT__stat_subpenny 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_subpenny;
    vlSelfRef.feed_handler_top__DOT__stat_collisions 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions;
    vlSelfRef.feed_handler_top__DOT__stat_missing = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing;
    vlSelfRef.feed_handler_top__DOT__stat_overrun = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_overrun;
    vlSelfRef.feed_handler_top__DOT__stat_stash_peak 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_stash_peak;
    vlSelfRef.feed_handler_top__DOT__stat_underflow 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__dc_side = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_side;
    vlSelfRef.feed_handler_top__DOT__dc_qty = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_qty;
    vlSelfRef.feed_handler_top__DOT__dc_tick_ok = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick_ok;
    vlSelfRef.feed_handler_top__DOT__dc_seq = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__ot_m_valid = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__ot_m_side = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side;
    vlSelfRef.feed_handler_top__DOT__ot_m_add = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add;
    vlSelfRef.feed_handler_top__DOT__ot_m_qty = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty;
    vlSelfRef.feed_handler_top__DOT__ot_m_done = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done;
    vlSelfRef.feed_handler_top__DOT__ot_m_seq = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__mf_len = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_len;
    vlSelfRef.feed_handler_top__DOT__mf_valid = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__mf_seq = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__hp_seq = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_sequence;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes 
        = (7U & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pay_len_q));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__keep_shift 
        = ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes))
            ? 0U : (0x0000000fU & ((IData)(8U) - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_keep 
        = (0xffU >> (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__keep_shift));
    vlSelfRef.feed_handler_top__DOT__dc_tick = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side) 
           & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side)) 
           & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid));
    vlSelfRef.feed_handler_top__DOT__dc_op = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_op;
    vlSelfRef.feed_handler_top__DOT__ot_m_tick = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick;
    vlSelfRef.feed_handler_top__DOT__hp_tlast = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast;
    vlSelfRef.feed_handler_top__DOT__s_tvalid = vlSelfRef.s_tvalid;
    vlSelfRef.feed_handler_top__DOT__cfg_locate = vlSelfRef.cfg_locate;
    vlSelfRef.feed_handler_top__DOT__dc_valid = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__dc_locate = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_locate;
    vlSelfRef.feed_handler_top__DOT__s_tdata = vlSelfRef.s_tdata;
    vlSelfRef.feed_handler_top__DOT__rst = vlSelfRef.rst;
    vlSelfRef.feed_handler_top__DOT__cfg_band_base 
        = vlSelfRef.cfg_band_base;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[12U]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[13U]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__vlan_tagged 
        = (0x8100U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer));
    if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__vlan_tagged) {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off = 0x12U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner 
            = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[16U]) 
                << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[17U]);
    } else {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off = 0x0eU;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner 
            = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer;
    }
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_ipv4 
        = (0x0800U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes 
        = (0x0000003cU & (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                          [(0x0000007fU & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off))] 
                          << 2U));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_total_len 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                    [(0x0000007fU & ((IData)(2U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(3U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_udp 
        = (0x11U == vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(9U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__udp_off 
        = (0x000000ffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off) 
                          + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off 
        = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__udp_off)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off 
        = (0x000000ffU & ((IData)(0x14U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_len 
        = (0x0000ffffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_total_len) 
                            - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes)) 
                           - (IData)(8U)) - (IData)(0x0014U)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_seq 
        = (((QData)((IData)((((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                        [(0x0000007fU 
                                          & ((IData)(0x0aU) 
                                             + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                               [(0x0000007fU & ((IData)(0x0bU) 
                                                + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                              << 0x00000010U) | (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                          [
                                                          (0x0000007fU 
                                                           & ((IData)(0x0cU) 
                                                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                  << 8U) 
                                                 | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                 [(0x0000007fU 
                                                   & ((IData)(0x0dU) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))])))) 
            << 0x00000020U) | (QData)((IData)((((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                          [
                                                          (0x0000007fU 
                                                           & ((IData)(0x0eU) 
                                                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                  << 8U) 
                                                 | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                 [(0x0000007fU 
                                                   & ((IData)(0x0fU) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                           [
                                                           (0x0000007fU 
                                                            & ((IData)(0x10U) 
                                                               + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                   << 8U) 
                                                  | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(0x11U) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))])))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_cnt 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                    [(0x0000007fU & ((IData)(0x12U) 
                                     + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(0x13U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__dc_new_ref = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_new_ref;
    vlSelfRef.feed_handler_top__DOT__dc_ref = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_ref;
    vlSelfRef.feed_handler_top__DOT__clk = vlSelfRef.clk;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap[__Vilp1] 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000007fU)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap[__Vilp2] 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (3U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__hp_tdata = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tdata;
    vlSelfRef.feed_handler_top__DOT__hp_tkeep = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__hp_tvalid = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid;
    vlSelfRef.feed_handler_top__DOT__mf_msg[0U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[0U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[1U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[1U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[2U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[2U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[3U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[3U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[4U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[4U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[5U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[5U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[6U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[6U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[7U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[7U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[8U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[8U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[9U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[9U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[10U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[10U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[11U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[11U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[12U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[12U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (4U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)) {
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
              >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)) 
             & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref
                [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)] 
                == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a 
                = (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k);
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tkeep 
        = vlSelfRef.feed_handler_top__DOT__s_tkeep;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tlast 
        = vlSelfRef.feed_handler_top__DOT__s_tlast;
    vlSelfRef.ready = vlSelfRef.feed_handler_top__DOT__ready;
    vlSelfRef.stat_packets = vlSelfRef.feed_handler_top__DOT__stat_packets;
    vlSelfRef.stat_dropped = vlSelfRef.feed_handler_top__DOT__stat_dropped;
    vlSelfRef.stat_messages = vlSelfRef.feed_handler_top__DOT__stat_messages;
    vlSelfRef.stat_frame_err = vlSelfRef.feed_handler_top__DOT__stat_frame_err;
    vlSelfRef.stat_ops = vlSelfRef.feed_handler_top__DOT__stat_ops;
    vlSelfRef.stat_out_of_band = vlSelfRef.feed_handler_top__DOT__stat_out_of_band;
    vlSelfRef.stat_subpenny = vlSelfRef.feed_handler_top__DOT__stat_subpenny;
    vlSelfRef.stat_collisions = vlSelfRef.feed_handler_top__DOT__stat_collisions;
    vlSelfRef.stat_missing = vlSelfRef.feed_handler_top__DOT__stat_missing;
    vlSelfRef.stat_overrun = vlSelfRef.feed_handler_top__DOT__stat_overrun;
    vlSelfRef.stat_stash_peak = vlSelfRef.feed_handler_top__DOT__stat_stash_peak;
    vlSelfRef.stat_underflow = vlSelfRef.feed_handler_top__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_side 
        = vlSelfRef.feed_handler_top__DOT__dc_side;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_qty 
        = vlSelfRef.feed_handler_top__DOT__dc_qty;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick_ok 
        = vlSelfRef.feed_handler_top__DOT__dc_tick_ok;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__dc_seq;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__ot_m_valid;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_side 
        = vlSelfRef.feed_handler_top__DOT__ot_m_side;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_add 
        = vlSelfRef.feed_handler_top__DOT__ot_m_add;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_qty 
        = vlSelfRef.feed_handler_top__DOT__ot_m_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_done 
        = vlSelfRef.feed_handler_top__DOT__ot_m_done;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__ot_m_seq;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_len 
        = vlSelfRef.feed_handler_top__DOT__mf_len;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__mf_valid;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__mf_seq;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_sequence 
        = vlSelfRef.feed_handler_top__DOT__hp_seq;
    vlSelfRef.feed_handler_top__DOT__unused_tick_hi 
        = vlSelfRef.feed_handler_top__DOT__dc_tick;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick 
        = (0x00000fffU & (IData)(vlSelfRef.feed_handler_top__DOT__dc_tick));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty 
        = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
           & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid))));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty 
        = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
           & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid))));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op 
        = vlSelfRef.feed_handler_top__DOT__dc_op;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick 
        = vlSelfRef.feed_handler_top__DOT__ot_m_tick;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast 
        = vlSelfRef.feed_handler_top__DOT__hp_tlast;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid 
        = vlSelfRef.feed_handler_top__DOT__s_tvalid;
    vlSelfRef.feed_handler_top__DOT__ot_valid = ((IData)(vlSelfRef.feed_handler_top__DOT__dc_valid) 
                                                 & ((IData)(vlSelfRef.feed_handler_top__DOT__cfg_locate) 
                                                    == (IData)(vlSelfRef.feed_handler_top__DOT__dc_locate)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata 
        = vlSelfRef.feed_handler_top__DOT__s_tdata;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base 
        = vlSelfRef.feed_handler_top__DOT__cfg_band_base;
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
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref 
        = vlSelfRef.feed_handler_top__DOT__dc_new_ref;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref 
        = vlSelfRef.feed_handler_top__DOT__dc_ref;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata 
        = vlSelfRef.feed_handler_top__DOT__hp_tdata;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tkeep 
        = vlSelfRef.feed_handler_top__DOT__hp_tkeep;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid 
        = vlSelfRef.feed_handler_top__DOT__hp_tvalid;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[0U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[1U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[1U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[2U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[2U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[3U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[4U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[5U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[6U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[7U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[8U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[9U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[9U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[10U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[10U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[11U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[11U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[12U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[12U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)) {
        if ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
             [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][3U] 
             & ((0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                           [
                                                           (7U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][2U])) 
                                           << 0x00000013U) 
                                          | ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                             [
                                                             (7U 
                                                              & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][1U])) 
                                             >> 0x0000000dU))) 
                == (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref 
                    >> 0x0eU)))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a 
                = (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w);
        }
        if ((1U & (~ vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                   [(7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w))][3U]))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_a 
                = (7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w));
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__pl_bid_qty = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty;
    vlSelfRef.feed_handler_top__DOT__pl_ask_qty = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__do_emit 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok) 
              & (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx) 
                  >= (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emit_start)) 
                 & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n) 
                    < (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_total)))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__ot_valid;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off) 
           << 3U);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_hi 
        = (0x0000007fU & ((IData)(0x40U) - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__realigned 
        = ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off))
            ? vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata
            : (VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo)) 
               | VL_SHIFTL_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_hi))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flushed 
        = VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout = 0;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi 
        = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
           >> 0x0000000eU);
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r) 
                    ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                    & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0002fd611db47393ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                    << 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x0002534126ec4cc4ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                    << 2U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x00035ba3fae19967ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                    << 3U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 4U)) ^ VL_REDXOR_64(
                                                              (0x000281d87591e2f5ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 5U)) ^ VL_REDXOR_64(
                                                              (0x00039c0dfb4682d0ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 5U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 6U)) ^ VL_REDXOR_64(
                                                              (0x00023af1abc27223ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 7U)) ^ VL_REDXOR_64(
                                                              (0x000162659731d4ddULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 7U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 8U)) ^ VL_REDXOR_64(
                                                              (0x00007639389f11f4ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 9U)) ^ VL_REDXOR_64(
                                                              (0x00030acab8f49f53ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 9U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0aU)) ^ 
                              VL_REDXOR_64((0x000059599ec678ddULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0bU)) ^ 
                              VL_REDXOR_64((0x000217af29df0acaULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000bU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0cU)) ^ 
                              VL_REDXOR_64((0x00009f53acbc5959ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0dU)) ^ 
                              VL_REDXOR_64((0x0003fd46bf5fb556ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout = 0;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi 
        = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
           >> 0x0000000eU);
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r) 
                    ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                    & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0002fd611db47393ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                    << 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x0002534126ec4cc4ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                    << 2U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x00035ba3fae19967ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                    << 3U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 4U)) ^ VL_REDXOR_64(
                                                              (0x000281d87591e2f5ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 5U)) ^ VL_REDXOR_64(
                                                              (0x00039c0dfb4682d0ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 5U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 6U)) ^ VL_REDXOR_64(
                                                              (0x00023af1abc27223ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 7U)) ^ VL_REDXOR_64(
                                                              (0x000162659731d4ddULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 7U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 8U)) ^ VL_REDXOR_64(
                                                              (0x00007639389f11f4ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 9U)) ^ VL_REDXOR_64(
                                                              (0x00030acab8f49f53ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 9U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0aU)) ^ 
                              VL_REDXOR_64((0x000059599ec678ddULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0bU)) ^ 
                              VL_REDXOR_64((0x000217af29df0acaULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000bU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0cU)) ^ 
                              VL_REDXOR_64((0x00009f53acbc5959ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0dU)) ^ 
                              VL_REDXOR_64((0x0003fd46bf5fb556ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any 
        = (0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0U;
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0U;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp_bits 
        = (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                            [(((IData)(0x0000003fU) 
                               + (0x00000fffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
                                                 << 6U))) 
                              >> 5U)])) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                             [(0x0000007eU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
                                              << 1U))])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp_bits;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0U;
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0U;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any 
        = (0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0U;
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 1U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3fU;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp_bits 
        = (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                            [(((IData)(0x0000003fU) 
                               + (0x00000fffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
                                                 << 6U))) 
                              >> 5U)])) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                             [(0x0000007eU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
                                              << 1U))])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp_bits;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0U;
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 1U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3fU;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i = 0U;
    if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b;
        }
    }
    if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx;
    } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a;
    }
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes 
            = (0x0000000fU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes) 
                              + (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tkeep) 
                                       >> (7U & vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[0U] 
        = (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata);
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[1U] 
        = (IData)((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata 
                   >> 0x00000020U));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[2U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[3U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[4U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[5U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[6U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[7U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[8U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[9U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[10U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[11U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[12U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[13U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[14U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[15U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_shift 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid) 
           << 3U);
    if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) {
        VL_SHIFTL_WWI(512,512,11, __Vtemp_1, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_shift));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U] 
               | __Vtemp_1[0U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U] 
               | __Vtemp_1[1U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U] 
               | __Vtemp_1[2U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U] 
               | __Vtemp_1[3U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U] 
               | __Vtemp_1[4U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U] 
               | __Vtemp_1[5U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U] 
               | __Vtemp_1[6U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U] 
               | __Vtemp_1[7U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U] 
               | __Vtemp_1[8U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U] 
               | __Vtemp_1[9U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U] 
               | __Vtemp_1[10U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U] 
               | __Vtemp_1[11U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U] 
               | __Vtemp_1[12U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U] 
               | __Vtemp_1[13U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U] 
               | __Vtemp_1[14U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U] 
               | __Vtemp_1[15U]);
    } else {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U];
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__locate 
        = ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]) 
           | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
                             >> 0x00000010U)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side 
        = (0x42U == (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
                     >> 0x00000018U));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty 
        = ((((0x0000ff00U & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U]) 
                               | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U] 
                                                 >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_3 = (((QData)((IData)(
                                                       ((((0x0000ff00U 
                                                           & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[2U] 
                                                              >> 0x00000010U)) 
                                                          | (0x000000ffU 
                                                             & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U])) 
                                                         << 0x00000010U) 
                                                        | ((0x0000ff00U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U]) 
                                                           | (0x000000ffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
                                                                 >> 0x00000010U)))))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((((0x0000ff00U 
                                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
                                                               >> 0x00000010U)) 
                                                           | (0x000000ffU 
                                                              & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U])) 
                                                          << 0x00000010U) 
                                                         | ((0x0000ff00U 
                                                             & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U]) 
                                                            | (0x000000ffU 
                                                               & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
                                                                  >> 0x00000010U)))))));
    __VdfgRegularize_h6e95ff9d_0_0 = ((0x00ff0000U 
                                       & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                               >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((0x00ff0000U 
                                       & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
                                               >> 0x00000010U))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type 
        = (0x000000ffU & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]);
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_way 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder 
            = (1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                     [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][2U] 
                     >> 0x0000001fU));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick 
            = (0x00000fffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
               [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][1U]);
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side 
            = (1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                     [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][1U] 
                     >> 0x0000000cU));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
            [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][0U];
    } else {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_way 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_a;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder) 
                     >> (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick 
            = (0x00000fffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_tick
               [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a]);
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side) 
                     >> (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty
            [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
        = ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty 
            > vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty)
            ? vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty
            : vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty);
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy 
            = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy)) 
               | (0x0000ffffU & ((1U & (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                                         >> (0x0000000fU 
                                             & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)) 
                                        & (~ ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) 
                                                & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a))) 
                                               & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)) 
                                              & ((0x0000000fU 
                                                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k) 
                                                 == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)))))) 
                                 << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) {
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy) 
              >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) 
             & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref
                [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)] 
                == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_b 
                = (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k);
        }
        if ((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy) 
                      >> (0x0000000fU & ((IData)(0x0fU) 
                                         - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)))))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx 
                = (0x0000000fU & ((IData)(0x0fU) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k));
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a) 
           == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b)) 
               | (0x00ffU & ((1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                    [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][3U] 
                                    & (~ ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) 
                                            & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set)) 
                                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a)) 
                                          & ((7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w) 
                                             == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a)))))) 
                             << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)) {
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b) 
              >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)) 
             & ((0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                                           [
                                                           (7U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][2U])) 
                                           << 0x00000013U) 
                                          | ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                                             [
                                                             (7U 
                                                              & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][1U])) 
                                             >> 0x0000000dU))) 
                == (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                    >> 0x0eU)))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_b 
                = (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w);
        }
        if ((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b) 
                      >> (7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)))))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_b 
                = (7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w));
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__accept 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid) 
           & ((1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
              & (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_ask 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_ask_tick 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_bid 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_bid_tick 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins 
        = (0x000000ffU & (((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync)) 
                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid))
                           ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid) 
                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes))
                           : (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref 
        = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref 
        = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty 
        = ((__VdfgRegularize_h6e95ff9d_0_0 << 8U) | 
           (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
            >> 0x00000018U));
    __VdfgRegularize_h6e95ff9d_0_1 = ((0xff000000U 
                                       & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U]) 
                                      | __VdfgRegularize_h6e95ff9d_0_0);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price 
        = ((__VdfgRegularize_h6e95ff9d_0_2 << 8U) | 
           (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
            >> 0x00000018U));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_price 
        = ((0xff000000U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U]) 
           | __VdfgRegularize_h6e95ff9d_0_2);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side)) 
                    << 0x0000002cU) | (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty)))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U] 
        = (((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                     >> 0x0000000eU)) << 0x0000000dU) 
           | (IData)(((((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side)) 
                        << 0x0000002cU) | (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick)) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty)))) 
                      >> 0x00000020U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U] 
        = ((0x80000000U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U]) 
           | (((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                        >> 0x0000000eU)) >> 0x00000013U) 
              | ((IData)(((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                           >> 0x0000000eU) >> 0x00000020U)) 
                 << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U] 
        = ((0x7fffffffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U]) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
              << 0x0000001fU));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U] 
        = (1U & (1U | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
                       >> 1U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)
            : (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_b)
            : (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
           | ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)) 
              & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_st 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set)) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a) 
              | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_ok 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_st));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_way 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_b)
            : (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b) 
              | ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b)) 
                 & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_st 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a) 
            & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set))) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b) 
              | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_ok 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_st));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_ask_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_bid_tick;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len 
        = ((0x0000ff00U & (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
                           << 8U)) | (0x000000ffU & 
                                      (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
                                       >> 8U)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync)) 
           & (2U <= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane 
        = ((1U <= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)) 
           & (0x0032U >= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)
            ? (0x000000ffU & ((IData)(2U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)))
            : 2U);
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len) 
            & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins) 
              >= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len) 
           & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_new_ref 
        = (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_1)) 
            << 0x00000020U) | (QData)((IData)(((((0x0000ff00U 
                                                  & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                                     >> 0x00000010U)) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U])) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U]) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
                                                        >> 0x00000010U)))))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty 
        = __VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__q 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__tk 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__sd 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__ld 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[0U] 
                    = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__sd)) 
                                << 0x0000002cU) | (
                                                   ((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__tk)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__q)))));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[1U] 
                    = (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                                 >> 0x0eU)) << 0x0000000dU) 
                       | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__sd)) 
                                    << 0x0000002cU) 
                                   | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__tk)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__q)))) 
                                  >> 0x00000020U)));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U] 
                    = ((0x80000000U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U]) 
                       | (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                                    >> 0x0eU)) >> 0x00000013U) 
                          | ((IData)(((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                                       >> 0x0eU) >> 0x00000020U)) 
                             << 0x0000000dU)));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U] 
                    = ((0x7fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U]) 
                       | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__ld) 
                          << 0x0000001fU));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[3U] 
                    = (1U & (1U | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__ld) 
                                   >> 1U)));
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[0U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[1U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[3U];
            } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) {
                if ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
                     >= vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty)) {
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[0U] = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[1U] = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[2U] = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[3U] = 0U;
                } else {
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__q 
                        = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
                           - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty);
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__tk 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick;
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__sd 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side;
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__ld 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[0U] 
                        = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__sd)) 
                                    << 0x0000002cU) 
                                   | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__tk)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__q)))));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[1U] 
                        = (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                                     >> 0x0eU)) << 0x0000000dU) 
                           | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__sd)) 
                                        << 0x0000002cU) 
                                       | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__tk)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__q)))) 
                                      >> 0x00000020U)));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U] 
                        = ((0x80000000U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U]) 
                           | (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                                        >> 0x0eU)) 
                               >> 0x00000013U) | ((IData)(
                                                          ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                                                            >> 0x0eU) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000dU)));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U] 
                        = ((0x7fffffffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U]) 
                           | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__ld) 
                              << 0x0000001fU));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[3U] 
                        = (1U & (1U | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__ld) 
                                       >> 1U)));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[0U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[0U];
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[1U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[1U];
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[2U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U];
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[3U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[3U];
                }
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[0U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[1U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[2U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[3U];
            }
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
            if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add)))) {
                if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red)))) {
                    if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del)))) {
                        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
                            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set) {
                                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we 
                                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                                       | (0x00ffU & 
                                          ((IData)(1U) 
                                           << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_way))));
                            }
                        }
                    }
                }
            }
        } else {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
        }
    } else {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we = 0U;
    if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we = 0xffU;
    } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_way))));
            }
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))));
            }
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))));
            }
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))));
            }
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set) {
                if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
                      & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set)) 
                     & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_way) 
                        == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a)))) {
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))) 
                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we));
                }
            }
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__con_shift 
        = (0x000007ffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len) 
                          << 3U));
    if (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) 
         | (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync))) {
        VL_ASSIGN_W(512, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next, Vtop__ConstPool__CONST_h93e1b771_0);
    } else if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg) {
        VL_SHIFTR_WWI(512,512,11, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide, (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__con_shift));
    } else {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U];
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next 
        = (0x000000ffU & (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg)
                            ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins) 
                               - (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len))
                            : (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins)) 
                          & (- (IData)((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync) 
                                                 | (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len))))))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c = 0ULL;
    if ((1U & (~ ((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                  || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
        if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref;
        }
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
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c = 0U;
    if (((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
         || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 1U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty;
    } else {
        if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 2U;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty;
        } else {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c 
                = ((0x44U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                    ? 3U : ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                             ? 4U : 0U));
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty;
                }
            }
        }
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
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price) 
            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
               >= vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base)) 
           & (0x00064000U > (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                             - vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band)
            ? (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
               - vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base)
            : 0U);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__scaled 
        = (0x0000000051eb851fULL * (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__tick_c 
        = (0x0000ffffU & (IData)((vlSelfRef.feed_handler_top__DOT__u_decode__DOT__scaled 
                                  >> 0x00000025U)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__subpenny_c 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band) 
           & (0U != (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta 
                     - ((IData)(0x00000064U) * (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__tick_c)))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 7U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 6U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 5U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 4U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 3U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 2U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 1U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we 
        = (1U & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 7U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 6U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 5U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 4U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 3U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 2U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 1U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we 
        = (1U & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__frame_err 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) 
              & ((~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync) 
                     | (0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next)))) 
                 & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast))));
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi = 0;
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_stash_peak;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_stash_peak = 0;
    CData/*1:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__state;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__state = 0;
    SData/*13:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__init_idx;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__init_idx = 0;
    CData/*0:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing = 0;
    QData/*63:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_ref;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_ref = 0;
    QData/*63:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_new_ref;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_new_ref = 0;
    CData/*0:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_side;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_side = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_qty;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_qty = 0;
    SData/*11:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick = 0;
    CData/*0:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick_ok = 0;
    QData/*63:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__op_seq;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_seq = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_overrun;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_overrun = 0;
    QData/*63:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v0;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 = 0;
    SData/*11:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v0;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 = 0;
    IData/*31:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v0;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v0 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v0 = 0;
    IData/*31:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v1;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_qty__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 = 0;
    QData/*63:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v1;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 = 0;
    SData/*11:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v1;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 = 0;
    IData/*31:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v2;
    __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v2 = 0;
    CData/*3:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v2;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v2 = 0;
    // Body
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_stash_peak 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_stash_peak;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_overrun 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_overrun;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_v;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_seq 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_seq;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__init_idx 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_side 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick_ok 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 = 0U;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_qty 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_new_ref 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 = 0U;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__state 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state;
    __Vdly__feed_handler_top__DOT__u_orders__DOT__op_ref 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rst) {
        __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_stash_peak = 0U;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_overrun = 0U;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__state = 0U;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__init_idx = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__ready = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_seq = 0ULL;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid = 0U;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions = 0U;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing = 0U;
    } else {
        if ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
             > vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_stash_peak)) {
            __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_stash_peak 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count;
        }
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid) 
              & (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op))) 
             & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__accept)))) {
            __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_overrun 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_overrun);
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid = 0U;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done = 0U;
        __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v = 0U;
        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_v) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_valid;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_side;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_tick;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_qty;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_seq 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_seq;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done = 1U;
        }
        if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            __Vdly__feed_handler_top__DOT__u_orders__DOT__init_idx 
                = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx)));
            if ((0x3fffU == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx))) {
                __Vdly__feed_handler_top__DOT__u_orders__DOT__state = 1U;
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__ready = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__accept) {
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref;
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref;
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_ref 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_side 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_side;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_qty 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_qty;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick_ok 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick_ok;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__op_seq 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_seq;
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout = 0;
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout = 0;
                __Vdly__feed_handler_top__DOT__u_orders__DOT__state = 2U;
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi 
                    = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                       >> 0x0000000eU);
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi 
                    = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                       >> 0x0000000eU);
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r) 
                                ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi)))));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r) 
                                ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi)))));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                          >> 1U)) ^ 
                                 VL_REDXOR_64((0x0002fd611db47393ULL 
                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                << 1U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                          >> 1U)) ^ 
                                 VL_REDXOR_64((0x0002fd611db47393ULL 
                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                << 1U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                          >> 2U)) ^ 
                                 VL_REDXOR_64((0x0002534126ec4cc4ULL 
                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                << 2U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                          >> 2U)) ^ 
                                 VL_REDXOR_64((0x0002534126ec4cc4ULL 
                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                << 2U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                          >> 3U)) ^ 
                                 VL_REDXOR_64((0x00035ba3fae19967ULL 
                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                << 3U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                          >> 3U)) ^ 
                                 VL_REDXOR_64((0x00035ba3fae19967ULL 
                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                << 3U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 4U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000281d87591e2f5ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 4U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 4U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000281d87591e2f5ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 4U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 5U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00039c0dfb4682d0ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 5U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 5U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00039c0dfb4682d0ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 5U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 6U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00023af1abc27223ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 6U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 6U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00023af1abc27223ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 6U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 7U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000162659731d4ddULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 7U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 7U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000162659731d4ddULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 7U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 8U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00007639389f11f4ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 8U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 8U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00007639389f11f4ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 8U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 9U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00030acab8f49f53ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 9U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 9U)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00030acab8f49f53ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 9U)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 0x0aU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000059599ec678ddULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 0x0000000aU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 0x0aU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000059599ec678ddULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 0x0000000aU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 0x0bU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000217af29df0acaULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 0x0000000bU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 0x0bU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x000217af29df0acaULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 0x0000000bU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 0x0cU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00009f53acbc5959ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 0x0000000cU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 0x0cU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x00009f53acbc5959ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 0x0000000cU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
                    = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
                       | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                                   >> 0x0dU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x0003fd46bf5fb556ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                                         << 0x0000000dU)));
                __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout 
                    = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout)) 
                       | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__r 
                                                   >> 0x0dU)) 
                                          ^ VL_REDXOR_64(
                                                         (0x0003fd46bf5fb556ULL 
                                                          & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__hi))) 
                                         << 0x0000000dU)));
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a 
                    = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout;
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b 
                    = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__11__Vfuncout;
            }
        } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            __Vdly__feed_handler_top__DOT__u_orders__DOT__state = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_seq 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_seq;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done 
                = (1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) 
                            & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a))));
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
                if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_ok) {
                    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_st) {
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid 
                            = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                               | (0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st))));
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st))) 
                                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder)) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
                                                 << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st))));
                        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
                        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st;
                        __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v0 = 1U;
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st))) 
                                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side)) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side) 
                                                 << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st))));
                        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
                        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st;
                        __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v0 = 1U;
                        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v0 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
                        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v0 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st;
                    }
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add = 1U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
                } else {
                    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions);
                }
            }
            if (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) 
                 | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del))) {
                if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a) {
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty 
                        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del)
                            ? vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty
                            : vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty);
                    if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a)))) {
                        if (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del) 
                             | (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
                                >= vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty))) {
                            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a))) 
                                   & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid));
                        } else {
                            __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 
                                = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
                                   - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty);
                            __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 
                                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a;
                            __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_qty__v1 = 1U;
                        }
                    }
                } else {
                    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing);
                }
            }
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
                if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a) {
                    if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_ok)))) {
                        __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions 
                            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions);
                    }
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty;
                    if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a)))) {
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid 
                            = ((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a))) 
                               & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid));
                    }
                    __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v = 1U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_side 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_seq 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_seq;
                    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_st) {
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid 
                            = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                               | (0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st))));
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st))) 
                                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder)) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
                                                 << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st))));
                        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref;
                        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st;
                        __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v1 = 1U;
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st))) 
                                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side)) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side) 
                                                 << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st))));
                        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
                        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st;
                        __VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v1 = 1U;
                        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v2 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
                        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v2 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st;
                    }
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_valid 
                        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_ok) 
                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_tick 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_qty 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
                } else {
                    __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing);
                }
            }
        } else {
            __Vdly__feed_handler_top__DOT__u_orders__DOT__state = 1U;
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_stash_peak 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_stash_peak;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_overrun 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_overrun;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__pend_v 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__pend_v;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_seq 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_seq;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_collisions;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__stat_missing;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__init_idx;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_side;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_tick[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v0] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v0;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v0] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v0;
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__st_qty__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v1] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v1;
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__st_tick__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_tick[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_tick__v1] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_tick__v1;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_qty__v2] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_qty__v2;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_qty;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_new_ref;
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v0] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v0;
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__st_ref__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__st_ref__v1] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__st_ref__v1;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__state;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref 
        = __Vdly__feed_handler_top__DOT__u_orders__DOT__op_ref;
    vlSelfRef.feed_handler_top__DOT__stat_stash_peak 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_stash_peak;
    vlSelfRef.feed_handler_top__DOT__stat_overrun = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_overrun;
    vlSelfRef.feed_handler_top__DOT__ready = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__ready;
    vlSelfRef.feed_handler_top__DOT__ot_m_valid = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__ot_m_done = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done;
    vlSelfRef.feed_handler_top__DOT__ot_m_side = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side;
    vlSelfRef.feed_handler_top__DOT__ot_m_add = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add;
    vlSelfRef.feed_handler_top__DOT__ot_m_qty = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty;
    vlSelfRef.feed_handler_top__DOT__ot_m_seq = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__stat_collisions 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions;
    vlSelfRef.feed_handler_top__DOT__stat_missing = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing;
    vlSelfRef.feed_handler_top__DOT__ot_m_tick = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
               + (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                        >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (3U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (4U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)) {
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
              >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)) 
             & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref
                [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)] 
                == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a 
                = (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k);
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k);
    }
    vlSelfRef.stat_stash_peak = vlSelfRef.feed_handler_top__DOT__stat_stash_peak;
    vlSelfRef.stat_overrun = vlSelfRef.feed_handler_top__DOT__stat_overrun;
    vlSelfRef.ready = vlSelfRef.feed_handler_top__DOT__ready;
    vlSelfRef.stat_collisions = vlSelfRef.feed_handler_top__DOT__stat_collisions;
    vlSelfRef.stat_missing = vlSelfRef.feed_handler_top__DOT__stat_missing;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(97, __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1);
    SData/*13:0*/ __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U];
}

extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_h23cb1401_0;

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_frame_err;
    __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_frame_err = 0;
    SData/*15:0*/ __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx;
    __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_messages;
    __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_messages = 0;
    // Body
    __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_frame_err 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_frame_err;
    __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_messages 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_messages;
    __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_idx;
    if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__rst) {
        __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_frame_err = 0U;
        __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_messages = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_valid = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_len = 0U;
        __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_seq = 0ULL;
        VL_ASSIGN_W(512, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q, Vtop__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid = 0U;
        VL_ASSIGN_W(400, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg, Vtop__ConstPool__CONST_h23cb1401_0);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync = 0U;
    } else {
        if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__frame_err) {
            __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_frame_err 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_frame_err);
        }
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_valid = 0U;
        if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg) {
            __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_messages 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_messages);
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_valid = 1U;
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_len 
                = (0x000000ffU & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_seq 
                = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_sequence 
                   + (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_idx)));
            __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_idx)));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[0U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[1U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[2U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[3U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[4U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[5U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[6U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[7U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[8U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[9U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[10U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[11U] 
                = ((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
                    << 0x00000010U) | (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
                                       >> 0x00000010U));
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[12U] 
                = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
                   >> 0x00000010U);
        }
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[15U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next;
        if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) {
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync = 1U;
        }
        if (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) 
             & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast))) {
            __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx = 0U;
            VL_ASSIGN_W(512, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q, Vtop__ConstPool__CONST_h93e1b771_0);
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid = 0U;
            vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync = 0U;
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_frame_err 
        = __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_frame_err;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_messages 
        = __Vdly__feed_handler_top__DOT__u_frame__DOT__stat_messages;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_idx 
        = __Vdly__feed_handler_top__DOT__u_frame__DOT__msg_idx;
    vlSelfRef.feed_handler_top__DOT__stat_frame_err 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_frame_err;
    vlSelfRef.feed_handler_top__DOT__stat_messages 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_messages;
    vlSelfRef.feed_handler_top__DOT__mf_valid = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__mf_len = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_len;
    vlSelfRef.feed_handler_top__DOT__mf_seq = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__mf_msg[0U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[0U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[1U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[1U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[2U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[2U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[3U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[3U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[4U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[4U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[5U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[5U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[6U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[6U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[7U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[7U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[8U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[8U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[9U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[9U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[10U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[10U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[11U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[11U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[12U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[12U];
    vlSelfRef.stat_frame_err = vlSelfRef.feed_handler_top__DOT__stat_frame_err;
    vlSelfRef.stat_messages = vlSelfRef.feed_handler_top__DOT__stat_messages;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_len 
        = vlSelfRef.feed_handler_top__DOT__mf_len;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[0U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[1U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[1U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[2U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[2U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[3U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[4U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[5U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[6U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[7U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[8U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[9U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[9U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[10U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[10U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[11U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[11U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[12U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[12U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side 
        = (0x42U == (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
                     >> 0x00000018U));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty 
        = ((((0x0000ff00U & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U]) 
                               | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U] 
                                                 >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_3 = (((QData)((IData)(
                                                       ((((0x0000ff00U 
                                                           & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[2U] 
                                                              >> 0x00000010U)) 
                                                          | (0x000000ffU 
                                                             & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U])) 
                                                         << 0x00000010U) 
                                                        | ((0x0000ff00U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U]) 
                                                           | (0x000000ffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
                                                                 >> 0x00000010U)))))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((((0x0000ff00U 
                                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
                                                               >> 0x00000010U)) 
                                                           | (0x000000ffU 
                                                              & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U])) 
                                                          << 0x00000010U) 
                                                         | ((0x0000ff00U 
                                                             & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U]) 
                                                            | (0x000000ffU 
                                                               & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
                                                                  >> 0x00000010U)))))));
    __VdfgRegularize_h6e95ff9d_0_0 = ((0x00ff0000U 
                                       & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                               >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((0x00ff0000U 
                                       & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
                                               >> 0x00000010U))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type 
        = (0x000000ffU & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref 
        = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref 
        = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty 
        = ((__VdfgRegularize_h6e95ff9d_0_0 << 8U) | 
           (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
            >> 0x00000018U));
    __VdfgRegularize_h6e95ff9d_0_1 = ((0xff000000U 
                                       & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U]) 
                                      | __VdfgRegularize_h6e95ff9d_0_0);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price 
        = ((__VdfgRegularize_h6e95ff9d_0_2 << 8U) | 
           (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
            >> 0x00000018U));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_price 
        = ((0xff000000U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U]) 
           | __VdfgRegularize_h6e95ff9d_0_2);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_new_ref 
        = (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_1)) 
            << 0x00000020U) | (QData)((IData)(((((0x0000ff00U 
                                                  & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                                     >> 0x00000010U)) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U])) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U]) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
                                                        >> 0x00000010U)))))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty 
        = __VdfgRegularize_h6e95ff9d_0_1;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_ops;
    __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_ops = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_out_of_band;
    __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_out_of_band = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_subpenny;
    __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_subpenny = 0;
    // Body
    __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_ops 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_ops;
    __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_subpenny 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_subpenny;
    __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_out_of_band 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_out_of_band;
    if (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rst) {
        __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_ops = 0U;
        __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_subpenny = 0U;
        __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_out_of_band = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_seq = 0ULL;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_side = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_qty = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_price = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_op = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_locate = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick_ok = 0U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_new_ref = 0ULL;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_ref = 0ULL;
    } else if (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_valid) {
        if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c))) {
            __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_ops 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_ops);
        }
        if (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__subpenny_c) {
            __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_subpenny 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_subpenny);
        }
        if (((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price) 
             & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band)))) {
            __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_out_of_band 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_out_of_band);
        }
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_seq 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_seq;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_side 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_qty 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_price 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_op 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__tick_c;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_locate 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__locate;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick_ok 
            = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band) 
               & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__subpenny_c)));
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_new_ref 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_ref 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c;
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_valid 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rst))) 
           && ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_valid) 
               & (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_ops 
        = __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_ops;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_subpenny 
        = __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_subpenny;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_out_of_band 
        = __Vdly__feed_handler_top__DOT__u_decode__DOT__stat_out_of_band;
    vlSelfRef.feed_handler_top__DOT__stat_ops = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_ops;
    vlSelfRef.feed_handler_top__DOT__stat_subpenny 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_subpenny;
    vlSelfRef.feed_handler_top__DOT__stat_out_of_band 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_out_of_band;
    vlSelfRef.feed_handler_top__DOT__dc_seq = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__dc_side = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_side;
    vlSelfRef.feed_handler_top__DOT__dc_qty = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_qty;
    vlSelfRef.feed_handler_top__DOT__dc_price = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_price;
    vlSelfRef.feed_handler_top__DOT__dc_op = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_op;
    vlSelfRef.feed_handler_top__DOT__dc_tick = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick;
    vlSelfRef.feed_handler_top__DOT__dc_locate = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_locate;
    vlSelfRef.feed_handler_top__DOT__dc_valid = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__dc_tick_ok = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick_ok;
    vlSelfRef.feed_handler_top__DOT__dc_new_ref = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_new_ref;
    vlSelfRef.feed_handler_top__DOT__dc_ref = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_ref;
    vlSelfRef.stat_ops = vlSelfRef.feed_handler_top__DOT__stat_ops;
    vlSelfRef.stat_subpenny = vlSelfRef.feed_handler_top__DOT__stat_subpenny;
    vlSelfRef.stat_out_of_band = vlSelfRef.feed_handler_top__DOT__stat_out_of_band;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__dc_seq;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_side 
        = vlSelfRef.feed_handler_top__DOT__dc_side;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_qty 
        = vlSelfRef.feed_handler_top__DOT__dc_qty;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op 
        = vlSelfRef.feed_handler_top__DOT__dc_op;
    vlSelfRef.feed_handler_top__DOT__unused_tick_hi 
        = vlSelfRef.feed_handler_top__DOT__dc_tick;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick 
        = (0x00000fffU & (IData)(vlSelfRef.feed_handler_top__DOT__dc_tick));
    vlSelfRef.feed_handler_top__DOT__ot_valid = ((IData)(vlSelfRef.feed_handler_top__DOT__dc_valid) 
                                                 & ((IData)(vlSelfRef.feed_handler_top__DOT__cfg_locate) 
                                                    == (IData)(vlSelfRef.feed_handler_top__DOT__dc_locate)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick_ok 
        = vlSelfRef.feed_handler_top__DOT__dc_tick_ok;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref 
        = vlSelfRef.feed_handler_top__DOT__dc_new_ref;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref 
        = vlSelfRef.feed_handler_top__DOT__dc_ref;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__ot_valid;
}

extern const VlWide<128>/*4095:0*/ Vtop__ConstPool__CONST_h6e0f3f36_0;

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_updates;
    __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_updates = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_underflow;
    __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_underflow = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_updates 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_updates;
    __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_underflow 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_bid));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_ask));
    if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_tick = 0U;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_tick = 0U;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_seq = 0ULL;
    } else {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_tick 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_ask_tick;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_tick 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_bid_tick;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_seq 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_seq;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_valid 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_done));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_occupied 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_side)
                      ? (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map
                         [((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick) 
                           >> 5U)] >> (0x0000001fU 
                                       & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick)))
                      : (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map
                         [((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick) 
                           >> 5U)] >> (0x0000001fU 
                                       & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick))))));
    if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_valid = 0U;
        VL_ASSIGN_W(4096, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map, Vtop__ConstPool__CONST_h6e0f3f36_0);
        VL_ASSIGN_W(4096, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map, Vtop__ConstPool__CONST_h6e0f3f36_0);
        __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_updates = 0U;
        __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_underflow = 0U;
    } else if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_valid = 1U;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_side 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_tick 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
        __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_updates 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_updates);
        if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow) {
            __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_underflow 
                = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_underflow);
        }
        if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side) {
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map[((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick) 
                                                                     >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick)))) 
                    & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map
                    [((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick) 
                      >> 5U)]) | ((0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty) 
                                  << (0x0000001fU & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick))));
        } else {
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map[((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick) 
                                                                     >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick)))) 
                    & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map
                    [((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick) 
                      >> 5U)]) | ((0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty) 
                                  << (0x0000001fU & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick))));
        }
    } else {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_valid = 0U;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_side 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_tick 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    }
    if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst)))) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_qty;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_add;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_qty 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_seq 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_seq;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_seq 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_seq;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_side;
    }
    vlSelfRef.feed_handler_top__DOT__pl_ask_tick = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_tick;
    vlSelfRef.feed_handler_top__DOT__pl_bid_tick = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_tick;
    vlSelfRef.feed_handler_top__DOT__pl_bid_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid;
    vlSelfRef.feed_handler_top__DOT__pl_ask_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid;
    vlSelfRef.feed_handler_top__DOT__pl_bbo_seq = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_seq;
    vlSelfRef.feed_handler_top__DOT__pl_bbo_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_valid;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_done 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_done));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_updates 
        = __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_updates;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_underflow 
        = __Vdly__feed_handler_top__DOT__u_levels__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_done 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_done));
    vlSelfRef.feed_handler_top__DOT__pl_updates = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_updates;
    vlSelfRef.feed_handler_top__DOT__stat_underflow 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_underflow;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap[__Vilp1] 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000007fU)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap[__Vilp2] 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid 
        = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst))) 
           && (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_valid));
    vlSelfRef.stat_underflow = vlSelfRef.feed_handler_top__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any 
        = (0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0U;
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 1U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout = 0x3fU;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__15__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp_bits 
        = (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                            [(((IData)(0x0000003fU) 
                               + (0x00000fffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
                                                 << 6U))) 
                              >> 5U)])) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                             [(0x0000007eU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
                                              << 1U))])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp_bits;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0U;
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 1U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout = 0x3fU;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__16__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any 
        = (0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0U;
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout = 0U;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__13__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp_bits 
        = (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                            [(((IData)(0x0000003fU) 
                               + (0x00000fffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
                                                 << 6U))) 
                              >> 5U)])) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                             [(0x0000007eU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
                                              << 1U))])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp_bits;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0U;
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x3aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x39U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x38U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x37U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x36U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x35U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x34U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x33U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x32U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x31U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x30U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x2aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x29U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x28U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x27U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x26U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x25U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x24U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x23U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x22U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x21U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x20U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x1aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x19U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x18U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x17U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x16U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x15U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x14U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x13U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x12U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x11U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x10U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0fU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0eU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0dU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0cU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0bU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 0x0aU)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 9U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 8U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 7U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 6U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 5U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 4U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 3U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 2U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v 
                       >> 1U)))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__v))) {
        __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout = 0U;
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__14__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side) 
           & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side)) 
           & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_bid 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_bid_tick 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_ask 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_ask_tick 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_bid_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_ask_tick;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx = 0;
    SData/*15:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n = 0;
    CData/*0:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok = 0;
    CData/*0:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_packets;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_packets = 0;
    IData/*31:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_dropped;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_dropped = 0;
    CData/*7:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__emit_start;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__emit_start = 0;
    SData/*15:0*/ __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_total;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_total = 0;
    CData/*7:0*/ __VdlyVal__feed_handler_top__DOT__u_hdr__DOT__hb__v0;
    __VdlyVal__feed_handler_top__DOT__u_hdr__DOT__hb__v0 = 0;
    CData/*6:0*/ __VdlyDim0__feed_handler_top__DOT__u_hdr__DOT__hb__v0;
    __VdlyDim0__feed_handler_top__DOT__u_hdr__DOT__hb__v0 = 0;
    // Body
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flush_pend;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_packets 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_packets;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_dropped 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_dropped;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__emit_start 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emit_start;
    __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_total 
        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_total;
    if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__rst) {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data = 0ULL;
    } else if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid) {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data 
            = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata;
    }
    if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__rst) {
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tdata = 0ULL;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_sequence = 0ULL;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_count = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_packets = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_dropped = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__emit_start = 0U;
        __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_total = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pay_len_q = 0U;
    } else {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid = 0U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast = 0U;
        if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flush_pend) {
            __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend = 0U;
            vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tdata 
                = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flushed;
            vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep 
                = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_keep;
            vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid = 1U;
            vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast = 1U;
        }
        if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid) {
            if ((0x10U > (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx))) {
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b)) {
                    __VdlyVal__feed_handler_top__DOT__u_hdr__DOT__hb__v0 
                        = (0x000000ffU & (IData)((vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata 
                                                  >> 
                                                  (0x0000003fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b)))));
                    __VdlyDim0__feed_handler_top__DOT__u_hdr__DOT__hb__v0 
                        = (0x0000007fU & (VL_MULS_III(32, (IData)(8U), (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx)) 
                                          + vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b));
                    vlSelfRef.__VdlyCommitQueuefeed_handler_top__DOT__u_hdr__DOT__hb.enqueue(__VdlyVal__feed_handler_top__DOT__u_hdr__DOT__hb__v0, (IData)(__VdlyDim0__feed_handler_top__DOT__u_hdr__DOT__hb__v0));
                    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__unnamedblk1__DOT__b);
                }
            }
            if ((4U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx))) {
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_ipv4) 
                       & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_udp));
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off 
                    = (7U & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off));
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pay_len_q 
                    = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_len;
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_total 
                    = (0x00001fffU & (((IData)(7U) 
                                       + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_len)) 
                                      >> 3U));
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__emit_start 
                    = (0x000000ffU & ((0U == (7U & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off)))
                                       ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off) 
                                          >> 3U) : 
                                      ((IData)(1U) 
                                       + ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off) 
                                          >> 3U))));
            }
            if (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok) 
                 & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx) 
                    == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emit_start)))) {
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_sequence 
                    = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_seq;
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_count 
                    = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_cnt;
            }
            if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__do_emit) {
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tdata 
                    = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__realigned;
                vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid = 1U;
                if (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n) 
                     == (0x0000ffffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_total) 
                                        - (IData)(1U))))) {
                    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep 
                        = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_keep;
                    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast = 1U;
                } else {
                    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep = 0xffU;
                }
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n)));
            }
            if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tlast) {
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx = 0U;
                if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok) {
                    __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_packets 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_packets);
                    if (((0x0000ffffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n) 
                                         + ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__do_emit)
                                             ? 1U : 0U))) 
                         < (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_total))) {
                        __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend = 1U;
                    }
                } else {
                    __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_dropped 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_dropped);
                }
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n = 0U;
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok = 0U;
            } else {
                __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx)));
            }
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flush_pend 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__flush_pend;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_packets 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_packets;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_dropped 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__stat_dropped;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__beat_idx;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_n;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__pkt_ok;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emit_start 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__emit_start;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_total 
        = __Vdly__feed_handler_top__DOT__u_hdr__DOT__out_total;
    vlSelfRef.__VdlyCommitQueuefeed_handler_top__DOT__u_hdr__DOT__hb.commit(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb);
    vlSelfRef.feed_handler_top__DOT__hp_count = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_count;
    vlSelfRef.feed_handler_top__DOT__hp_seq = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_sequence;
    vlSelfRef.feed_handler_top__DOT__stat_packets = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_packets;
    vlSelfRef.feed_handler_top__DOT__stat_dropped = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_dropped;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes 
        = (7U & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pay_len_q));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__keep_shift 
        = ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes))
            ? 0U : (0x0000000fU & ((IData)(8U) - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_keep 
        = (0xffU >> (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__keep_shift));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__do_emit 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok) 
              & (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx) 
                  >= (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emit_start)) 
                 & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_n) 
                    < (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_total)))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off) 
           << 3U);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_hi 
        = (0x0000007fU & ((IData)(0x40U) - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__realigned 
        = ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off))
            ? vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata
            : (VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo)) 
               | VL_SHIFTL_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_hi))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flushed 
        = VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo));
    vlSelfRef.feed_handler_top__DOT__hp_tlast = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[12U]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[13U]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__vlan_tagged 
        = (0x8100U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer));
    if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__vlan_tagged) {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off = 0x12U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner 
            = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[16U]) 
                << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[17U]);
    } else {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off = 0x0eU;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner 
            = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer;
    }
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_ipv4 
        = (0x0800U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes 
        = (0x0000003cU & (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                          [(0x0000007fU & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off))] 
                          << 2U));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_total_len 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                    [(0x0000007fU & ((IData)(2U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(3U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_udp 
        = (0x11U == vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(9U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__udp_off 
        = (0x000000ffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off) 
                          + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off 
        = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__udp_off)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off 
        = (0x000000ffU & ((IData)(0x14U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_len 
        = (0x0000ffffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_total_len) 
                            - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes)) 
                           - (IData)(8U)) - (IData)(0x0014U)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_seq 
        = (((QData)((IData)((((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                        [(0x0000007fU 
                                          & ((IData)(0x0aU) 
                                             + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                               [(0x0000007fU & ((IData)(0x0bU) 
                                                + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                              << 0x00000010U) | (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                          [
                                                          (0x0000007fU 
                                                           & ((IData)(0x0cU) 
                                                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                  << 8U) 
                                                 | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                 [(0x0000007fU 
                                                   & ((IData)(0x0dU) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))])))) 
            << 0x00000020U) | (QData)((IData)((((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                          [
                                                          (0x0000007fU 
                                                           & ((IData)(0x0eU) 
                                                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                  << 8U) 
                                                 | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                 [(0x0000007fU 
                                                   & ((IData)(0x0fU) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                           [
                                                           (0x0000007fU 
                                                            & ((IData)(0x10U) 
                                                               + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                   << 8U) 
                                                  | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(0x11U) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))])))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_cnt 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                    [(0x0000007fU & ((IData)(0x12U) 
                                     + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(0x13U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]);
    vlSelfRef.feed_handler_top__DOT__hp_tdata = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tdata;
    vlSelfRef.feed_handler_top__DOT__hp_tkeep = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep;
    vlSelfRef.feed_handler_top__DOT__hp_tvalid = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_sequence 
        = vlSelfRef.feed_handler_top__DOT__hp_seq;
    vlSelfRef.stat_packets = vlSelfRef.feed_handler_top__DOT__stat_packets;
    vlSelfRef.stat_dropped = vlSelfRef.feed_handler_top__DOT__stat_dropped;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast 
        = vlSelfRef.feed_handler_top__DOT__hp_tlast;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata 
        = vlSelfRef.feed_handler_top__DOT__hp_tdata;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tkeep 
        = vlSelfRef.feed_handler_top__DOT__hp_tkeep;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid 
        = vlSelfRef.feed_handler_top__DOT__hp_tvalid;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes 
            = (0x0000000fU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes) 
                              + (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tkeep) 
                                       >> (7U & vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_a = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)) {
        if ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
             [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][3U] 
             & ((0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                           [
                                                           (7U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][2U])) 
                                           << 0x00000013U) 
                                          | ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                             [
                                                             (7U 
                                                              & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][1U])) 
                                             >> 0x0000000dU))) 
                == (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref 
                    >> 0x0eU)))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a 
                = (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w);
        }
        if ((1U & (~ vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                   [(7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w))][3U]))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_a 
                = (7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w));
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w);
    }
    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_way 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder 
            = (1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                     [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][2U] 
                     >> 0x0000001fU));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick 
            = (0x00000fffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
               [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][1U]);
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side 
            = (1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                     [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][1U] 
                     >> 0x0000000cU));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
            [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a][0U];
    } else {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_way 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_a;
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder) 
                     >> (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick 
            = (0x00000fffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_tick
               [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a]);
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side) 
                     >> (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty
            [vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a];
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
        = ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty 
            > vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty)
            ? vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty
            : vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty);
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy 
            = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy)) 
               | (0x0000ffffU & ((1U & (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                                         >> (0x0000000fU 
                                             & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)) 
                                        & (~ ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) 
                                                & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a))) 
                                               & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)) 
                                              & ((0x0000000fU 
                                                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k) 
                                                 == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)))))) 
                                 << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) {
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy) 
              >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) 
             & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref
                [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)] 
                == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_b 
                = (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k);
        }
        if ((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy) 
                      >> (0x0000000fU & ((IData)(0x0fU) 
                                         - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)))))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx 
                = (0x0000000fU & ((IData)(0x0fU) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k));
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a) 
           == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b)) 
               | (0x00ffU & ((1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                    [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][3U] 
                                    & (~ ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) 
                                            & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set)) 
                                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a)) 
                                          & ((7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w) 
                                             == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a)))))) 
                             << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_b = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)) {
        if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b) 
              >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)) 
             & ((0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                                           [
                                                           (7U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][2U])) 
                                           << 0x00000013U) 
                                          | ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                                             [
                                                             (7U 
                                                              & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][1U])) 
                                             >> 0x0000000dU))) 
                == (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                    >> 0x0eU)))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_b 
                = (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w);
        }
        if ((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__valid_b) 
                      >> (7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)))))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok = 1U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_b 
                = (7U & ((IData)(7U) - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w));
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side)) 
                    << 0x0000002cU) | (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty)))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U] 
        = (((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                     >> 0x0000000eU)) << 0x0000000dU) 
           | (IData)(((((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side)) 
                        << 0x0000002cU) | (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick)) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty)))) 
                      >> 0x00000020U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U] 
        = ((0x80000000U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U]) 
           | (((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                        >> 0x0000000eU)) >> 0x00000013U) 
              | ((IData)(((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                           >> 0x0000000eU) >> 0x00000020U)) 
                 << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U] 
        = ((0x7fffffffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U]) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
              << 0x0000001fU));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U] 
        = (1U & (1U | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
                       >> 1U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_st 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_a)
            : (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_st 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_idx_b)
            : (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_idx));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
           | ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)) 
              & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_st 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set)) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a) 
              | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_ok 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_st));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_way 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_b)
            : (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_way_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b) 
              | ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b)) 
                 & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_st 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a) 
            & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set))) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b) 
              | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_ok 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_st));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__q 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__tk 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__sd 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__ld 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[0U] 
                    = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__sd)) 
                                << 0x0000002cU) | (
                                                   ((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__tk)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__q)))));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[1U] 
                    = (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                                 >> 0x0eU)) << 0x0000000dU) 
                       | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__sd)) 
                                    << 0x0000002cU) 
                                   | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__tk)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__q)))) 
                                  >> 0x00000020U)));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U] 
                    = ((0x80000000U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U]) 
                       | (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                                    >> 0x0eU)) >> 0x00000013U) 
                          | ((IData)(((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__r 
                                       >> 0x0eU) >> 0x00000020U)) 
                             << 0x0000000dU)));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U] 
                    = ((0x7fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U]) 
                       | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__ld) 
                          << 0x0000001fU));
                vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[3U] 
                    = (1U & (1U | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__ld) 
                                   >> 1U)));
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[0U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[1U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[2U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U] 
                    = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__7__Vfuncout[3U];
            } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) {
                if ((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
                     >= vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty)) {
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[0U] = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[1U] = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[2U] = 0U;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[3U] = 0U;
                } else {
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__q 
                        = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
                           - vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty);
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__tk 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick;
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__sd 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side;
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
                    vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__ld 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder;
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[0U] 
                        = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__sd)) 
                                    << 0x0000002cU) 
                                   | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__tk)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__q)))));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[1U] 
                        = (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                                     >> 0x0eU)) << 0x0000000dU) 
                           | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__sd)) 
                                        << 0x0000002cU) 
                                       | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__tk)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__q)))) 
                                      >> 0x00000020U)));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U] 
                        = ((0x80000000U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U]) 
                           | (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                                        >> 0x0eU)) 
                               >> 0x00000013U) | ((IData)(
                                                          ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__r 
                                                            >> 0x0eU) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000dU)));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U] 
                        = ((0x7fffffffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U]) 
                           | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__ld) 
                              << 0x0000001fU));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[3U] 
                        = (1U & (1U | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__8__ld) 
                                       >> 1U)));
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[0U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[0U];
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[1U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[1U];
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[2U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U];
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[3U] 
                        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[3U];
                }
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[0U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[1U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[2U];
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U] 
                    = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCond_1[3U];
            }
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
            if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add)))) {
                if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red)))) {
                    if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del)))) {
                        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
                            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set) {
                                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we 
                                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                                       | (0x00ffU & 
                                          ((IData)(1U) 
                                           << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_way))));
                            }
                        }
                    }
                }
            }
        } else {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
        }
    } else {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U];
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we = 0U;
    if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we = 0xffU;
    } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_to_set) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_way))));
            }
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))));
            }
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))));
            }
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) {
                vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                    = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))));
            }
            if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_to_set) {
                if ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
                      & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set)) 
                     & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_way) 
                        == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a)))) {
                    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_way_a))) 
                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we));
                }
            }
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 7U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 6U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 5U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 4U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 3U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 2U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 1U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we 
        = (1U & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 7U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 6U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 5U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 4U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 3U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 2U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 1U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we 
        = (1U & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we));
}
