// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_itch_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_itch_pkg                  TOP__itch_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_feed_handler_top;
    VerilatedScope* __Vscopep_feed_handler_top__u_decode;
    VerilatedScope* __Vscopep_feed_handler_top__u_frame;
    VerilatedScope* __Vscopep_feed_handler_top__u_frame__unnamedblk1;
    VerilatedScope* __Vscopep_feed_handler_top__u_hdr;
    VerilatedScope* __Vscopep_feed_handler_top__u_hdr__unnamedblk1;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_ask_bbo;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_ask_pe;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_ask_pe__unnamedblk5;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_ask_upd;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_bid_bbo;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_bid_pe;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_bid_pe__unnamedblk5;
    VerilatedScope* __Vscopep_feed_handler_top__u_levels__u_bid_upd;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__0__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__1__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__2__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__3__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__4__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__5__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__6__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET__;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__g_way__BRA__7__KET____u_way;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk2;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk3;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk4;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk5;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk6;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk7;
    VerilatedScope* __Vscopep_feed_handler_top__u_orders__unnamedblk8;
    VerilatedScope* __Vscopep_itch_pkg;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
