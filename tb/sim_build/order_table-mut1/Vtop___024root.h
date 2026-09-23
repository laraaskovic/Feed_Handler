// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_itch_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_itch_pkg* __PVT__itch_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(s_valid,0,0);
        VL_IN8(s_op,2,0);
        VL_IN8(s_side,0,0);
        VL_IN8(s_tick_ok,0,0);
        VL_OUT8(m_valid,0,0);
        VL_OUT8(m_side,0,0);
        VL_OUT8(m_add,0,0);
        VL_OUT8(m_done,0,0);
        VL_OUT8(ready,0,0);
        CData/*0:0*/ order_table__DOT__clk;
        CData/*0:0*/ order_table__DOT__rst;
        CData/*0:0*/ order_table__DOT__s_valid;
        CData/*2:0*/ order_table__DOT__s_op;
        CData/*0:0*/ order_table__DOT__s_side;
        CData/*0:0*/ order_table__DOT__s_tick_ok;
        CData/*0:0*/ order_table__DOT__m_valid;
        CData/*0:0*/ order_table__DOT__m_side;
        CData/*0:0*/ order_table__DOT__m_add;
        CData/*0:0*/ order_table__DOT__m_done;
        CData/*0:0*/ order_table__DOT__ready;
        CData/*1:0*/ order_table__DOT__state;
        CData/*3:0*/ order_table__DOT__init_idx;
        CData/*2:0*/ order_table__DOT__op_kind;
        CData/*0:0*/ order_table__DOT__op_side;
        CData/*0:0*/ order_table__DOT__op_tick_ok;
        CData/*3:0*/ order_table__DOT__idx_a;
        CData/*3:0*/ order_table__DOT__idx_b;
        CData/*0:0*/ order_table__DOT__pend_v;
        CData/*0:0*/ order_table__DOT__pend_valid;
        CData/*0:0*/ order_table__DOT__pend_side;
        CData/*0:0*/ order_table__DOT__accept;
        CData/*0:0*/ order_table__DOT__is_add;
        CData/*0:0*/ order_table__DOT__is_red;
        CData/*0:0*/ order_table__DOT__is_del;
        CData/*0:0*/ order_table__DOT__is_rep;
        CData/*3:0*/ order_table__DOT__a_addr;
        CData/*3:0*/ order_table__DOT__b_addr;
        CData/*1:0*/ order_table__DOT__a_we;
        CData/*1:0*/ order_table__DOT__b_we;
        CData/*1:0*/ order_table__DOT__st_valid;
        CData/*1:0*/ order_table__DOT__st_ladder;
        CData/*1:0*/ order_table__DOT__st_side;
        CData/*1:0*/ order_table__DOT__hitv_a;
        CData/*1:0*/ order_table__DOT__freev_a;
        CData/*1:0*/ order_table__DOT__vld_a;
        CData/*1:0*/ order_table__DOT__shv_a;
        CData/*0:0*/ order_table__DOT__hit_a;
        CData/*0:0*/ order_table__DOT__free_a_ok;
        CData/*0:0*/ order_table__DOT__sh_a;
        CData/*0:0*/ order_table__DOT__found_a;
        CData/*1:0*/ order_table__DOT__empties_w;
        CData/*1:0*/ order_table__DOT__empties_s;
        CData/*0:0*/ order_table__DOT__e_ladder;
        CData/*0:0*/ order_table__DOT__e_side;
        CData/*0:0*/ order_table__DOT__same_set;
        CData/*1:0*/ order_table__DOT__vld_b;
        CData/*1:0*/ order_table__DOT__hitv_b;
        CData/*1:0*/ order_table__DOT__freev_b;
        CData/*1:0*/ order_table__DOT__st_busy;
        CData/*1:0*/ order_table__DOT__shv_b;
        CData/*1:0*/ order_table__DOT__st_freev;
        CData/*0:0*/ order_table__DOT__hit_b;
    };
    struct {
        CData/*0:0*/ order_table__DOT__free_b_ok;
        CData/*0:0*/ order_table__DOT__sh_b;
        CData/*0:0*/ order_table__DOT__st_free_ok;
        CData/*1:0*/ order_table__DOT__add_wv;
        CData/*1:0*/ order_table__DOT__rep_wv;
        CData/*1:0*/ order_table__DOT__add_sv;
        CData/*1:0*/ order_table__DOT__rep_sv;
        CData/*0:0*/ order_table__DOT__add_ok;
        CData/*0:0*/ order_table__DOT__rep_ok;
        CData/*1:0*/ order_table__DOT__su_kill;
        CData/*1:0*/ order_table__DOT__su_dec;
        CData/*1:0*/ order_table__DOT__su_new;
        CData/*0:0*/ order_table__DOT__su_side;
        CData/*0:0*/ order_table__DOT__su_ladder;
        CData/*0:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk;
        CData/*0:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_en;
        CData/*0:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_we;
        CData/*3:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr;
        CData/*0:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_en;
        CData/*0:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_we;
        CData/*3:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr;
        CData/*0:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk;
        CData/*0:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_en;
        CData/*0:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_we;
        CData/*3:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr;
        CData/*0:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_en;
        CData/*0:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_we;
        CData/*3:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr;
        CData/*0:0*/ __Vfunc_order_table__DOT__pack_entry__9__ld;
        CData/*0:0*/ __Vfunc_order_table__DOT__pack_entry__9__sd;
        CData/*0:0*/ __Vtrigprevexpr___TOP__order_table__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__clk__0;
        VL_IN16(s_tick,11,0);
        VL_OUT16(m_tick,11,0);
        SData/*11:0*/ order_table__DOT__s_tick;
        SData/*11:0*/ order_table__DOT__m_tick;
        SData/*11:0*/ order_table__DOT__op_tick;
        SData/*11:0*/ order_table__DOT__pend_tick;
        SData/*11:0*/ order_table__DOT__e_tick;
        SData/*11:0*/ order_table__DOT__su_tick;
        SData/*11:0*/ __Vfunc_order_table__DOT__pack_entry__9__tk;
        VL_IN(s_qty,31,0);
        VL_OUT(m_qty,31,0);
        VL_OUT(stat_collisions,31,0);
        VL_OUT(stat_missing,31,0);
        VL_OUT(stat_overrun,31,0);
        VL_OUT(stat_stash_peak,31,0);
        VlWide<4>/*106:0*/ order_table__DOT____VlemCall_0__pack_entry;
        IData/*31:0*/ order_table__DOT__s_qty;
        IData/*31:0*/ order_table__DOT__m_qty;
        IData/*31:0*/ order_table__DOT__stat_collisions;
        IData/*31:0*/ order_table__DOT__stat_missing;
        IData/*31:0*/ order_table__DOT__stat_overrun;
        IData/*31:0*/ order_table__DOT__stat_stash_peak;
        IData/*31:0*/ order_table__DOT__op_qty;
        IData/*31:0*/ order_table__DOT__pend_qty;
        VlWide<4>/*106:0*/ order_table__DOT__b_din;
        IData/*31:0*/ order_table__DOT__e_qty;
        IData/*31:0*/ order_table__DOT__take_qty;
        IData/*31:0*/ order_table__DOT__st_left;
        VlWide<4>/*106:0*/ order_table__DOT__add_entry;
        IData/*31:0*/ order_table__DOT__su_dec_qty;
        IData/*31:0*/ order_table__DOT__su_qty;
    };
    struct {
        IData/*31:0*/ order_table__DOT__st_count;
        IData/*31:0*/ order_table__DOT__unnamedblk2__DOT__w;
        IData/*31:0*/ order_table__DOT__unnamedblk3__DOT__k;
        IData/*31:0*/ order_table__DOT__unnamedblk4__DOT__w;
        IData/*31:0*/ order_table__DOT__unnamedblk5__DOT__k;
        IData/*31:0*/ order_table__DOT__unnamedblk6__DOT__w;
        IData/*31:0*/ order_table__DOT__unnamedblk7__DOT__k;
        IData/*31:0*/ order_table__DOT__unnamedblk8__DOT__w;
        IData/*31:0*/ order_table__DOT__unnamedblk9__DOT__k;
        IData/*31:0*/ order_table__DOT__unnamedblk10__DOT__k;
        IData/*31:0*/ order_table__DOT__unnamedblk11__DOT__k;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_din;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_dout;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_din;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_dout;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_din;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_dout;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_din;
        VlWide<4>/*106:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_dout;
        IData/*31:0*/ __Vfunc_order_table__DOT__pack_entry__9__q;
        VL_IN64(s_ref,63,0);
        VL_IN64(s_new_ref,63,0);
        VL_IN64(s_seq,63,0);
        VL_OUT64(m_seq,63,0);
        QData/*63:0*/ order_table__DOT__s_ref;
        QData/*63:0*/ order_table__DOT__s_new_ref;
        QData/*63:0*/ order_table__DOT__s_seq;
        QData/*63:0*/ order_table__DOT__m_seq;
        QData/*63:0*/ order_table__DOT__op_ref;
        QData/*63:0*/ order_table__DOT__op_new_ref;
        QData/*63:0*/ order_table__DOT__op_seq;
        QData/*63:0*/ order_table__DOT__pend_seq;
        QData/*63:0*/ order_table__DOT__su_ref;
        QData/*63:0*/ __Vfunc_order_table__DOT__pack_entry__9__r;
        VlUnpacked<VlWide<4>/*106:0*/, 2> order_table__DOT__a_din;
        VlUnpacked<VlWide<4>/*106:0*/, 2> order_table__DOT__rd_a;
        VlUnpacked<VlWide<4>/*106:0*/, 2> order_table__DOT__rd_b;
        VlUnpacked<QData/*63:0*/, 2> order_table__DOT__st_ref;
        VlUnpacked<SData/*11:0*/, 2> order_table__DOT__st_tick;
        VlUnpacked<IData/*31:0*/, 2> order_table__DOT__st_qty;
        VlUnpacked<QData/*32:0*/, 2> order_table__DOT__diff_w;
        VlUnpacked<QData/*32:0*/, 2> order_table__DOT__diff_s;
        VlUnpacked<IData/*31:0*/, 2> order_table__DOT__take_w;
        VlUnpacked<IData/*31:0*/, 2> order_table__DOT__take_s;
        VlUnpacked<VlWide<4>/*106:0*/, 16> order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__mem;
        VlUnpacked<VlWide<4>/*106:0*/, 16> order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 2>, false, IData/*31:0*/, 1> __VdlyCommitQueueorder_table__DOT__st_qty;
    VlNBACommitQueue<VlUnpacked<QData/*63:0*/, 2>, false, QData/*63:0*/, 1> __VdlyCommitQueueorder_table__DOT__st_ref;
    VlNBACommitQueue<VlUnpacked<SData/*11:0*/, 2>, false, SData/*11:0*/, 1> __VdlyCommitQueueorder_table__DOT__st_tick;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ order_table__DOT__SETS = 0x00000010U;
    static constexpr IData/*31:0*/ order_table__DOT__WAYS = 2U;
    static constexpr IData/*31:0*/ order_table__DOT__STASH = 2U;
    static constexpr IData/*31:0*/ order_table__DOT__TICK_W = 0x0000000cU;
    static constexpr IData/*31:0*/ order_table__DOT__IDX_W = 4U;
    static constexpr IData/*31:0*/ order_table__DOT__TAG_W = 0x0000003cU;
    static constexpr IData/*31:0*/ order_table__DOT__E_TICK = 0x00000020U;
    static constexpr IData/*31:0*/ order_table__DOT__E_SIDE = 0x0000002cU;
    static constexpr IData/*31:0*/ order_table__DOT__E_TAG = 0x0000002dU;
    static constexpr IData/*31:0*/ order_table__DOT__E_LADDER = 0x00000069U;
    static constexpr IData/*31:0*/ order_table__DOT__E_VALID = 0x0000006aU;
    static constexpr IData/*31:0*/ order_table__DOT__ENTRY_W = 0x0000006bU;
    static constexpr IData/*31:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DW = 0x0000006bU;
    static constexpr IData/*31:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__DEPTH = 0x00000010U;
    static constexpr IData/*31:0*/ order_table__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__AW = 4U;
    static constexpr IData/*31:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DW = 0x0000006bU;
    static constexpr IData/*31:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__DEPTH = 0x00000010U;
    static constexpr IData/*31:0*/ order_table__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__AW = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
