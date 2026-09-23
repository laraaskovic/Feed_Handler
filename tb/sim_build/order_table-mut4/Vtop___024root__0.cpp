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
                                                        ((((IData)(vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.order_table__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__clk__0 
            = vlSelfRef.order_table__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk;
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
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
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
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__1(vlSelf);
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__2(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr 
                        = vlSelfRef.order_table__DOT__b_addr;
                    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr 
                        = vlSelfRef.order_table__DOT__a_addr;
                    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr 
                        = vlSelfRef.order_table__DOT__b_addr;
                    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr 
                        = vlSelfRef.order_table__DOT__a_addr;
                }
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_comb__TOP__0(vlSelf);
            }
        }
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__0__Vfuncout;
    __Vfunc_order_table__DOT__lowest_way__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__0__v;
    __Vfunc_order_table__DOT__lowest_way__0__v = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__1__Vfuncout;
    __Vfunc_order_table__DOT__lowest_way__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__1__v;
    __Vfunc_order_table__DOT__lowest_way__1__v = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_st__2__Vfuncout;
    __Vfunc_order_table__DOT__lowest_st__2__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_st__2__v;
    __Vfunc_order_table__DOT__lowest_st__2__v = 0;
    VlWide<4>/*106:0*/ __Vfunc_order_table__DOT__pack_entry__3__Vfuncout;
    VL_ZERO_W(107, __Vfunc_order_table__DOT__pack_entry__3__Vfuncout);
    CData/*0:0*/ __Vfunc_order_table__DOT__pack_entry__3__ld;
    __Vfunc_order_table__DOT__pack_entry__3__ld = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__pack_entry__3__r;
    __Vfunc_order_table__DOT__pack_entry__3__r = 0;
    CData/*0:0*/ __Vfunc_order_table__DOT__pack_entry__3__sd;
    __Vfunc_order_table__DOT__pack_entry__3__sd = 0;
    SData/*11:0*/ __Vfunc_order_table__DOT__pack_entry__3__tk;
    __Vfunc_order_table__DOT__pack_entry__3__tk = 0;
    IData/*31:0*/ __Vfunc_order_table__DOT__pack_entry__3__q;
    __Vfunc_order_table__DOT__pack_entry__3__q = 0;
    CData/*3:0*/ __Vfunc_order_table__DOT__hash_idx__5__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__5__r;
    __Vfunc_order_table__DOT__hash_idx__5__r = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__5__hi;
    __Vfunc_order_table__DOT__hash_idx__5__hi = 0;
    CData/*3:0*/ __Vfunc_order_table__DOT__hash_idx__7__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__7__r;
    __Vfunc_order_table__DOT__hash_idx__7__r = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__7__hi;
    __Vfunc_order_table__DOT__hash_idx__7__hi = 0;
    // Body
    vlSelfRef.order_table__DOT__rst = vlSelfRef.rst;
    vlSelfRef.order_table__DOT__s_side = vlSelfRef.s_side;
    vlSelfRef.order_table__DOT__s_qty = vlSelfRef.s_qty;
    vlSelfRef.order_table__DOT__s_tick = vlSelfRef.s_tick;
    vlSelfRef.order_table__DOT__s_tick_ok = vlSelfRef.s_tick_ok;
    vlSelfRef.order_table__DOT__s_seq = vlSelfRef.s_seq;
    vlSelfRef.m_valid = vlSelfRef.order_table__DOT__m_valid;
    vlSelfRef.m_side = vlSelfRef.order_table__DOT__m_side;
    vlSelfRef.m_tick = vlSelfRef.order_table__DOT__m_tick;
    vlSelfRef.m_add = vlSelfRef.order_table__DOT__m_add;
    vlSelfRef.m_qty = vlSelfRef.order_table__DOT__m_qty;
    vlSelfRef.m_done = vlSelfRef.order_table__DOT__m_done;
    vlSelfRef.m_seq = vlSelfRef.order_table__DOT__m_seq;
    vlSelfRef.stat_collisions = vlSelfRef.order_table__DOT__stat_collisions;
    vlSelfRef.stat_missing = vlSelfRef.order_table__DOT__stat_missing;
    vlSelfRef.stat_overrun = vlSelfRef.order_table__DOT__stat_overrun;
    vlSelfRef.stat_stash_peak = vlSelfRef.order_table__DOT__stat_stash_peak;
    vlSelfRef.ready = vlSelfRef.order_table__DOT__ready;
    vlSelfRef.order_table__DOT__st_count = 0U;
    vlSelfRef.order_table__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk9__DOT__k)) {
        vlSelfRef.order_table__DOT__st_count = (vlSelfRef.order_table__DOT__st_count 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.order_table__DOT__st_valid) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk9__DOT__k))));
        vlSelfRef.order_table__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk9__DOT__k);
    }
    vlSelfRef.order_table__DOT__s_valid = vlSelfRef.s_valid;
    vlSelfRef.order_table__DOT__s_op = vlSelfRef.s_op;
    vlSelfRef.order_table__DOT__clk = vlSelfRef.clk;
    vlSelfRef.order_table__DOT__s_new_ref = vlSelfRef.s_new_ref;
    vlSelfRef.order_table__DOT__s_ref = vlSelfRef.s_ref;
    vlSelfRef.order_table__DOT__is_del = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (3U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__same_set = ((IData)(vlSelfRef.order_table__DOT__idx_a) 
                                            == (IData)(vlSelfRef.order_table__DOT__idx_b));
    vlSelfRef.order_table__DOT__is_add = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (1U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__is_red = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (2U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__rd_b[0U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.order_table__DOT__rd_b[0U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.order_table__DOT__rd_b[0U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.order_table__DOT__rd_b[0U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.order_table__DOT__rd_b[1U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.order_table__DOT__rd_b[1U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.order_table__DOT__rd_b[1U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.order_table__DOT__rd_b[1U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.order_table__DOT__is_rep = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (4U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__rd_a[0U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.order_table__DOT__rd_a[0U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.order_table__DOT__rd_a[0U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.order_table__DOT__rd_a[0U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.order_table__DOT__rd_a[1U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.order_table__DOT__rd_a[1U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.order_table__DOT__rd_a[1U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.order_table__DOT__rd_a[1U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.order_table__DOT__accept = ((IData)(vlSelfRef.order_table__DOT__s_valid) 
                                          & ((1U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.order_table__DOT__s_op))));
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.order_table__DOT__clk;
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.order_table__DOT__clk;
    __Vfunc_order_table__DOT__hash_idx__7__r = vlSelfRef.order_table__DOT__s_new_ref;
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout = 0;
    __Vfunc_order_table__DOT__hash_idx__7__hi = (__Vfunc_order_table__DOT__hash_idx__7__r 
                                                 >> 4U);
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((0x0eU & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_order_table__DOT__hash_idx__7__r) 
                    ^ VL_REDXOR_64((0x09e3779b97f4a7c1ULL 
                                    & __Vfunc_order_table__DOT__hash_idx__7__hi)))));
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((0x0dU & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_order_table__DOT__hash_idx__7__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0bf58476d1ce4e5bULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__7__hi))) 
                    << 1U)));
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((0x0bU & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_order_table__DOT__hash_idx__7__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x094d049bb133111eULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__7__hi))) 
                    << 2U)));
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((7U & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_order_table__DOT__hash_idx__7__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x0d6e8feb86659fd9ULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__7__hi))) 
                    << 3U)));
    vlSelfRef.order_table__DOT__b_addr = __Vfunc_order_table__DOT__hash_idx__7__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__5__r = vlSelfRef.order_table__DOT__s_ref;
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout = 0;
    __Vfunc_order_table__DOT__hash_idx__5__hi = (__Vfunc_order_table__DOT__hash_idx__5__r 
                                                 >> 4U);
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((0x0eU & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_order_table__DOT__hash_idx__5__r) 
                    ^ VL_REDXOR_64((0x09e3779b97f4a7c1ULL 
                                    & __Vfunc_order_table__DOT__hash_idx__5__hi)))));
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((0x0dU & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_order_table__DOT__hash_idx__5__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0bf58476d1ce4e5bULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__5__hi))) 
                    << 1U)));
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((0x0bU & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_order_table__DOT__hash_idx__5__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x094d049bb133111eULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__5__hi))) 
                    << 2U)));
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((7U & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_order_table__DOT__hash_idx__5__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x0d6e8feb86659fd9ULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__5__hi))) 
                    << 3U)));
    vlSelfRef.order_table__DOT__a_addr = __Vfunc_order_table__DOT__hash_idx__5__Vfuncout;
    vlSelfRef.order_table__DOT__unnamedblk6__DOT__w = 0U;
    if ((0U != (IData)(vlSelfRef.order_table__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
            vlSelfRef.order_table__DOT__b_addr = vlSelfRef.order_table__DOT__idx_b;
        }
    }
    if ((0U == (IData)(vlSelfRef.order_table__DOT__state))) {
        vlSelfRef.order_table__DOT__a_addr = vlSelfRef.order_table__DOT__init_idx;
    } else if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
        vlSelfRef.order_table__DOT__a_addr = vlSelfRef.order_table__DOT__idx_a;
    }
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)) {
        vlSelfRef.order_table__DOT__vld_b = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))) 
                                              & (IData)(vlSelfRef.order_table__DOT__vld_b)) 
                                             | (3U 
                                                & ((1U 
                                                    & (vlSelfRef.order_table__DOT__rd_b
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][3U] 
                                                       >> 0x0000000aU)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))));
        vlSelfRef.order_table__DOT__hitv_b = (((~ ((IData)(1U) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))) 
                                               & (IData)(vlSelfRef.order_table__DOT__hitv_b)) 
                                              | (3U 
                                                 & ((((IData)(vlSelfRef.order_table__DOT__vld_b) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)) 
                                                     & ((0x0fffffffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.order_table__DOT__rd_b
                                                                             [
                                                                             (1U 
                                                                              & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][3U])) 
                                                             << 0x00000033U) 
                                                            | (((QData)((IData)(vlSelfRef.order_table__DOT__rd_b
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][2U])) 
                                                                << 0x00000013U) 
                                                               | ((QData)((IData)(vlSelfRef.order_table__DOT__rd_b
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][1U])) 
                                                                  >> 0x0000000dU)))) 
                                                        == 
                                                        (vlSelfRef.order_table__DOT__op_new_ref 
                                                         >> 4U))) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))));
        vlSelfRef.order_table__DOT__unnamedblk6__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk6__DOT__w);
    }
    __Vfunc_order_table__DOT__lowest_way__1__v = (3U 
                                                  & (~ (IData)(vlSelfRef.order_table__DOT__vld_b)));
    __Vfunc_order_table__DOT__lowest_way__1__Vfuncout 
        = ((IData)(__Vfunc_order_table__DOT__lowest_way__1__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_order_table__DOT__lowest_way__1__v))));
    vlSelfRef.order_table__DOT__freev_b = __Vfunc_order_table__DOT__lowest_way__1__Vfuncout;
    vlSelfRef.order_table__DOT__hit_b = (0U != (IData)(vlSelfRef.order_table__DOT__hitv_b));
    vlSelfRef.order_table__DOT__free_b_ok = (0U != 
                                             (3U & 
                                              (~ (IData)(vlSelfRef.order_table__DOT__vld_b))));
    vlSelfRef.order_table__DOT__unnamedblk2__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)) {
        vlSelfRef.order_table__DOT__vld_a = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))) 
                                              & (IData)(vlSelfRef.order_table__DOT__vld_a)) 
                                             | (3U 
                                                & ((1U 
                                                    & (vlSelfRef.order_table__DOT__rd_a
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][3U] 
                                                       >> 0x0000000aU)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))));
        vlSelfRef.order_table__DOT__hitv_a = (((~ ((IData)(1U) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))) 
                                               & (IData)(vlSelfRef.order_table__DOT__hitv_a)) 
                                              | (3U 
                                                 & ((((IData)(vlSelfRef.order_table__DOT__vld_a) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)) 
                                                     & ((0x0fffffffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                                             [
                                                                             (1U 
                                                                              & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][3U])) 
                                                             << 0x00000033U) 
                                                            | (((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][2U])) 
                                                                << 0x00000013U) 
                                                               | ((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][1U])) 
                                                                  >> 0x0000000dU)))) 
                                                        == 
                                                        (vlSelfRef.order_table__DOT__op_ref 
                                                         >> 4U))) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))));
        vlSelfRef.order_table__DOT__unnamedblk2__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk2__DOT__w);
    }
    vlSelfRef.order_table__DOT__unnamedblk3__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk3__DOT__k)) {
        vlSelfRef.order_table__DOT__shv_a = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k))) 
                                              & (IData)(vlSelfRef.order_table__DOT__shv_a)) 
                                             | (3U 
                                                & ((((IData)(vlSelfRef.order_table__DOT__st_valid) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k)) 
                                                    & (vlSelfRef.order_table__DOT__st_ref
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k)] 
                                                       == vlSelfRef.order_table__DOT__op_ref)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k))));
        vlSelfRef.order_table__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk3__DOT__k);
    }
    __Vfunc_order_table__DOT__lowest_way__0__v = (3U 
                                                  & (~ (IData)(vlSelfRef.order_table__DOT__vld_a)));
    __Vfunc_order_table__DOT__lowest_way__0__Vfuncout 
        = ((IData)(__Vfunc_order_table__DOT__lowest_way__0__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_order_table__DOT__lowest_way__0__v))));
    vlSelfRef.order_table__DOT__freev_a = __Vfunc_order_table__DOT__lowest_way__0__Vfuncout;
    vlSelfRef.order_table__DOT__hit_a = (0U != (IData)(vlSelfRef.order_table__DOT__hitv_a));
    vlSelfRef.order_table__DOT__free_a_ok = (0U != 
                                             (3U & 
                                              (~ (IData)(vlSelfRef.order_table__DOT__vld_a))));
    vlSelfRef.order_table__DOT__sh_a = (0U != (IData)(vlSelfRef.order_table__DOT__shv_a));
    vlSelfRef.order_table__DOT__found_a = ((IData)(vlSelfRef.order_table__DOT__hit_a) 
                                           | (IData)(vlSelfRef.order_table__DOT__sh_a));
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.order_table__DOT__b_addr;
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.order_table__DOT__b_addr;
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.order_table__DOT__a_addr;
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.order_table__DOT__a_addr;
    vlSelfRef.order_table__DOT__e_ladder = 0U;
    vlSelfRef.order_table__DOT__e_side = 0U;
    vlSelfRef.order_table__DOT__e_tick = 0U;
    vlSelfRef.order_table__DOT__e_qty = 0U;
    vlSelfRef.order_table__DOT__take_qty = 0U;
    vlSelfRef.order_table__DOT__st_left = 0U;
    vlSelfRef.order_table__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)) {
        vlSelfRef.order_table__DOT__diff_w[(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
            = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                        [
                                                        (1U 
                                                         & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U])) 
                                        - (QData)((IData)(vlSelfRef.order_table__DOT__op_qty))));
        vlSelfRef.order_table__DOT__empties_w = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))) 
                                                  & (IData)(vlSelfRef.order_table__DOT__empties_w)) 
                                                 | (3U 
                                                    & ((1U 
                                                        & ((IData)(
                                                                   (vlSelfRef.order_table__DOT__diff_w
                                                                    [
                                                                    (1U 
                                                                     & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
                                                                    >> 0x20U)) 
                                                           | (vlSelfRef.order_table__DOT__rd_a
                                                              [
                                                              (1U 
                                                               & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U] 
                                                              == vlSelfRef.order_table__DOT__op_qty))) 
                                                       << 
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))));
        vlSelfRef.order_table__DOT__take_w[(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
            = ((1U & (IData)((vlSelfRef.order_table__DOT__diff_w
                              [(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
                              >> 0x20U))) ? vlSelfRef.order_table__DOT__rd_a
               [(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U]
                : vlSelfRef.order_table__DOT__op_qty);
        vlSelfRef.order_table__DOT__e_ladder = (1U 
                                                & ((IData)(vlSelfRef.order_table__DOT__e_ladder) 
                                                   | (((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                       >> 
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)) 
                                                      & (vlSelfRef.order_table__DOT__rd_a
                                                         [
                                                         (1U 
                                                          & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][3U] 
                                                         >> 9U))));
        vlSelfRef.order_table__DOT__e_side = (1U & 
                                              ((IData)(vlSelfRef.order_table__DOT__e_side) 
                                               | (((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)) 
                                                  & (vlSelfRef.order_table__DOT__rd_a
                                                     [
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][1U] 
                                                     >> 0x0000000cU))));
        vlSelfRef.order_table__DOT__e_tick = (0x00000fffU 
                                              & ((IData)(vlSelfRef.order_table__DOT__e_tick) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                                   >> 
                                                                   (1U 
                                                                    & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))))) 
                                                    & vlSelfRef.order_table__DOT__rd_a
                                                    [
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][1U])));
        vlSelfRef.order_table__DOT__e_qty = (vlSelfRef.order_table__DOT__e_qty 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                               >> 
                                                               (1U 
                                                                & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))))) 
                                                & vlSelfRef.order_table__DOT__rd_a
                                                [(1U 
                                                  & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U]));
        vlSelfRef.order_table__DOT__take_qty = (vlSelfRef.order_table__DOT__take_qty 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                                  >> 
                                                                  (1U 
                                                                   & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))))) 
                                                   & vlSelfRef.order_table__DOT__take_w
                                                   [
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)]));
        vlSelfRef.order_table__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk4__DOT__w);
    }
    vlSelfRef.order_table__DOT__unnamedblk5__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)) {
        vlSelfRef.order_table__DOT__diff_s[(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
            = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.order_table__DOT__st_qty
                                                        [
                                                        (1U 
                                                         & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)])) 
                                        - (QData)((IData)(vlSelfRef.order_table__DOT__op_qty))));
        vlSelfRef.order_table__DOT__empties_s = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))) 
                                                  & (IData)(vlSelfRef.order_table__DOT__empties_s)) 
                                                 | (3U 
                                                    & ((1U 
                                                        & ((IData)(
                                                                   (vlSelfRef.order_table__DOT__diff_s
                                                                    [
                                                                    (1U 
                                                                     & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
                                                                    >> 0x20U)) 
                                                           | (vlSelfRef.order_table__DOT__st_qty
                                                              [
                                                              (1U 
                                                               & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
                                                              == vlSelfRef.order_table__DOT__op_qty))) 
                                                       << 
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.order_table__DOT__take_s[(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
            = ((1U & (IData)((vlSelfRef.order_table__DOT__diff_s
                              [(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
                              >> 0x20U))) ? vlSelfRef.order_table__DOT__st_qty
               [(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]
                : vlSelfRef.order_table__DOT__op_qty);
        vlSelfRef.order_table__DOT__st_left = (vlSelfRef.order_table__DOT__st_left 
                                               | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                 >> 
                                                                 (1U 
                                                                  & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                  & (IData)(vlSelfRef.order_table__DOT__diff_s
                                                            [
                                                            (1U 
                                                             & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)])));
        vlSelfRef.order_table__DOT__e_ladder = (1U 
                                                & ((IData)(vlSelfRef.order_table__DOT__e_ladder) 
                                                   | (((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                       & (IData)(vlSelfRef.order_table__DOT__st_ladder)) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.order_table__DOT__e_side = (1U & 
                                              ((IData)(vlSelfRef.order_table__DOT__e_side) 
                                               | (((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                   & (IData)(vlSelfRef.order_table__DOT__st_side)) 
                                                  >> 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.order_table__DOT__e_tick = ((IData)(vlSelfRef.order_table__DOT__e_tick) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                >> 
                                                                (1U 
                                                                 & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                 & vlSelfRef.order_table__DOT__st_tick
                                                 [(1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.order_table__DOT__e_qty = (vlSelfRef.order_table__DOT__e_qty 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                               >> 
                                                               (1U 
                                                                & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                & vlSelfRef.order_table__DOT__st_qty
                                                [(1U 
                                                  & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.order_table__DOT__take_qty = (vlSelfRef.order_table__DOT__take_qty 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                  >> 
                                                                  (1U 
                                                                   & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                   & vlSelfRef.order_table__DOT__take_s
                                                   [
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.order_table__DOT__unnamedblk5__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk5__DOT__k);
    }
    vlSelfRef.order_table__DOT__unnamedblk7__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)) {
        vlSelfRef.order_table__DOT__st_busy = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))) 
                                                & (IData)(vlSelfRef.order_table__DOT__st_busy)) 
                                               | (3U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.order_table__DOT__st_valid) 
                                                          >> 
                                                          (1U 
                                                           & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.order_table__DOT__is_rep) 
                                                             & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                >> 
                                                                (1U 
                                                                 & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)))))) 
                                                     << 
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))));
        vlSelfRef.order_table__DOT__shv_b = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))) 
                                              & (IData)(vlSelfRef.order_table__DOT__shv_b)) 
                                             | (3U 
                                                & ((((IData)(vlSelfRef.order_table__DOT__st_busy) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)) 
                                                    & (vlSelfRef.order_table__DOT__st_ref
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)] 
                                                       == vlSelfRef.order_table__DOT__op_new_ref)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))));
        vlSelfRef.order_table__DOT__unnamedblk7__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk7__DOT__k);
    }
    __Vfunc_order_table__DOT__lowest_st__2__v = (3U 
                                                 & (~ (IData)(vlSelfRef.order_table__DOT__st_busy)));
    __Vfunc_order_table__DOT__lowest_st__2__Vfuncout 
        = ((IData)(__Vfunc_order_table__DOT__lowest_st__2__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_order_table__DOT__lowest_st__2__v))));
    vlSelfRef.order_table__DOT__st_freev = __Vfunc_order_table__DOT__lowest_st__2__Vfuncout;
    vlSelfRef.order_table__DOT__sh_b = (0U != (IData)(vlSelfRef.order_table__DOT__shv_b));
    vlSelfRef.order_table__DOT__st_free_ok = (0U != 
                                              (3U & 
                                               (~ (IData)(vlSelfRef.order_table__DOT__st_busy))));
    vlSelfRef.order_table__DOT__b_din[0U] = (IData)(
                                                    (((QData)((IData)(vlSelfRef.order_table__DOT__e_side)) 
                                                      << 0x0000002cU) 
                                                     | (((QData)((IData)(vlSelfRef.order_table__DOT__op_tick)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.order_table__DOT__op_qty)))));
    vlSelfRef.order_table__DOT__b_din[1U] = (((IData)(
                                                      (vlSelfRef.order_table__DOT__op_new_ref 
                                                       >> 4U)) 
                                              << 0x0000000dU) 
                                             | (IData)(
                                                       ((((QData)((IData)(vlSelfRef.order_table__DOT__e_side)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(vlSelfRef.order_table__DOT__op_tick)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.order_table__DOT__op_qty)))) 
                                                        >> 0x00000020U)));
    vlSelfRef.order_table__DOT__b_din[2U] = (((IData)(
                                                      (vlSelfRef.order_table__DOT__op_new_ref 
                                                       >> 4U)) 
                                              >> 0x00000013U) 
                                             | ((IData)(
                                                        ((vlSelfRef.order_table__DOT__op_new_ref 
                                                          >> 4U) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000dU));
    vlSelfRef.order_table__DOT__b_din[3U] = ((0x00000600U 
                                              & vlSelfRef.order_table__DOT__b_din[3U]) 
                                             | (0x000007ffU 
                                                & ((IData)(
                                                           ((vlSelfRef.order_table__DOT__op_new_ref 
                                                             >> 4U) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000013U)));
    vlSelfRef.order_table__DOT__b_din[3U] = ((0x000001ffU 
                                              & vlSelfRef.order_table__DOT__b_din[3U]) 
                                             | (0x000007ffU 
                                                & (0x00000400U 
                                                   | ((IData)(vlSelfRef.order_table__DOT__op_tick_ok) 
                                                      << 9U))));
    __Vfunc_order_table__DOT__pack_entry__3__q = vlSelfRef.order_table__DOT__op_qty;
    __Vfunc_order_table__DOT__pack_entry__3__tk = vlSelfRef.order_table__DOT__op_tick;
    __Vfunc_order_table__DOT__pack_entry__3__sd = vlSelfRef.order_table__DOT__op_side;
    __Vfunc_order_table__DOT__pack_entry__3__r = vlSelfRef.order_table__DOT__op_ref;
    __Vfunc_order_table__DOT__pack_entry__3__ld = vlSelfRef.order_table__DOT__op_tick_ok;
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__sd)) 
                    << 0x0000002cU) | (((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__tk)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__q)))));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[1U] 
        = (((IData)((__Vfunc_order_table__DOT__pack_entry__3__r 
                     >> 4U)) << 0x0000000dU) | (IData)(
                                                       ((((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__sd)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__tk)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__q)))) 
                                                        >> 0x00000020U)));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[2U] 
        = (((IData)((__Vfunc_order_table__DOT__pack_entry__3__r 
                     >> 4U)) >> 0x00000013U) | ((IData)(
                                                        ((__Vfunc_order_table__DOT__pack_entry__3__r 
                                                          >> 4U) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000dU));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U] 
        = ((0x00000600U & __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U]) 
           | (0x000007ffU & ((IData)(((__Vfunc_order_table__DOT__pack_entry__3__r 
                                       >> 4U) >> 0x00000020U)) 
                             >> 0x00000013U)));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U] 
        = ((0x000001ffU & __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U]) 
           | (0x000007ffU & (0x00000400U | ((IData)(__Vfunc_order_table__DOT__pack_entry__3__ld) 
                                            << 9U))));
    vlSelfRef.order_table__DOT__add_entry[0U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[0U];
    vlSelfRef.order_table__DOT__add_entry[1U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[1U];
    vlSelfRef.order_table__DOT__add_entry[2U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[2U];
    vlSelfRef.order_table__DOT__add_entry[3U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U];
    vlSelfRef.order_table__DOT__unnamedblk8__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)) {
        if (vlSelfRef.order_table__DOT__is_add) {
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][0U] 
                = vlSelfRef.order_table__DOT__add_entry[0U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] 
                = vlSelfRef.order_table__DOT__add_entry[1U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][2U] 
                = vlSelfRef.order_table__DOT__add_entry[2U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] 
                = vlSelfRef.order_table__DOT__add_entry[3U];
        } else if (((IData)(vlSelfRef.order_table__DOT__is_red) 
                    & (~ ((IData)(vlSelfRef.order_table__DOT__empties_w) 
                          >> (1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w))))) {
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__q 
                = (IData)(vlSelfRef.order_table__DOT__diff_w
                          [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)]);
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__tk 
                = (0x00000fffU & vlSelfRef.order_table__DOT__rd_a
                   [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U]);
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__sd 
                = (1U & (vlSelfRef.order_table__DOT__rd_a
                         [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] 
                         >> 0x0000000cU));
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                = vlSelfRef.order_table__DOT__op_ref;
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__ld 
                = (1U & (vlSelfRef.order_table__DOT__rd_a
                         [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] 
                         >> 9U));
            VL_ZERO_RESET_W(107, vlSelfRef.order_table__DOT____VlemCall_0__pack_entry);
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__sd)) 
                            << 0x0000002cU) | (((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__tk)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__q)))));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[1U] 
                = (((IData)((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                             >> 4U)) << 0x0000000dU) 
                   | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__sd)) 
                                << 0x0000002cU) | (
                                                   ((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__tk)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__q)))) 
                              >> 0x00000020U)));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[2U] 
                = (((IData)((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                             >> 4U)) >> 0x00000013U) 
                   | ((IData)(((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                                >> 4U) >> 0x00000020U)) 
                      << 0x0000000dU));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U] 
                = ((0x00000600U & vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U]) 
                   | (0x000007ffU & ((IData)(((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                                               >> 4U) 
                                              >> 0x00000020U)) 
                                     >> 0x00000013U)));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U] 
                = ((0x000001ffU & vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U]) 
                   | (0x000007ffU & (0x00000400U | 
                                     ((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__ld) 
                                      << 9U))));
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][0U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[0U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[1U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][2U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[2U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U];
        } else {
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][0U] = 0U;
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] = 0U;
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][2U] = 0U;
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] = 0U;
        }
        vlSelfRef.order_table__DOT__unnamedblk8__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk8__DOT__w);
    }
    vlSelfRef.order_table__DOT__add_wv = ((IData)(vlSelfRef.order_table__DOT__hit_a)
                                           ? (IData)(vlSelfRef.order_table__DOT__hitv_a)
                                           : (((~ (IData)(vlSelfRef.order_table__DOT__sh_a)) 
                                               & (IData)(vlSelfRef.order_table__DOT__free_a_ok))
                                               ? (IData)(vlSelfRef.order_table__DOT__freev_a)
                                               : 0U));
    vlSelfRef.order_table__DOT__add_sv = ((0U != (IData)(vlSelfRef.order_table__DOT__add_wv))
                                           ? 0U : ((IData)(vlSelfRef.order_table__DOT__sh_a)
                                                    ? (IData)(vlSelfRef.order_table__DOT__shv_a)
                                                    : 
                                                   ((IData)(vlSelfRef.order_table__DOT__st_free_ok)
                                                     ? (IData)(vlSelfRef.order_table__DOT__st_freev)
                                                     : 0U)));
    vlSelfRef.order_table__DOT__add_ok = ((0U != (IData)(vlSelfRef.order_table__DOT__add_wv)) 
                                          | (0U != (IData)(vlSelfRef.order_table__DOT__add_sv)));
    vlSelfRef.order_table__DOT__rep_wv = ((IData)(vlSelfRef.order_table__DOT__found_a)
                                           ? ((IData)(vlSelfRef.order_table__DOT__hit_b)
                                               ? (IData)(vlSelfRef.order_table__DOT__hitv_b)
                                               : (((IData)(vlSelfRef.order_table__DOT__same_set) 
                                                   & (IData)(vlSelfRef.order_table__DOT__hit_a))
                                                   ? (IData)(vlSelfRef.order_table__DOT__hitv_a)
                                                   : 
                                                  (((~ (IData)(vlSelfRef.order_table__DOT__sh_b)) 
                                                    & (IData)(vlSelfRef.order_table__DOT__free_b_ok))
                                                    ? (IData)(vlSelfRef.order_table__DOT__freev_b)
                                                    : 0U)))
                                           : 0U);
    vlSelfRef.order_table__DOT__rep_sv = ((1U & ((~ (IData)(vlSelfRef.order_table__DOT__found_a)) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.order_table__DOT__rep_wv))))
                                           ? 0U : ((IData)(vlSelfRef.order_table__DOT__sh_b)
                                                    ? (IData)(vlSelfRef.order_table__DOT__shv_b)
                                                    : 
                                                   ((IData)(vlSelfRef.order_table__DOT__st_free_ok)
                                                     ? (IData)(vlSelfRef.order_table__DOT__st_freev)
                                                     : 0U)));
    vlSelfRef.order_table__DOT__rep_ok = ((0U != (IData)(vlSelfRef.order_table__DOT__rep_wv)) 
                                          | (0U != (IData)(vlSelfRef.order_table__DOT__rep_sv)));
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.order_table__DOT__b_din[0U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.order_table__DOT__b_din[1U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.order_table__DOT__b_din[2U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.order_table__DOT__b_din[3U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.order_table__DOT__b_din[0U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.order_table__DOT__b_din[1U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.order_table__DOT__b_din[2U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.order_table__DOT__b_din[3U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.order_table__DOT__a_din[1U][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.order_table__DOT__a_din[1U][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.order_table__DOT__a_din[1U][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.order_table__DOT__a_din[1U][3U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.order_table__DOT__a_din[0U][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.order_table__DOT__a_din[0U][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.order_table__DOT__a_din[0U][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.order_table__DOT__a_din[0U][3U];
    vlSelfRef.order_table__DOT__b_we = 0U;
    if ((0U != (IData)(vlSelfRef.order_table__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.order_table__DOT__is_add)))) {
                if ((1U & (~ ((IData)(vlSelfRef.order_table__DOT__is_red) 
                              | (IData)(vlSelfRef.order_table__DOT__is_del))))) {
                    if (vlSelfRef.order_table__DOT__is_rep) {
                        vlSelfRef.order_table__DOT__b_we 
                            = vlSelfRef.order_table__DOT__rep_wv;
                    }
                }
            }
        }
    }
    vlSelfRef.order_table__DOT__a_we = 0U;
    if ((0U == (IData)(vlSelfRef.order_table__DOT__state))) {
        vlSelfRef.order_table__DOT__a_we = 3U;
    } else if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
        if (vlSelfRef.order_table__DOT__is_add) {
            vlSelfRef.order_table__DOT__a_we = vlSelfRef.order_table__DOT__add_wv;
        } else if (((IData)(vlSelfRef.order_table__DOT__is_red) 
                    | (IData)(vlSelfRef.order_table__DOT__is_del))) {
            vlSelfRef.order_table__DOT__a_we = vlSelfRef.order_table__DOT__hitv_a;
        } else if (vlSelfRef.order_table__DOT__is_rep) {
            vlSelfRef.order_table__DOT__a_we = ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.order_table__DOT__same_set)
                                                     ? (IData)(vlSelfRef.order_table__DOT__rep_wv)
                                                     : 0U)));
        }
    }
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.order_table__DOT__b_we) 
                 >> 1U));
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we 
        = (1U & (IData)(vlSelfRef.order_table__DOT__b_we));
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.order_table__DOT__a_we) 
                 >> 1U));
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we 
        = (1U & (IData)(vlSelfRef.order_table__DOT__a_we));
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_order_table__DOT__hash_idx__5__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__5__r;
    __Vfunc_order_table__DOT__hash_idx__5__r = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__5__hi;
    __Vfunc_order_table__DOT__hash_idx__5__hi = 0;
    CData/*3:0*/ __Vfunc_order_table__DOT__hash_idx__7__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__7__r;
    __Vfunc_order_table__DOT__hash_idx__7__r = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__7__hi;
    __Vfunc_order_table__DOT__hash_idx__7__hi = 0;
    CData/*3:0*/ __Vfunc_order_table__DOT__hash_idx__10__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__10__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__10__r;
    __Vfunc_order_table__DOT__hash_idx__10__r = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__10__hi;
    __Vfunc_order_table__DOT__hash_idx__10__hi = 0;
    CData/*3:0*/ __Vfunc_order_table__DOT__hash_idx__12__Vfuncout;
    __Vfunc_order_table__DOT__hash_idx__12__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__12__r;
    __Vfunc_order_table__DOT__hash_idx__12__r = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__hash_idx__12__hi;
    __Vfunc_order_table__DOT__hash_idx__12__hi = 0;
    IData/*31:0*/ __Vdly__order_table__DOT__stat_stash_peak;
    __Vdly__order_table__DOT__stat_stash_peak = 0;
    IData/*31:0*/ __Vdly__order_table__DOT__stat_overrun;
    __Vdly__order_table__DOT__stat_overrun = 0;
    CData/*1:0*/ __Vdly__order_table__DOT__state;
    __Vdly__order_table__DOT__state = 0;
    CData/*3:0*/ __Vdly__order_table__DOT__init_idx;
    __Vdly__order_table__DOT__init_idx = 0;
    CData/*0:0*/ __Vdly__order_table__DOT__pend_v;
    __Vdly__order_table__DOT__pend_v = 0;
    IData/*31:0*/ __Vdly__order_table__DOT__stat_collisions;
    __Vdly__order_table__DOT__stat_collisions = 0;
    IData/*31:0*/ __Vdly__order_table__DOT__stat_missing;
    __Vdly__order_table__DOT__stat_missing = 0;
    QData/*63:0*/ __Vdly__order_table__DOT__op_ref;
    __Vdly__order_table__DOT__op_ref = 0;
    QData/*63:0*/ __Vdly__order_table__DOT__op_new_ref;
    __Vdly__order_table__DOT__op_new_ref = 0;
    CData/*0:0*/ __Vdly__order_table__DOT__op_side;
    __Vdly__order_table__DOT__op_side = 0;
    IData/*31:0*/ __Vdly__order_table__DOT__op_qty;
    __Vdly__order_table__DOT__op_qty = 0;
    SData/*11:0*/ __Vdly__order_table__DOT__op_tick;
    __Vdly__order_table__DOT__op_tick = 0;
    CData/*0:0*/ __Vdly__order_table__DOT__op_tick_ok;
    __Vdly__order_table__DOT__op_tick_ok = 0;
    QData/*63:0*/ __Vdly__order_table__DOT__op_seq;
    __Vdly__order_table__DOT__op_seq = 0;
    IData/*31:0*/ __VdlyVal__order_table__DOT__st_qty__v0;
    __VdlyVal__order_table__DOT__st_qty__v0 = 0;
    CData/*0:0*/ __VdlyDim0__order_table__DOT__st_qty__v0;
    __VdlyDim0__order_table__DOT__st_qty__v0 = 0;
    QData/*63:0*/ __VdlyVal__order_table__DOT__st_ref__v0;
    __VdlyVal__order_table__DOT__st_ref__v0 = 0;
    CData/*0:0*/ __VdlyDim0__order_table__DOT__st_ref__v0;
    __VdlyDim0__order_table__DOT__st_ref__v0 = 0;
    SData/*11:0*/ __VdlyVal__order_table__DOT__st_tick__v0;
    __VdlyVal__order_table__DOT__st_tick__v0 = 0;
    CData/*0:0*/ __VdlyDim0__order_table__DOT__st_tick__v0;
    __VdlyDim0__order_table__DOT__st_tick__v0 = 0;
    IData/*31:0*/ __VdlyVal__order_table__DOT__st_qty__v1;
    __VdlyVal__order_table__DOT__st_qty__v1 = 0;
    CData/*0:0*/ __VdlyDim0__order_table__DOT__st_qty__v1;
    __VdlyDim0__order_table__DOT__st_qty__v1 = 0;
    // Body
    __Vdly__order_table__DOT__stat_stash_peak = vlSelfRef.order_table__DOT__stat_stash_peak;
    __Vdly__order_table__DOT__stat_overrun = vlSelfRef.order_table__DOT__stat_overrun;
    __Vdly__order_table__DOT__pend_v = vlSelfRef.order_table__DOT__pend_v;
    __Vdly__order_table__DOT__op_seq = vlSelfRef.order_table__DOT__op_seq;
    __Vdly__order_table__DOT__stat_collisions = vlSelfRef.order_table__DOT__stat_collisions;
    __Vdly__order_table__DOT__stat_missing = vlSelfRef.order_table__DOT__stat_missing;
    __Vdly__order_table__DOT__init_idx = vlSelfRef.order_table__DOT__init_idx;
    __Vdly__order_table__DOT__op_side = vlSelfRef.order_table__DOT__op_side;
    __Vdly__order_table__DOT__op_tick = vlSelfRef.order_table__DOT__op_tick;
    __Vdly__order_table__DOT__op_tick_ok = vlSelfRef.order_table__DOT__op_tick_ok;
    __Vdly__order_table__DOT__op_qty = vlSelfRef.order_table__DOT__op_qty;
    __Vdly__order_table__DOT__op_new_ref = vlSelfRef.order_table__DOT__op_new_ref;
    __Vdly__order_table__DOT__state = vlSelfRef.order_table__DOT__state;
    __Vdly__order_table__DOT__op_ref = vlSelfRef.order_table__DOT__op_ref;
    if (vlSelfRef.order_table__DOT__rst) {
        __Vdly__order_table__DOT__stat_stash_peak = 0U;
        __Vdly__order_table__DOT__stat_overrun = 0U;
    } else {
        if ((vlSelfRef.order_table__DOT__st_count > vlSelfRef.order_table__DOT__stat_stash_peak)) {
            __Vdly__order_table__DOT__stat_stash_peak 
                = vlSelfRef.order_table__DOT__st_count;
        }
        if ((((IData)(vlSelfRef.order_table__DOT__s_valid) 
              & (0U != (IData)(vlSelfRef.order_table__DOT__s_op))) 
             & (~ (IData)(vlSelfRef.order_table__DOT__accept)))) {
            __Vdly__order_table__DOT__stat_overrun 
                = ((IData)(1U) + vlSelfRef.order_table__DOT__stat_overrun);
        }
    }
    if (vlSelfRef.order_table__DOT__rst) {
        vlSelfRef.order_table__DOT__st_valid = 0U;
    } else {
        vlSelfRef.order_table__DOT__unnamedblk10__DOT__k = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk10__DOT__k)) {
            if ((1U & ((IData)(vlSelfRef.order_table__DOT__su_kill) 
                       >> (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k)))) {
                vlSelfRef.order_table__DOT__st_valid 
                    = ((~ ((IData)(1U) << (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k))) 
                       & (IData)(vlSelfRef.order_table__DOT__st_valid));
            }
            if ((1U & ((IData)(vlSelfRef.order_table__DOT__su_dec) 
                       >> (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k)))) {
                __VdlyVal__order_table__DOT__st_qty__v0 
                    = vlSelfRef.order_table__DOT__su_dec_qty;
                __VdlyDim0__order_table__DOT__st_qty__v0 
                    = (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k);
                vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_qty.enqueue(__VdlyVal__order_table__DOT__st_qty__v0, (IData)(__VdlyDim0__order_table__DOT__st_qty__v0));
            }
            if ((1U & ((IData)(vlSelfRef.order_table__DOT__su_new) 
                       >> (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k)))) {
                vlSelfRef.order_table__DOT__st_valid 
                    = ((IData)(vlSelfRef.order_table__DOT__st_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k))));
                vlSelfRef.order_table__DOT__st_ladder 
                    = (((~ ((IData)(1U) << (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k))) 
                        & (IData)(vlSelfRef.order_table__DOT__st_ladder)) 
                       | (3U & ((IData)(vlSelfRef.order_table__DOT__su_ladder) 
                                << (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k))));
                __VdlyVal__order_table__DOT__st_ref__v0 
                    = vlSelfRef.order_table__DOT__su_ref;
                __VdlyDim0__order_table__DOT__st_ref__v0 
                    = (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k);
                vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_ref.enqueue(__VdlyVal__order_table__DOT__st_ref__v0, (IData)(__VdlyDim0__order_table__DOT__st_ref__v0));
                vlSelfRef.order_table__DOT__st_side 
                    = (((~ ((IData)(1U) << (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k))) 
                        & (IData)(vlSelfRef.order_table__DOT__st_side)) 
                       | (3U & ((IData)(vlSelfRef.order_table__DOT__su_side) 
                                << (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k))));
                __VdlyVal__order_table__DOT__st_tick__v0 
                    = vlSelfRef.order_table__DOT__su_tick;
                __VdlyDim0__order_table__DOT__st_tick__v0 
                    = (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k);
                vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_tick.enqueue(__VdlyVal__order_table__DOT__st_tick__v0, (IData)(__VdlyDim0__order_table__DOT__st_tick__v0));
                __VdlyVal__order_table__DOT__st_qty__v1 
                    = vlSelfRef.order_table__DOT__su_qty;
                __VdlyDim0__order_table__DOT__st_qty__v1 
                    = (1U & vlSelfRef.order_table__DOT__unnamedblk10__DOT__k);
                vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_qty.enqueue(__VdlyVal__order_table__DOT__st_qty__v1, (IData)(__VdlyDim0__order_table__DOT__st_qty__v1));
            }
            vlSelfRef.order_table__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk10__DOT__k);
        }
    }
    vlSelfRef.order_table__DOT__stat_stash_peak = __Vdly__order_table__DOT__stat_stash_peak;
    vlSelfRef.order_table__DOT__stat_overrun = __Vdly__order_table__DOT__stat_overrun;
    vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_qty.commit(vlSelfRef.order_table__DOT__st_qty);
    vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_tick.commit(vlSelfRef.order_table__DOT__st_tick);
    vlSelfRef.__VdlyCommitQueueorder_table__DOT__st_ref.commit(vlSelfRef.order_table__DOT__st_ref);
    vlSelfRef.stat_stash_peak = vlSelfRef.order_table__DOT__stat_stash_peak;
    vlSelfRef.stat_overrun = vlSelfRef.order_table__DOT__stat_overrun;
    vlSelfRef.order_table__DOT__st_count = 0U;
    vlSelfRef.order_table__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk9__DOT__k)) {
        vlSelfRef.order_table__DOT__st_count = (vlSelfRef.order_table__DOT__st_count 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.order_table__DOT__st_valid) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk9__DOT__k))));
        vlSelfRef.order_table__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk9__DOT__k);
    }
    if (vlSelfRef.order_table__DOT__rst) {
        __Vdly__order_table__DOT__state = 0U;
        __Vdly__order_table__DOT__init_idx = 0U;
        vlSelfRef.order_table__DOT__ready = 0U;
        vlSelfRef.order_table__DOT__m_valid = 0U;
        vlSelfRef.order_table__DOT__m_done = 0U;
        vlSelfRef.order_table__DOT__m_side = 0U;
        vlSelfRef.order_table__DOT__m_tick = 0U;
        vlSelfRef.order_table__DOT__m_add = 0U;
        vlSelfRef.order_table__DOT__m_qty = 0U;
        vlSelfRef.order_table__DOT__m_seq = 0ULL;
        __Vdly__order_table__DOT__pend_v = 0U;
        vlSelfRef.order_table__DOT__su_kill = 0U;
        vlSelfRef.order_table__DOT__su_dec = 0U;
        vlSelfRef.order_table__DOT__su_new = 0U;
        __Vdly__order_table__DOT__stat_collisions = 0U;
        __Vdly__order_table__DOT__stat_missing = 0U;
    } else {
        vlSelfRef.order_table__DOT__m_valid = 0U;
        vlSelfRef.order_table__DOT__m_done = 0U;
        __Vdly__order_table__DOT__pend_v = 0U;
        vlSelfRef.order_table__DOT__su_kill = 0U;
        vlSelfRef.order_table__DOT__su_dec = 0U;
        vlSelfRef.order_table__DOT__su_new = 0U;
        if (vlSelfRef.order_table__DOT__pend_v) {
            vlSelfRef.order_table__DOT__m_valid = vlSelfRef.order_table__DOT__pend_valid;
            vlSelfRef.order_table__DOT__m_side = vlSelfRef.order_table__DOT__pend_side;
            vlSelfRef.order_table__DOT__m_tick = vlSelfRef.order_table__DOT__pend_tick;
            vlSelfRef.order_table__DOT__m_add = 1U;
            vlSelfRef.order_table__DOT__m_qty = vlSelfRef.order_table__DOT__pend_qty;
            vlSelfRef.order_table__DOT__m_seq = vlSelfRef.order_table__DOT__pend_seq;
            vlSelfRef.order_table__DOT__m_done = 1U;
        }
        if ((0U == (IData)(vlSelfRef.order_table__DOT__state))) {
            __Vdly__order_table__DOT__init_idx = (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.order_table__DOT__init_idx)));
            if ((0x0fU == (IData)(vlSelfRef.order_table__DOT__init_idx))) {
                __Vdly__order_table__DOT__state = 1U;
                vlSelfRef.order_table__DOT__ready = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.order_table__DOT__state))) {
            if (vlSelfRef.order_table__DOT__accept) {
                __Vfunc_order_table__DOT__hash_idx__10__r 
                    = vlSelfRef.order_table__DOT__s_ref;
                __Vfunc_order_table__DOT__hash_idx__12__r 
                    = vlSelfRef.order_table__DOT__s_new_ref;
                vlSelfRef.order_table__DOT__op_kind 
                    = vlSelfRef.order_table__DOT__s_op;
                __Vdly__order_table__DOT__op_ref = vlSelfRef.order_table__DOT__s_ref;
                __Vdly__order_table__DOT__op_new_ref 
                    = vlSelfRef.order_table__DOT__s_new_ref;
                __Vdly__order_table__DOT__op_side = vlSelfRef.order_table__DOT__s_side;
                __Vdly__order_table__DOT__op_qty = vlSelfRef.order_table__DOT__s_qty;
                __Vdly__order_table__DOT__op_tick = vlSelfRef.order_table__DOT__s_tick;
                __Vdly__order_table__DOT__op_tick_ok 
                    = vlSelfRef.order_table__DOT__s_tick_ok;
                __Vdly__order_table__DOT__op_seq = vlSelfRef.order_table__DOT__s_seq;
                __Vfunc_order_table__DOT__hash_idx__10__Vfuncout = 0;
                __Vfunc_order_table__DOT__hash_idx__12__Vfuncout = 0;
                __Vdly__order_table__DOT__state = 2U;
                __Vfunc_order_table__DOT__hash_idx__10__hi 
                    = (__Vfunc_order_table__DOT__hash_idx__10__r 
                       >> 4U);
                __Vfunc_order_table__DOT__hash_idx__12__hi 
                    = (__Vfunc_order_table__DOT__hash_idx__12__r 
                       >> 4U);
                __Vfunc_order_table__DOT__hash_idx__10__Vfuncout 
                    = ((0x0eU & (IData)(__Vfunc_order_table__DOT__hash_idx__10__Vfuncout)) 
                       | (1U & ((IData)(__Vfunc_order_table__DOT__hash_idx__10__r) 
                                ^ VL_REDXOR_64((0x09e3779b97f4a7c1ULL 
                                                & __Vfunc_order_table__DOT__hash_idx__10__hi)))));
                __Vfunc_order_table__DOT__hash_idx__12__Vfuncout 
                    = ((0x0eU & (IData)(__Vfunc_order_table__DOT__hash_idx__12__Vfuncout)) 
                       | (1U & ((IData)(__Vfunc_order_table__DOT__hash_idx__12__r) 
                                ^ VL_REDXOR_64((0x09e3779b97f4a7c1ULL 
                                                & __Vfunc_order_table__DOT__hash_idx__12__hi)))));
                __Vfunc_order_table__DOT__hash_idx__10__Vfuncout 
                    = ((0x0dU & (IData)(__Vfunc_order_table__DOT__hash_idx__10__Vfuncout)) 
                       | (2U & (((IData)((__Vfunc_order_table__DOT__hash_idx__10__r 
                                          >> 1U)) ^ 
                                 VL_REDXOR_64((0x0bf58476d1ce4e5bULL 
                                               & __Vfunc_order_table__DOT__hash_idx__10__hi))) 
                                << 1U)));
                __Vfunc_order_table__DOT__hash_idx__12__Vfuncout 
                    = ((0x0dU & (IData)(__Vfunc_order_table__DOT__hash_idx__12__Vfuncout)) 
                       | (2U & (((IData)((__Vfunc_order_table__DOT__hash_idx__12__r 
                                          >> 1U)) ^ 
                                 VL_REDXOR_64((0x0bf58476d1ce4e5bULL 
                                               & __Vfunc_order_table__DOT__hash_idx__12__hi))) 
                                << 1U)));
                __Vfunc_order_table__DOT__hash_idx__10__Vfuncout 
                    = ((0x0bU & (IData)(__Vfunc_order_table__DOT__hash_idx__10__Vfuncout)) 
                       | (4U & (((IData)((__Vfunc_order_table__DOT__hash_idx__10__r 
                                          >> 2U)) ^ 
                                 VL_REDXOR_64((0x094d049bb133111eULL 
                                               & __Vfunc_order_table__DOT__hash_idx__10__hi))) 
                                << 2U)));
                __Vfunc_order_table__DOT__hash_idx__12__Vfuncout 
                    = ((0x0bU & (IData)(__Vfunc_order_table__DOT__hash_idx__12__Vfuncout)) 
                       | (4U & (((IData)((__Vfunc_order_table__DOT__hash_idx__12__r 
                                          >> 2U)) ^ 
                                 VL_REDXOR_64((0x094d049bb133111eULL 
                                               & __Vfunc_order_table__DOT__hash_idx__12__hi))) 
                                << 2U)));
                __Vfunc_order_table__DOT__hash_idx__10__Vfuncout 
                    = ((7U & (IData)(__Vfunc_order_table__DOT__hash_idx__10__Vfuncout)) 
                       | (8U & (((IData)((__Vfunc_order_table__DOT__hash_idx__10__r 
                                          >> 3U)) ^ 
                                 VL_REDXOR_64((0x0d6e8feb86659fd9ULL 
                                               & __Vfunc_order_table__DOT__hash_idx__10__hi))) 
                                << 3U)));
                __Vfunc_order_table__DOT__hash_idx__12__Vfuncout 
                    = ((7U & (IData)(__Vfunc_order_table__DOT__hash_idx__12__Vfuncout)) 
                       | (8U & (((IData)((__Vfunc_order_table__DOT__hash_idx__12__r 
                                          >> 3U)) ^ 
                                 VL_REDXOR_64((0x0d6e8feb86659fd9ULL 
                                               & __Vfunc_order_table__DOT__hash_idx__12__hi))) 
                                << 3U)));
                vlSelfRef.order_table__DOT__idx_a = __Vfunc_order_table__DOT__hash_idx__10__Vfuncout;
                vlSelfRef.order_table__DOT__idx_b = __Vfunc_order_table__DOT__hash_idx__12__Vfuncout;
            }
        } else if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
            __Vdly__order_table__DOT__state = 1U;
            vlSelfRef.order_table__DOT__m_seq = vlSelfRef.order_table__DOT__op_seq;
            vlSelfRef.order_table__DOT__m_done = 1U;
            if (vlSelfRef.order_table__DOT__is_add) {
                if (vlSelfRef.order_table__DOT__add_ok) {
                    vlSelfRef.order_table__DOT__su_new 
                        = vlSelfRef.order_table__DOT__add_sv;
                    vlSelfRef.order_table__DOT__su_ref 
                        = vlSelfRef.order_table__DOT__op_ref;
                    vlSelfRef.order_table__DOT__su_side 
                        = vlSelfRef.order_table__DOT__op_side;
                    vlSelfRef.order_table__DOT__su_ladder 
                        = vlSelfRef.order_table__DOT__op_tick_ok;
                    vlSelfRef.order_table__DOT__su_tick 
                        = vlSelfRef.order_table__DOT__op_tick;
                    vlSelfRef.order_table__DOT__su_qty 
                        = vlSelfRef.order_table__DOT__op_qty;
                    vlSelfRef.order_table__DOT__m_add = 1U;
                    vlSelfRef.order_table__DOT__m_valid 
                        = vlSelfRef.order_table__DOT__op_tick_ok;
                    vlSelfRef.order_table__DOT__m_side 
                        = vlSelfRef.order_table__DOT__op_side;
                    vlSelfRef.order_table__DOT__m_tick 
                        = vlSelfRef.order_table__DOT__op_tick;
                    vlSelfRef.order_table__DOT__m_qty 
                        = vlSelfRef.order_table__DOT__op_qty;
                } else {
                    __Vdly__order_table__DOT__stat_collisions 
                        = ((IData)(1U) + vlSelfRef.order_table__DOT__stat_collisions);
                }
            }
            if (((IData)(vlSelfRef.order_table__DOT__is_red) 
                 | (IData)(vlSelfRef.order_table__DOT__is_del))) {
                if (vlSelfRef.order_table__DOT__found_a) {
                    vlSelfRef.order_table__DOT__unnamedblk11__DOT__k = 0U;
                    vlSelfRef.order_table__DOT__m_valid 
                        = vlSelfRef.order_table__DOT__e_ladder;
                    vlSelfRef.order_table__DOT__m_side 
                        = vlSelfRef.order_table__DOT__e_side;
                    vlSelfRef.order_table__DOT__m_tick 
                        = vlSelfRef.order_table__DOT__e_tick;
                    vlSelfRef.order_table__DOT__m_add = 0U;
                    vlSelfRef.order_table__DOT__m_qty 
                        = ((IData)(vlSelfRef.order_table__DOT__is_del)
                            ? vlSelfRef.order_table__DOT__e_qty
                            : vlSelfRef.order_table__DOT__take_qty);
                    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk11__DOT__k)) {
                        if ((1U & ((IData)(vlSelfRef.order_table__DOT__is_del) 
                                   | ((IData)(vlSelfRef.order_table__DOT__empties_s) 
                                      >> (1U & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))))) {
                            vlSelfRef.order_table__DOT__su_kill 
                                = (((~ ((IData)(1U) 
                                        << (1U & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))) 
                                    & (IData)(vlSelfRef.order_table__DOT__su_kill)) 
                                   | (3U & ((1U & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))) 
                                            << (1U 
                                                & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))));
                        } else {
                            vlSelfRef.order_table__DOT__su_dec 
                                = (((~ ((IData)(1U) 
                                        << (1U & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))) 
                                    & (IData)(vlSelfRef.order_table__DOT__su_dec)) 
                                   | (3U & ((1U & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))) 
                                            << (1U 
                                                & vlSelfRef.order_table__DOT__unnamedblk11__DOT__k))));
                        }
                        vlSelfRef.order_table__DOT__unnamedblk11__DOT__k 
                            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk11__DOT__k);
                    }
                    vlSelfRef.order_table__DOT__su_dec_qty 
                        = vlSelfRef.order_table__DOT__st_left;
                } else {
                    __Vdly__order_table__DOT__stat_missing 
                        = ((IData)(1U) + vlSelfRef.order_table__DOT__stat_missing);
                }
            }
            if (vlSelfRef.order_table__DOT__is_rep) {
                if (vlSelfRef.order_table__DOT__found_a) {
                    if ((1U & (~ (IData)(vlSelfRef.order_table__DOT__rep_ok)))) {
                        __Vdly__order_table__DOT__stat_collisions 
                            = ((IData)(1U) + vlSelfRef.order_table__DOT__stat_collisions);
                    }
                    vlSelfRef.order_table__DOT__m_valid 
                        = vlSelfRef.order_table__DOT__e_ladder;
                    vlSelfRef.order_table__DOT__m_side 
                        = vlSelfRef.order_table__DOT__e_side;
                    vlSelfRef.order_table__DOT__m_tick 
                        = vlSelfRef.order_table__DOT__e_tick;
                    vlSelfRef.order_table__DOT__m_add = 0U;
                    vlSelfRef.order_table__DOT__m_qty 
                        = vlSelfRef.order_table__DOT__e_qty;
                    vlSelfRef.order_table__DOT__su_kill 
                        = vlSelfRef.order_table__DOT__shv_a;
                    vlSelfRef.order_table__DOT__su_new 
                        = vlSelfRef.order_table__DOT__rep_sv;
                    vlSelfRef.order_table__DOT__su_ref 
                        = vlSelfRef.order_table__DOT__op_new_ref;
                    vlSelfRef.order_table__DOT__su_side 
                        = vlSelfRef.order_table__DOT__e_side;
                    vlSelfRef.order_table__DOT__su_ladder 
                        = vlSelfRef.order_table__DOT__op_tick_ok;
                    vlSelfRef.order_table__DOT__su_tick 
                        = vlSelfRef.order_table__DOT__op_tick;
                    vlSelfRef.order_table__DOT__su_qty 
                        = vlSelfRef.order_table__DOT__op_qty;
                    __Vdly__order_table__DOT__pend_v = 1U;
                    vlSelfRef.order_table__DOT__pend_side 
                        = vlSelfRef.order_table__DOT__e_side;
                    vlSelfRef.order_table__DOT__pend_seq 
                        = vlSelfRef.order_table__DOT__op_seq;
                    vlSelfRef.order_table__DOT__pend_valid 
                        = ((IData)(vlSelfRef.order_table__DOT__rep_ok) 
                           & (IData)(vlSelfRef.order_table__DOT__op_tick_ok));
                    vlSelfRef.order_table__DOT__pend_tick 
                        = vlSelfRef.order_table__DOT__op_tick;
                    vlSelfRef.order_table__DOT__pend_qty 
                        = vlSelfRef.order_table__DOT__op_qty;
                } else {
                    __Vdly__order_table__DOT__stat_missing 
                        = ((IData)(1U) + vlSelfRef.order_table__DOT__stat_missing);
                }
            }
        } else {
            __Vdly__order_table__DOT__state = 1U;
        }
    }
    vlSelfRef.order_table__DOT__pend_v = __Vdly__order_table__DOT__pend_v;
    vlSelfRef.order_table__DOT__op_seq = __Vdly__order_table__DOT__op_seq;
    vlSelfRef.order_table__DOT__stat_collisions = __Vdly__order_table__DOT__stat_collisions;
    vlSelfRef.order_table__DOT__stat_missing = __Vdly__order_table__DOT__stat_missing;
    vlSelfRef.order_table__DOT__init_idx = __Vdly__order_table__DOT__init_idx;
    vlSelfRef.order_table__DOT__op_side = __Vdly__order_table__DOT__op_side;
    vlSelfRef.order_table__DOT__op_tick = __Vdly__order_table__DOT__op_tick;
    vlSelfRef.order_table__DOT__op_tick_ok = __Vdly__order_table__DOT__op_tick_ok;
    vlSelfRef.order_table__DOT__op_qty = __Vdly__order_table__DOT__op_qty;
    vlSelfRef.order_table__DOT__op_new_ref = __Vdly__order_table__DOT__op_new_ref;
    vlSelfRef.order_table__DOT__state = __Vdly__order_table__DOT__state;
    vlSelfRef.order_table__DOT__op_ref = __Vdly__order_table__DOT__op_ref;
    vlSelfRef.ready = vlSelfRef.order_table__DOT__ready;
    vlSelfRef.m_valid = vlSelfRef.order_table__DOT__m_valid;
    vlSelfRef.m_done = vlSelfRef.order_table__DOT__m_done;
    vlSelfRef.m_side = vlSelfRef.order_table__DOT__m_side;
    vlSelfRef.m_tick = vlSelfRef.order_table__DOT__m_tick;
    vlSelfRef.m_add = vlSelfRef.order_table__DOT__m_add;
    vlSelfRef.m_qty = vlSelfRef.order_table__DOT__m_qty;
    vlSelfRef.m_seq = vlSelfRef.order_table__DOT__m_seq;
    vlSelfRef.stat_collisions = vlSelfRef.order_table__DOT__stat_collisions;
    vlSelfRef.stat_missing = vlSelfRef.order_table__DOT__stat_missing;
    vlSelfRef.order_table__DOT__same_set = ((IData)(vlSelfRef.order_table__DOT__idx_a) 
                                            == (IData)(vlSelfRef.order_table__DOT__idx_b));
    vlSelfRef.order_table__DOT__accept = ((IData)(vlSelfRef.order_table__DOT__s_valid) 
                                          & ((1U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.order_table__DOT__s_op))));
    __Vfunc_order_table__DOT__hash_idx__7__r = vlSelfRef.order_table__DOT__s_new_ref;
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout = 0;
    __Vfunc_order_table__DOT__hash_idx__7__hi = (__Vfunc_order_table__DOT__hash_idx__7__r 
                                                 >> 4U);
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((0x0eU & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_order_table__DOT__hash_idx__7__r) 
                    ^ VL_REDXOR_64((0x09e3779b97f4a7c1ULL 
                                    & __Vfunc_order_table__DOT__hash_idx__7__hi)))));
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((0x0dU & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_order_table__DOT__hash_idx__7__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0bf58476d1ce4e5bULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__7__hi))) 
                    << 1U)));
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((0x0bU & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_order_table__DOT__hash_idx__7__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x094d049bb133111eULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__7__hi))) 
                    << 2U)));
    __Vfunc_order_table__DOT__hash_idx__7__Vfuncout 
        = ((7U & (IData)(__Vfunc_order_table__DOT__hash_idx__7__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_order_table__DOT__hash_idx__7__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x0d6e8feb86659fd9ULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__7__hi))) 
                    << 3U)));
    vlSelfRef.order_table__DOT__b_addr = __Vfunc_order_table__DOT__hash_idx__7__Vfuncout;
    if ((0U != (IData)(vlSelfRef.order_table__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
            vlSelfRef.order_table__DOT__b_addr = vlSelfRef.order_table__DOT__idx_b;
        }
    }
    __Vfunc_order_table__DOT__hash_idx__5__r = vlSelfRef.order_table__DOT__s_ref;
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout = 0;
    __Vfunc_order_table__DOT__hash_idx__5__hi = (__Vfunc_order_table__DOT__hash_idx__5__r 
                                                 >> 4U);
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((0x0eU & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_order_table__DOT__hash_idx__5__r) 
                    ^ VL_REDXOR_64((0x09e3779b97f4a7c1ULL 
                                    & __Vfunc_order_table__DOT__hash_idx__5__hi)))));
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((0x0dU & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_order_table__DOT__hash_idx__5__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0bf58476d1ce4e5bULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__5__hi))) 
                    << 1U)));
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((0x0bU & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_order_table__DOT__hash_idx__5__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x094d049bb133111eULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__5__hi))) 
                    << 2U)));
    __Vfunc_order_table__DOT__hash_idx__5__Vfuncout 
        = ((7U & (IData)(__Vfunc_order_table__DOT__hash_idx__5__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_order_table__DOT__hash_idx__5__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x0d6e8feb86659fd9ULL 
                                                      & __Vfunc_order_table__DOT__hash_idx__5__hi))) 
                    << 3U)));
    vlSelfRef.order_table__DOT__a_addr = __Vfunc_order_table__DOT__hash_idx__5__Vfuncout;
    if ((0U == (IData)(vlSelfRef.order_table__DOT__state))) {
        vlSelfRef.order_table__DOT__a_addr = vlSelfRef.order_table__DOT__init_idx;
    } else if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
        vlSelfRef.order_table__DOT__a_addr = vlSelfRef.order_table__DOT__idx_a;
    }
    vlSelfRef.order_table__DOT__is_del = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (3U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__is_add = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (1U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__is_red = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (2U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
    vlSelfRef.order_table__DOT__is_rep = ((2U == (IData)(vlSelfRef.order_table__DOT__state)) 
                                          & (4U == (IData)(vlSelfRef.order_table__DOT__op_kind)));
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*106:0*/ __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(107, __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0);
    CData/*3:0*/ __VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*106:0*/ __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(107, __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1);
    CData/*3:0*/ __VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.order_table__DOT__rd_b[1U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.order_table__DOT__rd_b[1U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.order_table__DOT__rd_b[1U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.order_table__DOT__rd_b[1U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.order_table__DOT__rd_a[1U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.order_table__DOT__rd_a[1U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.order_table__DOT__rd_a[1U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.order_table__DOT__rd_a[1U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*106:0*/ __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0;
    VL_ZERO_W(107, __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0);
    CData/*3:0*/ __VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0;
    __VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0;
    __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 0;
    VlWide<4>/*106:0*/ __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1;
    VL_ZERO_W(107, __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1);
    CData/*3:0*/ __VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1;
    __VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1;
    __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 0;
    // Body
    __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 0U;
    __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 0U;
    if (vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we) {
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[0U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U];
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[1U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U];
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[2U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U];
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[3U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U];
        __VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr;
        __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we) {
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[0U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U];
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[1U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U];
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[2U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U];
        __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[3U] 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U];
        __VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 
            = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr;
        __VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1 = 1U;
    }
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr][3U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U] 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem
        [vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr][3U];
    if (__VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0) {
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][0U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[0U];
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][1U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[1U];
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][2U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[2U];
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0][3U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v0[3U];
    }
    if (__VdlySet__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1) {
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][0U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[0U];
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][1U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[1U];
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][2U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[2U];
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__VdlyDim0__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1][3U] 
            = __VdlyVal__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem__v1[3U];
    }
    vlSelfRef.order_table__DOT__rd_b[0U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.order_table__DOT__rd_b[0U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.order_table__DOT__rd_b[0U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.order_table__DOT__rd_b[0U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.order_table__DOT__rd_a[0U][0U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.order_table__DOT__rd_a[0U][1U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.order_table__DOT__rd_a[0U][2U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.order_table__DOT__rd_a[0U][3U] = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U];
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__0__Vfuncout;
    __Vfunc_order_table__DOT__lowest_way__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__0__v;
    __Vfunc_order_table__DOT__lowest_way__0__v = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__1__Vfuncout;
    __Vfunc_order_table__DOT__lowest_way__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_way__1__v;
    __Vfunc_order_table__DOT__lowest_way__1__v = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_st__2__Vfuncout;
    __Vfunc_order_table__DOT__lowest_st__2__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_order_table__DOT__lowest_st__2__v;
    __Vfunc_order_table__DOT__lowest_st__2__v = 0;
    VlWide<4>/*106:0*/ __Vfunc_order_table__DOT__pack_entry__3__Vfuncout;
    VL_ZERO_W(107, __Vfunc_order_table__DOT__pack_entry__3__Vfuncout);
    CData/*0:0*/ __Vfunc_order_table__DOT__pack_entry__3__ld;
    __Vfunc_order_table__DOT__pack_entry__3__ld = 0;
    QData/*63:0*/ __Vfunc_order_table__DOT__pack_entry__3__r;
    __Vfunc_order_table__DOT__pack_entry__3__r = 0;
    CData/*0:0*/ __Vfunc_order_table__DOT__pack_entry__3__sd;
    __Vfunc_order_table__DOT__pack_entry__3__sd = 0;
    SData/*11:0*/ __Vfunc_order_table__DOT__pack_entry__3__tk;
    __Vfunc_order_table__DOT__pack_entry__3__tk = 0;
    IData/*31:0*/ __Vfunc_order_table__DOT__pack_entry__3__q;
    __Vfunc_order_table__DOT__pack_entry__3__q = 0;
    // Body
    vlSelfRef.order_table__DOT__unnamedblk6__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)) {
        vlSelfRef.order_table__DOT__vld_b = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))) 
                                              & (IData)(vlSelfRef.order_table__DOT__vld_b)) 
                                             | (3U 
                                                & ((1U 
                                                    & (vlSelfRef.order_table__DOT__rd_b
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][3U] 
                                                       >> 0x0000000aU)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))));
        vlSelfRef.order_table__DOT__hitv_b = (((~ ((IData)(1U) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))) 
                                               & (IData)(vlSelfRef.order_table__DOT__hitv_b)) 
                                              | (3U 
                                                 & ((((IData)(vlSelfRef.order_table__DOT__vld_b) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)) 
                                                     & ((0x0fffffffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.order_table__DOT__rd_b
                                                                             [
                                                                             (1U 
                                                                              & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][3U])) 
                                                             << 0x00000033U) 
                                                            | (((QData)((IData)(vlSelfRef.order_table__DOT__rd_b
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][2U])) 
                                                                << 0x00000013U) 
                                                               | ((QData)((IData)(vlSelfRef.order_table__DOT__rd_b
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w)][1U])) 
                                                                  >> 0x0000000dU)))) 
                                                        == 
                                                        (vlSelfRef.order_table__DOT__op_new_ref 
                                                         >> 4U))) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk6__DOT__w))));
        vlSelfRef.order_table__DOT__unnamedblk6__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk6__DOT__w);
    }
    __Vfunc_order_table__DOT__lowest_way__1__v = (3U 
                                                  & (~ (IData)(vlSelfRef.order_table__DOT__vld_b)));
    __Vfunc_order_table__DOT__lowest_way__1__Vfuncout 
        = ((IData)(__Vfunc_order_table__DOT__lowest_way__1__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_order_table__DOT__lowest_way__1__v))));
    vlSelfRef.order_table__DOT__freev_b = __Vfunc_order_table__DOT__lowest_way__1__Vfuncout;
    vlSelfRef.order_table__DOT__hit_b = (0U != (IData)(vlSelfRef.order_table__DOT__hitv_b));
    vlSelfRef.order_table__DOT__free_b_ok = (0U != 
                                             (3U & 
                                              (~ (IData)(vlSelfRef.order_table__DOT__vld_b))));
    vlSelfRef.order_table__DOT__unnamedblk2__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)) {
        vlSelfRef.order_table__DOT__vld_a = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))) 
                                              & (IData)(vlSelfRef.order_table__DOT__vld_a)) 
                                             | (3U 
                                                & ((1U 
                                                    & (vlSelfRef.order_table__DOT__rd_a
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][3U] 
                                                       >> 0x0000000aU)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))));
        vlSelfRef.order_table__DOT__hitv_a = (((~ ((IData)(1U) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))) 
                                               & (IData)(vlSelfRef.order_table__DOT__hitv_a)) 
                                              | (3U 
                                                 & ((((IData)(vlSelfRef.order_table__DOT__vld_a) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)) 
                                                     & ((0x0fffffffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                                             [
                                                                             (1U 
                                                                              & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][3U])) 
                                                             << 0x00000033U) 
                                                            | (((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][2U])) 
                                                                << 0x00000013U) 
                                                               | ((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                                                [
                                                                                (1U 
                                                                                & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w)][1U])) 
                                                                  >> 0x0000000dU)))) 
                                                        == 
                                                        (vlSelfRef.order_table__DOT__op_ref 
                                                         >> 4U))) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk2__DOT__w))));
        vlSelfRef.order_table__DOT__unnamedblk2__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk2__DOT__w);
    }
    vlSelfRef.order_table__DOT__unnamedblk3__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk3__DOT__k)) {
        vlSelfRef.order_table__DOT__shv_a = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k))) 
                                              & (IData)(vlSelfRef.order_table__DOT__shv_a)) 
                                             | (3U 
                                                & ((((IData)(vlSelfRef.order_table__DOT__st_valid) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k)) 
                                                    & (vlSelfRef.order_table__DOT__st_ref
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k)] 
                                                       == vlSelfRef.order_table__DOT__op_ref)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk3__DOT__k))));
        vlSelfRef.order_table__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk3__DOT__k);
    }
    __Vfunc_order_table__DOT__lowest_way__0__v = (3U 
                                                  & (~ (IData)(vlSelfRef.order_table__DOT__vld_a)));
    __Vfunc_order_table__DOT__lowest_way__0__Vfuncout 
        = ((IData)(__Vfunc_order_table__DOT__lowest_way__0__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_order_table__DOT__lowest_way__0__v))));
    vlSelfRef.order_table__DOT__freev_a = __Vfunc_order_table__DOT__lowest_way__0__Vfuncout;
    vlSelfRef.order_table__DOT__hit_a = (0U != (IData)(vlSelfRef.order_table__DOT__hitv_a));
    vlSelfRef.order_table__DOT__free_a_ok = (0U != 
                                             (3U & 
                                              (~ (IData)(vlSelfRef.order_table__DOT__vld_a))));
    vlSelfRef.order_table__DOT__sh_a = (0U != (IData)(vlSelfRef.order_table__DOT__shv_a));
    vlSelfRef.order_table__DOT__found_a = ((IData)(vlSelfRef.order_table__DOT__hit_a) 
                                           | (IData)(vlSelfRef.order_table__DOT__sh_a));
    vlSelfRef.order_table__DOT__e_ladder = 0U;
    vlSelfRef.order_table__DOT__e_side = 0U;
    vlSelfRef.order_table__DOT__e_tick = 0U;
    vlSelfRef.order_table__DOT__e_qty = 0U;
    vlSelfRef.order_table__DOT__take_qty = 0U;
    vlSelfRef.order_table__DOT__st_left = 0U;
    vlSelfRef.order_table__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)) {
        vlSelfRef.order_table__DOT__diff_w[(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
            = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.order_table__DOT__rd_a
                                                        [
                                                        (1U 
                                                         & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U])) 
                                        - (QData)((IData)(vlSelfRef.order_table__DOT__op_qty))));
        vlSelfRef.order_table__DOT__empties_w = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))) 
                                                  & (IData)(vlSelfRef.order_table__DOT__empties_w)) 
                                                 | (3U 
                                                    & ((1U 
                                                        & ((IData)(
                                                                   (vlSelfRef.order_table__DOT__diff_w
                                                                    [
                                                                    (1U 
                                                                     & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
                                                                    >> 0x20U)) 
                                                           | (vlSelfRef.order_table__DOT__rd_a
                                                              [
                                                              (1U 
                                                               & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U] 
                                                              == vlSelfRef.order_table__DOT__op_qty))) 
                                                       << 
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))));
        vlSelfRef.order_table__DOT__take_w[(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
            = ((1U & (IData)((vlSelfRef.order_table__DOT__diff_w
                              [(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)] 
                              >> 0x20U))) ? vlSelfRef.order_table__DOT__rd_a
               [(1U & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U]
                : vlSelfRef.order_table__DOT__op_qty);
        vlSelfRef.order_table__DOT__e_ladder = (1U 
                                                & ((IData)(vlSelfRef.order_table__DOT__e_ladder) 
                                                   | (((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                       >> 
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)) 
                                                      & (vlSelfRef.order_table__DOT__rd_a
                                                         [
                                                         (1U 
                                                          & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][3U] 
                                                         >> 9U))));
        vlSelfRef.order_table__DOT__e_side = (1U & 
                                              ((IData)(vlSelfRef.order_table__DOT__e_side) 
                                               | (((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)) 
                                                  & (vlSelfRef.order_table__DOT__rd_a
                                                     [
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][1U] 
                                                     >> 0x0000000cU))));
        vlSelfRef.order_table__DOT__e_tick = (0x00000fffU 
                                              & ((IData)(vlSelfRef.order_table__DOT__e_tick) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                                   >> 
                                                                   (1U 
                                                                    & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))))) 
                                                    & vlSelfRef.order_table__DOT__rd_a
                                                    [
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][1U])));
        vlSelfRef.order_table__DOT__e_qty = (vlSelfRef.order_table__DOT__e_qty 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                               >> 
                                                               (1U 
                                                                & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))))) 
                                                & vlSelfRef.order_table__DOT__rd_a
                                                [(1U 
                                                  & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)][0U]));
        vlSelfRef.order_table__DOT__take_qty = (vlSelfRef.order_table__DOT__take_qty 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                                  >> 
                                                                  (1U 
                                                                   & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w))))) 
                                                   & vlSelfRef.order_table__DOT__take_w
                                                   [
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk4__DOT__w)]));
        vlSelfRef.order_table__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk4__DOT__w);
    }
    vlSelfRef.order_table__DOT__unnamedblk5__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)) {
        vlSelfRef.order_table__DOT__diff_s[(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
            = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.order_table__DOT__st_qty
                                                        [
                                                        (1U 
                                                         & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)])) 
                                        - (QData)((IData)(vlSelfRef.order_table__DOT__op_qty))));
        vlSelfRef.order_table__DOT__empties_s = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))) 
                                                  & (IData)(vlSelfRef.order_table__DOT__empties_s)) 
                                                 | (3U 
                                                    & ((1U 
                                                        & ((IData)(
                                                                   (vlSelfRef.order_table__DOT__diff_s
                                                                    [
                                                                    (1U 
                                                                     & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
                                                                    >> 0x20U)) 
                                                           | (vlSelfRef.order_table__DOT__st_qty
                                                              [
                                                              (1U 
                                                               & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
                                                              == vlSelfRef.order_table__DOT__op_qty))) 
                                                       << 
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.order_table__DOT__take_s[(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
            = ((1U & (IData)((vlSelfRef.order_table__DOT__diff_s
                              [(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)] 
                              >> 0x20U))) ? vlSelfRef.order_table__DOT__st_qty
               [(1U & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]
                : vlSelfRef.order_table__DOT__op_qty);
        vlSelfRef.order_table__DOT__st_left = (vlSelfRef.order_table__DOT__st_left 
                                               | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                 >> 
                                                                 (1U 
                                                                  & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                  & (IData)(vlSelfRef.order_table__DOT__diff_s
                                                            [
                                                            (1U 
                                                             & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)])));
        vlSelfRef.order_table__DOT__e_ladder = (1U 
                                                & ((IData)(vlSelfRef.order_table__DOT__e_ladder) 
                                                   | (((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                       & (IData)(vlSelfRef.order_table__DOT__st_ladder)) 
                                                      >> 
                                                      (1U 
                                                       & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.order_table__DOT__e_side = (1U & 
                                              ((IData)(vlSelfRef.order_table__DOT__e_side) 
                                               | (((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                   & (IData)(vlSelfRef.order_table__DOT__st_side)) 
                                                  >> 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.order_table__DOT__e_tick = ((IData)(vlSelfRef.order_table__DOT__e_tick) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                >> 
                                                                (1U 
                                                                 & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                 & vlSelfRef.order_table__DOT__st_tick
                                                 [(1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.order_table__DOT__e_qty = (vlSelfRef.order_table__DOT__e_qty 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                               >> 
                                                               (1U 
                                                                & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                & vlSelfRef.order_table__DOT__st_qty
                                                [(1U 
                                                  & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.order_table__DOT__take_qty = (vlSelfRef.order_table__DOT__take_qty 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                  >> 
                                                                  (1U 
                                                                   & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k))))) 
                                                   & vlSelfRef.order_table__DOT__take_s
                                                   [
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.order_table__DOT__unnamedblk5__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk5__DOT__k);
    }
    vlSelfRef.order_table__DOT__unnamedblk7__DOT__k = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)) {
        vlSelfRef.order_table__DOT__st_busy = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))) 
                                                & (IData)(vlSelfRef.order_table__DOT__st_busy)) 
                                               | (3U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.order_table__DOT__st_valid) 
                                                          >> 
                                                          (1U 
                                                           & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.order_table__DOT__is_rep) 
                                                             & ((IData)(vlSelfRef.order_table__DOT__shv_a) 
                                                                >> 
                                                                (1U 
                                                                 & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)))))) 
                                                     << 
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))));
        vlSelfRef.order_table__DOT__shv_b = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))) 
                                              & (IData)(vlSelfRef.order_table__DOT__shv_b)) 
                                             | (3U 
                                                & ((((IData)(vlSelfRef.order_table__DOT__st_busy) 
                                                     >> 
                                                     (1U 
                                                      & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)) 
                                                    & (vlSelfRef.order_table__DOT__st_ref
                                                       [
                                                       (1U 
                                                        & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k)] 
                                                       == vlSelfRef.order_table__DOT__op_new_ref)) 
                                                   << 
                                                   (1U 
                                                    & vlSelfRef.order_table__DOT__unnamedblk7__DOT__k))));
        vlSelfRef.order_table__DOT__unnamedblk7__DOT__k 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk7__DOT__k);
    }
    __Vfunc_order_table__DOT__lowest_st__2__v = (3U 
                                                 & (~ (IData)(vlSelfRef.order_table__DOT__st_busy)));
    __Vfunc_order_table__DOT__lowest_st__2__Vfuncout 
        = ((IData)(__Vfunc_order_table__DOT__lowest_st__2__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_order_table__DOT__lowest_st__2__v))));
    vlSelfRef.order_table__DOT__st_freev = __Vfunc_order_table__DOT__lowest_st__2__Vfuncout;
    vlSelfRef.order_table__DOT__sh_b = (0U != (IData)(vlSelfRef.order_table__DOT__shv_b));
    vlSelfRef.order_table__DOT__st_free_ok = (0U != 
                                              (3U & 
                                               (~ (IData)(vlSelfRef.order_table__DOT__st_busy))));
    vlSelfRef.order_table__DOT__b_din[0U] = (IData)(
                                                    (((QData)((IData)(vlSelfRef.order_table__DOT__e_side)) 
                                                      << 0x0000002cU) 
                                                     | (((QData)((IData)(vlSelfRef.order_table__DOT__op_tick)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.order_table__DOT__op_qty)))));
    vlSelfRef.order_table__DOT__b_din[1U] = (((IData)(
                                                      (vlSelfRef.order_table__DOT__op_new_ref 
                                                       >> 4U)) 
                                              << 0x0000000dU) 
                                             | (IData)(
                                                       ((((QData)((IData)(vlSelfRef.order_table__DOT__e_side)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(vlSelfRef.order_table__DOT__op_tick)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.order_table__DOT__op_qty)))) 
                                                        >> 0x00000020U)));
    vlSelfRef.order_table__DOT__b_din[2U] = (((IData)(
                                                      (vlSelfRef.order_table__DOT__op_new_ref 
                                                       >> 4U)) 
                                              >> 0x00000013U) 
                                             | ((IData)(
                                                        ((vlSelfRef.order_table__DOT__op_new_ref 
                                                          >> 4U) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000dU));
    vlSelfRef.order_table__DOT__b_din[3U] = ((0x00000600U 
                                              & vlSelfRef.order_table__DOT__b_din[3U]) 
                                             | (0x000007ffU 
                                                & ((IData)(
                                                           ((vlSelfRef.order_table__DOT__op_new_ref 
                                                             >> 4U) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000013U)));
    vlSelfRef.order_table__DOT__b_din[3U] = ((0x000001ffU 
                                              & vlSelfRef.order_table__DOT__b_din[3U]) 
                                             | (0x000007ffU 
                                                & (0x00000400U 
                                                   | ((IData)(vlSelfRef.order_table__DOT__op_tick_ok) 
                                                      << 9U))));
    __Vfunc_order_table__DOT__pack_entry__3__q = vlSelfRef.order_table__DOT__op_qty;
    __Vfunc_order_table__DOT__pack_entry__3__tk = vlSelfRef.order_table__DOT__op_tick;
    __Vfunc_order_table__DOT__pack_entry__3__sd = vlSelfRef.order_table__DOT__op_side;
    __Vfunc_order_table__DOT__pack_entry__3__r = vlSelfRef.order_table__DOT__op_ref;
    __Vfunc_order_table__DOT__pack_entry__3__ld = vlSelfRef.order_table__DOT__op_tick_ok;
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__sd)) 
                    << 0x0000002cU) | (((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__tk)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__q)))));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[1U] 
        = (((IData)((__Vfunc_order_table__DOT__pack_entry__3__r 
                     >> 4U)) << 0x0000000dU) | (IData)(
                                                       ((((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__sd)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__tk)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(__Vfunc_order_table__DOT__pack_entry__3__q)))) 
                                                        >> 0x00000020U)));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[2U] 
        = (((IData)((__Vfunc_order_table__DOT__pack_entry__3__r 
                     >> 4U)) >> 0x00000013U) | ((IData)(
                                                        ((__Vfunc_order_table__DOT__pack_entry__3__r 
                                                          >> 4U) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000dU));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U] 
        = ((0x00000600U & __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U]) 
           | (0x000007ffU & ((IData)(((__Vfunc_order_table__DOT__pack_entry__3__r 
                                       >> 4U) >> 0x00000020U)) 
                             >> 0x00000013U)));
    __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U] 
        = ((0x000001ffU & __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U]) 
           | (0x000007ffU & (0x00000400U | ((IData)(__Vfunc_order_table__DOT__pack_entry__3__ld) 
                                            << 9U))));
    vlSelfRef.order_table__DOT__add_entry[0U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[0U];
    vlSelfRef.order_table__DOT__add_entry[1U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[1U];
    vlSelfRef.order_table__DOT__add_entry[2U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[2U];
    vlSelfRef.order_table__DOT__add_entry[3U] = __Vfunc_order_table__DOT__pack_entry__3__Vfuncout[3U];
    vlSelfRef.order_table__DOT__unnamedblk8__DOT__w = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)) {
        if (vlSelfRef.order_table__DOT__is_add) {
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][0U] 
                = vlSelfRef.order_table__DOT__add_entry[0U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] 
                = vlSelfRef.order_table__DOT__add_entry[1U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][2U] 
                = vlSelfRef.order_table__DOT__add_entry[2U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] 
                = vlSelfRef.order_table__DOT__add_entry[3U];
        } else if (((IData)(vlSelfRef.order_table__DOT__is_red) 
                    & (~ ((IData)(vlSelfRef.order_table__DOT__empties_w) 
                          >> (1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w))))) {
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__q 
                = (IData)(vlSelfRef.order_table__DOT__diff_w
                          [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)]);
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__tk 
                = (0x00000fffU & vlSelfRef.order_table__DOT__rd_a
                   [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U]);
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__sd 
                = (1U & (vlSelfRef.order_table__DOT__rd_a
                         [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] 
                         >> 0x0000000cU));
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                = vlSelfRef.order_table__DOT__op_ref;
            vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__ld 
                = (1U & (vlSelfRef.order_table__DOT__rd_a
                         [(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] 
                         >> 9U));
            VL_ZERO_RESET_W(107, vlSelfRef.order_table__DOT____VlemCall_0__pack_entry);
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__sd)) 
                            << 0x0000002cU) | (((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__tk)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__q)))));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[1U] 
                = (((IData)((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                             >> 4U)) << 0x0000000dU) 
                   | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__sd)) 
                                << 0x0000002cU) | (
                                                   ((QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__tk)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__q)))) 
                              >> 0x00000020U)));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[2U] 
                = (((IData)((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                             >> 4U)) >> 0x00000013U) 
                   | ((IData)(((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                                >> 4U) >> 0x00000020U)) 
                      << 0x0000000dU));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U] 
                = ((0x00000600U & vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U]) 
                   | (0x000007ffU & ((IData)(((vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__r 
                                               >> 4U) 
                                              >> 0x00000020U)) 
                                     >> 0x00000013U)));
            vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U] 
                = ((0x000001ffU & vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U]) 
                   | (0x000007ffU & (0x00000400U | 
                                     ((IData)(vlSelfRef.__Vfunc_order_table__DOT__pack_entry__9__ld) 
                                      << 9U))));
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][0U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[0U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[1U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][2U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[2U];
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] 
                = vlSelfRef.order_table__DOT____VlemCall_0__pack_entry[3U];
        } else {
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][0U] = 0U;
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][1U] = 0U;
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][2U] = 0U;
            vlSelfRef.order_table__DOT__a_din[(1U & vlSelfRef.order_table__DOT__unnamedblk8__DOT__w)][3U] = 0U;
        }
        vlSelfRef.order_table__DOT__unnamedblk8__DOT__w 
            = ((IData)(1U) + vlSelfRef.order_table__DOT__unnamedblk8__DOT__w);
    }
    vlSelfRef.order_table__DOT__add_wv = ((IData)(vlSelfRef.order_table__DOT__hit_a)
                                           ? (IData)(vlSelfRef.order_table__DOT__hitv_a)
                                           : (((~ (IData)(vlSelfRef.order_table__DOT__sh_a)) 
                                               & (IData)(vlSelfRef.order_table__DOT__free_a_ok))
                                               ? (IData)(vlSelfRef.order_table__DOT__freev_a)
                                               : 0U));
    vlSelfRef.order_table__DOT__add_sv = ((0U != (IData)(vlSelfRef.order_table__DOT__add_wv))
                                           ? 0U : ((IData)(vlSelfRef.order_table__DOT__sh_a)
                                                    ? (IData)(vlSelfRef.order_table__DOT__shv_a)
                                                    : 
                                                   ((IData)(vlSelfRef.order_table__DOT__st_free_ok)
                                                     ? (IData)(vlSelfRef.order_table__DOT__st_freev)
                                                     : 0U)));
    vlSelfRef.order_table__DOT__add_ok = ((0U != (IData)(vlSelfRef.order_table__DOT__add_wv)) 
                                          | (0U != (IData)(vlSelfRef.order_table__DOT__add_sv)));
    vlSelfRef.order_table__DOT__rep_wv = ((IData)(vlSelfRef.order_table__DOT__found_a)
                                           ? ((IData)(vlSelfRef.order_table__DOT__hit_b)
                                               ? (IData)(vlSelfRef.order_table__DOT__hitv_b)
                                               : (((IData)(vlSelfRef.order_table__DOT__same_set) 
                                                   & (IData)(vlSelfRef.order_table__DOT__hit_a))
                                                   ? (IData)(vlSelfRef.order_table__DOT__hitv_a)
                                                   : 
                                                  (((~ (IData)(vlSelfRef.order_table__DOT__sh_b)) 
                                                    & (IData)(vlSelfRef.order_table__DOT__free_b_ok))
                                                    ? (IData)(vlSelfRef.order_table__DOT__freev_b)
                                                    : 0U)))
                                           : 0U);
    vlSelfRef.order_table__DOT__rep_sv = ((1U & ((~ (IData)(vlSelfRef.order_table__DOT__found_a)) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.order_table__DOT__rep_wv))))
                                           ? 0U : ((IData)(vlSelfRef.order_table__DOT__sh_b)
                                                    ? (IData)(vlSelfRef.order_table__DOT__shv_b)
                                                    : 
                                                   ((IData)(vlSelfRef.order_table__DOT__st_free_ok)
                                                     ? (IData)(vlSelfRef.order_table__DOT__st_freev)
                                                     : 0U)));
    vlSelfRef.order_table__DOT__rep_ok = ((0U != (IData)(vlSelfRef.order_table__DOT__rep_wv)) 
                                          | (0U != (IData)(vlSelfRef.order_table__DOT__rep_sv)));
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.order_table__DOT__b_din[0U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.order_table__DOT__b_din[1U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.order_table__DOT__b_din[2U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.order_table__DOT__b_din[3U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.order_table__DOT__b_din[0U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.order_table__DOT__b_din[1U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.order_table__DOT__b_din[2U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.order_table__DOT__b_din[3U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.order_table__DOT__a_din[1U][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.order_table__DOT__a_din[1U][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.order_table__DOT__a_din[1U][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.order_table__DOT__a_din[1U][3U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.order_table__DOT__a_din[0U][0U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.order_table__DOT__a_din[0U][1U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.order_table__DOT__a_din[0U][2U];
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.order_table__DOT__a_din[0U][3U];
    vlSelfRef.order_table__DOT__b_we = 0U;
    if ((0U != (IData)(vlSelfRef.order_table__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.order_table__DOT__is_add)))) {
                if ((1U & (~ ((IData)(vlSelfRef.order_table__DOT__is_red) 
                              | (IData)(vlSelfRef.order_table__DOT__is_del))))) {
                    if (vlSelfRef.order_table__DOT__is_rep) {
                        vlSelfRef.order_table__DOT__b_we 
                            = vlSelfRef.order_table__DOT__rep_wv;
                    }
                }
            }
        }
    }
    vlSelfRef.order_table__DOT__a_we = 0U;
    if ((0U == (IData)(vlSelfRef.order_table__DOT__state))) {
        vlSelfRef.order_table__DOT__a_we = 3U;
    } else if ((2U == (IData)(vlSelfRef.order_table__DOT__state))) {
        if (vlSelfRef.order_table__DOT__is_add) {
            vlSelfRef.order_table__DOT__a_we = vlSelfRef.order_table__DOT__add_wv;
        } else if (((IData)(vlSelfRef.order_table__DOT__is_red) 
                    | (IData)(vlSelfRef.order_table__DOT__is_del))) {
            vlSelfRef.order_table__DOT__a_we = vlSelfRef.order_table__DOT__hitv_a;
        } else if (vlSelfRef.order_table__DOT__is_rep) {
            vlSelfRef.order_table__DOT__a_we = ((IData)(vlSelfRef.order_table__DOT__hitv_a) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.order_table__DOT__same_set)
                                                     ? (IData)(vlSelfRef.order_table__DOT__rep_wv)
                                                     : 0U)));
        }
    }
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.order_table__DOT__b_we) 
                 >> 1U));
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we 
        = (1U & (IData)(vlSelfRef.order_table__DOT__b_we));
    vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.order_table__DOT__a_we) 
                 >> 1U));
    vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we 
        = (1U & (IData)(vlSelfRef.order_table__DOT__a_we));
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
    if (VL_UNLIKELY(((vlSelfRef.s_op & 0xf8U)))) {
        Verilated::overWidthError("s_op");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_side & 0xfeU)))) {
        Verilated::overWidthError("s_side");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_tick & 0xf000U)))) {
        Verilated::overWidthError("s_tick");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_tick_ok & 0xfeU)))) {
        Verilated::overWidthError("s_tick_ok");
    }
}
#endif  // VL_DEBUG
