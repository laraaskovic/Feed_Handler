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
                                                        ((IData)(vlSelfRef.msg_frame_slow__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__msg_frame_slow__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__msg_frame_slow__DOT__clk__0 
            = vlSelfRef.msg_frame_slow__DOT__clk;
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
    // Body
    vlSelfRef.msg_frame_slow__DOT__clk = vlSelfRef.clk;
    vlSelfRef.msg_frame_slow__DOT__rst = vlSelfRef.rst;
    vlSelfRef.msg_frame_slow__DOT__s_valid = vlSelfRef.s_valid;
    vlSelfRef.msg_frame_slow__DOT__s_last = vlSelfRef.s_last;
    vlSelfRef.msg_frame_slow__DOT__s_sequence = vlSelfRef.s_sequence;
    vlSelfRef.m_msg[0U] = vlSelfRef.msg_frame_slow__DOT__m_msg[0U];
    vlSelfRef.m_msg[1U] = vlSelfRef.msg_frame_slow__DOT__m_msg[1U];
    vlSelfRef.m_msg[2U] = vlSelfRef.msg_frame_slow__DOT__m_msg[2U];
    vlSelfRef.m_msg[3U] = vlSelfRef.msg_frame_slow__DOT__m_msg[3U];
    vlSelfRef.m_msg[4U] = vlSelfRef.msg_frame_slow__DOT__m_msg[4U];
    vlSelfRef.m_msg[5U] = vlSelfRef.msg_frame_slow__DOT__m_msg[5U];
    vlSelfRef.m_msg[6U] = vlSelfRef.msg_frame_slow__DOT__m_msg[6U];
    vlSelfRef.m_msg[7U] = vlSelfRef.msg_frame_slow__DOT__m_msg[7U];
    vlSelfRef.m_msg[8U] = vlSelfRef.msg_frame_slow__DOT__m_msg[8U];
    vlSelfRef.m_msg[9U] = vlSelfRef.msg_frame_slow__DOT__m_msg[9U];
    vlSelfRef.m_msg[10U] = vlSelfRef.msg_frame_slow__DOT__m_msg[10U];
    vlSelfRef.m_msg[11U] = vlSelfRef.msg_frame_slow__DOT__m_msg[11U];
    vlSelfRef.m_msg[12U] = vlSelfRef.msg_frame_slow__DOT__m_msg[12U];
    vlSelfRef.m_len = vlSelfRef.msg_frame_slow__DOT__m_len;
    vlSelfRef.m_valid = vlSelfRef.msg_frame_slow__DOT__m_valid;
    vlSelfRef.m_seq = vlSelfRef.msg_frame_slow__DOT__m_seq;
    vlSelfRef.stat_messages = vlSelfRef.msg_frame_slow__DOT__stat_messages;
    vlSelfRef.stat_frame_err = vlSelfRef.msg_frame_slow__DOT__stat_frame_err;
    vlSelfRef.msg_frame_slow__DOT__s_byte = vlSelfRef.s_byte;
    vlSelfRef.msg_frame_slow__DOT__len_full = ((IData)(vlSelfRef.msg_frame_slow__DOT__len_q) 
                                               | (IData)(vlSelfRef.msg_frame_slow__DOT__s_byte));
    vlSelfRef.msg_frame_slow__DOT__len_bad = ((0U == (IData)(vlSelfRef.msg_frame_slow__DOT__len_full)) 
                                              | (0x0032U 
                                                 < (IData)(vlSelfRef.msg_frame_slow__DOT__len_full)));
    vlSelfRef.msg_frame_slow__DOT__end_err = (1U & 
                                              (~ ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.msg_frame_slow__DOT__state)) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.msg_frame_slow__DOT__remaining))) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.msg_frame_slow__DOT__state)) 
                                                     | ((IData)(vlSelfRef.msg_frame_slow__DOT__len_bad) 
                                                        & (1U 
                                                           == (IData)(vlSelfRef.msg_frame_slow__DOT__state)))))));
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

extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_h23cb1401_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__msg_frame_slow__DOT__state;
    __Vdly__msg_frame_slow__DOT__state = 0;
    SData/*15:0*/ __Vdly__msg_frame_slow__DOT__len_q;
    __Vdly__msg_frame_slow__DOT__len_q = 0;
    SData/*15:0*/ __Vdly__msg_frame_slow__DOT__remaining;
    __Vdly__msg_frame_slow__DOT__remaining = 0;
    CData/*7:0*/ __Vdly__msg_frame_slow__DOT__byte_idx;
    __Vdly__msg_frame_slow__DOT__byte_idx = 0;
    SData/*15:0*/ __Vdly__msg_frame_slow__DOT__msg_idx;
    __Vdly__msg_frame_slow__DOT__msg_idx = 0;
    VlWide<13>/*399:0*/ __Vdly__msg_frame_slow__DOT__acc;
    VL_ZERO_W(400, __Vdly__msg_frame_slow__DOT__acc);
    IData/*31:0*/ __Vdly__msg_frame_slow__DOT__stat_messages;
    __Vdly__msg_frame_slow__DOT__stat_messages = 0;
    IData/*31:0*/ __Vdly__msg_frame_slow__DOT__stat_frame_err;
    __Vdly__msg_frame_slow__DOT__stat_frame_err = 0;
    // Body
    __Vdly__msg_frame_slow__DOT__byte_idx = vlSelfRef.msg_frame_slow__DOT__byte_idx;
    __Vdly__msg_frame_slow__DOT__msg_idx = vlSelfRef.msg_frame_slow__DOT__msg_idx;
    __Vdly__msg_frame_slow__DOT__acc[0U] = vlSelfRef.msg_frame_slow__DOT__acc[0U];
    __Vdly__msg_frame_slow__DOT__acc[1U] = vlSelfRef.msg_frame_slow__DOT__acc[1U];
    __Vdly__msg_frame_slow__DOT__acc[2U] = vlSelfRef.msg_frame_slow__DOT__acc[2U];
    __Vdly__msg_frame_slow__DOT__acc[3U] = vlSelfRef.msg_frame_slow__DOT__acc[3U];
    __Vdly__msg_frame_slow__DOT__acc[4U] = vlSelfRef.msg_frame_slow__DOT__acc[4U];
    __Vdly__msg_frame_slow__DOT__acc[5U] = vlSelfRef.msg_frame_slow__DOT__acc[5U];
    __Vdly__msg_frame_slow__DOT__acc[6U] = vlSelfRef.msg_frame_slow__DOT__acc[6U];
    __Vdly__msg_frame_slow__DOT__acc[7U] = vlSelfRef.msg_frame_slow__DOT__acc[7U];
    __Vdly__msg_frame_slow__DOT__acc[8U] = vlSelfRef.msg_frame_slow__DOT__acc[8U];
    __Vdly__msg_frame_slow__DOT__acc[9U] = vlSelfRef.msg_frame_slow__DOT__acc[9U];
    __Vdly__msg_frame_slow__DOT__acc[10U] = vlSelfRef.msg_frame_slow__DOT__acc[10U];
    __Vdly__msg_frame_slow__DOT__acc[11U] = vlSelfRef.msg_frame_slow__DOT__acc[11U];
    __Vdly__msg_frame_slow__DOT__acc[12U] = vlSelfRef.msg_frame_slow__DOT__acc[12U];
    __Vdly__msg_frame_slow__DOT__stat_messages = vlSelfRef.msg_frame_slow__DOT__stat_messages;
    __Vdly__msg_frame_slow__DOT__stat_frame_err = vlSelfRef.msg_frame_slow__DOT__stat_frame_err;
    __Vdly__msg_frame_slow__DOT__state = vlSelfRef.msg_frame_slow__DOT__state;
    __Vdly__msg_frame_slow__DOT__remaining = vlSelfRef.msg_frame_slow__DOT__remaining;
    __Vdly__msg_frame_slow__DOT__len_q = vlSelfRef.msg_frame_slow__DOT__len_q;
    if (vlSelfRef.msg_frame_slow__DOT__rst) {
        __Vdly__msg_frame_slow__DOT__state = 0U;
        __Vdly__msg_frame_slow__DOT__len_q = 0U;
        __Vdly__msg_frame_slow__DOT__remaining = 0U;
        __Vdly__msg_frame_slow__DOT__byte_idx = 0U;
        __Vdly__msg_frame_slow__DOT__msg_idx = 0U;
        VL_ASSIGN_W(400, __Vdly__msg_frame_slow__DOT__acc, Vtop__ConstPool__CONST_h23cb1401_0);
        VL_ASSIGN_W(400, vlSelfRef.msg_frame_slow__DOT__m_msg, Vtop__ConstPool__CONST_h23cb1401_0);
        vlSelfRef.msg_frame_slow__DOT__m_len = 0U;
        vlSelfRef.msg_frame_slow__DOT__m_valid = 0U;
        vlSelfRef.msg_frame_slow__DOT__m_seq = 0ULL;
        __Vdly__msg_frame_slow__DOT__stat_messages = 0U;
        __Vdly__msg_frame_slow__DOT__stat_frame_err = 0U;
    } else {
        vlSelfRef.msg_frame_slow__DOT__m_valid = 0U;
        if (vlSelfRef.msg_frame_slow__DOT__s_valid) {
            if ((2U & (IData)(vlSelfRef.msg_frame_slow__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.msg_frame_slow__DOT__state)))) {
                    if ((0x018fU >= (0x000001ffU & 
                                     ((IData)(vlSelfRef.msg_frame_slow__DOT__byte_idx) 
                                      << 3U)))) {
                        VL_ASSIGNSEL_WI(400, 8, (0x000001ffU 
                                                 & ((IData)(vlSelfRef.msg_frame_slow__DOT__byte_idx) 
                                                    << 3U)), __Vdly__msg_frame_slow__DOT__acc, vlSelfRef.msg_frame_slow__DOT__s_byte);
                    }
                    __Vdly__msg_frame_slow__DOT__byte_idx 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.msg_frame_slow__DOT__byte_idx)));
                    __Vdly__msg_frame_slow__DOT__remaining 
                        = (0x0000ffffU & ((IData)(vlSelfRef.msg_frame_slow__DOT__remaining) 
                                          - (IData)(1U)));
                    if ((1U == (IData)(vlSelfRef.msg_frame_slow__DOT__remaining))) {
                        __Vdly__msg_frame_slow__DOT__stat_messages 
                            = ((IData)(1U) + vlSelfRef.msg_frame_slow__DOT__stat_messages);
                        vlSelfRef.msg_frame_slow__DOT__m_msg[0U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[0U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[1U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[1U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[2U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[2U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[3U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[3U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[4U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[4U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[5U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[5U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[6U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[6U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[7U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[7U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[8U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[8U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[9U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[9U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[10U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[10U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[11U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[11U];
                        vlSelfRef.msg_frame_slow__DOT__m_msg[12U] 
                            = vlSelfRef.msg_frame_slow__DOT__acc[12U];
                        vlSelfRef.msg_frame_slow__DOT__m_len 
                            = (0x000000ffU & (IData)(vlSelfRef.msg_frame_slow__DOT__len_q));
                        vlSelfRef.msg_frame_slow__DOT__m_valid = 1U;
                        vlSelfRef.msg_frame_slow__DOT__m_seq 
                            = (vlSelfRef.msg_frame_slow__DOT__s_sequence 
                               + (QData)((IData)(vlSelfRef.msg_frame_slow__DOT__msg_idx)));
                        __Vdly__msg_frame_slow__DOT__state = 0U;
                        if ((0x018fU >= (0x000001ffU 
                                         & ((IData)(vlSelfRef.msg_frame_slow__DOT__byte_idx) 
                                            << 3U)))) {
                            VL_ASSIGNSEL_WI(400, 8, 
                                            (0x000001ffU 
                                             & ((IData)(vlSelfRef.msg_frame_slow__DOT__byte_idx) 
                                                << 3U)), vlSelfRef.msg_frame_slow__DOT__m_msg, vlSelfRef.msg_frame_slow__DOT__s_byte);
                        }
                        __Vdly__msg_frame_slow__DOT__msg_idx 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.msg_frame_slow__DOT__msg_idx)));
                        VL_ASSIGN_W(400, __Vdly__msg_frame_slow__DOT__acc, Vtop__ConstPool__CONST_h23cb1401_0);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.msg_frame_slow__DOT__state))) {
                if (vlSelfRef.msg_frame_slow__DOT__len_bad) {
                    __Vdly__msg_frame_slow__DOT__stat_frame_err 
                        = ((IData)(1U) + vlSelfRef.msg_frame_slow__DOT__stat_frame_err);
                    __Vdly__msg_frame_slow__DOT__state = 3U;
                } else {
                    __Vdly__msg_frame_slow__DOT__remaining 
                        = vlSelfRef.msg_frame_slow__DOT__len_full;
                    __Vdly__msg_frame_slow__DOT__len_q 
                        = vlSelfRef.msg_frame_slow__DOT__len_full;
                    __Vdly__msg_frame_slow__DOT__byte_idx = 0U;
                    __Vdly__msg_frame_slow__DOT__state = 2U;
                }
            } else {
                __Vdly__msg_frame_slow__DOT__len_q 
                    = ((IData)(vlSelfRef.msg_frame_slow__DOT__s_byte) 
                       << 8U);
                __Vdly__msg_frame_slow__DOT__state = 1U;
            }
        }
        if (((IData)(vlSelfRef.msg_frame_slow__DOT__s_valid) 
             & (IData)(vlSelfRef.msg_frame_slow__DOT__s_last))) {
            if (vlSelfRef.msg_frame_slow__DOT__end_err) {
                __Vdly__msg_frame_slow__DOT__stat_frame_err 
                    = ((IData)(1U) + vlSelfRef.msg_frame_slow__DOT__stat_frame_err);
            }
            VL_ASSIGN_W(400, __Vdly__msg_frame_slow__DOT__acc, Vtop__ConstPool__CONST_h23cb1401_0);
            __Vdly__msg_frame_slow__DOT__state = 0U;
            __Vdly__msg_frame_slow__DOT__remaining = 0U;
            __Vdly__msg_frame_slow__DOT__byte_idx = 0U;
            __Vdly__msg_frame_slow__DOT__msg_idx = 0U;
        }
    }
    vlSelfRef.msg_frame_slow__DOT__byte_idx = __Vdly__msg_frame_slow__DOT__byte_idx;
    vlSelfRef.msg_frame_slow__DOT__msg_idx = __Vdly__msg_frame_slow__DOT__msg_idx;
    vlSelfRef.msg_frame_slow__DOT__acc[0U] = __Vdly__msg_frame_slow__DOT__acc[0U];
    vlSelfRef.msg_frame_slow__DOT__acc[1U] = __Vdly__msg_frame_slow__DOT__acc[1U];
    vlSelfRef.msg_frame_slow__DOT__acc[2U] = __Vdly__msg_frame_slow__DOT__acc[2U];
    vlSelfRef.msg_frame_slow__DOT__acc[3U] = __Vdly__msg_frame_slow__DOT__acc[3U];
    vlSelfRef.msg_frame_slow__DOT__acc[4U] = __Vdly__msg_frame_slow__DOT__acc[4U];
    vlSelfRef.msg_frame_slow__DOT__acc[5U] = __Vdly__msg_frame_slow__DOT__acc[5U];
    vlSelfRef.msg_frame_slow__DOT__acc[6U] = __Vdly__msg_frame_slow__DOT__acc[6U];
    vlSelfRef.msg_frame_slow__DOT__acc[7U] = __Vdly__msg_frame_slow__DOT__acc[7U];
    vlSelfRef.msg_frame_slow__DOT__acc[8U] = __Vdly__msg_frame_slow__DOT__acc[8U];
    vlSelfRef.msg_frame_slow__DOT__acc[9U] = __Vdly__msg_frame_slow__DOT__acc[9U];
    vlSelfRef.msg_frame_slow__DOT__acc[10U] = __Vdly__msg_frame_slow__DOT__acc[10U];
    vlSelfRef.msg_frame_slow__DOT__acc[11U] = __Vdly__msg_frame_slow__DOT__acc[11U];
    vlSelfRef.msg_frame_slow__DOT__acc[12U] = __Vdly__msg_frame_slow__DOT__acc[12U];
    vlSelfRef.msg_frame_slow__DOT__stat_messages = __Vdly__msg_frame_slow__DOT__stat_messages;
    vlSelfRef.msg_frame_slow__DOT__stat_frame_err = __Vdly__msg_frame_slow__DOT__stat_frame_err;
    vlSelfRef.msg_frame_slow__DOT__state = __Vdly__msg_frame_slow__DOT__state;
    vlSelfRef.msg_frame_slow__DOT__remaining = __Vdly__msg_frame_slow__DOT__remaining;
    vlSelfRef.msg_frame_slow__DOT__len_q = __Vdly__msg_frame_slow__DOT__len_q;
    vlSelfRef.m_msg[0U] = vlSelfRef.msg_frame_slow__DOT__m_msg[0U];
    vlSelfRef.m_msg[1U] = vlSelfRef.msg_frame_slow__DOT__m_msg[1U];
    vlSelfRef.m_msg[2U] = vlSelfRef.msg_frame_slow__DOT__m_msg[2U];
    vlSelfRef.m_msg[3U] = vlSelfRef.msg_frame_slow__DOT__m_msg[3U];
    vlSelfRef.m_msg[4U] = vlSelfRef.msg_frame_slow__DOT__m_msg[4U];
    vlSelfRef.m_msg[5U] = vlSelfRef.msg_frame_slow__DOT__m_msg[5U];
    vlSelfRef.m_msg[6U] = vlSelfRef.msg_frame_slow__DOT__m_msg[6U];
    vlSelfRef.m_msg[7U] = vlSelfRef.msg_frame_slow__DOT__m_msg[7U];
    vlSelfRef.m_msg[8U] = vlSelfRef.msg_frame_slow__DOT__m_msg[8U];
    vlSelfRef.m_msg[9U] = vlSelfRef.msg_frame_slow__DOT__m_msg[9U];
    vlSelfRef.m_msg[10U] = vlSelfRef.msg_frame_slow__DOT__m_msg[10U];
    vlSelfRef.m_msg[11U] = vlSelfRef.msg_frame_slow__DOT__m_msg[11U];
    vlSelfRef.m_msg[12U] = vlSelfRef.msg_frame_slow__DOT__m_msg[12U];
    vlSelfRef.m_len = vlSelfRef.msg_frame_slow__DOT__m_len;
    vlSelfRef.m_valid = vlSelfRef.msg_frame_slow__DOT__m_valid;
    vlSelfRef.m_seq = vlSelfRef.msg_frame_slow__DOT__m_seq;
    vlSelfRef.stat_messages = vlSelfRef.msg_frame_slow__DOT__stat_messages;
    vlSelfRef.stat_frame_err = vlSelfRef.msg_frame_slow__DOT__stat_frame_err;
    vlSelfRef.msg_frame_slow__DOT__len_full = ((IData)(vlSelfRef.msg_frame_slow__DOT__len_q) 
                                               | (IData)(vlSelfRef.msg_frame_slow__DOT__s_byte));
    vlSelfRef.msg_frame_slow__DOT__len_bad = ((0U == (IData)(vlSelfRef.msg_frame_slow__DOT__len_full)) 
                                              | (0x0032U 
                                                 < (IData)(vlSelfRef.msg_frame_slow__DOT__len_full)));
    vlSelfRef.msg_frame_slow__DOT__end_err = (1U & 
                                              (~ ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.msg_frame_slow__DOT__state)) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.msg_frame_slow__DOT__remaining))) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.msg_frame_slow__DOT__state)) 
                                                     | ((IData)(vlSelfRef.msg_frame_slow__DOT__len_bad) 
                                                        & (1U 
                                                           == (IData)(vlSelfRef.msg_frame_slow__DOT__state)))))));
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
    if (VL_UNLIKELY(((vlSelfRef.s_last & 0xfeU)))) {
        Verilated::overWidthError("s_last");
    }
}
#endif  // VL_DEBUG
