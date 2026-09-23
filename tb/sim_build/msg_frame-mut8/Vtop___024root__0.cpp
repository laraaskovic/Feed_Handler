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
                                                        ((IData)(vlSelfRef.msg_frame__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__msg_frame__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__msg_frame__DOT__clk__0 
            = vlSelfRef.msg_frame__DOT__clk;
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    vlSelfRef.msg_frame__DOT__clk = vlSelfRef.clk;
    vlSelfRef.msg_frame__DOT__rst = vlSelfRef.rst;
    vlSelfRef.msg_frame__DOT__s_sequence = vlSelfRef.s_sequence;
    vlSelfRef.m_msg[0U] = vlSelfRef.msg_frame__DOT__m_msg[0U];
    vlSelfRef.m_msg[1U] = vlSelfRef.msg_frame__DOT__m_msg[1U];
    vlSelfRef.m_msg[2U] = vlSelfRef.msg_frame__DOT__m_msg[2U];
    vlSelfRef.m_msg[3U] = vlSelfRef.msg_frame__DOT__m_msg[3U];
    vlSelfRef.m_msg[4U] = vlSelfRef.msg_frame__DOT__m_msg[4U];
    vlSelfRef.m_msg[5U] = vlSelfRef.msg_frame__DOT__m_msg[5U];
    vlSelfRef.m_msg[6U] = vlSelfRef.msg_frame__DOT__m_msg[6U];
    vlSelfRef.m_msg[7U] = vlSelfRef.msg_frame__DOT__m_msg[7U];
    vlSelfRef.m_msg[8U] = vlSelfRef.msg_frame__DOT__m_msg[8U];
    vlSelfRef.m_msg[9U] = vlSelfRef.msg_frame__DOT__m_msg[9U];
    vlSelfRef.m_msg[10U] = vlSelfRef.msg_frame__DOT__m_msg[10U];
    vlSelfRef.m_msg[11U] = vlSelfRef.msg_frame__DOT__m_msg[11U];
    vlSelfRef.m_msg[12U] = vlSelfRef.msg_frame__DOT__m_msg[12U];
    vlSelfRef.m_len = vlSelfRef.msg_frame__DOT__m_len;
    vlSelfRef.m_valid = vlSelfRef.msg_frame__DOT__m_valid;
    vlSelfRef.m_seq = vlSelfRef.msg_frame__DOT__m_seq;
    vlSelfRef.stat_messages = vlSelfRef.msg_frame__DOT__stat_messages;
    vlSelfRef.stat_frame_err = vlSelfRef.msg_frame__DOT__stat_frame_err;
    vlSelfRef.msg_frame__DOT__s_tlast = vlSelfRef.s_tlast;
    vlSelfRef.msg_frame__DOT__s_tdata = vlSelfRef.s_tdata;
    vlSelfRef.msg_frame__DOT__s_tkeep = vlSelfRef.s_tkeep;
    vlSelfRef.msg_frame__DOT__s_tvalid = vlSelfRef.s_tvalid;
    vlSelfRef.msg_frame__DOT__msg_len = ((0x0000ff00U 
                                          & (vlSelfRef.msg_frame__DOT__buf_q[0U] 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.msg_frame__DOT__buf_q[0U] 
                                               >> 8U)));
    vlSelfRef.msg_frame__DOT__have_len = ((~ (IData)(vlSelfRef.msg_frame__DOT__desync)) 
                                          & (2U <= (IData)(vlSelfRef.msg_frame__DOT__nvalid)));
    vlSelfRef.msg_frame__DOT__len_sane = ((1U <= (IData)(vlSelfRef.msg_frame__DOT__msg_len)) 
                                          & (0x0032U 
                                             >= (IData)(vlSelfRef.msg_frame__DOT__msg_len)));
    vlSelfRef.msg_frame__DOT__need = (0x000000ffU & 
                                      (((IData)(2U) 
                                        + (IData)(vlSelfRef.msg_frame__DOT__msg_len)) 
                                       - (IData)(vlSelfRef.msg_frame__DOT__nvalid)));
    vlSelfRef.msg_frame__DOT__bad_len = ((IData)(vlSelfRef.msg_frame__DOT__have_len) 
                                         & (~ (IData)(vlSelfRef.msg_frame__DOT__len_sane)));
    vlSelfRef.msg_frame__DOT__in_bytes = 0U;
    vlSelfRef.msg_frame__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.msg_frame__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.msg_frame__DOT__in_bytes = (0x0000000fU 
                                              & ((IData)(vlSelfRef.msg_frame__DOT__in_bytes) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.msg_frame__DOT__s_tkeep) 
                                                     >> 
                                                     (7U 
                                                      & vlSelfRef.msg_frame__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.msg_frame__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.msg_frame__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.msg_frame__DOT__ins_data[0U] = (IData)(vlSelfRef.msg_frame__DOT__s_tdata);
    vlSelfRef.msg_frame__DOT__ins_data[1U] = (IData)(
                                                     (vlSelfRef.msg_frame__DOT__s_tdata 
                                                      >> 0x00000020U));
    vlSelfRef.msg_frame__DOT__ins_data[2U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[3U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[4U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[5U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[6U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[7U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[8U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[9U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[10U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[11U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[12U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[13U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[14U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[15U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_shift = ((IData)(vlSelfRef.msg_frame__DOT__nvalid) 
                                           << 3U);
    if (vlSelfRef.msg_frame__DOT__s_tvalid) {
        VL_SHIFTL_WWI(512,512,11, __Vtemp_1, vlSelfRef.msg_frame__DOT__ins_data, (IData)(vlSelfRef.msg_frame__DOT__ins_shift));
        vlSelfRef.msg_frame__DOT__wide[0U] = (vlSelfRef.msg_frame__DOT__buf_q[0U] 
                                              | __Vtemp_1[0U]);
        vlSelfRef.msg_frame__DOT__wide[1U] = (vlSelfRef.msg_frame__DOT__buf_q[1U] 
                                              | __Vtemp_1[1U]);
        vlSelfRef.msg_frame__DOT__wide[2U] = (vlSelfRef.msg_frame__DOT__buf_q[2U] 
                                              | __Vtemp_1[2U]);
        vlSelfRef.msg_frame__DOT__wide[3U] = (vlSelfRef.msg_frame__DOT__buf_q[3U] 
                                              | __Vtemp_1[3U]);
        vlSelfRef.msg_frame__DOT__wide[4U] = (vlSelfRef.msg_frame__DOT__buf_q[4U] 
                                              | __Vtemp_1[4U]);
        vlSelfRef.msg_frame__DOT__wide[5U] = (vlSelfRef.msg_frame__DOT__buf_q[5U] 
                                              | __Vtemp_1[5U]);
        vlSelfRef.msg_frame__DOT__wide[6U] = (vlSelfRef.msg_frame__DOT__buf_q[6U] 
                                              | __Vtemp_1[6U]);
        vlSelfRef.msg_frame__DOT__wide[7U] = (vlSelfRef.msg_frame__DOT__buf_q[7U] 
                                              | __Vtemp_1[7U]);
        vlSelfRef.msg_frame__DOT__wide[8U] = (vlSelfRef.msg_frame__DOT__buf_q[8U] 
                                              | __Vtemp_1[8U]);
        vlSelfRef.msg_frame__DOT__wide[9U] = (vlSelfRef.msg_frame__DOT__buf_q[9U] 
                                              | __Vtemp_1[9U]);
        vlSelfRef.msg_frame__DOT__wide[10U] = (vlSelfRef.msg_frame__DOT__buf_q[10U] 
                                               | __Vtemp_1[10U]);
        vlSelfRef.msg_frame__DOT__wide[11U] = (vlSelfRef.msg_frame__DOT__buf_q[11U] 
                                               | __Vtemp_1[11U]);
        vlSelfRef.msg_frame__DOT__wide[12U] = (vlSelfRef.msg_frame__DOT__buf_q[12U] 
                                               | __Vtemp_1[12U]);
        vlSelfRef.msg_frame__DOT__wide[13U] = (vlSelfRef.msg_frame__DOT__buf_q[13U] 
                                               | __Vtemp_1[13U]);
        vlSelfRef.msg_frame__DOT__wide[14U] = (vlSelfRef.msg_frame__DOT__buf_q[14U] 
                                               | __Vtemp_1[14U]);
        vlSelfRef.msg_frame__DOT__wide[15U] = (vlSelfRef.msg_frame__DOT__buf_q[15U] 
                                               | __Vtemp_1[15U]);
    } else {
        vlSelfRef.msg_frame__DOT__wide[0U] = vlSelfRef.msg_frame__DOT__buf_q[0U];
        vlSelfRef.msg_frame__DOT__wide[1U] = vlSelfRef.msg_frame__DOT__buf_q[1U];
        vlSelfRef.msg_frame__DOT__wide[2U] = vlSelfRef.msg_frame__DOT__buf_q[2U];
        vlSelfRef.msg_frame__DOT__wide[3U] = vlSelfRef.msg_frame__DOT__buf_q[3U];
        vlSelfRef.msg_frame__DOT__wide[4U] = vlSelfRef.msg_frame__DOT__buf_q[4U];
        vlSelfRef.msg_frame__DOT__wide[5U] = vlSelfRef.msg_frame__DOT__buf_q[5U];
        vlSelfRef.msg_frame__DOT__wide[6U] = vlSelfRef.msg_frame__DOT__buf_q[6U];
        vlSelfRef.msg_frame__DOT__wide[7U] = vlSelfRef.msg_frame__DOT__buf_q[7U];
        vlSelfRef.msg_frame__DOT__wide[8U] = vlSelfRef.msg_frame__DOT__buf_q[8U];
        vlSelfRef.msg_frame__DOT__wide[9U] = vlSelfRef.msg_frame__DOT__buf_q[9U];
        vlSelfRef.msg_frame__DOT__wide[10U] = vlSelfRef.msg_frame__DOT__buf_q[10U];
        vlSelfRef.msg_frame__DOT__wide[11U] = vlSelfRef.msg_frame__DOT__buf_q[11U];
        vlSelfRef.msg_frame__DOT__wide[12U] = vlSelfRef.msg_frame__DOT__buf_q[12U];
        vlSelfRef.msg_frame__DOT__wide[13U] = vlSelfRef.msg_frame__DOT__buf_q[13U];
        vlSelfRef.msg_frame__DOT__wide[14U] = vlSelfRef.msg_frame__DOT__buf_q[14U];
        vlSelfRef.msg_frame__DOT__wide[15U] = vlSelfRef.msg_frame__DOT__buf_q[15U];
    }
    vlSelfRef.msg_frame__DOT__nv_ins = (0x000000ffU 
                                        & (((~ (IData)(vlSelfRef.msg_frame__DOT__desync)) 
                                            & (IData)(vlSelfRef.msg_frame__DOT__s_tvalid))
                                            ? ((IData)(vlSelfRef.msg_frame__DOT__nvalid) 
                                               + (IData)(vlSelfRef.msg_frame__DOT__in_bytes))
                                            : (IData)(vlSelfRef.msg_frame__DOT__nvalid)));
    vlSelfRef.msg_frame__DOT__have_msg = ((IData)(vlSelfRef.msg_frame__DOT__s_tvalid) 
                                          & ((IData)(vlSelfRef.msg_frame__DOT__have_len) 
                                             & ((IData)(vlSelfRef.msg_frame__DOT__len_sane) 
                                                & ((IData)(vlSelfRef.msg_frame__DOT__in_bytes) 
                                                   >= (IData)(vlSelfRef.msg_frame__DOT__need)))));
    vlSelfRef.msg_frame__DOT__tail = VL_SHIFTR_QQI(64,64,7, vlSelfRef.msg_frame__DOT__s_tdata, 
                                                   (0x00000078U 
                                                    & (((IData)(vlSelfRef.msg_frame__DOT__need) 
                                                        - (IData)(1U)) 
                                                       << 3U)));
    if (((IData)(vlSelfRef.msg_frame__DOT__bad_len) 
         | (IData)(vlSelfRef.msg_frame__DOT__desync))) {
        VL_ASSIGN_W(512, vlSelfRef.msg_frame__DOT__buf_next, Vtop__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.msg_frame__DOT__nv_next = 0U;
    } else if (vlSelfRef.msg_frame__DOT__have_msg) {
        vlSelfRef.msg_frame__DOT__buf_next[0U] = (IData)(vlSelfRef.msg_frame__DOT__tail);
        vlSelfRef.msg_frame__DOT__buf_next[1U] = (IData)(
                                                         (vlSelfRef.msg_frame__DOT__tail 
                                                          >> 0x00000020U));
        vlSelfRef.msg_frame__DOT__buf_next[2U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[3U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[4U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[5U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[6U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[7U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[8U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[9U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[10U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[11U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[12U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[13U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[14U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[15U] = 0U;
        vlSelfRef.msg_frame__DOT__nv_next = (0x000000ffU 
                                             & ((IData)(vlSelfRef.msg_frame__DOT__in_bytes) 
                                                - (IData)(vlSelfRef.msg_frame__DOT__need)));
    } else {
        vlSelfRef.msg_frame__DOT__buf_next[0U] = vlSelfRef.msg_frame__DOT__wide[0U];
        vlSelfRef.msg_frame__DOT__buf_next[1U] = vlSelfRef.msg_frame__DOT__wide[1U];
        vlSelfRef.msg_frame__DOT__buf_next[2U] = vlSelfRef.msg_frame__DOT__wide[2U];
        vlSelfRef.msg_frame__DOT__buf_next[3U] = vlSelfRef.msg_frame__DOT__wide[3U];
        vlSelfRef.msg_frame__DOT__buf_next[4U] = vlSelfRef.msg_frame__DOT__wide[4U];
        vlSelfRef.msg_frame__DOT__buf_next[5U] = vlSelfRef.msg_frame__DOT__wide[5U];
        vlSelfRef.msg_frame__DOT__buf_next[6U] = vlSelfRef.msg_frame__DOT__wide[6U];
        vlSelfRef.msg_frame__DOT__buf_next[7U] = vlSelfRef.msg_frame__DOT__wide[7U];
        vlSelfRef.msg_frame__DOT__buf_next[8U] = vlSelfRef.msg_frame__DOT__wide[8U];
        vlSelfRef.msg_frame__DOT__buf_next[9U] = vlSelfRef.msg_frame__DOT__wide[9U];
        vlSelfRef.msg_frame__DOT__buf_next[10U] = vlSelfRef.msg_frame__DOT__wide[10U];
        vlSelfRef.msg_frame__DOT__buf_next[11U] = vlSelfRef.msg_frame__DOT__wide[11U];
        vlSelfRef.msg_frame__DOT__buf_next[12U] = vlSelfRef.msg_frame__DOT__wide[12U];
        vlSelfRef.msg_frame__DOT__buf_next[13U] = vlSelfRef.msg_frame__DOT__wide[13U];
        vlSelfRef.msg_frame__DOT__buf_next[14U] = vlSelfRef.msg_frame__DOT__wide[14U];
        vlSelfRef.msg_frame__DOT__buf_next[15U] = vlSelfRef.msg_frame__DOT__wide[15U];
        vlSelfRef.msg_frame__DOT__nv_next = (0x000000ffU 
                                             & (IData)(vlSelfRef.msg_frame__DOT__nv_ins));
    }
    vlSelfRef.msg_frame__DOT__frame_err = ((IData)(vlSelfRef.msg_frame__DOT__bad_len) 
                                           | ((IData)(vlSelfRef.msg_frame__DOT__s_tvalid) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.msg_frame__DOT__desync) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.msg_frame__DOT__nv_next)))) 
                                                 & (IData)(vlSelfRef.msg_frame__DOT__s_tlast))));
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
    IData/*31:0*/ __Vdly__msg_frame__DOT__stat_frame_err;
    __Vdly__msg_frame__DOT__stat_frame_err = 0;
    SData/*15:0*/ __Vdly__msg_frame__DOT__msg_idx;
    __Vdly__msg_frame__DOT__msg_idx = 0;
    IData/*31:0*/ __Vdly__msg_frame__DOT__stat_messages;
    __Vdly__msg_frame__DOT__stat_messages = 0;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    __Vdly__msg_frame__DOT__stat_frame_err = vlSelfRef.msg_frame__DOT__stat_frame_err;
    __Vdly__msg_frame__DOT__stat_messages = vlSelfRef.msg_frame__DOT__stat_messages;
    __Vdly__msg_frame__DOT__msg_idx = vlSelfRef.msg_frame__DOT__msg_idx;
    if (vlSelfRef.msg_frame__DOT__rst) {
        __Vdly__msg_frame__DOT__stat_frame_err = 0U;
        __Vdly__msg_frame__DOT__stat_messages = 0U;
        vlSelfRef.msg_frame__DOT__m_valid = 0U;
        VL_ASSIGN_W(400, vlSelfRef.msg_frame__DOT__m_msg, Vtop__ConstPool__CONST_h23cb1401_0);
        __Vdly__msg_frame__DOT__msg_idx = 0U;
        vlSelfRef.msg_frame__DOT__m_seq = 0ULL;
        vlSelfRef.msg_frame__DOT__m_len = 0U;
        VL_ASSIGN_W(512, vlSelfRef.msg_frame__DOT__buf_q, Vtop__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.msg_frame__DOT__nvalid = 0U;
        vlSelfRef.msg_frame__DOT__desync = 0U;
    } else {
        if (vlSelfRef.msg_frame__DOT__frame_err) {
            __Vdly__msg_frame__DOT__stat_frame_err 
                = ((IData)(1U) + vlSelfRef.msg_frame__DOT__stat_frame_err);
        }
        vlSelfRef.msg_frame__DOT__m_valid = 0U;
        if (vlSelfRef.msg_frame__DOT__have_msg) {
            __Vdly__msg_frame__DOT__stat_messages = 
                ((IData)(1U) + vlSelfRef.msg_frame__DOT__stat_messages);
            vlSelfRef.msg_frame__DOT__m_valid = 1U;
            vlSelfRef.msg_frame__DOT__m_msg[0U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[0U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[1U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[2U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[1U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[2U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[3U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[2U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[3U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[4U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[3U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[4U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[5U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[4U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[5U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[6U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[5U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[6U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[7U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[6U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[7U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[8U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[7U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[8U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[9U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[8U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[9U] = (
                                                   (vlSelfRef.msg_frame__DOT__wide[10U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.msg_frame__DOT__wide[9U] 
                                                      >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[10U] = 
                ((vlSelfRef.msg_frame__DOT__wide[11U] 
                  << 0x00000010U) | (vlSelfRef.msg_frame__DOT__wide[10U] 
                                     >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[11U] = 
                ((vlSelfRef.msg_frame__DOT__wide[12U] 
                  << 0x00000010U) | (vlSelfRef.msg_frame__DOT__wide[11U] 
                                     >> 0x00000010U));
            vlSelfRef.msg_frame__DOT__m_msg[12U] = 
                (vlSelfRef.msg_frame__DOT__wide[12U] 
                 >> 0x00000010U);
            vlSelfRef.msg_frame__DOT__m_seq = (vlSelfRef.msg_frame__DOT__s_sequence 
                                               + (QData)((IData)(vlSelfRef.msg_frame__DOT__msg_idx)));
            __Vdly__msg_frame__DOT__msg_idx = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.msg_frame__DOT__msg_idx)));
            vlSelfRef.msg_frame__DOT__m_len = (0x000000ffU 
                                               & (IData)(vlSelfRef.msg_frame__DOT__msg_len));
        }
        vlSelfRef.msg_frame__DOT__buf_q[0U] = vlSelfRef.msg_frame__DOT__buf_next[0U];
        vlSelfRef.msg_frame__DOT__buf_q[1U] = vlSelfRef.msg_frame__DOT__buf_next[1U];
        vlSelfRef.msg_frame__DOT__buf_q[2U] = vlSelfRef.msg_frame__DOT__buf_next[2U];
        vlSelfRef.msg_frame__DOT__buf_q[3U] = vlSelfRef.msg_frame__DOT__buf_next[3U];
        vlSelfRef.msg_frame__DOT__buf_q[4U] = vlSelfRef.msg_frame__DOT__buf_next[4U];
        vlSelfRef.msg_frame__DOT__buf_q[5U] = vlSelfRef.msg_frame__DOT__buf_next[5U];
        vlSelfRef.msg_frame__DOT__buf_q[6U] = vlSelfRef.msg_frame__DOT__buf_next[6U];
        vlSelfRef.msg_frame__DOT__buf_q[7U] = vlSelfRef.msg_frame__DOT__buf_next[7U];
        vlSelfRef.msg_frame__DOT__buf_q[8U] = vlSelfRef.msg_frame__DOT__buf_next[8U];
        vlSelfRef.msg_frame__DOT__buf_q[9U] = vlSelfRef.msg_frame__DOT__buf_next[9U];
        vlSelfRef.msg_frame__DOT__buf_q[10U] = vlSelfRef.msg_frame__DOT__buf_next[10U];
        vlSelfRef.msg_frame__DOT__buf_q[11U] = vlSelfRef.msg_frame__DOT__buf_next[11U];
        vlSelfRef.msg_frame__DOT__buf_q[12U] = vlSelfRef.msg_frame__DOT__buf_next[12U];
        vlSelfRef.msg_frame__DOT__buf_q[13U] = vlSelfRef.msg_frame__DOT__buf_next[13U];
        vlSelfRef.msg_frame__DOT__buf_q[14U] = vlSelfRef.msg_frame__DOT__buf_next[14U];
        vlSelfRef.msg_frame__DOT__buf_q[15U] = vlSelfRef.msg_frame__DOT__buf_next[15U];
        vlSelfRef.msg_frame__DOT__nvalid = vlSelfRef.msg_frame__DOT__nv_next;
        if (vlSelfRef.msg_frame__DOT__bad_len) {
            vlSelfRef.msg_frame__DOT__desync = 1U;
        }
        if (((IData)(vlSelfRef.msg_frame__DOT__s_tvalid) 
             & (IData)(vlSelfRef.msg_frame__DOT__s_tlast))) {
            __Vdly__msg_frame__DOT__msg_idx = 0U;
            VL_ASSIGN_W(512, vlSelfRef.msg_frame__DOT__buf_q, Vtop__ConstPool__CONST_h93e1b771_0);
            vlSelfRef.msg_frame__DOT__nvalid = 0U;
            vlSelfRef.msg_frame__DOT__desync = 0U;
        }
    }
    vlSelfRef.msg_frame__DOT__stat_frame_err = __Vdly__msg_frame__DOT__stat_frame_err;
    vlSelfRef.msg_frame__DOT__stat_messages = __Vdly__msg_frame__DOT__stat_messages;
    vlSelfRef.msg_frame__DOT__msg_idx = __Vdly__msg_frame__DOT__msg_idx;
    vlSelfRef.stat_frame_err = vlSelfRef.msg_frame__DOT__stat_frame_err;
    vlSelfRef.stat_messages = vlSelfRef.msg_frame__DOT__stat_messages;
    vlSelfRef.m_valid = vlSelfRef.msg_frame__DOT__m_valid;
    vlSelfRef.m_msg[0U] = vlSelfRef.msg_frame__DOT__m_msg[0U];
    vlSelfRef.m_msg[1U] = vlSelfRef.msg_frame__DOT__m_msg[1U];
    vlSelfRef.m_msg[2U] = vlSelfRef.msg_frame__DOT__m_msg[2U];
    vlSelfRef.m_msg[3U] = vlSelfRef.msg_frame__DOT__m_msg[3U];
    vlSelfRef.m_msg[4U] = vlSelfRef.msg_frame__DOT__m_msg[4U];
    vlSelfRef.m_msg[5U] = vlSelfRef.msg_frame__DOT__m_msg[5U];
    vlSelfRef.m_msg[6U] = vlSelfRef.msg_frame__DOT__m_msg[6U];
    vlSelfRef.m_msg[7U] = vlSelfRef.msg_frame__DOT__m_msg[7U];
    vlSelfRef.m_msg[8U] = vlSelfRef.msg_frame__DOT__m_msg[8U];
    vlSelfRef.m_msg[9U] = vlSelfRef.msg_frame__DOT__m_msg[9U];
    vlSelfRef.m_msg[10U] = vlSelfRef.msg_frame__DOT__m_msg[10U];
    vlSelfRef.m_msg[11U] = vlSelfRef.msg_frame__DOT__m_msg[11U];
    vlSelfRef.m_msg[12U] = vlSelfRef.msg_frame__DOT__m_msg[12U];
    vlSelfRef.m_seq = vlSelfRef.msg_frame__DOT__m_seq;
    vlSelfRef.m_len = vlSelfRef.msg_frame__DOT__m_len;
    vlSelfRef.msg_frame__DOT__ins_data[0U] = (IData)(vlSelfRef.msg_frame__DOT__s_tdata);
    vlSelfRef.msg_frame__DOT__ins_data[1U] = (IData)(
                                                     (vlSelfRef.msg_frame__DOT__s_tdata 
                                                      >> 0x00000020U));
    vlSelfRef.msg_frame__DOT__ins_data[2U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[3U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[4U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[5U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[6U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[7U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[8U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[9U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[10U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[11U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[12U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[13U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[14U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_data[15U] = 0U;
    vlSelfRef.msg_frame__DOT__ins_shift = ((IData)(vlSelfRef.msg_frame__DOT__nvalid) 
                                           << 3U);
    if (vlSelfRef.msg_frame__DOT__s_tvalid) {
        VL_SHIFTL_WWI(512,512,11, __Vtemp_2, vlSelfRef.msg_frame__DOT__ins_data, (IData)(vlSelfRef.msg_frame__DOT__ins_shift));
        vlSelfRef.msg_frame__DOT__wide[0U] = (vlSelfRef.msg_frame__DOT__buf_q[0U] 
                                              | __Vtemp_2[0U]);
        vlSelfRef.msg_frame__DOT__wide[1U] = (vlSelfRef.msg_frame__DOT__buf_q[1U] 
                                              | __Vtemp_2[1U]);
        vlSelfRef.msg_frame__DOT__wide[2U] = (vlSelfRef.msg_frame__DOT__buf_q[2U] 
                                              | __Vtemp_2[2U]);
        vlSelfRef.msg_frame__DOT__wide[3U] = (vlSelfRef.msg_frame__DOT__buf_q[3U] 
                                              | __Vtemp_2[3U]);
        vlSelfRef.msg_frame__DOT__wide[4U] = (vlSelfRef.msg_frame__DOT__buf_q[4U] 
                                              | __Vtemp_2[4U]);
        vlSelfRef.msg_frame__DOT__wide[5U] = (vlSelfRef.msg_frame__DOT__buf_q[5U] 
                                              | __Vtemp_2[5U]);
        vlSelfRef.msg_frame__DOT__wide[6U] = (vlSelfRef.msg_frame__DOT__buf_q[6U] 
                                              | __Vtemp_2[6U]);
        vlSelfRef.msg_frame__DOT__wide[7U] = (vlSelfRef.msg_frame__DOT__buf_q[7U] 
                                              | __Vtemp_2[7U]);
        vlSelfRef.msg_frame__DOT__wide[8U] = (vlSelfRef.msg_frame__DOT__buf_q[8U] 
                                              | __Vtemp_2[8U]);
        vlSelfRef.msg_frame__DOT__wide[9U] = (vlSelfRef.msg_frame__DOT__buf_q[9U] 
                                              | __Vtemp_2[9U]);
        vlSelfRef.msg_frame__DOT__wide[10U] = (vlSelfRef.msg_frame__DOT__buf_q[10U] 
                                               | __Vtemp_2[10U]);
        vlSelfRef.msg_frame__DOT__wide[11U] = (vlSelfRef.msg_frame__DOT__buf_q[11U] 
                                               | __Vtemp_2[11U]);
        vlSelfRef.msg_frame__DOT__wide[12U] = (vlSelfRef.msg_frame__DOT__buf_q[12U] 
                                               | __Vtemp_2[12U]);
        vlSelfRef.msg_frame__DOT__wide[13U] = (vlSelfRef.msg_frame__DOT__buf_q[13U] 
                                               | __Vtemp_2[13U]);
        vlSelfRef.msg_frame__DOT__wide[14U] = (vlSelfRef.msg_frame__DOT__buf_q[14U] 
                                               | __Vtemp_2[14U]);
        vlSelfRef.msg_frame__DOT__wide[15U] = (vlSelfRef.msg_frame__DOT__buf_q[15U] 
                                               | __Vtemp_2[15U]);
    } else {
        vlSelfRef.msg_frame__DOT__wide[0U] = vlSelfRef.msg_frame__DOT__buf_q[0U];
        vlSelfRef.msg_frame__DOT__wide[1U] = vlSelfRef.msg_frame__DOT__buf_q[1U];
        vlSelfRef.msg_frame__DOT__wide[2U] = vlSelfRef.msg_frame__DOT__buf_q[2U];
        vlSelfRef.msg_frame__DOT__wide[3U] = vlSelfRef.msg_frame__DOT__buf_q[3U];
        vlSelfRef.msg_frame__DOT__wide[4U] = vlSelfRef.msg_frame__DOT__buf_q[4U];
        vlSelfRef.msg_frame__DOT__wide[5U] = vlSelfRef.msg_frame__DOT__buf_q[5U];
        vlSelfRef.msg_frame__DOT__wide[6U] = vlSelfRef.msg_frame__DOT__buf_q[6U];
        vlSelfRef.msg_frame__DOT__wide[7U] = vlSelfRef.msg_frame__DOT__buf_q[7U];
        vlSelfRef.msg_frame__DOT__wide[8U] = vlSelfRef.msg_frame__DOT__buf_q[8U];
        vlSelfRef.msg_frame__DOT__wide[9U] = vlSelfRef.msg_frame__DOT__buf_q[9U];
        vlSelfRef.msg_frame__DOT__wide[10U] = vlSelfRef.msg_frame__DOT__buf_q[10U];
        vlSelfRef.msg_frame__DOT__wide[11U] = vlSelfRef.msg_frame__DOT__buf_q[11U];
        vlSelfRef.msg_frame__DOT__wide[12U] = vlSelfRef.msg_frame__DOT__buf_q[12U];
        vlSelfRef.msg_frame__DOT__wide[13U] = vlSelfRef.msg_frame__DOT__buf_q[13U];
        vlSelfRef.msg_frame__DOT__wide[14U] = vlSelfRef.msg_frame__DOT__buf_q[14U];
        vlSelfRef.msg_frame__DOT__wide[15U] = vlSelfRef.msg_frame__DOT__buf_q[15U];
    }
    vlSelfRef.msg_frame__DOT__nv_ins = (0x000000ffU 
                                        & (((~ (IData)(vlSelfRef.msg_frame__DOT__desync)) 
                                            & (IData)(vlSelfRef.msg_frame__DOT__s_tvalid))
                                            ? ((IData)(vlSelfRef.msg_frame__DOT__nvalid) 
                                               + (IData)(vlSelfRef.msg_frame__DOT__in_bytes))
                                            : (IData)(vlSelfRef.msg_frame__DOT__nvalid)));
    vlSelfRef.msg_frame__DOT__msg_len = ((0x0000ff00U 
                                          & (vlSelfRef.msg_frame__DOT__buf_q[0U] 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.msg_frame__DOT__buf_q[0U] 
                                               >> 8U)));
    vlSelfRef.msg_frame__DOT__have_len = ((~ (IData)(vlSelfRef.msg_frame__DOT__desync)) 
                                          & (2U <= (IData)(vlSelfRef.msg_frame__DOT__nvalid)));
    vlSelfRef.msg_frame__DOT__len_sane = ((1U <= (IData)(vlSelfRef.msg_frame__DOT__msg_len)) 
                                          & (0x0032U 
                                             >= (IData)(vlSelfRef.msg_frame__DOT__msg_len)));
    vlSelfRef.msg_frame__DOT__need = (0x000000ffU & 
                                      (((IData)(2U) 
                                        + (IData)(vlSelfRef.msg_frame__DOT__msg_len)) 
                                       - (IData)(vlSelfRef.msg_frame__DOT__nvalid)));
    vlSelfRef.msg_frame__DOT__bad_len = ((IData)(vlSelfRef.msg_frame__DOT__have_len) 
                                         & (~ (IData)(vlSelfRef.msg_frame__DOT__len_sane)));
    vlSelfRef.msg_frame__DOT__have_msg = ((IData)(vlSelfRef.msg_frame__DOT__s_tvalid) 
                                          & ((IData)(vlSelfRef.msg_frame__DOT__have_len) 
                                             & ((IData)(vlSelfRef.msg_frame__DOT__len_sane) 
                                                & ((IData)(vlSelfRef.msg_frame__DOT__in_bytes) 
                                                   >= (IData)(vlSelfRef.msg_frame__DOT__need)))));
    vlSelfRef.msg_frame__DOT__tail = VL_SHIFTR_QQI(64,64,7, vlSelfRef.msg_frame__DOT__s_tdata, 
                                                   (0x00000078U 
                                                    & (((IData)(vlSelfRef.msg_frame__DOT__need) 
                                                        - (IData)(1U)) 
                                                       << 3U)));
    if (((IData)(vlSelfRef.msg_frame__DOT__bad_len) 
         | (IData)(vlSelfRef.msg_frame__DOT__desync))) {
        VL_ASSIGN_W(512, vlSelfRef.msg_frame__DOT__buf_next, Vtop__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.msg_frame__DOT__nv_next = 0U;
    } else if (vlSelfRef.msg_frame__DOT__have_msg) {
        vlSelfRef.msg_frame__DOT__buf_next[0U] = (IData)(vlSelfRef.msg_frame__DOT__tail);
        vlSelfRef.msg_frame__DOT__buf_next[1U] = (IData)(
                                                         (vlSelfRef.msg_frame__DOT__tail 
                                                          >> 0x00000020U));
        vlSelfRef.msg_frame__DOT__buf_next[2U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[3U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[4U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[5U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[6U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[7U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[8U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[9U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[10U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[11U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[12U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[13U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[14U] = 0U;
        vlSelfRef.msg_frame__DOT__buf_next[15U] = 0U;
        vlSelfRef.msg_frame__DOT__nv_next = (0x000000ffU 
                                             & ((IData)(vlSelfRef.msg_frame__DOT__in_bytes) 
                                                - (IData)(vlSelfRef.msg_frame__DOT__need)));
    } else {
        vlSelfRef.msg_frame__DOT__buf_next[0U] = vlSelfRef.msg_frame__DOT__wide[0U];
        vlSelfRef.msg_frame__DOT__buf_next[1U] = vlSelfRef.msg_frame__DOT__wide[1U];
        vlSelfRef.msg_frame__DOT__buf_next[2U] = vlSelfRef.msg_frame__DOT__wide[2U];
        vlSelfRef.msg_frame__DOT__buf_next[3U] = vlSelfRef.msg_frame__DOT__wide[3U];
        vlSelfRef.msg_frame__DOT__buf_next[4U] = vlSelfRef.msg_frame__DOT__wide[4U];
        vlSelfRef.msg_frame__DOT__buf_next[5U] = vlSelfRef.msg_frame__DOT__wide[5U];
        vlSelfRef.msg_frame__DOT__buf_next[6U] = vlSelfRef.msg_frame__DOT__wide[6U];
        vlSelfRef.msg_frame__DOT__buf_next[7U] = vlSelfRef.msg_frame__DOT__wide[7U];
        vlSelfRef.msg_frame__DOT__buf_next[8U] = vlSelfRef.msg_frame__DOT__wide[8U];
        vlSelfRef.msg_frame__DOT__buf_next[9U] = vlSelfRef.msg_frame__DOT__wide[9U];
        vlSelfRef.msg_frame__DOT__buf_next[10U] = vlSelfRef.msg_frame__DOT__wide[10U];
        vlSelfRef.msg_frame__DOT__buf_next[11U] = vlSelfRef.msg_frame__DOT__wide[11U];
        vlSelfRef.msg_frame__DOT__buf_next[12U] = vlSelfRef.msg_frame__DOT__wide[12U];
        vlSelfRef.msg_frame__DOT__buf_next[13U] = vlSelfRef.msg_frame__DOT__wide[13U];
        vlSelfRef.msg_frame__DOT__buf_next[14U] = vlSelfRef.msg_frame__DOT__wide[14U];
        vlSelfRef.msg_frame__DOT__buf_next[15U] = vlSelfRef.msg_frame__DOT__wide[15U];
        vlSelfRef.msg_frame__DOT__nv_next = (0x000000ffU 
                                             & (IData)(vlSelfRef.msg_frame__DOT__nv_ins));
    }
    vlSelfRef.msg_frame__DOT__frame_err = ((IData)(vlSelfRef.msg_frame__DOT__bad_len) 
                                           | ((IData)(vlSelfRef.msg_frame__DOT__s_tvalid) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.msg_frame__DOT__desync) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.msg_frame__DOT__nv_next)))) 
                                                 & (IData)(vlSelfRef.msg_frame__DOT__s_tlast))));
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
