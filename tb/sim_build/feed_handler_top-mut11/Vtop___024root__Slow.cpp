// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__HIGHEST;
constexpr CData/*0:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__REGISTERED;
constexpr CData/*0:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__HIGHEST;
constexpr CData/*0:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__REGISTERED;
constexpr CData/*7:0*/ Vtop___024root::feed_handler_top__DOT__u_hdr__DOT__HDR_BEATS;
constexpr CData/*7:0*/ Vtop___024root::feed_handler_top__DOT__u_hdr__DOT__PARAM_BEAT;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__MAX_MSG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__SETS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__WAYS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__STASH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__BAND_TICKS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__TW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__SETS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__WAYS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__STASH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__TICK_W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__IDX_W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__TAG_W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__E_TICK;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__E_SIDE;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__E_TAG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__E_LADDER;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__E_VALID;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__ENTRY_W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__BAND_TICKS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__GW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__TW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__GW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__NG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__GW_LG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_ask_pe__DOT__NG_LG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__GW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__NG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__GW_LG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_levels__DOT__u_bid_pe__DOT__NG_LG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_decode__DOT__MAX_MSG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_decode__DOT__BAND_TICKS;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_decode__DOT__BAND_SPAN;
constexpr IData/*17:0*/ Vtop___024root::feed_handler_top__DOT__u_decode__DOT__RECIP_25;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_frame__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_frame__DOT__MAX_MSG;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_frame__DOT__BUF_BYTES;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_frame__DOT__BW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_frame__DOT__BUF_W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_frame__DOT__SHIFT_W;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_hdr__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_hdr__DOT__HDR_BYTES;
constexpr IData/*31:0*/ Vtop___024root::feed_handler_top__DOT__u_hdr__DOT__BW;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
