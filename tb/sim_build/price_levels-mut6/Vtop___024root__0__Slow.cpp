// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__u_ask_bbo__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__u_bid_bbo__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__u_ask_upd__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__u_ask_upd__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__u_bid_upd__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__u_bid_upd__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__u_ask_pe__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__u_ask_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__price_levels__DOT__u_bid_pe__DOT__clk__0 
        = vlSelfRef.price_levels__DOT__u_bid_pe__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.price_levels__DOT__u_ask_bbo__DOT__re = 1U;
        vlSelfRef.price_levels__DOT__u_bid_bbo__DOT__re = 1U;
        vlSelfRef.price_levels__DOT__u_ask_upd__DOT__re = 1U;
        vlSelfRef.price_levels__DOT__u_bid_upd__DOT__re = 1U;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge price_levels.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge price_levels.u_ask_bbo.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge price_levels.u_bid_bbo.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge price_levels.u_ask_upd.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge price_levels.u_bid_upd.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge price_levels.u_ask_pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge price_levels.u_bid_pe.clk)\n");
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
    vlSelf->s_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12010763814335669146ull);
    vlSelf->s_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16551727753141997852ull);
    vlSelf->s_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3355328572542083966ull);
    vlSelf->s_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8130527260241853664ull);
    vlSelf->s_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13261706342258949925ull);
    vlSelf->s_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6345311591616554325ull);
    vlSelf->m_bbo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12347134921898340762ull);
    vlSelf->m_bbo_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089295673473838954ull);
    vlSelf->m_bid_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7420513365203713884ull);
    vlSelf->m_bid_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9518520257801232875ull);
    vlSelf->m_bid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9699905931336467675ull);
    vlSelf->m_ask_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8381711682984210081ull);
    vlSelf->m_ask_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8627129142862405646ull);
    vlSelf->m_ask_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472078452860194690ull);
    vlSelf->stat_updates = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1843482226719185879ull);
    vlSelf->stat_underflow = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11189405928018606079ull);
    vlSelf->price_levels__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 320511539058261639ull);
    vlSelf->price_levels__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4374807948020140086ull);
    vlSelf->price_levels__DOT__s_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9954882937101942468ull);
    vlSelf->price_levels__DOT__s_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13503302777339372421ull);
    vlSelf->price_levels__DOT__s_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11175861359035228319ull);
    vlSelf->price_levels__DOT__s_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6320390192249937562ull);
    vlSelf->price_levels__DOT__s_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7602785146955601958ull);
    vlSelf->price_levels__DOT__s_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14327230608348383430ull);
    vlSelf->price_levels__DOT__s_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16134312652182381632ull);
    vlSelf->price_levels__DOT__m_bbo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15850552708545727885ull);
    vlSelf->price_levels__DOT__m_bbo_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8002721308009789058ull);
    vlSelf->price_levels__DOT__m_bid_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6972095608861991153ull);
    vlSelf->price_levels__DOT__m_bid_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16733117819791559750ull);
    vlSelf->price_levels__DOT__m_bid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9466584300337154243ull);
    vlSelf->price_levels__DOT__m_ask_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1201192899311123035ull);
    vlSelf->price_levels__DOT__m_ask_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12758123620199371557ull);
    vlSelf->price_levels__DOT__m_ask_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4553479183082908142ull);
    vlSelf->price_levels__DOT__stat_updates = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16347896431060185700ull);
    vlSelf->price_levels__DOT__stat_underflow = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16933222937054185348ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->price_levels__DOT__bid_map, __VscopeHash, 11763089720555938798ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->price_levels__DOT__ask_map, __VscopeHash, 11050812724344048808ull);
    vlSelf->price_levels__DOT__s1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8284123200597544711ull);
    vlSelf->price_levels__DOT__s1_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4656926786692850082ull);
    vlSelf->price_levels__DOT__s1_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 613685419428676574ull);
    vlSelf->price_levels__DOT__s1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 818106433320885990ull);
    vlSelf->price_levels__DOT__s1_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17759809131100714120ull);
    vlSelf->price_levels__DOT__s1_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11743900468287954456ull);
    vlSelf->price_levels__DOT__s1_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9487545118344678408ull);
    vlSelf->price_levels__DOT__rd_bid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8771917087669908664ull);
    vlSelf->price_levels__DOT__rd_ask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4930238325216282972ull);
    vlSelf->price_levels__DOT__s1_occupied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18238941776566385441ull);
    vlSelf->price_levels__DOT__wr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11684773882247737193ull);
    vlSelf->price_levels__DOT__wr_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2306419116764491080ull);
    vlSelf->price_levels__DOT__wr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15886351976989580622ull);
    vlSelf->price_levels__DOT__wr_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15599078559396385293ull);
    vlSelf->price_levels__DOT__wr_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1748587113870975329ull);
    vlSelf->price_levels__DOT__wr_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13550672437738300485ull);
    vlSelf->price_levels__DOT__base_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 144087296926815201ull);
    vlSelf->price_levels__DOT__new_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16241105453489787477ull);
    vlSelf->price_levels__DOT__fwd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12119907221053622236ull);
    vlSelf->price_levels__DOT__underflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10543131239326197342ull);
    vlSelf->price_levels__DOT__best_bid_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15179006401266052074ull);
    vlSelf->price_levels__DOT__best_ask_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2356915231757140753ull);
    vlSelf->price_levels__DOT__have_bid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16526164017329294843ull);
    vlSelf->price_levels__DOT__have_ask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16506750448018462438ull);
    vlSelf->price_levels__DOT__pe_bid_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2302393455067560333ull);
    vlSelf->price_levels__DOT__pe_ask_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3536716750251045031ull);
    vlSelf->price_levels__DOT__pub_done1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14737656215789004435ull);
    vlSelf->price_levels__DOT__pub_done2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16139064171321452200ull);
    vlSelf->price_levels__DOT__pe_bid_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3411583502864731793ull);
    vlSelf->price_levels__DOT__pe_ask_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4527298658453974999ull);
    vlSelf->price_levels__DOT__pub_seq1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5777891755698620289ull);
    vlSelf->price_levels__DOT__pub_seq2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12996371392297031667ull);
    vlSelf->price_levels__DOT__bbo_d1_bid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13419231692162370389ull);
    vlSelf->price_levels__DOT__bbo_d1_ask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16793297540810372582ull);
    vlSelf->price_levels__DOT__bbo_d2_bid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9178216067306885698ull);
    vlSelf->price_levels__DOT__bbo_d2_ask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4265866978278283744ull);
    vlSelf->price_levels__DOT__bbo_d1_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17509898961549487453ull);
    vlSelf->price_levels__DOT__bbo_d2_tick = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16973535230034691497ull);
    vlSelf->price_levels__DOT__bbo_d1_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14461496700834693668ull);
    vlSelf->price_levels__DOT__bbo_d2_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10754850230105556452ull);
    vlSelf->price_levels__DOT__bid_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418318781162240788ull);
    vlSelf->price_levels__DOT__ask_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12875362843386273342ull);
    vlSelf->price_levels__DOT__bbo_bid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7398876701578246486ull);
    vlSelf->price_levels__DOT__bbo_ask_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1875721898063559768ull);
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7690416341466823666ull);
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17550560261346288631ull);
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14288317929694803014ull);
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 555592567803049433ull);
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__re = 1U;
    ;
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7301724700031593026ull);
    vlSelf->price_levels__DOT__u_ask_bbo__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16231452998636780251ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->price_levels__DOT__u_ask_bbo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1352322194834282419ull);
    }
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1232386804191104526ull);
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 696747757095963146ull);
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8738117642674563196ull);
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12596426095783700410ull);
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__re = 1U;
    ;
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1945054200667155714ull);
    vlSelf->price_levels__DOT__u_bid_bbo__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16661631550397794853ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->price_levels__DOT__u_bid_bbo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9654584842961569582ull);
    }
    vlSelf->price_levels__DOT__u_ask_upd__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1053792432384936233ull);
    vlSelf->price_levels__DOT__u_ask_upd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040126722186114757ull);
    vlSelf->price_levels__DOT__u_ask_upd__DOT__waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12211792594778131492ull);
    vlSelf->price_levels__DOT__u_ask_upd__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17232165271628816289ull);
    vlSelf->price_levels__DOT__u_ask_upd__DOT__re = 1U;
    ;
    vlSelf->price_levels__DOT__u_ask_upd__DOT__raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12804532668971855413ull);
    vlSelf->price_levels__DOT__u_ask_upd__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17599123726720972565ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->price_levels__DOT__u_ask_upd__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5846102512964612525ull);
    }
    vlSelf->price_levels__DOT__u_bid_upd__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6349755358998885171ull);
    vlSelf->price_levels__DOT__u_bid_upd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7167713071409736404ull);
    vlSelf->price_levels__DOT__u_bid_upd__DOT__waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15421493375375292752ull);
    vlSelf->price_levels__DOT__u_bid_upd__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8264369239852218188ull);
    vlSelf->price_levels__DOT__u_bid_upd__DOT__re = 1U;
    ;
    vlSelf->price_levels__DOT__u_bid_upd__DOT__raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1166274141208460157ull);
    vlSelf->price_levels__DOT__u_bid_upd__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7390305050758285203ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->price_levels__DOT__u_bid_upd__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10119888364591436963ull);
    }
    vlSelf->price_levels__DOT__u_ask_pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13944104314693879382ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->price_levels__DOT__u_ask_pe__DOT__bitmap, __VscopeHash, 14537068243138826615ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10271511932459588551ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4053763835520620253ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__summary_c = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1738034908147431428ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__summary = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 892123921239253316ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->price_levels__DOT__u_ask_pe__DOT__offsets_c, __VscopeHash, 12311391456758951864ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->price_levels__DOT__u_ask_pe__DOT__offsets, __VscopeHash, 16794389453975223282ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__grp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17787801766648630201ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__off = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 327564755227978433ull);
    vlSelf->price_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g = 0;
    vlSelf->price_levels__DOT__u_bid_pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8981426168091227300ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->price_levels__DOT__u_bid_pe__DOT__bitmap, __VscopeHash, 338758268745103998ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1205581673254377561ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3953394685222978010ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__summary_c = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7064958455989002011ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__summary = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15086131791032039793ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->price_levels__DOT__u_bid_pe__DOT__offsets_c, __VscopeHash, 18063262195002151239ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->price_levels__DOT__u_bid_pe__DOT__offsets, __VscopeHash, 2867853673072005289ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__grp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4696501482044403061ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__off = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 327024132360841741ull);
    vlSelf->price_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g = 0;
    vlSelf->__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__v = 0;
    vlSelf->__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld = 0;
    vlSelf->__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__vld_n = 0;
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx);
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_price_levels__DOT__u_ask_pe__DOT__enc_group__0__idx_n);
    vlSelf->__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__v = 0;
    vlSelf->__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld = 0;
    vlSelf->__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__vld_n = 0;
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx);
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_price_levels__DOT__u_bid_pe__DOT__enc_group__2__idx_n);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__u_ask_bbo__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__u_bid_bbo__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__u_ask_upd__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__u_bid_upd__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__u_ask_pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__price_levels__DOT__u_bid_pe__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
