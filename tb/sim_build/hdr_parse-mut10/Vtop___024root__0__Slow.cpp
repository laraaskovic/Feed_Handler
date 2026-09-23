// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__hdr_parse__DOT__clk__0 
        = vlSelfRef.hdr_parse__DOT__clk;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge hdr_parse.clk)\n");
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
    vlSelf->m_tdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16534874751520676056ull);
    vlSelf->m_tkeep = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15983276138172624764ull);
    vlSelf->m_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6330821876457450032ull);
    vlSelf->m_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9494342378649836147ull);
    vlSelf->m_sequence = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10216595532634787860ull);
    vlSelf->m_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16160287694415285249ull);
    vlSelf->stat_packets = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 993556917666986129ull);
    vlSelf->stat_dropped = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7689797436009708273ull);
    vlSelf->hdr_parse__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2745674856994880225ull);
    vlSelf->hdr_parse__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3372133820621942286ull);
    vlSelf->hdr_parse__DOT__s_tdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8280621832077390213ull);
    vlSelf->hdr_parse__DOT__s_tkeep = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13243193519538238243ull);
    vlSelf->hdr_parse__DOT__s_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548009406591068853ull);
    vlSelf->hdr_parse__DOT__s_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1849805851445071938ull);
    vlSelf->hdr_parse__DOT__m_tdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10053288807626555682ull);
    vlSelf->hdr_parse__DOT__m_tkeep = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13270453244452691855ull);
    vlSelf->hdr_parse__DOT__m_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10078096076820977702ull);
    vlSelf->hdr_parse__DOT__m_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16113610874329781329ull);
    vlSelf->hdr_parse__DOT__m_sequence = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 293530477057864362ull);
    vlSelf->hdr_parse__DOT__m_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14843984883028566045ull);
    vlSelf->hdr_parse__DOT__stat_packets = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9830050662704913971ull);
    vlSelf->hdr_parse__DOT__stat_dropped = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 999895471426247863ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->hdr_parse__DOT__hb[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14255677773378270429ull);
    }
    vlSelf->hdr_parse__DOT__beat_idx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4511404140517898485ull);
    vlSelf->hdr_parse__DOT__prev_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3524093282705276859ull);
    vlSelf->hdr_parse__DOT__ethertype_outer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14463076614895300482ull);
    vlSelf->hdr_parse__DOT__ethertype_inner = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11901990735504056837ull);
    vlSelf->hdr_parse__DOT__ip_total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3291067198876578944ull);
    vlSelf->hdr_parse__DOT__vlan_tagged = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4097783864694385298ull);
    vlSelf->hdr_parse__DOT__is_ipv4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14939527293483519620ull);
    vlSelf->hdr_parse__DOT__is_udp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15592483286905598015ull);
    vlSelf->hdr_parse__DOT__ip_off = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 144601190913893009ull);
    vlSelf->hdr_parse__DOT__ihl_bytes = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787010474904443987ull);
    vlSelf->hdr_parse__DOT__udp_off = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4836384137253299432ull);
    vlSelf->hdr_parse__DOT__mold_off = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17995354238832915550ull);
    vlSelf->hdr_parse__DOT__payload_off = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2012887915246892893ull);
    vlSelf->hdr_parse__DOT__payload_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11620656306699717333ull);
    vlSelf->hdr_parse__DOT__mold_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11486881440506527623ull);
    vlSelf->hdr_parse__DOT__mold_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2389128240585661762ull);
    vlSelf->hdr_parse__DOT__r_off = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12601645418540587566ull);
    vlSelf->hdr_parse__DOT__emit_start = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16709218989591744093ull);
    vlSelf->hdr_parse__DOT__out_left = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16248752566502530252ull);
    vlSelf->hdr_parse__DOT__emitting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1496103634694224730ull);
    vlSelf->hdr_parse__DOT__pay_len_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11300399281112641580ull);
    vlSelf->hdr_parse__DOT__pkt_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546587713828804894ull);
    vlSelf->hdr_parse__DOT__flush_pend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11782343487432789966ull);
    vlSelf->hdr_parse__DOT__sh_lo = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15977373951898508063ull);
    vlSelf->hdr_parse__DOT__sh_hi = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17716738110984313717ull);
    vlSelf->hdr_parse__DOT__realigned = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11846611219576278117ull);
    vlSelf->hdr_parse__DOT__flushed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15096014217067287262ull);
    vlSelf->hdr_parse__DOT__last_bytes = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7365376477619657197ull);
    vlSelf->hdr_parse__DOT__keep_shift = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6097271133668915972ull);
    vlSelf->hdr_parse__DOT__last_keep = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10500225481146915518ull);
    vlSelf->hdr_parse__DOT__reached = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7639777829326147017ull);
    vlSelf->hdr_parse__DOT__do_emit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16480600539145292863ull);
    vlSelf->hdr_parse__DOT__unnamedblk1__DOT__b = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__hdr_parse__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
