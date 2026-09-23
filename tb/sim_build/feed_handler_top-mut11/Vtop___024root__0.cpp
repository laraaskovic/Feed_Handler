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

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
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
void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf);
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
        Vtop___024root___eval_body__nba(vlSelf);
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

extern const VlWide<12>/*383:0*/ Vtop__ConstPool__CONST_h997e551f_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__v;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__v = 0;
    CData/*7:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__v;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__v = 0;
    SData/*15:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__v;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__v = 0;
    VlWide<4>/*96:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout;
    VL_ZERO_W(97, __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout);
    CData/*0:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__ld;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__ld = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__r = 0;
    CData/*0:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__sd;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__sd = 0;
    SData/*11:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__tk;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__tk = 0;
    IData/*31:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__q;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__q = 0;
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi = 0;
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi = 0;
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__v = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0;
    VlWide<12>/*383:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx;
    VL_ZERO_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx);
    VlWide<12>/*383:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n;
    VL_ZERO_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n);
    CData/*5:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__v = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0;
    VlWide<12>/*383:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx;
    VL_ZERO_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx);
    VlWide<12>/*383:0*/ __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n;
    VL_ZERO_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n);
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    VlWide<16>/*511:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    vlSelfRef.feed_handler_top__DOT__cfg_locate = vlSelfRef.cfg_locate;
    vlSelfRef.m_bbo_valid = vlSelfRef.feed_handler_top__DOT__m_bbo_valid;
    vlSelfRef.m_bbo_seq = vlSelfRef.feed_handler_top__DOT__m_bbo_seq;
    vlSelfRef.m_bid_valid = vlSelfRef.feed_handler_top__DOT__m_bid_valid;
    vlSelfRef.m_bid_price = vlSelfRef.feed_handler_top__DOT__m_bid_price;
    vlSelfRef.m_bid_qty = vlSelfRef.feed_handler_top__DOT__m_bid_qty;
    vlSelfRef.m_ask_valid = vlSelfRef.feed_handler_top__DOT__m_ask_valid;
    vlSelfRef.m_ask_price = vlSelfRef.feed_handler_top__DOT__m_ask_price;
    vlSelfRef.m_ask_qty = vlSelfRef.feed_handler_top__DOT__m_ask_qty;
    vlSelfRef.stat_other_symbol = vlSelfRef.feed_handler_top__DOT__stat_other_symbol;
    vlSelfRef.feed_handler_top__DOT__pl_bbo_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_valid;
    vlSelfRef.feed_handler_top__DOT__pl_bbo_seq = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bbo_seq;
    vlSelfRef.feed_handler_top__DOT__pl_bid_tick = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_tick;
    vlSelfRef.feed_handler_top__DOT__pl_bid_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid;
    vlSelfRef.feed_handler_top__DOT__pl_ask_tick = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_tick;
    vlSelfRef.feed_handler_top__DOT__pl_ask_valid = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid;
    vlSelfRef.feed_handler_top__DOT__pl_updates = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_updates;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_d2_ask;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_d2_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__waddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_d2_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_d2_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_d2_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__pe_ask_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_d2_bid;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__pe_bid_tick;
    vlSelfRef.feed_handler_top__DOT__dc_locate = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_locate;
    vlSelfRef.feed_handler_top__DOT__dc_price = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_price;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__tick_c 
        = (0x00000fffU & (IData)((vlSelfRef.feed_handler_top__DOT__u_decode__DOT__p2_prod 
                                  >> 0x00000016U)));
    vlSelfRef.feed_handler_top__DOT__hp_count = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_count;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk9__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_count 
               + (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                        >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk9__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk9__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__subpenny_c 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__p2_in_band) 
           & ((0U != (3U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__p2_delta)) 
              | (0x00028f5dU <= (0x003fffffU & (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__p2_prod)))));
    vlSelfRef.feed_handler_top__DOT__s_tkeep = vlSelfRef.s_tkeep;
    vlSelfRef.feed_handler_top__DOT__s_tlast = vlSelfRef.s_tlast;
    vlSelfRef.feed_handler_top__DOT__ready = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__ready;
    vlSelfRef.feed_handler_top__DOT__stat_packets = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_packets;
    vlSelfRef.feed_handler_top__DOT__stat_dropped = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__stat_dropped;
    vlSelfRef.feed_handler_top__DOT__stat_messages 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_messages;
    vlSelfRef.feed_handler_top__DOT__stat_frame_err 
        = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__stat_frame_err;
    vlSelfRef.feed_handler_top__DOT__stat_ops = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_ops;
    vlSelfRef.feed_handler_top__DOT__stat_out_of_band 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_out_of_band;
    vlSelfRef.feed_handler_top__DOT__stat_subpenny 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__stat_subpenny;
    vlSelfRef.feed_handler_top__DOT__stat_collisions 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_collisions;
    vlSelfRef.feed_handler_top__DOT__stat_missing = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_missing;
    vlSelfRef.feed_handler_top__DOT__stat_overrun = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_overrun;
    vlSelfRef.feed_handler_top__DOT__stat_stash_peak 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__stat_stash_peak;
    vlSelfRef.feed_handler_top__DOT__stat_underflow 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__dc_side = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_side;
    vlSelfRef.feed_handler_top__DOT__dc_qty = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_qty;
    vlSelfRef.feed_handler_top__DOT__dc_tick_ok = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick_ok;
    vlSelfRef.feed_handler_top__DOT__dc_seq = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__ot_m_valid = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__ot_m_side = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_side;
    vlSelfRef.feed_handler_top__DOT__ot_m_add = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_add;
    vlSelfRef.feed_handler_top__DOT__ot_m_qty = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_qty;
    vlSelfRef.feed_handler_top__DOT__ot_m_done = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_done;
    vlSelfRef.feed_handler_top__DOT__ot_m_seq = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any 
        = (0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any 
        = (0U != vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary);
    vlSelfRef.feed_handler_top__DOT__mf_len = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_len;
    vlSelfRef.feed_handler_top__DOT__mf_valid = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__mf_seq = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_seq;
    vlSelfRef.feed_handler_top__DOT__hp_seq = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_sequence;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes 
        = (7U & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pay_len_q));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__keep_shift 
        = ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes))
            ? 0U : (0x0000000fU & ((IData)(8U) - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_bytes))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__last_keep 
        = (0xffU >> (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__keep_shift));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side) 
           & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side)) 
           & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid));
    vlSelfRef.feed_handler_top__DOT__dc_tick = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__dc_op = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_op;
    vlSelfRef.feed_handler_top__DOT__ot_m_tick = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__m_tick;
    vlSelfRef.feed_handler_top__DOT__hp_tlast = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tlast;
    vlSelfRef.feed_handler_top__DOT__dc_valid = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_valid;
    vlSelfRef.feed_handler_top__DOT__s_tvalid = vlSelfRef.s_tvalid;
    vlSelfRef.feed_handler_top__DOT__cfg_band_base 
        = vlSelfRef.cfg_band_base;
    vlSelfRef.feed_handler_top__DOT__s_tdata = vlSelfRef.s_tdata;
    vlSelfRef.feed_handler_top__DOT__rst = vlSelfRef.rst;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap[__Vilp1] 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_map
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000007fU)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap[__Vilp2] 
            = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_map
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))
               ? 0U : 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 2U))) ? 0U : 1U) << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 4U))) ? 0U : 1U) << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 6U))) ? 0U : 1U) << 0x00000012U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 8U))) ? 0U : 1U) << 0x00000018U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 5U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x0aU))) ? 0U : 1U) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x0aU))) ? 0U : 1U) 
              >> 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x0cU))) ? 0U : 1U) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 7U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x0eU))) ? 0U : 1U) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffeffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000030000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xffc0ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x10U))) ? 0U : 1U) 
              << 0x00000010U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffdffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000c0000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 9U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xf03fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x12U))) ? 0U : 1U) 
              << 0x00000016U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffbffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000300000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0x0fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x14U))) ? 0U : 1U) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xfffffffcU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x14U))) ? 0U : 1U) 
              >> 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffff7ffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000c00000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000bU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xffffff03U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x16U))) ? 0U : 1U) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffefffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000003000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xffffc0ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x18U))) ? 0U : 1U) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffdfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000c000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000dU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xfff03fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x1aU))) ? 0U : 1U) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffbfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000030000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xfc0fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x1cU))) ? 0U : 1U) 
              << 0x00000014U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffff7fffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000c0000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000fU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0x03ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x1eU))) ? 0U : 1U) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffeffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000300000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000010U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U]) 
           | ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                             >> 0x20U))) ? 0U : 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffdffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000c00000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000011U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x22U))) ? 0U : 1U) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffbffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000003000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000012U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x24U))) ? 0U : 1U) 
              << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffff7ffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000c000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000013U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x26U))) ? 0U : 1U) 
              << 0x00000012U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffefffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000030000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000014U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x28U))) ? 0U : 1U) 
              << 0x00000018U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffdfffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000c0000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000015U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x2aU))) ? 0U : 1U) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x2aU))) ? 0U : 1U) 
              >> 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffbfffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000300000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000016U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x2cU))) ? 0U : 1U) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffff7fffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000c00000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000017U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x2eU))) ? 0U : 1U) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffeffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0003000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000018U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U] 
        = ((0xffc0ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x30U))) ? 0U : 1U) 
              << 0x00000010U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffdffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000c000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x00000019U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U] 
        = ((0xf03fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x32U))) ? 0U : 1U) 
              << 0x00000016U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffbffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0030000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U] 
        = ((0x0fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x34U))) ? 0U : 1U) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U] 
        = ((0xfffffffcU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x34U))) ? 0U : 1U) 
              >> 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffff7ffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00c0000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000001bU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U] 
        = ((0xffffff03U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x36U))) ? 0U : 1U) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffefffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0300000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U] 
        = ((0xffffc0ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x38U))) ? 0U : 1U) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffdfffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0c00000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000001dU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U] 
        = ((0xfff03fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x3aU))) ? 0U : 1U) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffbfffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x3000000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U] 
        = ((0xfc0fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x3cU))) ? 0U : 1U) 
              << 0x00000014U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffff7fffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0xc000000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000001fU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U] 
        = ((0x03ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x3eU))) ? 0U : 1U) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))
                              ? __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U]
                              : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                          >> 6U))))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 2U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                     >> 0x0000000cU))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                           >> 0x00000012U)))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 4U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                             >> 0x00000018U))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                         << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                                   >> 0x0000001eU)))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 6U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                     >> 4U)) : (2U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                    << 0x00000016U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                      >> 0x0000000aU)))) 
                             << 0x00000012U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x3f000000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 8U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                     >> 0x00000010U))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                           >> 0x00000016U)))) 
                             << 0x00000018U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 5U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x0aU))) ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                              << 4U) 
                                             | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                >> 0x0000001cU))
                : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                          << 0x0000001eU) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                             >> 2U)))) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x0000000fU & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x0aU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                   << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                             >> 0x0000001cU))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                           >> 2U)))) 
                             >> 2U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x000003f0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x0cU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                     >> 8U)) : (2U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                                    << 0x00000012U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                                      >> 0x0000000eU)))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 7U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x0000fc00U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x0eU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                   << 0x0000000cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                     >> 0x00000014U))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                         << 6U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                                   >> 0x0000001aU)))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffeffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000030000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xffc0ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x003f0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x10U)))
                               ? __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U]
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                         << 0x0000001aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                           >> 6U)))) 
                             << 0x00000010U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffdffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000c0000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 9U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xf03fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x0fc00000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x12U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                     >> 0x0000000cU))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                           >> 0x00000012U)))) 
                             << 0x00000016U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffbffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000300000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0x0fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x14U))) ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                              << 8U) 
                                             | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                                >> 0x00000018U))
                : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                          << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                    >> 0x0000001eU)))) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xfffffffcU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (3U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                    >> 0x14U))) ? (
                                                   (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                                    << 8U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                                      >> 0x00000018U))
                      : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
                                          >> 0x0000001eU)))) 
                    >> 4U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffff7ffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000c00000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000bU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xffffff03U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (0x000000fcU & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x16U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                     >> 4U)) : (2U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                                    << 0x00000016U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                                      >> 0x0000000aU)))) 
                             << 2U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffefffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000003000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xffffc0ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (0x00003f00U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x18U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                     >> 0x00000010U))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                           >> 0x00000016U)))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffdfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000c000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000dU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xfff03fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (0x000fc000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x1aU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                   << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
                                             >> 0x0000001cU))
                               : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                           >> 2U)))) 
                             << 0x0000000eU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffbfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000030000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0xfc0fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (0x03f00000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x1cU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                     >> 8U)) : (2U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                                    << 0x00000012U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                                      >> 0x0000000eU)))) 
                             << 0x00000014U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffff7fffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000c0000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 0x0000000fU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U] 
        = ((0x03ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x1eU))) ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                              << 0x0000000cU) 
                                             | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                                >> 0x00000014U))
                : (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                          << 6U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
                                    >> 0x0000001aU)))) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))
                              ? __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U]
                              : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                          >> 6U))))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 2U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                     >> 0x0000000cU))
                               : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                           >> 0x00000012U)))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 4U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                             >> 0x00000018U))
                               : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                         << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                                   >> 0x0000001eU)))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 6U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                     >> 4U)) : (4U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                    << 0x00000016U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                      >> 0x0000000aU)))) 
                             << 0x00000012U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x3f000000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 8U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                     >> 0x00000010U))
                               : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                           >> 0x00000016U)))) 
                             << 0x00000018U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 5U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                              >> 0x0aU))) ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                              << 4U) 
                                             | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                >> 0x0000001cU))
                : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                          << 0x0000001eU) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                             >> 2U)))) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x0000000fU & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x0aU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                   << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                             >> 0x0000001cU))
                               : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                           >> 2U)))) 
                             >> 2U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x000003f0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x0cU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                     >> 8U)) : (4U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                                    << 0x00000012U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                                      >> 0x0000000eU)))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 7U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U]) 
           | (0x0000fc00U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 0x0eU)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                   << 0x0000000cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                     >> 0x00000014U))
                               : (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                         << 6U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
                                                   >> 0x0000001aU)))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))
                              ? __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U]
                              : (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                          >> 6U))))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 2U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                     >> 0x0000000cU))
                               : (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                           >> 0x00000012U)))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 4U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                             >> 0x00000018U))
                               : (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                         << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                                   >> 0x0000001eU)))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 6U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                     >> 4U)) : (8U 
                                                | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                    << 0x00000016U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
                                                      >> 0x0000000aU)))) 
                             << 0x00000012U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))
                              ? __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U]
                              : (0x10U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                           << 0x0000001aU) 
                                          | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                             >> 6U))))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
                                             >> 2U)))
                               ? ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                     >> 0x0000000cU))
                               : (0x10U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                            << 0x0000000eU) 
                                           | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                              >> 0x00000012U)))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)(__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld))
                              ? __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U]
                              : (0x20U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                           << 0x0000001aU) 
                                          | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
                                             >> 6U))))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__Vfuncout 
        = (0x0000003fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__idx[0U]);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_summary__17__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off 
        = ((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                       * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp))))
            ? (0x0000003fU & (((0U == (0x0000001fU 
                                       & ((IData)(6U) 
                                          * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp))))
                                ? 0U : (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__offsets
                                        [(((IData)(5U) 
                                           + (0x000001ffU 
                                              & ((IData)(6U) 
                                                 * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(6U) 
                                               * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp)))))) 
                              | (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__offsets
                                 [(0x0000000fU & (((IData)(6U) 
                                                   * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp)) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((IData)(6U) * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp))))))
            : 0U);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__off));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__v 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__v;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                             >> 1U))) ? 1U : 0U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 3U))) ? 1U : 0U) << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 5U))) ? 1U : 0U) << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 7U))) ? 1U : 0U) << 0x00000012U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 9U))) ? 1U : 0U) << 0x00000018U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 5U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x0bU))) ? 1U : 0U) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x0bU))) ? 1U : 0U) 
              >> 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x0dU))) ? 1U : 0U) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 7U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x0fU))) ? 1U : 0U) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffeffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000030000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xffc0ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x11U))) ? 1U : 0U) 
              << 0x00000010U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffdffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000c0000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 9U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xf03fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x13U))) ? 1U : 0U) 
              << 0x00000016U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffbffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000300000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0x0fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x15U))) ? 1U : 0U) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xfffffffcU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x15U))) ? 1U : 0U) 
              >> 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffff7ffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000c00000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000bU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xffffff03U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x17U))) ? 1U : 0U) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffefffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000003000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xffffc0ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x19U))) ? 1U : 0U) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffdfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000c000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000dU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xfff03fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x1bU))) ? 1U : 0U) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffbfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000030000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xfc0fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x1dU))) ? 1U : 0U) 
              << 0x00000014U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffff7fffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000c0000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000fU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0x03ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x1fU))) ? 1U : 0U) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffeffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000300000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000010U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U]) 
           | ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                             >> 0x21U))) ? 1U : 0U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffdffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000c00000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000011U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x23U))) ? 1U : 0U) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffbffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000003000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000012U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x25U))) ? 1U : 0U) 
              << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffff7ffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000c000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000013U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x27U))) ? 1U : 0U) 
              << 0x00000012U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffefffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000030000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000014U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x29U))) ? 1U : 0U) 
              << 0x00000018U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffdfffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000c0000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000015U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x2bU))) ? 1U : 0U) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x2bU))) ? 1U : 0U) 
              >> 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffbfffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000300000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000016U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x2dU))) ? 1U : 0U) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffff7fffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000c00000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000017U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x2fU))) ? 1U : 0U) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffeffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0003000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000018U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U] 
        = ((0xffc0ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x31U))) ? 1U : 0U) 
              << 0x00000010U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffdffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000c000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x00000019U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U] 
        = ((0xf03fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x33U))) ? 1U : 0U) 
              << 0x00000016U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffbffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0030000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U] 
        = ((0x0fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x35U))) ? 1U : 0U) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U] 
        = ((0xfffffffcU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x35U))) ? 1U : 0U) 
              >> 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffff7ffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00c0000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000001bU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U] 
        = ((0xffffff03U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x37U))) ? 1U : 0U) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffefffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0300000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U] 
        = ((0xffffc0ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x39U))) ? 1U : 0U) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffdfffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0c00000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000001dU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U] 
        = ((0xfff03fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x3bU))) ? 1U : 0U) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffbfffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x3000000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U] 
        = ((0xfc0fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x3dU))) ? 1U : 0U) 
              << 0x00000014U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffff7fffffffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0xc000000000000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000001fU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U] 
        = ((0x03ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x3fU))) ? 1U : 0U) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                            >> 1U)))
                              ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                          >> 6U))) : __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 3U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 5U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                                   >> 0x0000001eU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                             >> 0x00000018U))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 7U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                     >> 4U))) << 0x00000012U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x3f000000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 9U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                           >> 0x00000016U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                     >> 0x00000010U))) 
                             << 0x00000018U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 5U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x0bU))) ? (2U | (
                                                   (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                                    << 0x0000001eU) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                                      >> 2U)))
                : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                    << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                              >> 0x0000001cU))) << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x0000000fU & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x0bU)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                           >> 2U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                   << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                             >> 0x0000001cU))) 
                             >> 2U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x000003f0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x0dU)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                         << 0x00000012U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                           >> 0x0000000eU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                     >> 8U))) << 4U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 7U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x0000fc00U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x0fU)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                         << 6U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                                   >> 0x0000001aU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                   << 0x0000000cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                     >> 0x00000014U))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffeffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000030000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 8U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xffc0ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x003f0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x11U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                         << 0x0000001aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                           >> 6U)))
                               : __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U]) 
                             << 0x00000010U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffdffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000c0000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 9U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xf03fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x0fc00000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x13U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                     >> 0x0000000cU))) 
                             << 0x00000016U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffbffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000300000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0x0fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x15U))) ? (2U | (
                                                   (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                                    << 2U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                                      >> 0x0000001eU)))
                : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                    << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                              >> 0x00000018U))) << 0x0000001cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xfffffffcU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (3U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                    >> 0x15U))) ? (2U 
                                                   | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                                       << 2U) 
                                                      | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                                         >> 0x0000001eU)))
                      : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                          << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
                                    >> 0x00000018U))) 
                    >> 4U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffff7ffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000c00000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000bU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xffffff03U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (0x000000fcU & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x17U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                     >> 4U))) << 2U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffefffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000003000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000cU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xffffc0ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (0x00003f00U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x19U)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                           >> 0x00000016U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                     >> 0x00000010U))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffdfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000c000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000dU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xfff03fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (0x000fc000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x1bU)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                           >> 2U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                   << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
                                             >> 0x0000001cU))) 
                             << 0x0000000eU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffbfffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000030000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0xfc0fffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (0x03f00000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x1dU)))
                               ? (2U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                         << 0x00000012U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                           >> 0x0000000eU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                     >> 8U))) << 0x00000014U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffff7fffULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000c0000000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 0x0000000fU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U] 
        = ((0x03ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x1fU))) ? (2U | (
                                                   (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                                    << 6U) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                                      >> 0x0000001aU)))
                : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                    << 0x0000000cU) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
                                       >> 0x00000014U))) 
              << 0x0000001aU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                            >> 1U)))
                              ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                          >> 6U))) : __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 3U)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 5U)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                                   >> 0x0000001eU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                             >> 0x00000018U))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 7U)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                     >> 4U))) << 0x00000012U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffefULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000300ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 4U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xc0ffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x3f000000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 9U)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 0x0000000aU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                           >> 0x00000016U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                   << 0x00000010U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                     >> 0x00000010U))) 
                             << 0x00000018U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffdfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000c00ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 5U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0x3fffffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                              >> 0x0bU))) ? (4U | (
                                                   (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                                    << 0x0000001eU) 
                                                   | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                                      >> 2U)))
                : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                    << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                              >> 0x0000001cU))) << 0x0000001eU));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xfffffff0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x0000000fU & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x0bU)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                         << 0x0000001eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                           >> 2U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                   << 4U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                             >> 0x0000001cU))) 
                             >> 2U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffffbfULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000003000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 6U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xfffffc0fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x000003f0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x0dU)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                         << 0x00000012U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                           >> 0x0000000eU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                   << 0x00000018U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                     >> 8U))) << 4U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xffffffffffffff7fULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000c000ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 7U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U] 
        = ((0xffff03ffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U]) 
           | (0x0000fc00U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 0x0fU)))
                               ? (4U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                         << 6U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                                   >> 0x0000001aU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                   << 0x0000000cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
                                     >> 0x00000014U))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                            >> 1U)))
                              ? (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                        << 0x0000001aU) 
                                       | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                          >> 6U))) : __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 3U)))
                               ? (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                         << 0x0000000eU) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                           >> 0x00000012U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffbULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x0000000000000030ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 2U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffc0fffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0003f000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 5U)))
                               ? (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 2U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                                   >> 0x0000001eU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 8U) | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                             >> 0x00000018U))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffff7ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x00000000000000c0ULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 3U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xff03ffffU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00fc0000U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 7U)))
                               ? (8U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                         << 0x00000016U) 
                                        | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                           >> 0x0000000aU)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                   << 0x0000001cU) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
                                     >> 4U))) << 0x00000012U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                            >> 1U)))
                              ? (0x10U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                           << 0x0000001aU) 
                                          | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                             >> 6U)))
                              : __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffdULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | ((QData)((IData)((IData)((0ULL != (0x000000000000000cULL 
                                                & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld))))) 
              << 1U));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xfffff03fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x00000fc0U & (((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                             >> 3U)))
                               ? (0x10U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                            << 0x0000000eU) 
                                           | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                              >> 0x00000012U)))
                               : ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                   << 0x00000014U) 
                                  | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                     >> 0x0000000cU))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n = 0ULL;
    VL_ASSIGN_W(384, __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n 
        = ((0xfffffffffffffffeULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n) 
           | (IData)((IData)((0ULL != (3ULL & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld)))));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U] 
        = ((0xffffffc0U & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U]) 
           | (0x0000003fU & ((1U & (IData)((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
                                            >> 1U)))
                              ? (0x20U | ((__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                           << 0x0000001aU) 
                                          | (__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
                                             >> 6U)))
                              : __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U])));
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__vld_n;
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[0U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[1U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[1U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[2U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[2U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[3U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[3U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[4U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[4U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[5U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[5U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[6U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[6U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[7U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[7U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[8U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[8U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[9U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[9U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[10U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[10U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[11U] 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx_n[11U];
    __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__Vfuncout 
        = (0x0000003fU & __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__idx[0U]);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp 
        = __Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_summary__19__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off 
        = ((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                       * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp))))
            ? (0x0000003fU & (((0U == (0x0000001fU 
                                       & ((IData)(6U) 
                                          * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp))))
                                ? 0U : (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__offsets
                                        [(((IData)(5U) 
                                           + (0x000001ffU 
                                              & ((IData)(6U) 
                                                 * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp)))) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(6U) 
                                               * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp)))))) 
                              | (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__offsets
                                 [(0x0000000fU & (((IData)(6U) 
                                                   * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp)) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((IData)(6U) * (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp))))))
            : 0U);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__grp) 
            << 6U) | (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__off));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[12U]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[13U]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__vlan_tagged 
        = (0x8100U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer));
    if (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__vlan_tagged) {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off = 0x12U;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner 
            = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[16U]) 
                << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb[17U]);
    } else {
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off = 0x0eU;
        vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner 
            = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_outer;
    }
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_ipv4 
        = (0x0800U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ethertype_inner));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes 
        = (0x0000003cU & (vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                          [(0x0000007fU & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off))] 
                          << 2U));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_total_len 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                    [(0x0000007fU & ((IData)(2U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(3U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__is_udp 
        = (0x11U == vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(9U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__udp_off 
        = (0x000000ffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_off) 
                          + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off 
        = (0x000000ffU & ((IData)(8U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__udp_off)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_off 
        = (0x000000ffU & ((IData)(0x14U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__payload_len 
        = (0x0000ffffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ip_total_len) 
                            - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__ihl_bytes)) 
                           - (IData)(8U)) - (IData)(0x0014U)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_seq 
        = (((QData)((IData)((((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                        [(0x0000007fU 
                                          & ((IData)(0x0aU) 
                                             + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                               [(0x0000007fU & ((IData)(0x0bU) 
                                                + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                              << 0x00000010U) | (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                          [
                                                          (0x0000007fU 
                                                           & ((IData)(0x0cU) 
                                                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                  << 8U) 
                                                 | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                 [(0x0000007fU 
                                                   & ((IData)(0x0dU) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))])))) 
            << 0x00000020U) | (QData)((IData)((((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                          [
                                                          (0x0000007fU 
                                                           & ((IData)(0x0eU) 
                                                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                  << 8U) 
                                                 | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                 [(0x0000007fU 
                                                   & ((IData)(0x0fU) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                           [
                                                           (0x0000007fU 
                                                            & ((IData)(0x10U) 
                                                               + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
                                                   << 8U) 
                                                  | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                                                  [
                                                  (0x0000007fU 
                                                   & ((IData)(0x11U) 
                                                      + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))])))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_cnt 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
                    [(0x0000007fU & ((IData)(0x12U) 
                                     + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]) 
            << 8U) | vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__hb
           [(0x0000007fU & ((IData)(0x13U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__mold_off)))]);
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata;
    vlSelfRef.feed_handler_top__DOT__hp_tdata = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tdata;
    vlSelfRef.feed_handler_top__DOT__dc_new_ref = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_new_ref;
    vlSelfRef.feed_handler_top__DOT__dc_ref = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__m_ref;
    vlSelfRef.feed_handler_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (3U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__hp_tkeep = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tkeep;
    vlSelfRef.feed_handler_top__DOT__hp_tvalid = vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__m_tvalid;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a) 
           == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len 
        = ((0x0000ff00U & (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U] 
                           << 8U)) | (0x000000ffU & 
                                      (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U] 
                                       >> 8U)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync)) 
           & (2U <= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane 
        = ((1U <= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)) 
           & (0x0032U >= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__need 
        = (0x000000ffU & (((IData)(2U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)) 
                          - (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len) 
           & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)));
    vlSelfRef.feed_handler_top__DOT__mf_msg[0U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[0U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[1U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[1U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[2U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[2U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[3U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[3U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[4U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[4U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[5U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[5U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[6U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[6U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[7U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[7U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[8U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[8U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[9U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[9U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[10U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[10U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[11U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[11U];
    vlSelfRef.feed_handler_top__DOT__mf_msg[12U] = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__m_msg[12U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[0U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[1U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[2U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[3U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[4U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[5U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[6U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b[7U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep 
        = ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
           & (4U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_kind)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[0U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[1U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[2U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[3U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[4U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[5U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[6U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a[7U][3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_dout[3U];
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tkeep 
        = vlSelfRef.feed_handler_top__DOT__s_tkeep;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tlast 
        = vlSelfRef.feed_handler_top__DOT__s_tlast;
    vlSelfRef.ready = vlSelfRef.feed_handler_top__DOT__ready;
    vlSelfRef.stat_packets = vlSelfRef.feed_handler_top__DOT__stat_packets;
    vlSelfRef.stat_dropped = vlSelfRef.feed_handler_top__DOT__stat_dropped;
    vlSelfRef.stat_messages = vlSelfRef.feed_handler_top__DOT__stat_messages;
    vlSelfRef.stat_frame_err = vlSelfRef.feed_handler_top__DOT__stat_frame_err;
    vlSelfRef.stat_ops = vlSelfRef.feed_handler_top__DOT__stat_ops;
    vlSelfRef.stat_out_of_band = vlSelfRef.feed_handler_top__DOT__stat_out_of_band;
    vlSelfRef.stat_subpenny = vlSelfRef.feed_handler_top__DOT__stat_subpenny;
    vlSelfRef.stat_collisions = vlSelfRef.feed_handler_top__DOT__stat_collisions;
    vlSelfRef.stat_missing = vlSelfRef.feed_handler_top__DOT__stat_missing;
    vlSelfRef.stat_overrun = vlSelfRef.feed_handler_top__DOT__stat_overrun;
    vlSelfRef.stat_stash_peak = vlSelfRef.feed_handler_top__DOT__stat_stash_peak;
    vlSelfRef.stat_underflow = vlSelfRef.feed_handler_top__DOT__stat_underflow;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_side 
        = vlSelfRef.feed_handler_top__DOT__dc_side;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_qty 
        = vlSelfRef.feed_handler_top__DOT__dc_qty;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick_ok 
        = vlSelfRef.feed_handler_top__DOT__dc_tick_ok;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__dc_seq;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__ot_m_valid;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_side 
        = vlSelfRef.feed_handler_top__DOT__ot_m_side;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_add 
        = vlSelfRef.feed_handler_top__DOT__ot_m_add;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_qty 
        = vlSelfRef.feed_handler_top__DOT__ot_m_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_done 
        = vlSelfRef.feed_handler_top__DOT__ot_m_done;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__ot_m_seq;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_ask 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__any;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__have_bid 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__any;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_len 
        = vlSelfRef.feed_handler_top__DOT__mf_len;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__mf_valid;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__mf_seq;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_sequence 
        = vlSelfRef.feed_handler_top__DOT__hp_seq;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bid_we;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__we 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__ask_we;
    vlSelfRef.feed_handler_top__DOT__unused_tick_hi 
        = vlSelfRef.feed_handler_top__DOT__dc_tick;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_tick 
        = (0x00000fffU & (IData)(vlSelfRef.feed_handler_top__DOT__dc_tick));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty 
        = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
           & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid))));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty 
        = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
           & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op 
        = vlSelfRef.feed_handler_top__DOT__dc_op;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick 
        = vlSelfRef.feed_handler_top__DOT__ot_m_tick;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast 
        = vlSelfRef.feed_handler_top__DOT__hp_tlast;
    vlSelfRef.feed_handler_top__DOT__ot_valid = vlSelfRef.feed_handler_top__DOT__dc_valid;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid 
        = vlSelfRef.feed_handler_top__DOT__s_tvalid;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base 
        = vlSelfRef.feed_handler_top__DOT__cfg_band_base;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata 
        = vlSelfRef.feed_handler_top__DOT__s_tdata;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__rst 
        = vlSelfRef.feed_handler_top__DOT__rst;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary_c 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__summary_c) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__v 
            = (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                [(((IData)(0x0000003fU) 
                                   + (0x00000fffU & 
                                      (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                       << 6U))) >> 5U)])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__bitmap
                                                  [
                                                  (0x0000007eU 
                                                   & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
                                                      << 1U))])));
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group = 0;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld = 0;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0;
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx);
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__v;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | ((1U & (IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))
                   ? 0U : 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 2U))) ? 0U : 1U) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 4U))) ? 0U : 1U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 6U))) ? 0U : 1U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 8U))) ? 0U : 1U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x0aU))) ? 0U : 1U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x0aU))) ? 0U : 1U) 
                  >> 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x0cU))) ? 0U : 1U) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x0eU))) ? 0U : 1U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x10U))) ? 0U : 1U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x12U))) ? 0U : 1U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x14U))) ? 0U : 1U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x14U))) ? 0U : 1U) 
                  >> 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x16U))) ? 0U : 1U) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x18U))) ? 0U : 1U) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x1aU))) ? 0U : 1U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x1cU))) ? 0U : 1U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x1eU))) ? 0U : 1U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000300000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U]) 
               | ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                 >> 0x20U))) ? 0U : 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000c00000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000011U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x22U))) ? 0U : 1U) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000003000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x24U))) ? 0U : 1U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000c000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000013U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x26U))) ? 0U : 1U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000030000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x28U))) ? 0U : 1U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000c0000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000015U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x2aU))) ? 0U : 1U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x2aU))) ? 0U : 1U) 
                  >> 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000300000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x2cU))) ? 0U : 1U) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000c00000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000017U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x2eU))) ? 0U : 1U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0003000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x30U))) ? 0U : 1U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000c000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x00000019U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x32U))) ? 0U : 1U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0030000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x34U))) ? 0U : 1U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x34U))) ? 0U : 1U) 
                  >> 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00c0000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000001bU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x36U))) ? 0U : 1U) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0300000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x38U))) ? 0U : 1U) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0c00000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000001dU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x3aU))) ? 0U : 1U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x3000000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x3cU))) ? 0U : 1U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0xc000000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000001fU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x3eU))) ? 0U : 1U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))
                                  ? vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U]
                                  : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                              >> 6U))))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                         >> 0x0000000cU))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 4U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                 >> 0x00000018U))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               >> 0x0000001eU)))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 6U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                         >> 4U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                            >> 0x0000000aU)))) 
                                 << 0x00000012U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 8U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                         >> 0x00000010U))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                               >> 0x00000016U)))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x0aU))) ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                                  << 4U) 
                                                 | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                                    >> 0x0000001cU))
                    : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                              << 0x0000001eU) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                                 >> 2U)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x0aU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                                 >> 0x0000001cU))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                               >> 2U)))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x0cU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                         >> 8U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                          << 0x00000012U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                            >> 0x0000000eU)))) 
                                 << 4U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x0eU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                         >> 0x00000014U))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                               >> 0x0000001aU)))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x003f0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x10U)))
                                   ? vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U]
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                             << 0x0000001aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                               >> 6U)))) 
                                 << 0x00000010U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x0fc00000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x12U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                         >> 0x0000000cU))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                               >> 0x00000012U)))) 
                                 << 0x00000016U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x14U))) ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                                    >> 0x00000018U))
                    : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                              << 2U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                        >> 0x0000001eU)))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (3U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                        >> 0x14U)))
                          ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                              << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                        >> 0x00000018U))
                          : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                    << 2U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
                                              >> 0x0000001eU)))) 
                        >> 4U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (0x000000fcU & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x16U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                         >> 4U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                            >> 0x0000000aU)))) 
                                 << 2U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (0x00003f00U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x18U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                         >> 0x00000010U))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                               >> 0x00000016U)))) 
                                 << 8U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (0x000fc000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x1aU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                       << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
                                                 >> 0x0000001cU))
                                   : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                               >> 2U)))) 
                                 << 0x0000000eU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (0x03f00000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x1cU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                         >> 8U)) : 
                                  (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                          << 0x00000012U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                            >> 0x0000000eU)))) 
                                 << 0x00000014U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x1eU))) ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                                    >> 0x00000014U))
                    : (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                              << 6U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
                                        >> 0x0000001aU)))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))
                                  ? vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U]
                                  : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                              >> 6U))))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                         >> 0x0000000cU))
                                   : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 4U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                 >> 0x00000018U))
                                   : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               >> 0x0000001eU)))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 6U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                         >> 4U)) : 
                                  (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                            >> 0x0000000aU)))) 
                                 << 0x00000012U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 8U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                         >> 0x00000010U))
                                   : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                               >> 0x00000016U)))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                  >> 0x0aU))) ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                                  << 4U) 
                                                 | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                                    >> 0x0000001cU))
                    : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                              << 0x0000001eU) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                                 >> 2U)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x0aU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                                 >> 0x0000001cU))
                                   : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                               >> 2U)))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x0cU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                         >> 8U)) : 
                                  (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                          << 0x00000012U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                            >> 0x0000000eU)))) 
                                 << 4U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 0x0eU)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                         >> 0x00000014U))
                                   : (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
                                               >> 0x0000001aU)))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))
                                  ? vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U]
                                  : (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                              >> 6U))))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                         >> 0x0000000cU))
                                   : (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 4U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                 >> 0x00000018U))
                                   : (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               >> 0x0000001eU)))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 6U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                         >> 4U)) : 
                                  (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
                                            >> 0x0000000aU)))) 
                                 << 0x00000012U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))
                                  ? vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U]
                                  : (0x10U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                 >> 6U))))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
                                                 >> 2U)))
                                   ? ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                         >> 0x0000000cU))
                                   : (0x10U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                  >> 0x00000012U)))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld))
                                  ? vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U]
                                  : (0x20U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
                                                 >> 6U))))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx_n[11U];
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group 
            = (0x0000003fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__enc_group__16__idx[0U]);
        if (VL_LIKELY(((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                                   * vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)))))) {
            VL_ASSIGNSEL_WI(384, 6, (0x000001ffU & 
                                     ((IData)(6U) * vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g)), vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__offsets_c, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT____VlemCall_0__enc_group);
        }
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g = 0U;
    while (VL_GTS_III(32, 0x00000040U, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)) {
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary_c 
            = (((~ (1ULL << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g))) 
                & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__summary_c) 
               | ((QData)((IData)((0U != (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                           [
                                                           (((IData)(0x0000003fU) 
                                                             + 
                                                             (0x00000fffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                            [
                                                            (0x0000007eU 
                                                             & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                                << 1U))])))))) 
                  << (0x0000003fU & vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__v 
            = (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                [(((IData)(0x0000003fU) 
                                   + (0x00000fffU & 
                                      (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                       << 6U))) >> 5U)])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__bitmap
                                                  [
                                                  (0x0000007eU 
                                                   & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
                                                      << 1U))])));
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group = 0;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld = 0;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0;
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx);
        VL_ZERO_RESET_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__v;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                 >> 1U))) ? 1U : 0U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 3U))) ? 1U : 0U) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 5U))) ? 1U : 0U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 7U))) ? 1U : 0U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 9U))) ? 1U : 0U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x0bU))) ? 1U : 0U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x0bU))) ? 1U : 0U) 
                  >> 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x0dU))) ? 1U : 0U) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x0fU))) ? 1U : 0U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x11U))) ? 1U : 0U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x13U))) ? 1U : 0U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x15U))) ? 1U : 0U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x15U))) ? 1U : 0U) 
                  >> 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x17U))) ? 1U : 0U) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x19U))) ? 1U : 0U) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x1bU))) ? 1U : 0U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x1dU))) ? 1U : 0U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x1fU))) ? 1U : 0U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000300000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U]) 
               | ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                 >> 0x21U))) ? 1U : 0U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000c00000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000011U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x23U))) ? 1U : 0U) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000003000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x25U))) ? 1U : 0U) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000c000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000013U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x27U))) ? 1U : 0U) 
                  << 0x00000012U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000030000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x29U))) ? 1U : 0U) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000c0000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000015U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x2bU))) ? 1U : 0U) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x2bU))) ? 1U : 0U) 
                  >> 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000300000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x2dU))) ? 1U : 0U) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000c00000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000017U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x2fU))) ? 1U : 0U) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0003000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000018U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x31U))) ? 1U : 0U) 
                  << 0x00000010U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000c000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x00000019U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x33U))) ? 1U : 0U) 
                  << 0x00000016U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0030000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x35U))) ? 1U : 0U) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x35U))) ? 1U : 0U) 
                  >> 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00c0000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000001bU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x37U))) ? 1U : 0U) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0300000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x39U))) ? 1U : 0U) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0c00000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000001dU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x3bU))) ? 1U : 0U) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x3000000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x3dU))) ? 1U : 0U) 
                  << 0x00000014U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0xc000000000000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000001fU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x3fU))) ? 1U : 0U) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                >> 1U)))
                                  ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                              >> 6U)))
                                  : vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U])));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 3U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 5U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               >> 0x0000001eU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                 >> 0x00000018U))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 7U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                         >> 4U))) << 0x00000012U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 9U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                               >> 0x00000016U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                         >> 0x00000010U))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x0bU))) ? (2U 
                                                 | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                                     << 0x0000001eU) 
                                                    | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                                       >> 2U)))
                    : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                        << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                  >> 0x0000001cU))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x0bU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                               >> 2U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                                 >> 0x0000001cU))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x0dU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                               >> 0x0000000eU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                         >> 8U))) << 4U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x0fU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                               >> 0x0000001aU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                         >> 0x00000014U))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000030000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 8U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xffc0ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x003f0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x11U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                             << 0x0000001aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                               >> 6U)))
                                   : vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U]) 
                                 << 0x00000010U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000c0000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 9U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xf03fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x0fc00000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x13U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                         >> 0x0000000cU))) 
                                 << 0x00000016U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000300000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0x0fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x15U))) ? (2U 
                                                 | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                                     << 2U) 
                                                    | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                                       >> 0x0000001eU)))
                    : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                        << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                  >> 0x00000018U))) 
                  << 0x0000001cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xfffffffcU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (3U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                        >> 0x15U)))
                          ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                    << 2U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                              >> 0x0000001eU)))
                          : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                              << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
                                        >> 0x00000018U))) 
                        >> 4U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000c00000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000bU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xffffff03U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (0x000000fcU & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x17U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                         >> 4U))) << 2U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000003000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000cU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xffffc0ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (0x00003f00U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x19U)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                               >> 0x00000016U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                         >> 0x00000010U))) 
                                 << 8U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000c000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000dU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xfff03fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (0x000fc000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x1bU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                               >> 2U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                       << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
                                                 >> 0x0000001cU))) 
                                 << 0x0000000eU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000030000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0xfc0fffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (0x03f00000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x1dU)))
                                   ? (2U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                               >> 0x0000000eU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                         >> 8U))) << 0x00000014U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000c0000000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 0x0000000fU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U] 
            = ((0x03ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x1fU))) ? (2U 
                                                 | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                                     << 6U) 
                                                    | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                                       >> 0x0000001aU)))
                    : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                        << 0x0000000cU) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
                                           >> 0x00000014U))) 
                  << 0x0000001aU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                >> 1U)))
                                  ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                              >> 6U)))
                                  : vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U])));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 3U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 5U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               >> 0x0000001eU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                 >> 0x00000018U))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 7U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                         >> 4U))) << 0x00000012U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000300ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 4U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xc0ffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x3f000000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 9U)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                               >> 0x00000016U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                         >> 0x00000010U))) 
                                 << 0x00000018U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000c00ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 5U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0x3fffffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                  >> 0x0bU))) ? (4U 
                                                 | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                                     << 0x0000001eU) 
                                                    | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                                       >> 2U)))
                    : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                        << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                  >> 0x0000001cU))) 
                  << 0x0000001eU));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xfffffff0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x0000000fU & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x0bU)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                             << 0x0000001eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                               >> 2U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                       << 4U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                                 >> 0x0000001cU))) 
                                 >> 2U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000003000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 6U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xfffffc0fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x000003f0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x0dU)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                             << 0x00000012U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                               >> 0x0000000eU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                         >> 8U))) << 4U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000c000ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 7U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U] 
            = ((0xffff03ffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U]) 
               | (0x0000fc00U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 0x0fU)))
                                   ? (4U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                             << 6U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                               >> 0x0000001aU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
                                         >> 0x00000014U))) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                >> 1U)))
                                  ? (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                            << 0x0000001aU) 
                                           | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                              >> 6U)))
                                  : vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U])));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 3U)))
                                   ? (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x0000000000000030ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 2U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffc0fffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0003f000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 5U)))
                                   ? (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 2U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               >> 0x0000001eU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 8U) | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                 >> 0x00000018U))) 
                                 << 0x0000000cU)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x00000000000000c0ULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 3U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xff03ffffU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00fc0000U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 7U)))
                                   ? (8U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                               >> 0x0000000aU)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
                                         >> 4U))) << 0x00000012U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                >> 1U)))
                                  ? (0x10U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                 >> 6U)))
                                  : vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U])));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | ((QData)((IData)((IData)((0ULL != 
                                           (0x000000000000000cULL 
                                            & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld))))) 
                  << 1U));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xfffff03fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x00000fc0U & (((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                 >> 3U)))
                                   ? (0x10U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                  >> 0x00000012U)))
                                   : ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                         >> 0x0000000cU))) 
                                 << 6U)));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[11U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n = 0ULL;
        VL_ASSIGN_W(384, vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n, Vtop__ConstPool__CONST_h997e551f_0);
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n 
            = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n) 
               | (IData)((IData)((0ULL != (3ULL & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld)))));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U] 
            = ((0xffffffc0U & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U]) 
               | (0x0000003fU & ((1U & (IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
                                                >> 1U)))
                                  ? (0x20U | ((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                               << 0x0000001aU) 
                                              | (vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
                                                 >> 6U)))
                                  : vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U])));
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__vld_n;
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[0U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[1U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[1U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[2U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[2U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[3U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[3U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[4U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[4U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[5U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[5U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[6U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[6U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[7U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[7U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[8U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[8U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[9U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[9U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[10U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[10U];
        vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[11U] 
            = vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx_n[11U];
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group 
            = (0x0000003fU & vlSelfRef.__Vfunc_feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__enc_group__18__idx[0U]);
        if (VL_LIKELY(((0x017fU >= (0x000001ffU & ((IData)(6U) 
                                                   * vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)))))) {
            VL_ASSIGNSEL_WI(384, 6, (0x000001ffU & 
                                     ((IData)(6U) * vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g)), vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__offsets_c, vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT____VlemCall_0__enc_group);
        }
        vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__unnamedblk5__DOT__g);
    }
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_ask_tick 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__index;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__best_bid_tick 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__index;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__fwd_hit 
        = ((((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_valid) 
             & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid)) 
            & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_side) 
               == (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side))) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_tick) 
              == (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick)));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__fwd_hit)
            ? vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_qty
            : ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_occupied)
                ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side)
                    ? vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid
                    : vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask)
                : 0U));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid) 
            & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add))) 
           & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty 
              > vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add)
            ? (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
               + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty)
            : ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow)
                ? 0U : (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                        - vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata 
        = vlSelfRef.feed_handler_top__DOT__hp_tdata;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref 
        = vlSelfRef.feed_handler_top__DOT__dc_new_ref;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref 
        = vlSelfRef.feed_handler_top__DOT__dc_ref;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tkeep 
        = vlSelfRef.feed_handler_top__DOT__hp_tkeep;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid 
        = vlSelfRef.feed_handler_top__DOT__hp_tvalid;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[0U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[1U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[1U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[2U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[2U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[3U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[4U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[5U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[6U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[7U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[8U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[9U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[9U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[10U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[10U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[11U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[11U];
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[12U] 
        = vlSelfRef.feed_handler_top__DOT__mf_msg[12U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_b 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_b)) 
               | (0x00ffU & ((1U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                              [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][3U]) 
                             << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_b 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_b)) 
               | (0x00ffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_b) 
                               >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)) 
                              & ((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                                      [
                                                      (7U 
                                                       & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][2U])) 
                                      << 0x00000013U) 
                                     | ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_b
                                                        [
                                                        (7U 
                                                         & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w)][1U])) 
                                        >> 0x0000000dU))) 
                                 == (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                                     >> 0x0eU))) << 
                             (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk6__DOT__w);
    }
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__v 
        = (0x000000ffU & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_b)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__Vfuncout 
        = ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__v))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__freev_b 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__3__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b 
        = (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok 
        = (0U != (0x000000ffU & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_b))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_a 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_a)) 
               | (0x00ffU & ((1U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                              [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][3U]) 
                             << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a)) 
               | (0x00ffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_a) 
                               >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)) 
                              & ((0x0003ffffffffffffULL 
                                  & (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                      [
                                                      (7U 
                                                       & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][2U])) 
                                      << 0x00000013U) 
                                     | ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                        [
                                                        (7U 
                                                         & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w)][1U])) 
                                        >> 0x0000000dU))) 
                                 == (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref 
                                     >> 0x0eU))) << 
                             (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk2__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a 
            = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a)) 
               | (0x0000ffffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                                   >> (0x0000000fU 
                                       & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)) 
                                  & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref
                                     [(0x0000000fU 
                                       & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k)] 
                                     == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref)) 
                                 << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk3__DOT__k);
    }
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__v 
        = (0x000000ffU & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_a)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__Vfuncout 
        = ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__v))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__freev_a 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_way__2__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a 
        = (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok 
        = (0U != (0x000000ffU & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__vld_a))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a 
        = (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a) 
           | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a));
    vlSelfRef.feed_handler_top__DOT__pl_bid_qty = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty;
    vlSelfRef.feed_handler_top__DOT__pl_ask_qty = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__ot_valid;
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__reached 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emitting) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__beat_idx) 
              == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__emit_start)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__do_emit 
        = ((((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tvalid) 
             & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__pkt_ok)) 
            & (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__reached)) 
           & (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__out_left)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off) 
           << 3U);
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_hi 
        = (0x0000007fU & ((IData)(0x40U) - (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo)));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__realigned 
        = ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__r_off))
            ? vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata
            : (VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo)) 
               | VL_SHIFTL_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__s_tdata, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_hi))));
    vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__flushed 
        = VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__prev_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_hdr__DOT__sh_lo));
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout = 0;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi 
        = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
           >> 0x0000000eU);
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r) 
                    ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                    & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0002fd611db47393ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                    << 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x0002534126ec4cc4ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                    << 2U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x00035ba3fae19967ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                    << 3U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 4U)) ^ VL_REDXOR_64(
                                                              (0x000281d87591e2f5ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 5U)) ^ VL_REDXOR_64(
                                                              (0x00039c0dfb4682d0ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 5U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 6U)) ^ VL_REDXOR_64(
                                                              (0x00023af1abc27223ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 7U)) ^ VL_REDXOR_64(
                                                              (0x000162659731d4ddULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 7U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 8U)) ^ VL_REDXOR_64(
                                                              (0x00007639389f11f4ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 9U)) ^ VL_REDXOR_64(
                                                              (0x00030acab8f49f53ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 9U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 0x0aU)) ^ 
                              VL_REDXOR_64((0x000059599ec678ddULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 0x0bU)) ^ 
                              VL_REDXOR_64((0x000217af29df0acaULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 0x0000000bU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 0x0cU)) ^ 
                              VL_REDXOR_64((0x00009f53acbc5959ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout 
        = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout)) 
           | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__r 
                                       >> 0x0dU)) ^ 
                              VL_REDXOR_64((0x0003fd46bf5fb556ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__hi))) 
                             << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__9__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout = 0;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi 
        = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
           >> 0x0000000eU);
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r) 
                    ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                    & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0002fd611db47393ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                    << 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x0002534126ec4cc4ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                    << 2U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x00035ba3fae19967ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                    << 3U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 4U)) ^ VL_REDXOR_64(
                                                              (0x000281d87591e2f5ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 5U)) ^ VL_REDXOR_64(
                                                              (0x00039c0dfb4682d0ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 5U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 6U)) ^ VL_REDXOR_64(
                                                              (0x00023af1abc27223ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 7U)) ^ VL_REDXOR_64(
                                                              (0x000162659731d4ddULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 7U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 8U)) ^ VL_REDXOR_64(
                                                              (0x00007639389f11f4ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 9U)) ^ VL_REDXOR_64(
                                                              (0x00030acab8f49f53ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 9U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 0x0aU)) ^ 
                              VL_REDXOR_64((0x000059599ec678ddULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 0x0bU)) ^ 
                              VL_REDXOR_64((0x000217af29df0acaULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 0x0000000bU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 0x0cU)) ^ 
                              VL_REDXOR_64((0x00009f53acbc5959ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout 
        = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout)) 
           | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__r 
                                       >> 0x0dU)) ^ 
                              VL_REDXOR_64((0x0003fd46bf5fb556ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__hi))) 
                             << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__7__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__clk;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i = 0U;
    if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b;
        }
    }
    if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx;
    } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a;
    }
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes 
            = (0x0000000fU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes) 
                              + (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tkeep) 
                                       >> (7U & vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i)))));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_frame__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[0U] 
        = (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata);
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[1U] 
        = (IData)((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata 
                   >> 0x00000020U));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[2U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[3U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[4U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[5U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[6U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[7U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[8U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[9U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[10U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[11U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[12U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[13U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[14U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[15U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_shift 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid) 
           << 3U);
    if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) {
        VL_SHIFTL_WWI(512,512,11, __Vtemp_1, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_shift));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U] 
               | __Vtemp_1[0U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U] 
               | __Vtemp_1[1U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U] 
               | __Vtemp_1[2U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U] 
               | __Vtemp_1[3U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U] 
               | __Vtemp_1[4U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U] 
               | __Vtemp_1[5U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U] 
               | __Vtemp_1[6U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U] 
               | __Vtemp_1[7U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U] 
               | __Vtemp_1[8U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U] 
               | __Vtemp_1[9U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U] 
               | __Vtemp_1[10U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U] 
               | __Vtemp_1[11U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U] 
               | __Vtemp_1[12U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U] 
               | __Vtemp_1[13U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U] 
               | __Vtemp_1[14U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U] 
               | __Vtemp_1[15U]);
    } else {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U];
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__locate 
        = ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]) 
           | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
                             >> 0x00000010U)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side 
        = (0x42U == (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
                     >> 0x00000018U));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty 
        = ((((0x0000ff00U & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U]) 
                               | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U] 
                                                 >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_3 = (((QData)((IData)(
                                                       ((((0x0000ff00U 
                                                           & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[2U] 
                                                              >> 0x00000010U)) 
                                                          | (0x000000ffU 
                                                             & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U])) 
                                                         << 0x00000010U) 
                                                        | ((0x0000ff00U 
                                                            & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U]) 
                                                           | (0x000000ffU 
                                                              & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
                                                                 >> 0x00000010U)))))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((((0x0000ff00U 
                                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[3U] 
                                                               >> 0x00000010U)) 
                                                           | (0x000000ffU 
                                                              & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U])) 
                                                          << 0x00000010U) 
                                                         | ((0x0000ff00U 
                                                             & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U]) 
                                                            | (0x000000ffU 
                                                               & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U] 
                                                                  >> 0x00000010U)))))));
    __VdfgRegularize_h6e95ff9d_0_0 = ((0x00ff0000U 
                                       & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                               >> 0x00000010U))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((0x00ff0000U 
                                       & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U]) 
                                         | (0x000000ffU 
                                            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
                                               >> 0x00000010U))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type 
        = (0x000000ffU & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]);
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_left = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_w[(7U 
                                                                & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)] 
            = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                                        [
                                                        (7U 
                                                         & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][0U])) 
                                        - (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__empties_w 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__empties_w)) 
               | (0x00ffU & ((1U & ((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_w
                                             [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)] 
                                             >> 0x20U)) 
                                    | (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                       [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][0U] 
                                       == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty))) 
                             << (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_w[(7U 
                                                                & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)] 
            = ((1U & (IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_w
                              [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)] 
                              >> 0x20U))) ? vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
               [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][0U]
                : vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty);
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder) 
                     | (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a) 
                         >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)) 
                        & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                           [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][2U] 
                           >> 0x0000001fU))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side) 
                     | (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a) 
                         >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)) 
                        & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                           [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][1U] 
                           >> 0x0000000cU))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick 
            = (0x00000fffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick) 
                              | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a) 
                                                   >> 
                                                   (7U 
                                                    & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))))) 
                                 & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                                 [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][1U])));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
               | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a) 
                                    >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))))) 
                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                  [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)][0U]));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
               | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a) 
                                    >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w))))) 
                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_w
                  [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w)]));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk4__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_s[(0x0000000fU 
                                                                & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)] 
            = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty
                                                        [
                                                        (0x0000000fU 
                                                         & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)])) 
                                        - (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__empties_s 
            = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__empties_s)) 
               | (0x0000ffffU & ((1U & ((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_s
                                                 [(0x0000000fU 
                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)] 
                                                 >> 0x20U)) 
                                        | (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty
                                           [(0x0000000fU 
                                             & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)] 
                                           == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty))) 
                                 << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_s[(0x0000000fU 
                                                                & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)] 
            = ((1U & (IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_s
                              [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)] 
                              >> 0x20U))) ? vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty
               [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)]
                : vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty);
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_left 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_left 
               | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                                    >> (0x0000000fU 
                                        & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))))) 
                  & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_s
                            [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)])));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_ladder) 
                     | (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                         & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ladder)) 
                        >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side 
            = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side) 
                     | (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                         & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_side)) 
                        >> (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick 
            = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_tick) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                                    >> (0x0000000fU 
                                        & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))))) 
                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_tick
                  [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_qty 
               | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                                    >> (0x0000000fU 
                                        & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))))) 
                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_qty
                  [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
            = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_qty 
               | ((- (IData)((1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                                    >> (0x0000000fU 
                                        & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k))))) 
                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__take_s
                  [(0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k)]));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk5__DOT__k);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy 
            = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy)) 
               | (0x0000ffffU & ((1U & (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_valid) 
                                         >> (0x0000000fU 
                                             & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) 
                                        & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) 
                                              & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a) 
                                                 >> 
                                                 (0x0000000fU 
                                                  & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)))))) 
                                 << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_b 
            = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k))) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_b)) 
               | (0x0000ffffU & ((((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy) 
                                   >> (0x0000000fU 
                                       & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)) 
                                  & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_ref
                                     [(0x0000000fU 
                                       & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k)] 
                                     == vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref)) 
                                 << (0x0000000fU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k))));
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk7__DOT__k);
    }
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__v 
        = (0x0000ffffU & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__Vfuncout 
        = ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__v) 
           & ((IData)(1U) + (~ (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__v))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_freev 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__lowest_st__4__Vfuncout;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b 
        = (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_b));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok 
        = (0U != (0x0000ffffU & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_busy))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__accept 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid) 
           & ((1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
              & (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins 
        = (0x000000ffU & (((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync)) 
                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid))
                           ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid) 
                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes))
                           : (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len) 
              & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane) 
                 & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes) 
                    >= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__need)))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref 
        = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref 
        = __VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty 
        = ((__VdfgRegularize_h6e95ff9d_0_0 << 8U) | 
           (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
            >> 0x00000018U));
    __VdfgRegularize_h6e95ff9d_0_1 = ((0xff000000U 
                                       & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[4U]) 
                                      | __VdfgRegularize_h6e95ff9d_0_0);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price 
        = ((__VdfgRegularize_h6e95ff9d_0_2 << 8U) | 
           (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[8U] 
            >> 0x00000018U));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_price 
        = ((0xff000000U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[7U]) 
           | __VdfgRegularize_h6e95ff9d_0_2);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side)) 
                    << 0x0000002cU) | (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty)))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U] 
        = (((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                     >> 0x0000000eU)) << 0x0000000dU) 
           | (IData)(((((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__e_side)) 
                        << 0x0000002cU) | (((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick)) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty)))) 
                      >> 0x00000020U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U] 
        = ((0x80000000U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U]) 
           | (((IData)((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                        >> 0x0000000eU)) >> 0x00000013U) 
              | ((IData)(((vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_new_ref 
                           >> 0x0000000eU) >> 0x00000020U)) 
                 << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U] 
        = ((0x7fffffffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U]) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
              << 0x0000001fU));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U] 
        = (1U & (1U | ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok) 
                       >> 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__q 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_qty;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__tk 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__sd 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_side;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__ld 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_tick_ok;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__sd)) 
                    << 0x0000002cU) | (((QData)((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__tk)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__q)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[1U] 
        = (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__r 
                     >> 0x0eU)) << 0x0000000dU) | (IData)(
                                                          ((((QData)((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__sd)) 
                                                             << 0x0000002cU) 
                                                            | (((QData)((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__tk)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__q)))) 
                                                           >> 0x00000020U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[2U] 
        = ((0x80000000U & __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[2U]) 
           | (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__r 
                        >> 0x0eU)) >> 0x00000013U) 
              | ((IData)(((__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__r 
                           >> 0x0eU) >> 0x00000020U)) 
                 << 0x0000000dU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[2U] 
        = ((0x7fffffffU & __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[2U]) 
           | ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__ld) 
              << 0x0000001fU));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[3U] 
        = (1U & (1U | ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__ld) 
                       >> 1U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[0U] 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[1U] 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[2U] 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[3U] 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__5__Vfuncout[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w = 0U;
    if (((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
         || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 1U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
    } else {
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c 
            = ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                 || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))
                ? 2U : ((0x44U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                         ? 3U : ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                                  ? 4U : 0U)));
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
                }
            }
        }
    }
    while (VL_GTS_III(32, 8U, vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)) {
        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_entry[3U];
        } else if (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) 
                    & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__empties_w) 
                          >> (7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w))))) {
            vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__q 
                = (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__diff_w
                          [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)]);
            vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__tk 
                = (0x00000fffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                   [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][1U]);
            vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__sd 
                = (1U & (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                         [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][1U] 
                         >> 0x0000000cU));
            vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__r 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__op_ref;
            vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__ld 
                = (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rd_a
                   [(7U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][2U] 
                   >> 0x0000001fU);
            VL_ZERO_RESET_W(97, vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry);
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__sd)) 
                            << 0x0000002cU) | (((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__tk)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__q)))));
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[1U] 
                = (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__r 
                             >> 0x0eU)) << 0x0000000dU) 
                   | (IData)(((((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__sd)) 
                                << 0x0000002cU) | (
                                                   ((QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__tk)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__q)))) 
                              >> 0x00000020U)));
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U] 
                = ((0x80000000U & vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U]) 
                   | (((IData)((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__r 
                                >> 0x0eU)) >> 0x00000013U) 
                      | ((IData)(((vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__r 
                                   >> 0x0eU) >> 0x00000020U)) 
                         << 0x0000000dU)));
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U] 
                = ((0x7fffffffU & vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U]) 
                   | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__ld) 
                      << 0x0000001fU));
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[3U] 
                = (1U & (1U | ((IData)(vlSelfRef.__Vfunc_feed_handler_top__DOT__u_orders__DOT__pack_entry__11__ld) 
                               >> 1U)));
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][0U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[0U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][1U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[1U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][2U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[2U];
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][3U] 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT____VlemCall_0__pack_entry[3U];
        } else {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][0U] = 0U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][1U] = 0U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][2U] = 0U;
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[(7U 
                                                                   & vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w)][3U] = 0U;
        }
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w 
            = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__u_orders__DOT__unnamedblk8__DOT__w);
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_wv 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a)
            ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a)
            : (((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)) 
                & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_a_ok))
                ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__freev_a)
                : 0U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_sv 
        = ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_wv))
            ? 0U : ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_a)
                     ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_a)
                     : ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok)
                         ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_freev)
                         : 0U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_ok 
        = ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_wv)) 
           | (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_sv)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_wv 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a)
            ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_b)
                ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_b)
                : (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set) 
                    & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hit_a))
                    ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a)
                    : (((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b)) 
                        & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__free_b_ok))
                        ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__freev_b)
                        : 0U))) : 0U);
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_sv 
        = ((1U & ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__found_a)) 
                  | (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_wv))))
            ? 0U : ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__sh_b)
                     ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__shv_b)
                     : ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_free_ok)
                         ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__st_freev)
                         : 0U)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_ok 
        = ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_wv)) 
           | (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_sv)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__tail 
        = VL_SHIFTR_QQI(64,64,7, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata, 
                        (0x00000078U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__need) 
                                        << 3U)));
    if (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) 
         | (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync))) {
        VL_ASSIGN_W(512, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next, Vtop__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next = 0U;
    } else if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg) {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[0U] 
            = (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__tail);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[1U] 
            = (IData)((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__tail 
                       >> 0x00000020U));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[2U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[3U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[4U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[5U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[6U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[7U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[8U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[9U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[10U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[11U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[12U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[13U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[14U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[15U] = 0U;
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next 
            = (0x000000ffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes) 
                              - (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__need)));
    } else {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next 
            = (0x000000ffU & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins));
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_new_ref 
        = (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_1)) 
            << 0x00000020U) | (QData)((IData)(((((0x0000ff00U 
                                                  & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[5U] 
                                                     >> 0x00000010U)) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U])) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U]) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[6U] 
                                                        >> 0x00000010U)))))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty 
        = __VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_din[3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[7U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[7U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[7U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[7U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[6U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[6U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[6U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[6U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[5U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[5U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[5U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[5U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[4U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[4U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[4U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[4U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[3U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[2U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[1U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[0U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U][0U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[1U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U][1U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[2U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U][2U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din[3U] 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_din[0U][3U];
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we = 0U;
    if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add)))) {
                if ((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) 
                              | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del))))) {
                    if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
                        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we 
                            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_wv;
                    }
                }
            }
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we = 0U;
    if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we = 0xffU;
    } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_add) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__add_wv;
        } else if (((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_red) 
                    | (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_del))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a;
        } else if (vlSelfRef.feed_handler_top__DOT__u_orders__DOT__is_rep) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we 
                = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__hitv_a) 
                   & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__same_set)
                          ? (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__rep_wv)
                          : 0U)));
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__frame_err 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) 
              & ((~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync) 
                     | (0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next)))) 
                 & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast))));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c = 0ULL;
    if ((1U & (~ ((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                  || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
        if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref;
        }
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_new_ref;
                }
            }
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c = 0U;
    if (((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
         || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty;
    } else {
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_price;
                }
            }
        }
        if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty;
        } else if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
            if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                    = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty;
            }
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta_c 
        = (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
           - vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band_c 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price) 
           & ((vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
               >= vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base) 
              & ((QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c)) 
                 < vlSelfRef.feed_handler_top__DOT__u_decode__DOT__band_top)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 7U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 6U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 5U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 4U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 3U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 2U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we) 
                 >> 1U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we 
        = (1U & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_we));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 7U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 6U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 5U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 4U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 3U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 2U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we 
        = (1U & ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we) 
                 >> 1U));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we 
        = (1U & (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_we));
}
