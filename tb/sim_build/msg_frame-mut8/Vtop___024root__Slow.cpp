// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::msg_frame__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::msg_frame__DOT__MAX_MSG;
constexpr IData/*31:0*/ Vtop___024root::msg_frame__DOT__BUF_BYTES;
constexpr IData/*31:0*/ Vtop___024root::msg_frame__DOT__BW;
constexpr IData/*31:0*/ Vtop___024root::msg_frame__DOT__BUF_W;
constexpr IData/*31:0*/ Vtop___024root::msg_frame__DOT__SHIFT_W;


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
