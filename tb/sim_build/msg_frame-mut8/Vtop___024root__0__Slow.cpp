// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__msg_frame__DOT__clk__0 
        = vlSelfRef.msg_frame__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge msg_frame.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->s_tdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7101865465292779667ull);
    vlSelf->s_tkeep = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7774781827279991092ull);
    vlSelf->s_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5856568867834129024ull);
    vlSelf->s_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17697317467885297558ull);
    vlSelf->s_sequence = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5575438618433278712ull);
    VL_SCOPED_RAND_RESET_W(400, vlSelf->m_msg, __VscopeHash, 40465886625699886ull);
    vlSelf->m_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2403203460478220529ull);
    vlSelf->m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711207929187084452ull);
    vlSelf->m_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16537319124554484020ull);
    vlSelf->stat_messages = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6629229745738440024ull);
    vlSelf->stat_frame_err = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5567378231278859937ull);
    vlSelf->msg_frame__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7827372797099230105ull);
    vlSelf->msg_frame__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774722702924284099ull);
    vlSelf->msg_frame__DOT__s_tdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15488735776406557919ull);
    vlSelf->msg_frame__DOT__s_tkeep = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 181989677849972290ull);
    vlSelf->msg_frame__DOT__s_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7297172616481818884ull);
    vlSelf->msg_frame__DOT__s_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5719312014290910202ull);
    vlSelf->msg_frame__DOT__s_sequence = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9605465469201617456ull);
    VL_SCOPED_RAND_RESET_W(400, vlSelf->msg_frame__DOT__m_msg, __VscopeHash, 17480319959904363212ull);
    vlSelf->msg_frame__DOT__m_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4082324399719179762ull);
    vlSelf->msg_frame__DOT__m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3235577670411980997ull);
    vlSelf->msg_frame__DOT__m_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4695811024972237418ull);
    vlSelf->msg_frame__DOT__stat_messages = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3138809308833957089ull);
    vlSelf->msg_frame__DOT__stat_frame_err = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15045109584289699180ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->msg_frame__DOT__buf_q, __VscopeHash, 15333872827617650170ull);
    vlSelf->msg_frame__DOT__nvalid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9670251959888166736ull);
    vlSelf->msg_frame__DOT__msg_idx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15071338456579831166ull);
    vlSelf->msg_frame__DOT__desync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1782610419056373175ull);
    vlSelf->msg_frame__DOT__in_bytes = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1839354581111749313ull);
    vlSelf->msg_frame__DOT__msg_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13307637681776671657ull);
    vlSelf->msg_frame__DOT__need = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2679298431884411270ull);
    vlSelf->msg_frame__DOT__have_len = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3693994821339198253ull);
    vlSelf->msg_frame__DOT__len_sane = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5576128905587560454ull);
    vlSelf->msg_frame__DOT__bad_len = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16163133664906661317ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->msg_frame__DOT__ins_data, __VscopeHash, 9465102664534569152ull);
    vlSelf->msg_frame__DOT__ins_shift = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7151183738527746495ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->msg_frame__DOT__wide, __VscopeHash, 14596096217424600440ull);
    vlSelf->msg_frame__DOT__nv_ins = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6949216929462261185ull);
    vlSelf->msg_frame__DOT__have_msg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1543878237265448098ull);
    vlSelf->msg_frame__DOT__tail = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14420842632110723479ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->msg_frame__DOT__buf_next, __VscopeHash, 11888327752175510572ull);
    vlSelf->msg_frame__DOT__nv_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14826702355836883224ull);
    vlSelf->msg_frame__DOT__frame_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15891482293577059809ull);
    vlSelf->msg_frame__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__msg_frame__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
