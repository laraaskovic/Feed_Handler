// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__clk__0 
        = vlSelfRef.order_table__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0 
        = vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0 
        = vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_en = 1U;
        vlSelfRef.order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_en = 1U;
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_en = 1U;
        vlSelfRef.order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_en = 1U;
    }
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge order_table.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge order_table.g_way[1].u_way.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge order_table.g_way[0].u_way.clk)\n");
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
    vlSelf->s_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3620650391335490897ull);
    vlSelf->s_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17602384282742535852ull);
    vlSelf->s_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5020066830554418509ull);
    vlSelf->s_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15444929336203616444ull);
    vlSelf->s_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12010763814335669146ull);
    vlSelf->s_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8130527260241853664ull);
    vlSelf->s_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16551727753141997852ull);
    vlSelf->s_tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6504820030264998660ull);
    vlSelf->s_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6345311591616554325ull);
    vlSelf->m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711207929187084452ull);
    vlSelf->m_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447040642631135218ull);
    vlSelf->m_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3792091370065345997ull);
    vlSelf->m_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5031779754987988424ull);
    vlSelf->m_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 472251521081511656ull);
    vlSelf->m_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7264219937896738410ull);
    vlSelf->m_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16537319124554484020ull);
    vlSelf->stat_collisions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14627169501419022431ull);
    vlSelf->stat_missing = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8237801377784725159ull);
    vlSelf->stat_overrun = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1605479732407102345ull);
    vlSelf->stat_stash_peak = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6755912932455459737ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->order_table__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6371007381381561718ull);
    vlSelf->order_table__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 250654515168863903ull);
    vlSelf->order_table__DOT__s_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2652471240063828565ull);
    vlSelf->order_table__DOT__s_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1248726264257080827ull);
    vlSelf->order_table__DOT__s_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7026294771974603117ull);
    vlSelf->order_table__DOT__s_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15225820390169392539ull);
    vlSelf->order_table__DOT__s_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10960414737264470940ull);
    vlSelf->order_table__DOT__s_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14792132665375460837ull);
    vlSelf->order_table__DOT__s_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10147547012889477124ull);
    vlSelf->order_table__DOT__s_tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8945477450201445778ull);
    vlSelf->order_table__DOT__s_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4813155763557946188ull);
    vlSelf->order_table__DOT__m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4111390055473506099ull);
    vlSelf->order_table__DOT__m_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3848918565699562192ull);
    vlSelf->order_table__DOT__m_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4502758387730699543ull);
    vlSelf->order_table__DOT__m_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16787665299964547546ull);
    vlSelf->order_table__DOT__m_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5668291049072349493ull);
    vlSelf->order_table__DOT__m_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15131664465112176512ull);
    vlSelf->order_table__DOT__m_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15954101670596416536ull);
    vlSelf->order_table__DOT__stat_collisions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15537733317629237096ull);
    vlSelf->order_table__DOT__stat_missing = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18358065550154339422ull);
    vlSelf->order_table__DOT__stat_overrun = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14490821631596217493ull);
    vlSelf->order_table__DOT__stat_stash_peak = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17347212813180690403ull);
    vlSelf->order_table__DOT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10516899491916757238ull);
    vlSelf->order_table__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 499478104133183997ull);
    vlSelf->order_table__DOT__init_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6940970212263757202ull);
    vlSelf->order_table__DOT__op_kind = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14091198839882471635ull);
    vlSelf->order_table__DOT__op_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8168701236240386881ull);
    vlSelf->order_table__DOT__op_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7686424768540345857ull);
    vlSelf->order_table__DOT__op_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5465505717649824397ull);
    vlSelf->order_table__DOT__op_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1748478712589753199ull);
    vlSelf->order_table__DOT__op_tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9330106220623675264ull);
    vlSelf->order_table__DOT__op_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13159930458851385013ull);
    vlSelf->order_table__DOT__op_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9179014102770744782ull);
    vlSelf->order_table__DOT__idx_a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7427576225815189935ull);
    vlSelf->order_table__DOT__idx_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7896989059640170342ull);
    vlSelf->order_table__DOT__pend_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14618331120253698616ull);
    vlSelf->order_table__DOT__pend_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17111366273233606753ull);
    vlSelf->order_table__DOT__pend_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17610650337642406886ull);
    vlSelf->order_table__DOT__pend_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17005145234646343903ull);
    vlSelf->order_table__DOT__pend_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6944865597932356786ull);
    vlSelf->order_table__DOT__pend_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16366649475457923770ull);
    vlSelf->order_table__DOT__accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2849978605171368392ull);
    vlSelf->order_table__DOT__is_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1405956237185670478ull);
    vlSelf->order_table__DOT__is_red = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7363927047959364702ull);
    vlSelf->order_table__DOT__is_del = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7867120873072815958ull);
    vlSelf->order_table__DOT__is_rep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9927620666753067375ull);
    vlSelf->order_table__DOT__a_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2369647874649198739ull);
    vlSelf->order_table__DOT__b_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8551450764976780721ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__a_din[__Vi0], __VscopeHash, 7430339573514633253ull);
    }
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__b_din, __VscopeHash, 2195057364859130173ull);
    vlSelf->order_table__DOT__a_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13291260496027713107ull);
    vlSelf->order_table__DOT__b_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15219596663078797009ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__rd_a[__Vi0], __VscopeHash, 2686137314492214307ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__rd_b[__Vi0], __VscopeHash, 1651162910256577510ull);
    }
    vlSelf->order_table__DOT__st_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7875867533187684561ull);
    vlSelf->order_table__DOT__st_ladder = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8413498796550492959ull);
    vlSelf->order_table__DOT__st_side = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16314651263830807303ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__st_ref[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8716712985949131990ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__st_tick[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4394195506915627797ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__st_qty[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17935899628752103538ull);
    }
    vlSelf->order_table__DOT__hitv_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8703458139949470715ull);
    vlSelf->order_table__DOT__freev_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14571773016741245481ull);
    vlSelf->order_table__DOT__vld_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4336632696124057387ull);
    vlSelf->order_table__DOT__shv_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3111250892958716785ull);
    vlSelf->order_table__DOT__hit_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10573877899642856313ull);
    vlSelf->order_table__DOT__free_a_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10891041014622834138ull);
    vlSelf->order_table__DOT__sh_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6826540984496464735ull);
    vlSelf->order_table__DOT__found_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11930702725183577297ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__diff_w[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 717614974996627163ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__diff_s[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11846537574024769992ull);
    }
    vlSelf->order_table__DOT__empties_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11158764517664305044ull);
    vlSelf->order_table__DOT__empties_s = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11587764241900564254ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__take_w[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3235583776855257174ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->order_table__DOT__take_s[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3947117354817834084ull);
    }
    vlSelf->order_table__DOT__e_ladder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3852677721529228561ull);
    vlSelf->order_table__DOT__e_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 908999356714025361ull);
    vlSelf->order_table__DOT__e_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6292368862652915972ull);
    vlSelf->order_table__DOT__e_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3049750056129686572ull);
    vlSelf->order_table__DOT__take_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7256568441726659757ull);
    vlSelf->order_table__DOT__st_left = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1880090700042235137ull);
    vlSelf->order_table__DOT__same_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17844621901333899169ull);
    vlSelf->order_table__DOT__vld_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18293950147362319188ull);
    vlSelf->order_table__DOT__hitv_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4485645492596806468ull);
    vlSelf->order_table__DOT__freev_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12023804084162889844ull);
    vlSelf->order_table__DOT__st_busy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17431122378837625541ull);
    vlSelf->order_table__DOT__shv_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16187836377888616448ull);
    vlSelf->order_table__DOT__st_freev = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10311799477937916395ull);
    vlSelf->order_table__DOT__hit_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6027550070273037094ull);
    vlSelf->order_table__DOT__free_b_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7733520642000390207ull);
    vlSelf->order_table__DOT__sh_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13559225560127008164ull);
    vlSelf->order_table__DOT__st_free_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9743371287815409823ull);
    vlSelf->order_table__DOT__add_wv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6395453588749649054ull);
    vlSelf->order_table__DOT__rep_wv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15910627436847484475ull);
    vlSelf->order_table__DOT__add_sv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13973143052092847196ull);
    vlSelf->order_table__DOT__rep_sv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2554146105854391265ull);
    vlSelf->order_table__DOT__add_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6992954639220971402ull);
    vlSelf->order_table__DOT__rep_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7631660295706307371ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__add_entry, __VscopeHash, 1654654243434475473ull);
    vlSelf->order_table__DOT__su_kill = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8942061108228346825ull);
    vlSelf->order_table__DOT__su_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14989842908575684651ull);
    vlSelf->order_table__DOT__su_new = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4090379377085568595ull);
    vlSelf->order_table__DOT__su_dec_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6100519737568283825ull);
    vlSelf->order_table__DOT__su_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5566114407408790660ull);
    vlSelf->order_table__DOT__su_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18204476782626459732ull);
    vlSelf->order_table__DOT__su_ladder = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14751618316402093988ull);
    vlSelf->order_table__DOT__su_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11861488042164357790ull);
    vlSelf->order_table__DOT__su_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7232095816268104295ull);
    vlSelf->order_table__DOT__st_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16799710021596275817ull);
    vlSelf->order_table__DOT__unnamedblk2__DOT__w = 0;
    vlSelf->order_table__DOT__unnamedblk3__DOT__k = 0;
    vlSelf->order_table__DOT__unnamedblk4__DOT__w = 0;
    vlSelf->order_table__DOT__unnamedblk5__DOT__k = 0;
    vlSelf->order_table__DOT__unnamedblk6__DOT__w = 0;
    vlSelf->order_table__DOT__unnamedblk7__DOT__k = 0;
    vlSelf->order_table__DOT__unnamedblk8__DOT__w = 0;
    vlSelf->order_table__DOT__unnamedblk9__DOT__k = 0;
    vlSelf->order_table__DOT__unnamedblk10__DOT__k = 0;
    vlSelf->order_table__DOT__unnamedblk11__DOT__k = 0;
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9452315101168452219ull);
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_en = 1U;
    ;
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 592272899126306058ull);
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14865127831898625194ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din, __VscopeHash, 16101284831627533899ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout, __VscopeHash, 10352555386391516657ull);
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_en = 1U;
    ;
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12086723233462943899ull);
    vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 991442647990593439ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din, __VscopeHash, 16939754860230916127ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout, __VscopeHash, 17944552353475833664ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem[__Vi0], __VscopeHash, 2143730278673117092ull);
    }
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13093854565031275149ull);
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_en = 1U;
    ;
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1861793108172580291ull);
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8936866498633561121ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din, __VscopeHash, 7034977497131006556ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout, __VscopeHash, 11486738183250077604ull);
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_en = 1U;
    ;
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15294086102230817048ull);
    vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7177252780565336092ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din, __VscopeHash, 10776176955465437841ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout, __VscopeHash, 2366709001688348439ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(107, vlSelf->order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem[__Vi0], __VscopeHash, 7048473130539145160ull);
    }
    vlSelf->__Vfunc_order_table__DOT__pack_entry__7__ld = 0;
    vlSelf->__Vfunc_order_table__DOT__pack_entry__7__r = 0;
    vlSelf->__Vfunc_order_table__DOT__pack_entry__7__sd = 0;
    vlSelf->__Vfunc_order_table__DOT__pack_entry__7__tk = 0;
    vlSelf->__Vfunc_order_table__DOT__pack_entry__7__q = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__order_table__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
