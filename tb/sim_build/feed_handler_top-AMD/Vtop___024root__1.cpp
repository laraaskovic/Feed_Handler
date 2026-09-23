// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_seq 
        = vlSelfRef.feed_handler_top__DOT__mf_seq;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c = 0U;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__locate 
        = ((0x0000ff00U & vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U]) 
           | (0x000000ffU & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_msg[0U] 
                             >> 0x00000010U)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 0U;
    if (((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
         || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__side_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_side;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_qty;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
            = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_price;
        vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 1U;
    } else {
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price = 1U;
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_price;
                }
            }
        }
        if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_qty;
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c = 2U;
        } else {
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__qty_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_qty;
                }
            }
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__op_c 
                = ((0x44U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                    ? 3U : ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))
                             ? 4U : 0U));
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c = 0ULL;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__add_ref;
    if ((1U & (~ ((0x41U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                  || (0x46U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
        if ((1U & (~ (((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
                       || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
                      || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))))) {
            if ((0x44U != (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                if ((0x55U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) {
                    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__new_ref_c 
                        = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__rep_new_ref;
                }
            }
        }
        if ((((0x45U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)) 
              || (0x43U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type))) 
             || (0x58U == (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__msg_type)))) {
            vlSelfRef.feed_handler_top__DOT__u_decode__DOT__ref_c 
                = vlSelfRef.feed_handler_top__DOT__u_decode__DOT__red_ref;
        }
    }
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__s_valid 
        = vlSelfRef.feed_handler_top__DOT__mf_valid;
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__has_price) 
            & (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
               >= vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base)) 
           & (0x00064000U > (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
                             - vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band)
            ? (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__price_c 
               - vlSelfRef.feed_handler_top__DOT__u_decode__DOT__cfg_band_base)
            : 0U);
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__scaled 
        = (0x0000000051eb851fULL * (QData)((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__tick_c 
        = (0x0000ffffU & (IData)((vlSelfRef.feed_handler_top__DOT__u_decode__DOT__scaled 
                                  >> 0x00000025U)));
    vlSelfRef.feed_handler_top__DOT__u_decode__DOT__subpenny_c 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__in_band) 
           & (0U != (vlSelfRef.feed_handler_top__DOT__u_decode__DOT__delta 
                     - ((IData)(0x00000064U) * (IData)(vlSelfRef.feed_handler_top__DOT__u_decode__DOT__tick_c)))));
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi = 0;
    SData/*13:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r = 0;
    QData/*63:0*/ __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi = 0;
    // Body
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_new_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout = 0;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi 
        = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
           >> 0x0000000eU);
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r) 
                    ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                    & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0002fd611db47393ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                    << 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x0002534126ec4cc4ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                    << 2U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x00035ba3fae19967ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                    << 3U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 4U)) ^ VL_REDXOR_64(
                                                              (0x000281d87591e2f5ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 5U)) ^ VL_REDXOR_64(
                                                              (0x00039c0dfb4682d0ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 5U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 6U)) ^ VL_REDXOR_64(
                                                              (0x00023af1abc27223ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 7U)) ^ VL_REDXOR_64(
                                                              (0x000162659731d4ddULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 7U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 8U)) ^ VL_REDXOR_64(
                                                              (0x00007639389f11f4ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 9U)) ^ VL_REDXOR_64(
                                                              (0x00030acab8f49f53ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 9U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0aU)) ^ 
                              VL_REDXOR_64((0x000059599ec678ddULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0bU)) ^ 
                              VL_REDXOR_64((0x000217af29df0acaULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000bU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0cU)) ^ 
                              VL_REDXOR_64((0x00009f53acbc5959ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout 
        = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout)) 
           | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__r 
                                       >> 0x0dU)) ^ 
                              VL_REDXOR_64((0x0003fd46bf5fb556ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__hi))) 
                             << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__5__Vfuncout;
    if ((0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
            vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr 
                = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_b;
        }
    }
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_ref;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout = 0;
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi 
        = (__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
           >> 0x0000000eU);
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ffeU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (1U & ((IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r) 
                    ^ VL_REDXOR_64((0x000278dde6e5fd29ULL 
                                    & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi)))));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ffdU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (2U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                              >> 1U)) ^ VL_REDXOR_64(
                                                     (0x0002fd611db47393ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                    << 1U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ffbU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (4U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                              >> 2U)) ^ VL_REDXOR_64(
                                                     (0x0002534126ec4cc4ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                    << 2U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3ff7U & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (8U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                              >> 3U)) ^ VL_REDXOR_64(
                                                     (0x00035ba3fae19967ULL 
                                                      & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                    << 3U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3fefU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000010U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 4U)) ^ VL_REDXOR_64(
                                                              (0x000281d87591e2f5ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 4U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3fdfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000020U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 5U)) ^ VL_REDXOR_64(
                                                              (0x00039c0dfb4682d0ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 5U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3fbfU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000040U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 6U)) ^ VL_REDXOR_64(
                                                              (0x00023af1abc27223ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 6U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3f7fU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000080U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 7U)) ^ VL_REDXOR_64(
                                                              (0x000162659731d4ddULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 7U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3effU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000100U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 8U)) ^ VL_REDXOR_64(
                                                              (0x00007639389f11f4ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 8U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3dffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000200U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 9U)) ^ VL_REDXOR_64(
                                                              (0x00030acab8f49f53ULL 
                                                               & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 9U)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x3bffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000400U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0aU)) ^ 
                              VL_REDXOR_64((0x000059599ec678ddULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000aU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x37ffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00000800U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0bU)) ^ 
                              VL_REDXOR_64((0x000217af29df0acaULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000bU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x2fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00001000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0cU)) ^ 
                              VL_REDXOR_64((0x00009f53acbc5959ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000cU)));
    __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout 
        = ((0x1fffU & (IData)(__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout)) 
           | (0x00002000U & (((IData)((__Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__r 
                                       >> 0x0dU)) ^ 
                              VL_REDXOR_64((0x0003fd46bf5fb556ULL 
                                            & __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__hi))) 
                             << 0x0000000dU)));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
        = __Vfunc_feed_handler_top__DOT__u_orders__DOT__hash_idx__3__Vfuncout;
    if ((0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__init_idx;
    } else if ((2U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state))) {
        vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr 
            = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__idx_a;
    }
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__accept 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_valid) 
           & ((1U == (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__state)) 
              & (0U != (IData)(vlSelfRef.feed_handler_top__DOT__u_orders__DOT__s_op))));
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__b_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__b_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__7__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__6__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__5__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__4__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__3__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__2__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__1__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
    vlSelfRef.feed_handler_top__DOT__u_orders__DOT__g_way__BRA__0__KET____DOT__u_way__DOT__a_addr 
        = vlSelfRef.feed_handler_top__DOT__u_orders__DOT__a_addr;
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[0U] 
        = (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata);
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[1U] 
        = (IData)((vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tdata 
                   >> 0x00000020U));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[2U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[3U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[4U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[5U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[6U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[7U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[8U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[9U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[10U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[11U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[12U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[13U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[14U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data[15U] = 0U;
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_shift 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid) 
           << 3U);
    if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) {
        VL_SHIFTL_WWI(512,512,11, __Vtemp_1, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_data, (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__ins_shift));
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U] 
               | __Vtemp_1[0U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U] 
               | __Vtemp_1[1U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U] 
               | __Vtemp_1[2U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U] 
               | __Vtemp_1[3U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U] 
               | __Vtemp_1[4U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U] 
               | __Vtemp_1[5U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U] 
               | __Vtemp_1[6U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U] 
               | __Vtemp_1[7U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U] 
               | __Vtemp_1[8U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U] 
               | __Vtemp_1[9U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U] 
               | __Vtemp_1[10U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U] 
               | __Vtemp_1[11U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U] 
               | __Vtemp_1[12U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U] 
               | __Vtemp_1[13U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U] 
               | __Vtemp_1[14U]);
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U] 
            = (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U] 
               | __Vtemp_1[15U]);
    } else {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_q[15U];
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins 
        = (0x000000ffU & (((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync)) 
                           & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid))
                           ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid) 
                              + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__in_bytes))
                           : (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nvalid)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len 
        = ((0x0000ff00U & (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
                           << 8U)) | (0x000000ffU & 
                                      (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U] 
                                       >> 8U)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len 
        = ((~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync)) 
           & (2U <= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane 
        = ((1U <= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)) 
           & (0x0032U >= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)
            ? (0x000000ffU & ((IData)(2U) + (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__msg_len)))
            : 2U);
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg 
        = (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len) 
            & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)) 
           & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins) 
              >= (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_len) 
           & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__len_sane)));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__con_shift 
        = (0x000007ffU & ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len) 
                          << 3U));
    if (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) 
         | (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync))) {
        VL_ASSIGN_W(512, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next, Vtop__ConstPool__CONST_h93e1b771_0);
    } else if (vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg) {
        VL_SHIFTR_WWI(512,512,11, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next, vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide, (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__con_shift));
    } else {
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[0U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[0U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[1U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[1U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[2U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[2U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[3U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[3U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[4U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[4U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[5U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[5U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[6U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[6U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[7U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[7U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[8U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[8U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[9U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[9U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[10U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[10U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[11U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[11U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[12U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[12U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[13U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[13U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[14U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[14U];
        vlSelfRef.feed_handler_top__DOT__u_frame__DOT__buf_next[15U] 
            = vlSelfRef.feed_handler_top__DOT__u_frame__DOT__wide[15U];
    }
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next 
        = (0x000000ffU & (((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__have_msg)
                            ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins) 
                               - (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__total_len))
                            : (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_ins)) 
                          & (- (IData)((1U & (~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync) 
                                                 | (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len))))))));
    vlSelfRef.feed_handler_top__DOT__u_frame__DOT__frame_err 
        = ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__bad_len) 
           | ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tvalid) 
              & ((~ ((IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__desync) 
                     | (0U == (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__nv_next)))) 
                 & (IData)(vlSelfRef.feed_handler_top__DOT__u_frame__DOT__s_tlast))));
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__we) {
                __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__0___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__rdata;
        }
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__we) {
                __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__rdata;
        }
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__we) {
                __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__2___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem[__Vinline_0__nba_sequent__TOP__2___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__2___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__rdata;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0;
            __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 0U;
            if (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__we) {
                __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata;
                __Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 
                    = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__waddr;
                __Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0 = 1U;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem
                [vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr];
            if (__Vinline_0__nba_sequent__TOP__3___VdlySet__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0) {
                vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem[__Vinline_0__nba_sequent__TOP__3___VdlyDim0__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0] 
                    = __Vinline_0__nba_sequent__TOP__3___VdlyVal__feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__mem__v0;
            }
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__rdata;
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t;
            __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t = 0;
            SData/*11:0*/ __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t;
            __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t = 0;
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol;
            __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol = 0;
            __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol 
                = vlSelfRef.feed_handler_top__DOT__stat_other_symbol;
            if (vlSelfRef.feed_handler_top__DOT__rst) {
                __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol = 0U;
                vlSelfRef.feed_handler_top__DOT__m_bbo_seq = 0ULL;
                vlSelfRef.feed_handler_top__DOT__m_bid_qty = 0U;
                vlSelfRef.feed_handler_top__DOT__m_ask_qty = 0U;
                vlSelfRef.feed_handler_top__DOT__m_bid_price = 0U;
                vlSelfRef.feed_handler_top__DOT__m_ask_price = 0U;
            } else {
                if (((IData)(vlSelfRef.feed_handler_top__DOT__dc_valid) 
                     & (~ (IData)(vlSelfRef.feed_handler_top__DOT__ot_valid)))) {
                    __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol 
                        = ((IData)(1U) + vlSelfRef.feed_handler_top__DOT__stat_other_symbol);
                }
                vlSelfRef.feed_handler_top__DOT__m_bbo_seq 
                    = vlSelfRef.feed_handler_top__DOT__pl_bbo_seq;
                vlSelfRef.feed_handler_top__DOT__m_bid_qty 
                    = vlSelfRef.feed_handler_top__DOT__pl_bid_qty;
                vlSelfRef.feed_handler_top__DOT__m_ask_qty 
                    = vlSelfRef.feed_handler_top__DOT__pl_ask_qty;
                if (vlSelfRef.feed_handler_top__DOT__pl_bid_valid) {
                    __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t 
                        = vlSelfRef.feed_handler_top__DOT__pl_bid_tick;
                    vlSelfRef.feed_handler_top__DOT____VlemCall_0__tick_to_price 
                        = (vlSelfRef.feed_handler_top__DOT__cfg_band_base 
                           + ((IData)(0x00000064U) 
                              * (IData)(__Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__0__t)));
                    vlSelfRef.feed_handler_top__DOT____VlemCond_1 
                        = vlSelfRef.feed_handler_top__DOT____VlemCall_0__tick_to_price;
                } else {
                    vlSelfRef.feed_handler_top__DOT____VlemCond_1 = 0U;
                }
                vlSelfRef.feed_handler_top__DOT__m_bid_price 
                    = vlSelfRef.feed_handler_top__DOT____VlemCond_1;
                if (vlSelfRef.feed_handler_top__DOT__pl_ask_valid) {
                    __Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t 
                        = vlSelfRef.feed_handler_top__DOT__pl_ask_tick;
                    vlSelfRef.feed_handler_top__DOT____VlemCall_2__tick_to_price 
                        = (vlSelfRef.feed_handler_top__DOT__cfg_band_base 
                           + ((IData)(0x00000064U) 
                              * (IData)(__Vinline_0__nba_sequent__TOP__14___Vfunc_feed_handler_top__DOT__tick_to_price__1__t)));
                    vlSelfRef.feed_handler_top__DOT____VlemCond_3 
                        = vlSelfRef.feed_handler_top__DOT____VlemCall_2__tick_to_price;
                } else {
                    vlSelfRef.feed_handler_top__DOT____VlemCond_3 = 0U;
                }
                vlSelfRef.feed_handler_top__DOT__m_ask_price 
                    = vlSelfRef.feed_handler_top__DOT____VlemCond_3;
            }
            vlSelfRef.feed_handler_top__DOT__m_bbo_valid 
                = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__rst))) 
                   && (IData)(vlSelfRef.feed_handler_top__DOT__pl_bbo_valid));
            vlSelfRef.feed_handler_top__DOT__m_bid_valid 
                = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__rst))) 
                   && (IData)(vlSelfRef.feed_handler_top__DOT__pl_bid_valid));
            vlSelfRef.feed_handler_top__DOT__m_ask_valid 
                = ((1U & (~ (IData)(vlSelfRef.feed_handler_top__DOT__rst))) 
                   && (IData)(vlSelfRef.feed_handler_top__DOT__pl_ask_valid));
            vlSelfRef.feed_handler_top__DOT__stat_other_symbol 
                = __Vinline_0__nba_sequent__TOP__14___Vdly__feed_handler_top__DOT__stat_other_symbol;
            vlSelfRef.stat_other_symbol = vlSelfRef.feed_handler_top__DOT__stat_other_symbol;
            vlSelfRef.m_bbo_valid = vlSelfRef.feed_handler_top__DOT__m_bbo_valid;
            vlSelfRef.m_bbo_seq = vlSelfRef.feed_handler_top__DOT__m_bbo_seq;
            vlSelfRef.m_bid_qty = vlSelfRef.feed_handler_top__DOT__m_bid_qty;
            vlSelfRef.m_ask_qty = vlSelfRef.feed_handler_top__DOT__m_ask_qty;
            vlSelfRef.m_bid_valid = vlSelfRef.feed_handler_top__DOT__m_bid_valid;
            vlSelfRef.m_ask_valid = vlSelfRef.feed_handler_top__DOT__m_ask_valid;
            vlSelfRef.m_bid_price = vlSelfRef.feed_handler_top__DOT__m_bid_price;
            vlSelfRef.m_ask_price = vlSelfRef.feed_handler_top__DOT__m_ask_price;
        }
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x00000000000003feULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000000008002ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__19
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_qty 
                = vlSelfRef.feed_handler_top__DOT__ot_m_qty;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_add 
                = vlSelfRef.feed_handler_top__DOT__ot_m_add;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_seq 
                = vlSelfRef.feed_handler_top__DOT__ot_m_seq;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_done 
                = vlSelfRef.feed_handler_top__DOT__ot_m_done;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick 
                = vlSelfRef.feed_handler_top__DOT__ot_m_tick;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_valid 
                = vlSelfRef.feed_handler_top__DOT__ot_m_valid;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_side 
                = vlSelfRef.feed_handler_top__DOT__ot_m_side;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__raddr 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__raddr 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s_tick;
        }
    }
    if ((0x0000000000001400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty 
                = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_bid_q 
                   & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_valid))));
            vlSelfRef.feed_handler_top__DOT__pl_bid_qty 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_bid_qty;
        }
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty 
                = (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__bbo_ask_q 
                   & (- (IData)((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_valid))));
            vlSelfRef.feed_handler_top__DOT__pl_ask_qty 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__m_ask_qty;
        }
    }
    if ((0x0000000000006400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__fwd_hit 
                = ((((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_valid) 
                     & (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid)) 
                    & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_side) 
                       == (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side))) 
                   & ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_tick) 
                      == (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_tick)));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__fwd_hit)
                    ? vlSelfRef.feed_handler_top__DOT__u_levels__DOT__wr_qty
                    : ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_occupied)
                        ? ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_side)
                            ? vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_bid
                            : vlSelfRef.feed_handler_top__DOT__u_levels__DOT__rd_ask)
                        : 0U));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow 
                = (((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_valid) 
                    & (~ (IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add))) 
                   & (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty 
                      > vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty 
                = ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_add)
                    ? (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                       + vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty)
                    : ((IData)(vlSelfRef.feed_handler_top__DOT__u_levels__DOT__underflow)
                        ? 0U : (vlSelfRef.feed_handler_top__DOT__u_levels__DOT__base_qty 
                                - vlSelfRef.feed_handler_top__DOT__u_levels__DOT__s1_qty)));
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_bbo__DOT__wdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_bbo__DOT__wdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_ask_upd__DOT__wdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
            vlSelfRef.feed_handler_top__DOT__u_levels__DOT__u_bid_upd__DOT__wdata 
                = vlSelfRef.feed_handler_top__DOT__u_levels__DOT__new_qty;
        }
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_tvalid & 0xfeU)))) {
        Verilated::overWidthError("s_tvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_tlast & 0xfeU)))) {
        Verilated::overWidthError("s_tlast");
    }
}
#endif  // VL_DEBUG
