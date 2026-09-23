// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(s_tkeep,7,0);
        VL_IN8(s_tvalid,0,0);
        VL_IN8(s_tlast,0,0);
        VL_OUT8(m_tkeep,7,0);
        VL_OUT8(m_tvalid,0,0);
        VL_OUT8(m_tlast,0,0);
        CData/*0:0*/ hdr_parse__DOT__clk;
        CData/*0:0*/ hdr_parse__DOT__rst;
        CData/*7:0*/ hdr_parse__DOT__s_tkeep;
        CData/*0:0*/ hdr_parse__DOT__s_tvalid;
        CData/*0:0*/ hdr_parse__DOT__s_tlast;
        CData/*7:0*/ hdr_parse__DOT__m_tkeep;
        CData/*0:0*/ hdr_parse__DOT__m_tvalid;
        CData/*0:0*/ hdr_parse__DOT__m_tlast;
        CData/*7:0*/ hdr_parse__DOT__beat_idx;
        CData/*0:0*/ hdr_parse__DOT__vlan_tagged;
        CData/*0:0*/ hdr_parse__DOT__is_ipv4;
        CData/*0:0*/ hdr_parse__DOT__is_udp;
        CData/*7:0*/ hdr_parse__DOT__ip_off;
        CData/*7:0*/ hdr_parse__DOT__ihl_bytes;
        CData/*7:0*/ hdr_parse__DOT__udp_off;
        CData/*7:0*/ hdr_parse__DOT__mold_off;
        CData/*7:0*/ hdr_parse__DOT__payload_off;
        CData/*2:0*/ hdr_parse__DOT__r_off;
        CData/*7:0*/ hdr_parse__DOT__emit_start;
        CData/*0:0*/ hdr_parse__DOT__emitting;
        CData/*0:0*/ hdr_parse__DOT__pkt_ok;
        CData/*0:0*/ hdr_parse__DOT__flush_pend;
        CData/*6:0*/ hdr_parse__DOT__sh_lo;
        CData/*6:0*/ hdr_parse__DOT__sh_hi;
        CData/*2:0*/ hdr_parse__DOT__last_bytes;
        CData/*3:0*/ hdr_parse__DOT__keep_shift;
        CData/*7:0*/ hdr_parse__DOT__last_keep;
        CData/*0:0*/ hdr_parse__DOT__reached;
        CData/*0:0*/ hdr_parse__DOT__do_emit;
        CData/*0:0*/ __Vtrigprevexpr___TOP__hdr_parse__DOT__clk__0;
        VL_OUT16(m_count,15,0);
        SData/*15:0*/ hdr_parse__DOT__m_count;
        SData/*15:0*/ hdr_parse__DOT__ethertype_outer;
        SData/*15:0*/ hdr_parse__DOT__ethertype_inner;
        SData/*15:0*/ hdr_parse__DOT__ip_total_len;
        SData/*15:0*/ hdr_parse__DOT__payload_len;
        SData/*15:0*/ hdr_parse__DOT__mold_cnt;
        SData/*15:0*/ hdr_parse__DOT__out_left;
        SData/*15:0*/ hdr_parse__DOT__pay_len_q;
        VL_OUT(stat_packets,31,0);
        VL_OUT(stat_dropped,31,0);
        IData/*31:0*/ hdr_parse__DOT__stat_packets;
        IData/*31:0*/ hdr_parse__DOT__stat_dropped;
        IData/*31:0*/ hdr_parse__DOT__unnamedblk1__DOT__b;
        VL_IN64(s_tdata,63,0);
        VL_OUT64(m_tdata,63,0);
        VL_OUT64(m_sequence,63,0);
        QData/*63:0*/ hdr_parse__DOT__s_tdata;
        QData/*63:0*/ hdr_parse__DOT__m_tdata;
        QData/*63:0*/ hdr_parse__DOT__m_sequence;
        QData/*63:0*/ hdr_parse__DOT__prev_data;
        QData/*63:0*/ hdr_parse__DOT__mold_seq;
        QData/*63:0*/ hdr_parse__DOT__realigned;
        QData/*63:0*/ hdr_parse__DOT__flushed;
        VlUnpacked<CData/*7:0*/, 128> hdr_parse__DOT__hb;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 128>, false, CData/*7:0*/, 1> __VdlyCommitQueuehdr_parse__DOT__hb;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*7:0*/ hdr_parse__DOT__HDR_BEATS = 0x10U;
    static constexpr CData/*7:0*/ hdr_parse__DOT__PARAM_BEAT = 4U;
    static constexpr IData/*31:0*/ hdr_parse__DOT__DW = 0x00000040U;
    static constexpr IData/*31:0*/ hdr_parse__DOT__HDR_BYTES = 0x00000080U;
    static constexpr IData/*31:0*/ hdr_parse__DOT__BW = 8U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
