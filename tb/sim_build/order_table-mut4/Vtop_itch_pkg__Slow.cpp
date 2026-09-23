// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_itch_pkg
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_ADD;
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_ADD_MPID;
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_EXECUTED;
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_EXEC_PRICE;
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_CANCEL;
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_DELETE;
constexpr CData/*7:0*/ Vtop_itch_pkg::MSG_REPLACE;
constexpr CData/*7:0*/ Vtop_itch_pkg::SIDE_BUY;
constexpr IData/*31:0*/ Vtop_itch_pkg::TICK_UNITS;



Vtop_itch_pkg::Vtop_itch_pkg() = default;
Vtop_itch_pkg::~Vtop_itch_pkg() = default;

void Vtop_itch_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_itch_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_itch_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
