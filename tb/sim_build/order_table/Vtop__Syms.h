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
    VerilatedScope* __Vscopep_itch_pkg;
    VerilatedScope* __Vscopep_order_table;
    VerilatedScope* __Vscopep_order_table__g_way__BRA__0__KET__;
    VerilatedScope* __Vscopep_order_table__g_way__BRA__0__KET____u_way;
    VerilatedScope* __Vscopep_order_table__g_way__BRA__1__KET__;
    VerilatedScope* __Vscopep_order_table__g_way__BRA__1__KET____u_way;
    VerilatedScope* __Vscopep_order_table__unnamedblk10;
    VerilatedScope* __Vscopep_order_table__unnamedblk11;
    VerilatedScope* __Vscopep_order_table__unnamedblk2;
    VerilatedScope* __Vscopep_order_table__unnamedblk3;
    VerilatedScope* __Vscopep_order_table__unnamedblk4;
    VerilatedScope* __Vscopep_order_table__unnamedblk5;
    VerilatedScope* __Vscopep_order_table__unnamedblk6;
    VerilatedScope* __Vscopep_order_table__unnamedblk7;
    VerilatedScope* __Vscopep_order_table__unnamedblk8;
    VerilatedScope* __Vscopep_order_table__unnamedblk9;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
