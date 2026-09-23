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
                                                        ((IData)(vlSelfRef.hdr_parse__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hdr_parse__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__hdr_parse__DOT__clk__0 
            = vlSelfRef.hdr_parse__DOT__clk;
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
    vlSelfRef.hdr_parse__DOT__clk = vlSelfRef.clk;
    vlSelfRef.hdr_parse__DOT__rst = vlSelfRef.rst;
    vlSelfRef.hdr_parse__DOT__s_tkeep = vlSelfRef.s_tkeep;
    vlSelfRef.hdr_parse__DOT__s_tlast = vlSelfRef.s_tlast;
    vlSelfRef.m_tdata = vlSelfRef.hdr_parse__DOT__m_tdata;
    vlSelfRef.m_tkeep = vlSelfRef.hdr_parse__DOT__m_tkeep;
    vlSelfRef.m_tvalid = vlSelfRef.hdr_parse__DOT__m_tvalid;
    vlSelfRef.m_tlast = vlSelfRef.hdr_parse__DOT__m_tlast;
    vlSelfRef.m_sequence = vlSelfRef.hdr_parse__DOT__m_sequence;
    vlSelfRef.m_count = vlSelfRef.hdr_parse__DOT__m_count;
    vlSelfRef.stat_packets = vlSelfRef.hdr_parse__DOT__stat_packets;
    vlSelfRef.stat_dropped = vlSelfRef.hdr_parse__DOT__stat_dropped;
    vlSelfRef.hdr_parse__DOT__last_bytes = (7U & (IData)(vlSelfRef.hdr_parse__DOT__pay_len_q));
    vlSelfRef.hdr_parse__DOT__keep_shift = ((0U == (IData)(vlSelfRef.hdr_parse__DOT__last_bytes))
                                             ? 0U : 
                                            (0x0000000fU 
                                             & ((IData)(8U) 
                                                - (IData)(vlSelfRef.hdr_parse__DOT__last_bytes))));
    vlSelfRef.hdr_parse__DOT__last_keep = (0xffU >> (IData)(vlSelfRef.hdr_parse__DOT__keep_shift));
    vlSelfRef.hdr_parse__DOT__s_tvalid = vlSelfRef.s_tvalid;
    vlSelfRef.hdr_parse__DOT__s_tdata = vlSelfRef.s_tdata;
    vlSelfRef.hdr_parse__DOT__ethertype_outer = (((IData)(vlSelfRef.hdr_parse__DOT__hb[12U]) 
                                                  << 8U) 
                                                 | vlSelfRef.hdr_parse__DOT__hb[13U]);
    vlSelfRef.hdr_parse__DOT__vlan_tagged = (0x8100U 
                                             == (IData)(vlSelfRef.hdr_parse__DOT__ethertype_outer));
    if (vlSelfRef.hdr_parse__DOT__vlan_tagged) {
        vlSelfRef.hdr_parse__DOT__ip_off = 0x12U;
        vlSelfRef.hdr_parse__DOT__ethertype_inner = 
            (((IData)(vlSelfRef.hdr_parse__DOT__hb[16U]) 
              << 8U) | vlSelfRef.hdr_parse__DOT__hb[17U]);
    } else {
        vlSelfRef.hdr_parse__DOT__ip_off = 0x0eU;
        vlSelfRef.hdr_parse__DOT__ethertype_inner = vlSelfRef.hdr_parse__DOT__ethertype_outer;
    }
    vlSelfRef.hdr_parse__DOT__is_ipv4 = (0x0800U == (IData)(vlSelfRef.hdr_parse__DOT__ethertype_inner));
    vlSelfRef.hdr_parse__DOT__ihl_bytes = (0x0000003cU 
                                           & (vlSelfRef.hdr_parse__DOT__hb
                                              [(0x0000007fU 
                                                & (IData)(vlSelfRef.hdr_parse__DOT__ip_off))] 
                                              << 2U));
    vlSelfRef.hdr_parse__DOT__ip_total_len = (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                       [
                                                       (0x0000007fU 
                                                        & ((IData)(2U) 
                                                           + (IData)(vlSelfRef.hdr_parse__DOT__ip_off)))]) 
                                               << 8U) 
                                              | vlSelfRef.hdr_parse__DOT__hb
                                              [(0x0000007fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.hdr_parse__DOT__ip_off)))]);
    vlSelfRef.hdr_parse__DOT__is_udp = (0x11U == vlSelfRef.hdr_parse__DOT__hb
                                        [(0x0000007fU 
                                          & ((IData)(9U) 
                                             + (IData)(vlSelfRef.hdr_parse__DOT__ip_off)))]);
    vlSelfRef.hdr_parse__DOT__udp_off = (0x000000ffU 
                                         & ((IData)(vlSelfRef.hdr_parse__DOT__ip_off) 
                                            + (IData)(vlSelfRef.hdr_parse__DOT__ihl_bytes)));
    vlSelfRef.hdr_parse__DOT__mold_off = (0x000000ffU 
                                          & ((IData)(8U) 
                                             + (IData)(vlSelfRef.hdr_parse__DOT__udp_off)));
    vlSelfRef.hdr_parse__DOT__payload_off = (0x000000ffU 
                                             & ((IData)(0x14U) 
                                                + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)));
    vlSelfRef.hdr_parse__DOT__payload_len = (0x0000ffffU 
                                             & ((((IData)(vlSelfRef.hdr_parse__DOT__ip_total_len) 
                                                  - (IData)(vlSelfRef.hdr_parse__DOT__ihl_bytes)) 
                                                 - (IData)(8U)) 
                                                - (IData)(0x0014U)));
    vlSelfRef.hdr_parse__DOT__mold_seq = (((QData)((IData)(
                                                           (((((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                       [
                                                                       (0x0000007fU 
                                                                        & ((IData)(0x0aU) 
                                                                           + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                               << 8U) 
                                                              | vlSelfRef.hdr_parse__DOT__hb
                                                              [
                                                              (0x0000007fU 
                                                               & ((IData)(0x0bU) 
                                                                  + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                             << 0x00000010U) 
                                                            | (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                        [
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x0cU) 
                                                                            + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                                << 8U) 
                                                               | vlSelfRef.hdr_parse__DOT__hb
                                                               [
                                                               (0x0000007fU 
                                                                & ((IData)(0x0dU) 
                                                                   + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))])))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            (((((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                        [
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x0eU) 
                                                                            + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                                << 8U) 
                                                               | vlSelfRef.hdr_parse__DOT__hb
                                                               [
                                                               (0x0000007fU 
                                                                & ((IData)(0x0fU) 
                                                                   + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                              << 0x00000010U) 
                                                             | (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                         [
                                                                         (0x0000007fU 
                                                                          & ((IData)(0x10U) 
                                                                             + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                                 << 8U) 
                                                                | vlSelfRef.hdr_parse__DOT__hb
                                                                [
                                                                (0x0000007fU 
                                                                 & ((IData)(0x11U) 
                                                                    + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))])))));
    vlSelfRef.hdr_parse__DOT__mold_cnt = (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(0x12U) 
                                                       + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                           << 8U) | vlSelfRef.hdr_parse__DOT__hb
                                          [(0x0000007fU 
                                            & ((IData)(0x13U) 
                                               + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]);
    vlSelfRef.hdr_parse__DOT__reached = ((IData)(vlSelfRef.hdr_parse__DOT__emitting) 
                                         | ((IData)(vlSelfRef.hdr_parse__DOT__beat_idx) 
                                            == (IData)(vlSelfRef.hdr_parse__DOT__emit_start)));
    vlSelfRef.hdr_parse__DOT__do_emit = ((((IData)(vlSelfRef.hdr_parse__DOT__s_tvalid) 
                                           & (IData)(vlSelfRef.hdr_parse__DOT__pkt_ok)) 
                                          & (IData)(vlSelfRef.hdr_parse__DOT__reached)) 
                                         & (0U != (IData)(vlSelfRef.hdr_parse__DOT__out_left)));
    vlSelfRef.hdr_parse__DOT__sh_lo = ((IData)(vlSelfRef.hdr_parse__DOT__r_off) 
                                       << 3U);
    vlSelfRef.hdr_parse__DOT__sh_hi = (0x0000007fU 
                                       & ((IData)(0x40U) 
                                          - (IData)(vlSelfRef.hdr_parse__DOT__sh_lo)));
    vlSelfRef.hdr_parse__DOT__realigned = ((0U == (IData)(vlSelfRef.hdr_parse__DOT__r_off))
                                            ? vlSelfRef.hdr_parse__DOT__s_tdata
                                            : (VL_SHIFTR_QQI(64,64,7, vlSelfRef.hdr_parse__DOT__prev_data, (IData)(vlSelfRef.hdr_parse__DOT__sh_lo)) 
                                               | VL_SHIFTL_QQI(64,64,7, vlSelfRef.hdr_parse__DOT__s_tdata, (IData)(vlSelfRef.hdr_parse__DOT__sh_hi))));
    vlSelfRef.hdr_parse__DOT__flushed = VL_SHIFTR_QQI(64,64,7, vlSelfRef.hdr_parse__DOT__prev_data, (IData)(vlSelfRef.hdr_parse__DOT__sh_lo));
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
    CData/*7:0*/ __Vdly__hdr_parse__DOT__beat_idx;
    __Vdly__hdr_parse__DOT__beat_idx = 0;
    SData/*15:0*/ __Vdly__hdr_parse__DOT__out_left;
    __Vdly__hdr_parse__DOT__out_left = 0;
    CData/*0:0*/ __Vdly__hdr_parse__DOT__pkt_ok;
    __Vdly__hdr_parse__DOT__pkt_ok = 0;
    CData/*0:0*/ __Vdly__hdr_parse__DOT__flush_pend;
    __Vdly__hdr_parse__DOT__flush_pend = 0;
    IData/*31:0*/ __Vdly__hdr_parse__DOT__stat_packets;
    __Vdly__hdr_parse__DOT__stat_packets = 0;
    IData/*31:0*/ __Vdly__hdr_parse__DOT__stat_dropped;
    __Vdly__hdr_parse__DOT__stat_dropped = 0;
    CData/*7:0*/ __Vdly__hdr_parse__DOT__emit_start;
    __Vdly__hdr_parse__DOT__emit_start = 0;
    CData/*7:0*/ __VdlyVal__hdr_parse__DOT__hb__v0;
    __VdlyVal__hdr_parse__DOT__hb__v0 = 0;
    CData/*6:0*/ __VdlyDim0__hdr_parse__DOT__hb__v0;
    __VdlyDim0__hdr_parse__DOT__hb__v0 = 0;
    // Body
    __Vdly__hdr_parse__DOT__flush_pend = vlSelfRef.hdr_parse__DOT__flush_pend;
    __Vdly__hdr_parse__DOT__stat_packets = vlSelfRef.hdr_parse__DOT__stat_packets;
    __Vdly__hdr_parse__DOT__stat_dropped = vlSelfRef.hdr_parse__DOT__stat_dropped;
    __Vdly__hdr_parse__DOT__beat_idx = vlSelfRef.hdr_parse__DOT__beat_idx;
    __Vdly__hdr_parse__DOT__out_left = vlSelfRef.hdr_parse__DOT__out_left;
    __Vdly__hdr_parse__DOT__pkt_ok = vlSelfRef.hdr_parse__DOT__pkt_ok;
    __Vdly__hdr_parse__DOT__emit_start = vlSelfRef.hdr_parse__DOT__emit_start;
    if (vlSelfRef.hdr_parse__DOT__rst) {
        vlSelfRef.hdr_parse__DOT__prev_data = 0ULL;
    } else if (vlSelfRef.hdr_parse__DOT__s_tvalid) {
        vlSelfRef.hdr_parse__DOT__prev_data = vlSelfRef.hdr_parse__DOT__s_tdata;
    }
    if (vlSelfRef.hdr_parse__DOT__rst) {
        __Vdly__hdr_parse__DOT__beat_idx = 0U;
        __Vdly__hdr_parse__DOT__out_left = 0U;
        vlSelfRef.hdr_parse__DOT__emitting = 0U;
        __Vdly__hdr_parse__DOT__pkt_ok = 0U;
        __Vdly__hdr_parse__DOT__flush_pend = 0U;
        vlSelfRef.hdr_parse__DOT__m_tvalid = 0U;
        vlSelfRef.hdr_parse__DOT__m_tlast = 0U;
        vlSelfRef.hdr_parse__DOT__m_tdata = 0ULL;
        vlSelfRef.hdr_parse__DOT__m_tkeep = 0U;
        vlSelfRef.hdr_parse__DOT__m_sequence = 0ULL;
        vlSelfRef.hdr_parse__DOT__m_count = 0U;
        __Vdly__hdr_parse__DOT__stat_packets = 0U;
        __Vdly__hdr_parse__DOT__stat_dropped = 0U;
        vlSelfRef.hdr_parse__DOT__r_off = 0U;
        __Vdly__hdr_parse__DOT__emit_start = 0U;
        vlSelfRef.hdr_parse__DOT__pay_len_q = 0U;
    } else {
        vlSelfRef.hdr_parse__DOT__m_tvalid = 0U;
        vlSelfRef.hdr_parse__DOT__m_tlast = 0U;
        if (vlSelfRef.hdr_parse__DOT__flush_pend) {
            __Vdly__hdr_parse__DOT__flush_pend = 0U;
            vlSelfRef.hdr_parse__DOT__m_tdata = vlSelfRef.hdr_parse__DOT__flushed;
            vlSelfRef.hdr_parse__DOT__m_tkeep = vlSelfRef.hdr_parse__DOT__last_keep;
            vlSelfRef.hdr_parse__DOT__m_tvalid = 1U;
            vlSelfRef.hdr_parse__DOT__m_tlast = 1U;
        }
        if (vlSelfRef.hdr_parse__DOT__s_tvalid) {
            if ((0x10U > (IData)(vlSelfRef.hdr_parse__DOT__beat_idx))) {
                vlSelfRef.hdr_parse__DOT__unnamedblk1__DOT__b = 0U;
                while (VL_GTS_III(32, 8U, vlSelfRef.hdr_parse__DOT__unnamedblk1__DOT__b)) {
                    __VdlyVal__hdr_parse__DOT__hb__v0 
                        = (0x000000ffU & (IData)((vlSelfRef.hdr_parse__DOT__s_tdata 
                                                  >> 
                                                  (0x0000003fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.hdr_parse__DOT__unnamedblk1__DOT__b)))));
                    __VdlyDim0__hdr_parse__DOT__hb__v0 
                        = (0x0000007fU & (VL_MULS_III(32, (IData)(8U), (IData)(vlSelfRef.hdr_parse__DOT__beat_idx)) 
                                          + vlSelfRef.hdr_parse__DOT__unnamedblk1__DOT__b));
                    vlSelfRef.__VdlyCommitQueuehdr_parse__DOT__hb.enqueue(__VdlyVal__hdr_parse__DOT__hb__v0, (IData)(__VdlyDim0__hdr_parse__DOT__hb__v0));
                    vlSelfRef.hdr_parse__DOT__unnamedblk1__DOT__b 
                        = ((IData)(1U) + vlSelfRef.hdr_parse__DOT__unnamedblk1__DOT__b);
                }
            }
            if ((4U == (IData)(vlSelfRef.hdr_parse__DOT__beat_idx))) {
                __Vdly__hdr_parse__DOT__pkt_ok = ((IData)(vlSelfRef.hdr_parse__DOT__is_ipv4) 
                                                  & (IData)(vlSelfRef.hdr_parse__DOT__is_udp));
                vlSelfRef.hdr_parse__DOT__r_off = (7U 
                                                   & (IData)(vlSelfRef.hdr_parse__DOT__payload_off));
                vlSelfRef.hdr_parse__DOT__pay_len_q 
                    = vlSelfRef.hdr_parse__DOT__payload_len;
                __Vdly__hdr_parse__DOT__out_left = 
                    (0x00001fffU & (((IData)(7U) + (IData)(vlSelfRef.hdr_parse__DOT__payload_len)) 
                                    >> 3U));
                __Vdly__hdr_parse__DOT__emit_start 
                    = (0x000000ffU & ((0U == (7U & (IData)(vlSelfRef.hdr_parse__DOT__payload_off)))
                                       ? ((IData)(vlSelfRef.hdr_parse__DOT__payload_off) 
                                          >> 3U) : 
                                      ((IData)(1U) 
                                       + ((IData)(vlSelfRef.hdr_parse__DOT__payload_off) 
                                          >> 3U))));
            }
            if (((IData)(vlSelfRef.hdr_parse__DOT__pkt_ok) 
                 & ((IData)(vlSelfRef.hdr_parse__DOT__beat_idx) 
                    == (IData)(vlSelfRef.hdr_parse__DOT__emit_start)))) {
                vlSelfRef.hdr_parse__DOT__m_sequence 
                    = vlSelfRef.hdr_parse__DOT__mold_seq;
                vlSelfRef.hdr_parse__DOT__m_count = vlSelfRef.hdr_parse__DOT__mold_cnt;
                vlSelfRef.hdr_parse__DOT__emitting = 1U;
            }
            if (vlSelfRef.hdr_parse__DOT__do_emit) {
                vlSelfRef.hdr_parse__DOT__m_tdata = vlSelfRef.hdr_parse__DOT__realigned;
                vlSelfRef.hdr_parse__DOT__m_tvalid = 1U;
                if ((1U == (IData)(vlSelfRef.hdr_parse__DOT__out_left))) {
                    vlSelfRef.hdr_parse__DOT__m_tkeep 
                        = vlSelfRef.hdr_parse__DOT__last_keep;
                    vlSelfRef.hdr_parse__DOT__m_tlast = 1U;
                } else {
                    vlSelfRef.hdr_parse__DOT__m_tkeep = 0xffU;
                }
                __Vdly__hdr_parse__DOT__out_left = 
                    (0x0000ffffU & ((IData)(vlSelfRef.hdr_parse__DOT__out_left) 
                                    - (IData)(1U)));
            }
            if (vlSelfRef.hdr_parse__DOT__s_tlast) {
                __Vdly__hdr_parse__DOT__beat_idx = 0U;
                vlSelfRef.hdr_parse__DOT__emitting = 0U;
                if (vlSelfRef.hdr_parse__DOT__pkt_ok) {
                    __Vdly__hdr_parse__DOT__stat_packets 
                        = ((IData)(1U) + vlSelfRef.hdr_parse__DOT__stat_packets);
                    if (((IData)(vlSelfRef.hdr_parse__DOT__do_emit)
                          ? (1U != (IData)(vlSelfRef.hdr_parse__DOT__out_left))
                          : (0U != (IData)(vlSelfRef.hdr_parse__DOT__out_left)))) {
                        __Vdly__hdr_parse__DOT__flush_pend = 1U;
                    }
                } else {
                    __Vdly__hdr_parse__DOT__stat_dropped 
                        = ((IData)(1U) + vlSelfRef.hdr_parse__DOT__stat_dropped);
                }
                __Vdly__hdr_parse__DOT__out_left = 0U;
                __Vdly__hdr_parse__DOT__pkt_ok = 0U;
            } else {
                __Vdly__hdr_parse__DOT__beat_idx = 
                    (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.hdr_parse__DOT__beat_idx)));
            }
        }
    }
    vlSelfRef.hdr_parse__DOT__flush_pend = __Vdly__hdr_parse__DOT__flush_pend;
    vlSelfRef.hdr_parse__DOT__stat_packets = __Vdly__hdr_parse__DOT__stat_packets;
    vlSelfRef.hdr_parse__DOT__stat_dropped = __Vdly__hdr_parse__DOT__stat_dropped;
    vlSelfRef.hdr_parse__DOT__beat_idx = __Vdly__hdr_parse__DOT__beat_idx;
    vlSelfRef.hdr_parse__DOT__out_left = __Vdly__hdr_parse__DOT__out_left;
    vlSelfRef.hdr_parse__DOT__pkt_ok = __Vdly__hdr_parse__DOT__pkt_ok;
    vlSelfRef.hdr_parse__DOT__emit_start = __Vdly__hdr_parse__DOT__emit_start;
    vlSelfRef.__VdlyCommitQueuehdr_parse__DOT__hb.commit(vlSelfRef.hdr_parse__DOT__hb);
    vlSelfRef.m_tvalid = vlSelfRef.hdr_parse__DOT__m_tvalid;
    vlSelfRef.m_tlast = vlSelfRef.hdr_parse__DOT__m_tlast;
    vlSelfRef.m_tdata = vlSelfRef.hdr_parse__DOT__m_tdata;
    vlSelfRef.m_tkeep = vlSelfRef.hdr_parse__DOT__m_tkeep;
    vlSelfRef.m_sequence = vlSelfRef.hdr_parse__DOT__m_sequence;
    vlSelfRef.m_count = vlSelfRef.hdr_parse__DOT__m_count;
    vlSelfRef.stat_packets = vlSelfRef.hdr_parse__DOT__stat_packets;
    vlSelfRef.stat_dropped = vlSelfRef.hdr_parse__DOT__stat_dropped;
    vlSelfRef.hdr_parse__DOT__last_bytes = (7U & (IData)(vlSelfRef.hdr_parse__DOT__pay_len_q));
    vlSelfRef.hdr_parse__DOT__keep_shift = ((0U == (IData)(vlSelfRef.hdr_parse__DOT__last_bytes))
                                             ? 0U : 
                                            (0x0000000fU 
                                             & ((IData)(8U) 
                                                - (IData)(vlSelfRef.hdr_parse__DOT__last_bytes))));
    vlSelfRef.hdr_parse__DOT__last_keep = (0xffU >> (IData)(vlSelfRef.hdr_parse__DOT__keep_shift));
    vlSelfRef.hdr_parse__DOT__reached = ((IData)(vlSelfRef.hdr_parse__DOT__emitting) 
                                         | ((IData)(vlSelfRef.hdr_parse__DOT__beat_idx) 
                                            == (IData)(vlSelfRef.hdr_parse__DOT__emit_start)));
    vlSelfRef.hdr_parse__DOT__do_emit = ((((IData)(vlSelfRef.hdr_parse__DOT__s_tvalid) 
                                           & (IData)(vlSelfRef.hdr_parse__DOT__pkt_ok)) 
                                          & (IData)(vlSelfRef.hdr_parse__DOT__reached)) 
                                         & (0U != (IData)(vlSelfRef.hdr_parse__DOT__out_left)));
    vlSelfRef.hdr_parse__DOT__sh_lo = ((IData)(vlSelfRef.hdr_parse__DOT__r_off) 
                                       << 3U);
    vlSelfRef.hdr_parse__DOT__sh_hi = (0x0000007fU 
                                       & ((IData)(0x40U) 
                                          - (IData)(vlSelfRef.hdr_parse__DOT__sh_lo)));
    vlSelfRef.hdr_parse__DOT__realigned = ((0U == (IData)(vlSelfRef.hdr_parse__DOT__r_off))
                                            ? vlSelfRef.hdr_parse__DOT__s_tdata
                                            : (VL_SHIFTR_QQI(64,64,7, vlSelfRef.hdr_parse__DOT__prev_data, (IData)(vlSelfRef.hdr_parse__DOT__sh_lo)) 
                                               | VL_SHIFTL_QQI(64,64,7, vlSelfRef.hdr_parse__DOT__s_tdata, (IData)(vlSelfRef.hdr_parse__DOT__sh_hi))));
    vlSelfRef.hdr_parse__DOT__flushed = VL_SHIFTR_QQI(64,64,7, vlSelfRef.hdr_parse__DOT__prev_data, (IData)(vlSelfRef.hdr_parse__DOT__sh_lo));
    vlSelfRef.hdr_parse__DOT__ethertype_outer = (((IData)(vlSelfRef.hdr_parse__DOT__hb[12U]) 
                                                  << 8U) 
                                                 | vlSelfRef.hdr_parse__DOT__hb[13U]);
    vlSelfRef.hdr_parse__DOT__vlan_tagged = (0x8100U 
                                             == (IData)(vlSelfRef.hdr_parse__DOT__ethertype_outer));
    if (vlSelfRef.hdr_parse__DOT__vlan_tagged) {
        vlSelfRef.hdr_parse__DOT__ip_off = 0x12U;
        vlSelfRef.hdr_parse__DOT__ethertype_inner = 
            (((IData)(vlSelfRef.hdr_parse__DOT__hb[16U]) 
              << 8U) | vlSelfRef.hdr_parse__DOT__hb[17U]);
    } else {
        vlSelfRef.hdr_parse__DOT__ip_off = 0x0eU;
        vlSelfRef.hdr_parse__DOT__ethertype_inner = vlSelfRef.hdr_parse__DOT__ethertype_outer;
    }
    vlSelfRef.hdr_parse__DOT__is_ipv4 = (0x0800U == (IData)(vlSelfRef.hdr_parse__DOT__ethertype_inner));
    vlSelfRef.hdr_parse__DOT__ihl_bytes = (0x0000003cU 
                                           & (vlSelfRef.hdr_parse__DOT__hb
                                              [(0x0000007fU 
                                                & (IData)(vlSelfRef.hdr_parse__DOT__ip_off))] 
                                              << 2U));
    vlSelfRef.hdr_parse__DOT__ip_total_len = (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                       [
                                                       (0x0000007fU 
                                                        & ((IData)(2U) 
                                                           + (IData)(vlSelfRef.hdr_parse__DOT__ip_off)))]) 
                                               << 8U) 
                                              | vlSelfRef.hdr_parse__DOT__hb
                                              [(0x0000007fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.hdr_parse__DOT__ip_off)))]);
    vlSelfRef.hdr_parse__DOT__is_udp = (0x11U == vlSelfRef.hdr_parse__DOT__hb
                                        [(0x0000007fU 
                                          & ((IData)(9U) 
                                             + (IData)(vlSelfRef.hdr_parse__DOT__ip_off)))]);
    vlSelfRef.hdr_parse__DOT__udp_off = (0x000000ffU 
                                         & ((IData)(vlSelfRef.hdr_parse__DOT__ip_off) 
                                            + (IData)(vlSelfRef.hdr_parse__DOT__ihl_bytes)));
    vlSelfRef.hdr_parse__DOT__mold_off = (0x000000ffU 
                                          & ((IData)(8U) 
                                             + (IData)(vlSelfRef.hdr_parse__DOT__udp_off)));
    vlSelfRef.hdr_parse__DOT__payload_off = (0x000000ffU 
                                             & ((IData)(0x14U) 
                                                + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)));
    vlSelfRef.hdr_parse__DOT__payload_len = (0x0000ffffU 
                                             & ((((IData)(vlSelfRef.hdr_parse__DOT__ip_total_len) 
                                                  - (IData)(vlSelfRef.hdr_parse__DOT__ihl_bytes)) 
                                                 - (IData)(8U)) 
                                                - (IData)(0x0014U)));
    vlSelfRef.hdr_parse__DOT__mold_seq = (((QData)((IData)(
                                                           (((((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                       [
                                                                       (0x0000007fU 
                                                                        & ((IData)(0x0aU) 
                                                                           + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                               << 8U) 
                                                              | vlSelfRef.hdr_parse__DOT__hb
                                                              [
                                                              (0x0000007fU 
                                                               & ((IData)(0x0bU) 
                                                                  + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                             << 0x00000010U) 
                                                            | (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                        [
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x0cU) 
                                                                            + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                                << 8U) 
                                                               | vlSelfRef.hdr_parse__DOT__hb
                                                               [
                                                               (0x0000007fU 
                                                                & ((IData)(0x0dU) 
                                                                   + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))])))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            (((((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                        [
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x0eU) 
                                                                            + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                                << 8U) 
                                                               | vlSelfRef.hdr_parse__DOT__hb
                                                               [
                                                               (0x0000007fU 
                                                                & ((IData)(0x0fU) 
                                                                   + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                              << 0x00000010U) 
                                                             | (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                                         [
                                                                         (0x0000007fU 
                                                                          & ((IData)(0x10U) 
                                                                             + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                                                 << 8U) 
                                                                | vlSelfRef.hdr_parse__DOT__hb
                                                                [
                                                                (0x0000007fU 
                                                                 & ((IData)(0x11U) 
                                                                    + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))])))));
    vlSelfRef.hdr_parse__DOT__mold_cnt = (((IData)(vlSelfRef.hdr_parse__DOT__hb
                                                   [
                                                   (0x0000007fU 
                                                    & ((IData)(0x12U) 
                                                       + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]) 
                                           << 8U) | vlSelfRef.hdr_parse__DOT__hb
                                          [(0x0000007fU 
                                            & ((IData)(0x13U) 
                                               + (IData)(vlSelfRef.hdr_parse__DOT__mold_off)))]);
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
