// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__SETS;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__WAYS;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__STASH;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__TICK_W;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__IDX_W;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__TAG_W;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__E_TICK;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__E_SIDE;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__E_TAG;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__E_LADDER;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__E_VALID;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__ENTRY_W;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__AW;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__AW;


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
