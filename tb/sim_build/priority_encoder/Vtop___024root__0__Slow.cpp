// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.pe_wrap__DOT__u_lo__DOT__clk = 0U;
        vlSelfRef.pe_wrap__DOT__u_hi__DOT__clk = 0U;
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

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->bitmap, __VscopeHash, 7054069835909806037ull);
    vlSelf->hi_index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9492288805452150015ull);
    vlSelf->hi_any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2702752400476094190ull);
    vlSelf->lo_index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11666349915229833856ull);
    vlSelf->lo_any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1636856922571295094ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->pe_wrap__DOT__bitmap, __VscopeHash, 2611371257405682721ull);
    vlSelf->pe_wrap__DOT__hi_index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17999511750657819596ull);
    vlSelf->pe_wrap__DOT__hi_any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11697176906010463761ull);
    vlSelf->pe_wrap__DOT__lo_index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12176061694076650660ull);
    vlSelf->pe_wrap__DOT__lo_any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12880533498050454784ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__clk = 0U;
    ;
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->pe_wrap__DOT__u_lo__DOT__bitmap, __VscopeHash, 638945587119530115ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12862911078322351042ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10524101009520714950ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__summary_c = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6480869453092659052ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__summary = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16494283792542529817ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->pe_wrap__DOT__u_lo__DOT__offsets_c, __VscopeHash, 9974545519858418780ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->pe_wrap__DOT__u_lo__DOT__offsets, __VscopeHash, 12004584479669733530ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__grp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 625801943784816082ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__off = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 279676177028384219ull);
    vlSelf->pe_wrap__DOT__u_lo__DOT__unnamedblk5__DOT__g = 0;
    vlSelf->pe_wrap__DOT__u_hi__DOT__clk = 0U;
    ;
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->pe_wrap__DOT__u_hi__DOT__bitmap, __VscopeHash, 16229490438449807868ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13780150950100575194ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__any = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13173496346960791031ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__summary_c = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2433084719935046289ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__summary = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9902930829198286189ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->pe_wrap__DOT__u_hi__DOT__offsets_c, __VscopeHash, 11609697134576529313ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->pe_wrap__DOT__u_hi__DOT__offsets, __VscopeHash, 17809786181370376874ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__grp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7636242705393415235ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__off = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15672823602200690370ull);
    vlSelf->pe_wrap__DOT__u_hi__DOT__unnamedblk5__DOT__g = 0;
    vlSelf->__Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__v = 0;
    vlSelf->__Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__vld = 0;
    vlSelf->__Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__vld_n = 0;
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__idx);
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_pe_wrap__DOT__u_lo__DOT__enc_group__0__idx_n);
    vlSelf->__Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__v = 0;
    vlSelf->__Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__vld = 0;
    vlSelf->__Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__vld_n = 0;
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__idx);
    VL_ZERO_RESET_W(384, vlSelf->__Vfunc_pe_wrap__DOT__u_hi__DOT__enc_group__2__idx_n);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
