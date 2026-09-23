// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__HIGHEST;
constexpr CData/*0:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__REGISTERED;
constexpr CData/*0:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__HIGHEST;
constexpr CData/*0:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__REGISTERED;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__BAND_TICKS;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__GW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__TW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_bbo__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_bbo__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_bbo__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_bbo__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_bbo__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_bbo__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_upd__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_upd__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_upd__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_upd__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_upd__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_upd__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__W;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__GW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__NG;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__GW_LG;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_ask_pe__DOT__NG_LG;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__W;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__GW;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__NG;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__GW_LG;
constexpr IData/*31:0*/ Vtop___024root::price_levels__DOT__u_bid_pe__DOT__NG_LG;


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
