// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__decode__DOT__clk__0 
        = vlSelfRef.decode__DOT__clk;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge decode.clk)\n");
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
    VL_SCOPED_RAND_RESET_W(400, vlSelf->s_msg, __VscopeHash, 12805446294311260120ull);
    vlSelf->s_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3397361172315744454ull);
    vlSelf->s_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3620650391335490897ull);
    vlSelf->s_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6345311591616554325ull);
    vlSelf->cfg_band_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12677932547499830304ull);
    vlSelf->m_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8068231227598836002ull);
    vlSelf->m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711207929187084452ull);
    vlSelf->m_locate = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1805506620307847435ull);
    vlSelf->m_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6342981204298705536ull);
    vlSelf->m_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13386036689058454062ull);
    vlSelf->m_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447040642631135218ull);
    vlSelf->m_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 472251521081511656ull);
    vlSelf->m_price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8422580860319623633ull);
    vlSelf->m_tick = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3792091370065345997ull);
    vlSelf->m_tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9571365663352430115ull);
    vlSelf->m_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16537319124554484020ull);
    vlSelf->stat_ops = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7721717891286426902ull);
    vlSelf->stat_out_of_band = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4922893688028027434ull);
    vlSelf->stat_subpenny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4323732951925841274ull);
    vlSelf->decode__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8096896455821004867ull);
    vlSelf->decode__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090305317269705108ull);
    VL_SCOPED_RAND_RESET_W(400, vlSelf->decode__DOT__s_msg, __VscopeHash, 6329353933815742117ull);
    vlSelf->decode__DOT__s_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7663453287735269247ull);
    vlSelf->decode__DOT__s_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7969705235064499363ull);
    vlSelf->decode__DOT__s_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2461862690238174491ull);
    vlSelf->decode__DOT__cfg_band_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18431337226274900757ull);
    vlSelf->decode__DOT__m_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16469528706260431520ull);
    vlSelf->decode__DOT__m_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6911082673673099475ull);
    vlSelf->decode__DOT__m_locate = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6921512280641351172ull);
    vlSelf->decode__DOT__m_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9368455192758723020ull);
    vlSelf->decode__DOT__m_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13342305892573641740ull);
    vlSelf->decode__DOT__m_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18297429984136521019ull);
    vlSelf->decode__DOT__m_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7297524420330345632ull);
    vlSelf->decode__DOT__m_price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15381059411658054018ull);
    vlSelf->decode__DOT__m_tick = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14267148466508251991ull);
    vlSelf->decode__DOT__m_tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9392828634034430433ull);
    vlSelf->decode__DOT__m_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17240829736648565726ull);
    vlSelf->decode__DOT__stat_ops = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7885498474673285628ull);
    vlSelf->decode__DOT__stat_out_of_band = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12408440934867214186ull);
    vlSelf->decode__DOT__stat_subpenny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 705798673897401162ull);
    vlSelf->decode__DOT__msg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17735112159430048544ull);
    vlSelf->decode__DOT__locate = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8949847787845857113ull);
    vlSelf->decode__DOT__add_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13778357348099228424ull);
    vlSelf->decode__DOT__add_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5815196569270391569ull);
    vlSelf->decode__DOT__add_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6320083767901659877ull);
    vlSelf->decode__DOT__add_price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6765466645609073278ull);
    vlSelf->decode__DOT__red_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11771087621144381501ull);
    vlSelf->decode__DOT__red_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 591379988844593348ull);
    vlSelf->decode__DOT__rep_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16090250546573903440ull);
    vlSelf->decode__DOT__rep_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11996613827514975434ull);
    vlSelf->decode__DOT__rep_price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17181160257128754630ull);
    vlSelf->decode__DOT__op_c = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11619113901251354414ull);
    vlSelf->decode__DOT__ref_c = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17767545301498655140ull);
    vlSelf->decode__DOT__new_ref_c = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6955196049281464183ull);
    vlSelf->decode__DOT__qty_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3137982985544274641ull);
    vlSelf->decode__DOT__price_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 573539073251707869ull);
    vlSelf->decode__DOT__side_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2291461210723028342ull);
    vlSelf->decode__DOT__has_price = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18300602891261993293ull);
    vlSelf->decode__DOT__band_top = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1039651093815546822ull);
    vlSelf->decode__DOT__in_band_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10260290195977284453ull);
    vlSelf->decode__DOT__delta_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12097034376337938741ull);
    vlSelf->decode__DOT__p1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12019554857252279147ull);
    vlSelf->decode__DOT__p1_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12077557360811454066ull);
    vlSelf->decode__DOT__p1_in_band = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12836701995058102557ull);
    vlSelf->decode__DOT__p1_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15162136601846523011ull);
    vlSelf->decode__DOT__p1_locate = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9051509924162300147ull);
    vlSelf->decode__DOT__p1_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6885420100281718722ull);
    vlSelf->decode__DOT__p1_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17007537644251474317ull);
    vlSelf->decode__DOT__p1_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7919223208838194515ull);
    vlSelf->decode__DOT__p1_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13575885156201216643ull);
    vlSelf->decode__DOT__p1_price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11542342667243036441ull);
    vlSelf->decode__DOT__p1_delta = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 8142076533372002478ull);
    vlSelf->decode__DOT__p2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12701433464142273096ull);
    vlSelf->decode__DOT__p2_side = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5248481053491177209ull);
    vlSelf->decode__DOT__p2_in_band = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13079025386814303641ull);
    vlSelf->decode__DOT__p2_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7462037745986971370ull);
    vlSelf->decode__DOT__p2_locate = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7315937701755135795ull);
    vlSelf->decode__DOT__p2_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12334027824922428573ull);
    vlSelf->decode__DOT__p2_new_ref = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4383508268876479126ull);
    vlSelf->decode__DOT__p2_seq = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7109587562667951493ull);
    vlSelf->decode__DOT__p2_qty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17520406984632149851ull);
    vlSelf->decode__DOT__p2_price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14334168459599474799ull);
    vlSelf->decode__DOT__p2_delta = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 8949622573150778492ull);
    vlSelf->decode__DOT__p2_prod = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16173621945273176629ull);
    vlSelf->decode__DOT__tick_c = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4079761958515644272ull);
    vlSelf->decode__DOT__subpenny_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 652991434501694759ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__decode__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
