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
                                                        ((IData)(vlSelfRef.decode__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__decode__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__decode__DOT__clk__0 
            = vlSelfRef.decode__DOT__clk;
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
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    // Body
    vlSelfRef.decode__DOT__clk = vlSelfRef.clk;
    vlSelfRef.decode__DOT__rst = vlSelfRef.rst;
    vlSelfRef.decode__DOT__s_len = vlSelfRef.s_len;
    vlSelfRef.decode__DOT__s_valid = vlSelfRef.s_valid;
    vlSelfRef.decode__DOT__s_seq = vlSelfRef.s_seq;
    vlSelfRef.m_op = vlSelfRef.decode__DOT__m_op;
    vlSelfRef.m_valid = vlSelfRef.decode__DOT__m_valid;
    vlSelfRef.m_locate = vlSelfRef.decode__DOT__m_locate;
    vlSelfRef.m_ref = vlSelfRef.decode__DOT__m_ref;
    vlSelfRef.m_new_ref = vlSelfRef.decode__DOT__m_new_ref;
    vlSelfRef.m_side = vlSelfRef.decode__DOT__m_side;
    vlSelfRef.m_qty = vlSelfRef.decode__DOT__m_qty;
    vlSelfRef.m_price = vlSelfRef.decode__DOT__m_price;
    vlSelfRef.m_tick = vlSelfRef.decode__DOT__m_tick;
    vlSelfRef.m_tick_ok = vlSelfRef.decode__DOT__m_tick_ok;
    vlSelfRef.m_seq = vlSelfRef.decode__DOT__m_seq;
    vlSelfRef.stat_ops = vlSelfRef.decode__DOT__stat_ops;
    vlSelfRef.stat_out_of_band = vlSelfRef.decode__DOT__stat_out_of_band;
    vlSelfRef.stat_subpenny = vlSelfRef.decode__DOT__stat_subpenny;
    vlSelfRef.decode__DOT__tick_c = (0x00000fffU & (IData)(
                                                           (vlSelfRef.decode__DOT__p2_prod 
                                                            >> 0x00000016U)));
    vlSelfRef.decode__DOT__cfg_band_base = vlSelfRef.cfg_band_base;
    vlSelfRef.decode__DOT__s_msg[0U] = vlSelfRef.s_msg[0U];
    vlSelfRef.decode__DOT__s_msg[1U] = vlSelfRef.s_msg[1U];
    vlSelfRef.decode__DOT__s_msg[2U] = vlSelfRef.s_msg[2U];
    vlSelfRef.decode__DOT__s_msg[3U] = vlSelfRef.s_msg[3U];
    vlSelfRef.decode__DOT__s_msg[4U] = vlSelfRef.s_msg[4U];
    vlSelfRef.decode__DOT__s_msg[5U] = vlSelfRef.s_msg[5U];
    vlSelfRef.decode__DOT__s_msg[6U] = vlSelfRef.s_msg[6U];
    vlSelfRef.decode__DOT__s_msg[7U] = vlSelfRef.s_msg[7U];
    vlSelfRef.decode__DOT__s_msg[8U] = vlSelfRef.s_msg[8U];
    vlSelfRef.decode__DOT__s_msg[9U] = vlSelfRef.s_msg[9U];
    vlSelfRef.decode__DOT__s_msg[10U] = vlSelfRef.s_msg[10U];
    vlSelfRef.decode__DOT__s_msg[11U] = vlSelfRef.s_msg[11U];
    vlSelfRef.decode__DOT__s_msg[12U] = vlSelfRef.s_msg[12U];
    vlSelfRef.decode__DOT__locate = ((0x0000ff00U & vlSelfRef.decode__DOT__s_msg[0U]) 
                                     | (0x000000ffU 
                                        & (vlSelfRef.decode__DOT__s_msg[0U] 
                                           >> 0x00000010U)));
    vlSelfRef.decode__DOT__add_side = (0x42U == (vlSelfRef.decode__DOT__s_msg[4U] 
                                                 >> 0x00000018U));
    vlSelfRef.decode__DOT__rep_qty = ((((0x0000ff00U 
                                         & (vlSelfRef.decode__DOT__s_msg[6U] 
                                            >> 0x00000010U)) 
                                        | (0x000000ffU 
                                           & vlSelfRef.decode__DOT__s_msg[7U])) 
                                       << 0x00000010U) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.decode__DOT__s_msg[7U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.decode__DOT__s_msg[7U] 
                                               >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_3 = (((QData)((IData)(
                                                       ((((0x0000ff00U 
                                                           & (vlSelfRef.decode__DOT__s_msg[2U] 
                                                              >> 0x00000010U)) 
                                                          | (0x000000ffU 
                                                             & vlSelfRef.decode__DOT__s_msg[3U])) 
                                                         << 0x00000010U) 
                                                        | ((0x0000ff00U 
                                                            & vlSelfRef.decode__DOT__s_msg[3U]) 
                                                           | (0x000000ffU 
                                                              & (vlSelfRef.decode__DOT__s_msg[3U] 
                                                                 >> 0x00000010U)))))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((((0x0000ff00U 
                                                            & (vlSelfRef.decode__DOT__s_msg[3U] 
                                                               >> 0x00000010U)) 
                                                           | (0x000000ffU 
                                                              & vlSelfRef.decode__DOT__s_msg[4U])) 
                                                          << 0x00000010U) 
                                                         | ((0x0000ff00U 
                                                             & vlSelfRef.decode__DOT__s_msg[4U]) 
                                                            | (0x000000ffU 
                                                               & (vlSelfRef.decode__DOT__s_msg[4U] 
                                                                  >> 0x00000010U)))))));
    __VdfgRegularize_h6e95ff9d_0_0 = ((0x00ff0000U 
                                       & (vlSelfRef.decode__DOT__s_msg[5U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.decode__DOT__s_msg[5U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.decode__DOT__s_msg[5U] 
                                               >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((0x00ff0000U 
                                       & (vlSelfRef.decode__DOT__s_msg[8U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.decode__DOT__s_msg[8U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.decode__DOT__s_msg[8U] 
                                               >> 0x00000010U))));
    vlSelfRef.decode__DOT__msg_type = (0x000000ffU 
                                       & vlSelfRef.decode__DOT__s_msg[0U]);
    vlSelfRef.decode__DOT__add_ref = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.decode__DOT__red_ref = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.decode__DOT__add_qty = ((__VdfgRegularize_h6e95ff9d_0_0 
                                       << 8U) | (vlSelfRef.decode__DOT__s_msg[5U] 
                                                 >> 0x00000018U));
    __VdfgRegularize_h6e95ff9d_0_1 = ((0xff000000U 
                                       & vlSelfRef.decode__DOT__s_msg[4U]) 
                                      | __VdfgRegularize_h6e95ff9d_0_0);
    vlSelfRef.decode__DOT__add_price = ((__VdfgRegularize_h6e95ff9d_0_2 
                                         << 8U) | (vlSelfRef.decode__DOT__s_msg[8U] 
                                                   >> 0x00000018U));
    vlSelfRef.decode__DOT__rep_price = ((0xff000000U 
                                         & vlSelfRef.decode__DOT__s_msg[7U]) 
                                        | __VdfgRegularize_h6e95ff9d_0_2);
    vlSelfRef.decode__DOT__op_c = 0U;
    vlSelfRef.decode__DOT__side_c = 0U;
    vlSelfRef.decode__DOT__has_price = 0U;
    vlSelfRef.decode__DOT__ref_c = vlSelfRef.decode__DOT__add_ref;
    vlSelfRef.decode__DOT__rep_new_ref = (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_1)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            ((((0x0000ff00U 
                                                                & (vlSelfRef.decode__DOT__s_msg[5U] 
                                                                   >> 0x00000010U)) 
                                                               | (0x000000ffU 
                                                                  & vlSelfRef.decode__DOT__s_msg[6U])) 
                                                              << 0x00000010U) 
                                                             | ((0x0000ff00U 
                                                                 & vlSelfRef.decode__DOT__s_msg[6U]) 
                                                                | (0x000000ffU 
                                                                   & (vlSelfRef.decode__DOT__s_msg[6U] 
                                                                      >> 0x00000010U)))))));
    vlSelfRef.decode__DOT__red_qty = __VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.decode__DOT__price_c = 0U;
    vlSelfRef.decode__DOT__new_ref_c = 0ULL;
    if ((1U & (~ ((0x41U == (IData)(vlSelfRef.decode__DOT__msg_type)) 
                  || (0x46U == (IData)(vlSelfRef.decode__DOT__msg_type)))))) {
        if ((((0x45U == (IData)(vlSelfRef.decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.decode__DOT__msg_type)))) {
            vlSelfRef.decode__DOT__ref_c = vlSelfRef.decode__DOT__red_ref;
        }
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.decode__DOT__msg_type))) {
                    vlSelfRef.decode__DOT__new_ref_c 
                        = vlSelfRef.decode__DOT__rep_new_ref;
                }
            }
        }
    }
    vlSelfRef.decode__DOT__qty_c = 0U;
    if (((0x41U == (IData)(vlSelfRef.decode__DOT__msg_type)) 
         || (0x46U == (IData)(vlSelfRef.decode__DOT__msg_type)))) {
        vlSelfRef.decode__DOT__op_c = 1U;
        vlSelfRef.decode__DOT__side_c = vlSelfRef.decode__DOT__add_side;
        vlSelfRef.decode__DOT__has_price = 1U;
        vlSelfRef.decode__DOT__price_c = vlSelfRef.decode__DOT__add_price;
        vlSelfRef.decode__DOT__qty_c = vlSelfRef.decode__DOT__add_qty;
    } else {
        if ((((0x45U == (IData)(vlSelfRef.decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.decode__DOT__msg_type)))) {
            vlSelfRef.decode__DOT__op_c = 2U;
            vlSelfRef.decode__DOT__qty_c = vlSelfRef.decode__DOT__red_qty;
        } else {
            vlSelfRef.decode__DOT__op_c = ((0x44U == (IData)(vlSelfRef.decode__DOT__msg_type))
                                            ? 3U : 
                                           ((0x55U 
                                             == (IData)(vlSelfRef.decode__DOT__msg_type))
                                             ? 4U : 0U));
            if ((0x44U != (IData)(vlSelfRef.decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.decode__DOT__msg_type))) {
                    vlSelfRef.decode__DOT__qty_c = vlSelfRef.decode__DOT__rep_qty;
                }
            }
        }
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.decode__DOT__msg_type))) {
                    vlSelfRef.decode__DOT__has_price = 1U;
                    vlSelfRef.decode__DOT__price_c 
                        = vlSelfRef.decode__DOT__rep_price;
                }
            }
        }
    }
    vlSelfRef.decode__DOT__delta_c = (vlSelfRef.decode__DOT__price_c 
                                      - vlSelfRef.decode__DOT__cfg_band_base);
    vlSelfRef.decode__DOT__in_band_c = ((IData)(vlSelfRef.decode__DOT__has_price) 
                                        & ((vlSelfRef.decode__DOT__price_c 
                                            >= vlSelfRef.decode__DOT__cfg_band_base) 
                                           & ((QData)((IData)(vlSelfRef.decode__DOT__price_c)) 
                                              < vlSelfRef.decode__DOT__band_top)));
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
    IData/*31:0*/ __Vdly__decode__DOT__stat_out_of_band;
    __Vdly__decode__DOT__stat_out_of_band = 0;
    IData/*31:0*/ __Vdly__decode__DOT__stat_ops;
    __Vdly__decode__DOT__stat_ops = 0;
    IData/*31:0*/ __Vdly__decode__DOT__stat_subpenny;
    __Vdly__decode__DOT__stat_subpenny = 0;
    // Body
    __Vdly__decode__DOT__stat_ops = vlSelfRef.decode__DOT__stat_ops;
    __Vdly__decode__DOT__stat_out_of_band = vlSelfRef.decode__DOT__stat_out_of_band;
    __Vdly__decode__DOT__stat_subpenny = vlSelfRef.decode__DOT__stat_subpenny;
    if (vlSelfRef.decode__DOT__rst) {
        __Vdly__decode__DOT__stat_ops = 0U;
        __Vdly__decode__DOT__stat_out_of_band = 0U;
        vlSelfRef.decode__DOT__m_tick = 0U;
        vlSelfRef.decode__DOT__m_seq = 0ULL;
        vlSelfRef.decode__DOT__m_locate = 0U;
        vlSelfRef.decode__DOT__m_new_ref = 0ULL;
        vlSelfRef.decode__DOT__m_ref = 0ULL;
        vlSelfRef.decode__DOT__m_qty = 0U;
        vlSelfRef.decode__DOT__m_op = 0U;
        vlSelfRef.decode__DOT__m_price = 0U;
        vlSelfRef.decode__DOT__m_valid = 0U;
        __Vdly__decode__DOT__stat_subpenny = 0U;
    } else {
        if (((IData)(vlSelfRef.decode__DOT__s_valid) 
             & (0U != (IData)(vlSelfRef.decode__DOT__op_c)))) {
            __Vdly__decode__DOT__stat_ops = ((IData)(1U) 
                                             + vlSelfRef.decode__DOT__stat_ops);
        }
        if ((((IData)(vlSelfRef.decode__DOT__s_valid) 
              & (IData)(vlSelfRef.decode__DOT__has_price)) 
             & (~ (IData)(vlSelfRef.decode__DOT__in_band_c)))) {
            __Vdly__decode__DOT__stat_out_of_band = 
                ((IData)(1U) + vlSelfRef.decode__DOT__stat_out_of_band);
        }
        vlSelfRef.decode__DOT__m_tick = vlSelfRef.decode__DOT__tick_c;
        vlSelfRef.decode__DOT__m_seq = vlSelfRef.decode__DOT__p2_seq;
        vlSelfRef.decode__DOT__m_locate = vlSelfRef.decode__DOT__p2_locate;
        vlSelfRef.decode__DOT__m_new_ref = vlSelfRef.decode__DOT__p2_new_ref;
        vlSelfRef.decode__DOT__m_ref = vlSelfRef.decode__DOT__p2_ref;
        vlSelfRef.decode__DOT__m_qty = vlSelfRef.decode__DOT__p2_qty;
        vlSelfRef.decode__DOT__m_op = vlSelfRef.decode__DOT__p2_op;
        vlSelfRef.decode__DOT__m_price = vlSelfRef.decode__DOT__p2_price;
        if (((IData)(vlSelfRef.decode__DOT__p2_valid) 
             & (IData)(vlSelfRef.decode__DOT__subpenny_c))) {
            __Vdly__decode__DOT__stat_subpenny = ((IData)(1U) 
                                                  + vlSelfRef.decode__DOT__stat_subpenny);
        }
        vlSelfRef.decode__DOT__m_valid = vlSelfRef.decode__DOT__p2_valid;
    }
    vlSelfRef.decode__DOT__band_top = (0x00000001ffffffffULL 
                                       & (0x0000000000064000ULL 
                                          + (QData)((IData)(vlSelfRef.decode__DOT__cfg_band_base))));
    vlSelfRef.decode__DOT__m_side = ((1U & (~ (IData)(vlSelfRef.decode__DOT__rst))) 
                                     && (IData)(vlSelfRef.decode__DOT__p2_side));
    vlSelfRef.decode__DOT__m_tick_ok = ((1U & (~ (IData)(vlSelfRef.decode__DOT__rst))) 
                                        && ((IData)(vlSelfRef.decode__DOT__p2_in_band) 
                                            & (~ (IData)(vlSelfRef.decode__DOT__subpenny_c))));
    if ((1U & (~ (IData)(vlSelfRef.decode__DOT__rst)))) {
        vlSelfRef.decode__DOT__p2_delta = vlSelfRef.decode__DOT__p1_delta;
        vlSelfRef.decode__DOT__p2_prod = (0x00000007ffffffffULL 
                                          & (0x0000000000028f5dULL 
                                             * (QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.decode__DOT__p1_delta 
                                                                   >> 2U))))));
        vlSelfRef.decode__DOT__p1_delta = (0x0007ffffU 
                                           & vlSelfRef.decode__DOT__delta_c);
        vlSelfRef.decode__DOT__p2_seq = vlSelfRef.decode__DOT__p1_seq;
        vlSelfRef.decode__DOT__p2_locate = vlSelfRef.decode__DOT__p1_locate;
        vlSelfRef.decode__DOT__p2_new_ref = vlSelfRef.decode__DOT__p1_new_ref;
        vlSelfRef.decode__DOT__p2_side = vlSelfRef.decode__DOT__p1_side;
        vlSelfRef.decode__DOT__p2_ref = vlSelfRef.decode__DOT__p1_ref;
        vlSelfRef.decode__DOT__p2_qty = vlSelfRef.decode__DOT__p1_qty;
        vlSelfRef.decode__DOT__p2_op = vlSelfRef.decode__DOT__p1_op;
        vlSelfRef.decode__DOT__p2_in_band = vlSelfRef.decode__DOT__p1_in_band;
        vlSelfRef.decode__DOT__p2_price = vlSelfRef.decode__DOT__p1_price;
        vlSelfRef.decode__DOT__p1_seq = vlSelfRef.decode__DOT__s_seq;
        vlSelfRef.decode__DOT__p1_locate = vlSelfRef.decode__DOT__locate;
        vlSelfRef.decode__DOT__p1_new_ref = vlSelfRef.decode__DOT__new_ref_c;
        vlSelfRef.decode__DOT__p1_side = vlSelfRef.decode__DOT__side_c;
        vlSelfRef.decode__DOT__p1_ref = vlSelfRef.decode__DOT__ref_c;
        vlSelfRef.decode__DOT__p1_qty = vlSelfRef.decode__DOT__qty_c;
        vlSelfRef.decode__DOT__p1_op = vlSelfRef.decode__DOT__op_c;
        vlSelfRef.decode__DOT__p1_in_band = vlSelfRef.decode__DOT__in_band_c;
        vlSelfRef.decode__DOT__p1_price = vlSelfRef.decode__DOT__price_c;
    }
    vlSelfRef.decode__DOT__stat_ops = __Vdly__decode__DOT__stat_ops;
    vlSelfRef.decode__DOT__stat_out_of_band = __Vdly__decode__DOT__stat_out_of_band;
    vlSelfRef.decode__DOT__stat_subpenny = __Vdly__decode__DOT__stat_subpenny;
    vlSelfRef.stat_ops = vlSelfRef.decode__DOT__stat_ops;
    vlSelfRef.stat_out_of_band = vlSelfRef.decode__DOT__stat_out_of_band;
    vlSelfRef.m_tick = vlSelfRef.decode__DOT__m_tick;
    vlSelfRef.decode__DOT__tick_c = (0x00000fffU & (IData)(
                                                           (vlSelfRef.decode__DOT__p2_prod 
                                                            >> 0x00000016U)));
    vlSelfRef.m_seq = vlSelfRef.decode__DOT__m_seq;
    vlSelfRef.m_locate = vlSelfRef.decode__DOT__m_locate;
    vlSelfRef.m_new_ref = vlSelfRef.decode__DOT__m_new_ref;
    vlSelfRef.m_side = vlSelfRef.decode__DOT__m_side;
    vlSelfRef.m_ref = vlSelfRef.decode__DOT__m_ref;
    vlSelfRef.m_qty = vlSelfRef.decode__DOT__m_qty;
    vlSelfRef.m_op = vlSelfRef.decode__DOT__m_op;
    vlSelfRef.m_tick_ok = vlSelfRef.decode__DOT__m_tick_ok;
    vlSelfRef.m_price = vlSelfRef.decode__DOT__m_price;
    vlSelfRef.m_valid = vlSelfRef.decode__DOT__m_valid;
    vlSelfRef.stat_subpenny = vlSelfRef.decode__DOT__stat_subpenny;
    vlSelfRef.decode__DOT__p2_valid = ((1U & (~ (IData)(vlSelfRef.decode__DOT__rst))) 
                                       && (IData)(vlSelfRef.decode__DOT__p1_valid));
    vlSelfRef.decode__DOT__p1_valid = ((1U & (~ (IData)(vlSelfRef.decode__DOT__rst))) 
                                       && ((IData)(vlSelfRef.decode__DOT__s_valid) 
                                           & (0U != (IData)(vlSelfRef.decode__DOT__op_c))));
    vlSelfRef.decode__DOT__in_band_c = ((IData)(vlSelfRef.decode__DOT__has_price) 
                                        & ((vlSelfRef.decode__DOT__price_c 
                                            >= vlSelfRef.decode__DOT__cfg_band_base) 
                                           & ((QData)((IData)(vlSelfRef.decode__DOT__price_c)) 
                                              < vlSelfRef.decode__DOT__band_top)));
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
    if (VL_UNLIKELY(((vlSelfRef.s_msg[12U] & 0xffff0000U)))) {
        Verilated::overWidthError("s_msg");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_valid & 0xfeU)))) {
        Verilated::overWidthError("s_valid");
    }
}
#endif  // VL_DEBUG
