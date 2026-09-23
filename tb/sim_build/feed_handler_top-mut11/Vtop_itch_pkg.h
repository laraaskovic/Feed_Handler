// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ITCH_PKG_H_
#define VERILATED_VTOP_ITCH_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_itch_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*7:0*/ MSG_ADD = 0x41U;
    static constexpr CData/*7:0*/ MSG_ADD_MPID = 0x46U;
    static constexpr CData/*7:0*/ MSG_EXECUTED = 0x45U;
    static constexpr CData/*7:0*/ MSG_EXEC_PRICE = 0x43U;
    static constexpr CData/*7:0*/ MSG_CANCEL = 0x58U;
    static constexpr CData/*7:0*/ MSG_DELETE = 0x44U;
    static constexpr CData/*7:0*/ MSG_REPLACE = 0x55U;
    static constexpr CData/*7:0*/ SIDE_BUY = 0x42U;
    static constexpr IData/*31:0*/ TICK_UNITS = 0x00000064U;

    // CONSTRUCTORS
    Vtop_itch_pkg();
    ~Vtop_itch_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_itch_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
