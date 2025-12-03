// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__1\n"); );
    // Body
    if ((2U & (IData)(vlSelf->__PVT__sram1_we))) {
        vlSelf->__Vlvbound_hf9c541d9__0 = (0xffU & 
                                           (vlSelf->__PVT__self1 
                                            >> 8U));
        if ((0x18fffffU >= (0x1ffffffU & vlSelf->__PVT__self0))) {
            vlSelf->__Vdlyvval__main_ram__v1 = vlSelf->__Vlvbound_hf9c541d9__0;
            vlSelf->__Vdlyvset__main_ram__v1 = 1U;
            vlSelf->__Vdlyvlsb__main_ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__main_ram__v1 = (0x1ffffffU 
                                                 & vlSelf->__PVT__self0);
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__sram1_we))) {
        vlSelf->__Vlvbound_hf9c541d9__0 = (0xffU & 
                                           (vlSelf->__PVT__self1 
                                            >> 0x10U));
        if ((0x18fffffU >= (0x1ffffffU & vlSelf->__PVT__self0))) {
            vlSelf->__Vdlyvval__main_ram__v2 = vlSelf->__Vlvbound_hf9c541d9__0;
            vlSelf->__Vdlyvset__main_ram__v2 = 1U;
            vlSelf->__Vdlyvlsb__main_ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__main_ram__v2 = (0x1ffffffU 
                                                 & vlSelf->__PVT__self0);
        }
    }
    if ((8U & (IData)(vlSelf->__PVT__sram1_we))) {
        vlSelf->__Vlvbound_hf9c541d9__0 = (vlSelf->__PVT__self1 
                                           >> 0x18U);
        if ((0x18fffffU >= (0x1ffffffU & vlSelf->__PVT__self0))) {
            vlSelf->__Vdlyvval__main_ram__v3 = vlSelf->__Vlvbound_hf9c541d9__0;
            vlSelf->__Vdlyvset__main_ram__v3 = 1U;
            vlSelf->__Vdlyvlsb__main_ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__main_ram__v3 = (0x1ffffffU 
                                                 & vlSelf->__PVT__self0);
        }
    }
    vlSelf->__Vdly__ram_bus_ack = 0U;
    if (((((IData)(vlSelf->__PVT__self3) & (IData)(vlSelf->__PVT__slave_sel)) 
          & (IData)(vlSelf->__PVT__self4)) & (~ (IData)(vlSelf->__PVT__ram_bus_ack)))) {
        vlSelf->__Vdly__ram_bus_ack = 1U;
    }
    if (vlSelf->__PVT__grant) {
        if (vlSelf->__PVT__grant) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__request) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__request))) {
                    vlSelf->__PVT__grant = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->__PVT__request)))) {
        if ((2U & (IData)(vlSelf->__PVT__request))) {
            vlSelf->__PVT__grant = 1U;
        }
    }
    vlSelf->__PVT__storage_1_dat0 = vlSelf->__PVT__storage_1
        [vlSelf->__PVT__uart_rx_fifo_wrport_adr];
    vlSelf->__PVT__storage_dat0 = vlSelf->__PVT__storage
        [vlSelf->__PVT__uart_tx_fifo_wrport_adr];
    if (vlSelf->__PVT__uart_tx_fifo_do_read) {
        vlSelf->__PVT__storage_dat1 = vlSelf->__PVT__storage
            [vlSelf->__PVT__uart_tx_fifo_consume];
    }
    vlSelf->__PVT__uart_rxfull_re = vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_re;
    vlSelf->__PVT__timer_status_re = vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_re;
    vlSelf->__PVT__timer_value_re = vlSelf->__PVT__csr_bankarray_csrbank1_value_re;
    vlSelf->__PVT__uart_rxempty_re = vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_re;
    vlSelf->__PVT__uart_txfull_re = vlSelf->__PVT__csr_bankarray_csrbank2_txfull_re;
    vlSelf->__PVT__uart_status_re = vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_re;
    vlSelf->__PVT__uart_txempty_re = vlSelf->__PVT__csr_bankarray_csrbank2_txempty_re;
    vlSelf->__PVT__bus_errors_re = vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_re;
    vlSelf->__PVT__timer_enable_re = vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_re;
    vlSelf->__PVT__timer_reload_re = vlSelf->__PVT__csr_bankarray_csrbank1_reload0_re;
    vlSelf->__PVT__timer_en_re = vlSelf->__PVT__csr_bankarray_csrbank1_en0_re;
    vlSelf->__PVT__timer_load_re = vlSelf->__PVT__csr_bankarray_csrbank1_load0_re;
    vlSelf->__PVT__uart_enable_re = vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_re;
    vlSelf->__PVT__scratch_re = vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_re;
    if (vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_re) {
        vlSelf->__PVT__timer_pending_re = 1U;
        vlSelf->__PVT__reset_re = vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re;
        vlSelf->__PVT__uart_pending_re = vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re;
        vlSelf->__PVT__timer_pending_r = (1U & vlSelf->__PVT__interface1_dat_w);
    } else {
        vlSelf->__PVT__timer_pending_re = 0U;
        vlSelf->__PVT__reset_re = vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re;
        vlSelf->__PVT__uart_pending_re = vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re;
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re) {
        vlSelf->__PVT__uart_pending_r = (3U & vlSelf->__PVT__interface1_dat_w);
    }
    vlSelf->__PVT__mem_adr0 = (0x3fU & (IData)(vlSelf->__PVT__interface1_adr));
    vlSelf->__PVT__csr_bankarray_sel_r = (1U == (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__interface1_adr) 
                                                    >> 9U)));
    vlSelf->__PVT__slave_sel_r = vlSelf->__PVT__slave_sel;
    vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSelf->__PVT__interface1_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) {
            vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__reset_storage;
        } else if ((1U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) {
            vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__scratch_storage;
        } else if ((2U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) {
            vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__bus_errors;
        }
    }
    vlSelf->__PVT__main_ram_adr0 = (0x1ffffffU & vlSelf->__PVT__self0);
    vlSelf->__PVT__sram_adr0 = (0x7ffU & vlSelf->__PVT__self0);
    vlSelf->__PVT__rom_dat0 = vlSelf->__PVT__rom[(0x7fffU 
                                                  & vlSelf->__PVT__self0)];
    vlSelf->__PVT__state = vlSelf->__PVT__next_state;
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__Vdly__ram_bus_ack = 0U;
        vlSelf->__PVT__grant = 0U;
        vlSelf->__PVT__uart_rxfull_re = 0U;
        vlSelf->__PVT__timer_status_re = 0U;
        vlSelf->__PVT__timer_value_re = 0U;
        vlSelf->__PVT__uart_rxempty_re = 0U;
        vlSelf->__PVT__uart_txfull_re = 0U;
        vlSelf->__PVT__uart_status_re = 0U;
        vlSelf->__PVT__uart_txempty_re = 0U;
        vlSelf->__PVT__bus_errors_re = 0U;
        vlSelf->__PVT__timer_enable_re = 0U;
        vlSelf->__PVT__timer_reload_re = 0U;
        vlSelf->__PVT__timer_en_re = 0U;
        vlSelf->__PVT__timer_load_re = 0U;
        vlSelf->__PVT__uart_enable_re = 0U;
        vlSelf->__PVT__scratch_re = 0U;
        vlSelf->__PVT__timer_pending_re = 0U;
        vlSelf->__PVT__reset_re = 0U;
        vlSelf->__PVT__uart_pending_re = 0U;
        vlSelf->__PVT__timer_pending_r = 0U;
        vlSelf->__PVT__uart_pending_r = 0U;
        vlSelf->__PVT__csr_bankarray_sel_r = 0U;
        vlSelf->__PVT__slave_sel_r = 0U;
        vlSelf->__PVT__state = 0U;
    }
    vlSelf->__PVT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSelf->__PVT__interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr))))) {
            vlSelf->__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                    ? (0xffU & (IData)(vlSelf->__PVT__storage_1_dat1))
                    : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                        ? (0x10U == (IData)(vlSelf->__PVT__uart_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                            ? (1U & (~ (IData)(vlSelf->__PVT__uart_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                                ? (IData)(vlSelf->__PVT__uart_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                                    ? (IData)(vlSelf->__PVT__uart_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelf->__PVT__interface1_adr)))
                                        ? (IData)(vlSelf->__PVT__uart_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelf->__PVT__interface1_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSelf->__PVT__uart_tx_fifo_readable)))
                                            : (0x10U 
                                               == (IData)(vlSelf->__PVT__uart_rx_fifo_level0)))))))));
        }
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__4(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__4\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_hf5eda57e__0;
    __VdfgTmp_hf5eda57e__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha7d9b28e__0;
    __VdfgTmp_ha7d9b28e__0 = 0;
    // Body
    if (vlSelf->__PVT__csr_bankarray_csrbank1_en0_re) {
        vlSelf->__PVT__timer_en_storage = (1U & vlSelf->__PVT__interface1_dat_w);
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank1_reload0_re) {
        vlSelf->__PVT__timer_reload_storage = vlSelf->__PVT__interface1_dat_w;
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank1_load0_re) {
        vlSelf->__PVT__timer_load_storage = vlSelf->__PVT__interface1_dat_w;
    }
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__PVT__timer_update_value_re = 0U;
        vlSelf->__PVT__timer_en_storage = 0U;
        vlSelf->__PVT__timer_reload_storage = 0U;
        vlSelf->__PVT__timer_load_storage = 0U;
    }
    __VdfgTmp_hf5eda57e__0 = ((IData)(vlSelf->__PVT__interface0_ram_bus_cyc) 
                              & (IData)(vlSelf->__VdfgTmp_hc57f6bfd__0));
    __VdfgTmp_ha7d9b28e__0 = ((IData)(vlSelf->__PVT__interface1_ram_bus_cyc) 
                              & (IData)(vlSelf->__VdfgTmp_hc57f6bfd__0));
    if (vlSelf->__PVT__state) {
        vlSelf->__PVT__next_state = 1U;
        vlSelf->__PVT__next_state = 0U;
    } else {
        vlSelf->__PVT__next_state = 0U;
        if (vlSelf->__VdfgExtracted_h34b3db20__0) {
            vlSelf->__PVT__next_state = 1U;
        }
    }
    vlSelf->__PVT__interface1_re = 0U;
    vlSelf->__PVT__interface1_we = 0U;
    vlSelf->__PVT__interface1_adr = 0U;
    vlSelf->__PVT__uart_tx_fifo_do_read = ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)) 
                                           & (IData)(vlSelf->__PVT__uart_tx_fifo_syncfifo_re));
    vlSelf->__PVT__uart_rx_fifo_do_read = ((0U != (IData)(vlSelf->__PVT__uart_rx_fifo_level0)) 
                                           & (IData)(vlSelf->__PVT__uart_rx_fifo_syncfifo_re));
    vlSelf->__PVT__uart_status_status = vlSelf->__VdfgExtracted_ha83cb52b__0;
    vlSelf->__PVT__uart_pending_status = vlSelf->__VdfgExtracted_ha83cb52b__0;
    vlSelf->__PVT__timer_value = vlSelf->__Vdly__timer_value;
    vlSelf->__PVT__interface1_dat_w = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__state)))) {
        if (vlSelf->__VdfgExtracted_h34b3db20__0) {
            vlSelf->__PVT__interface1_re = ((~ (IData)(vlSelf->__PVT__self5)) 
                                            & (0U != (IData)(vlSelf->__PVT__self2)));
            vlSelf->__PVT__interface1_we = ((IData)(vlSelf->__PVT__self5) 
                                            & (0U != (IData)(vlSelf->__PVT__self2)));
            vlSelf->__PVT__interface1_adr = (0x3fffU 
                                             & vlSelf->__PVT__self0);
        }
        vlSelf->__PVT__interface1_dat_w = vlSelf->__PVT__self1;
    }
    vlSelf->__PVT__sram0_we = ((0xfffffff8U & (((IData)(__VdfgTmp_hf5eda57e__0) 
                                                << 3U) 
                                               & (IData)(vlSelf->__PVT__self2))) 
                               | ((0xfffffffcU & (((IData)(__VdfgTmp_hf5eda57e__0) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->__PVT__self2))) 
                                  | (3U & ((- (IData)((IData)(__VdfgTmp_hf5eda57e__0))) 
                                           & (IData)(vlSelf->__PVT__self2)))));
    vlSelf->__PVT__sram1_we = ((0xfffffff8U & (((IData)(__VdfgTmp_ha7d9b28e__0) 
                                                << 3U) 
                                               & (IData)(vlSelf->__PVT__self2))) 
                               | ((0xfffffffcU & (((IData)(__VdfgTmp_ha7d9b28e__0) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->__PVT__self2))) 
                                  | (3U & ((- (IData)((IData)(__VdfgTmp_ha7d9b28e__0))) 
                                           & (IData)(vlSelf->__PVT__self2)))));
    vlSelf->__VdfgExtracted_h3483df38__0 = (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h347da0bd__0 = (IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h347df110__0 = (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h8553e3f3__0 = (IData)(
                                                   (0x400U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h853cba48__0 = (IData)(
                                                   (0x401U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h853caf59__0 = (IData)(
                                                   (0x402U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h853d24a6__0 = (IData)(
                                                   (0x403U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h853c8a77__0 = (IData)(
                                                   (0x404U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h859ddeff__0 = (IData)(
                                                   (0x405U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h859e558e__0 = (IData)(
                                                   (0x406U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_h853d4c21__0 = (IData)(
                                                   (0x407U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbece7cd5__0 = (IData)(
                                                   (0x600U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbec9f606__0 = (IData)(
                                                   (0x601U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbec9c775__0 = (IData)(
                                                   (0x602U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbec53ce8__0 = (IData)(
                                                   (0x603U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbecb2757__0 = (IData)(
                                                   (0x604U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbec47a0f__0 = (IData)(
                                                   (0x605U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbec80b00__0 = (IData)(
                                                   (0x606U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
    vlSelf->__VdfgExtracted_hbec565ad__0 = (IData)(
                                                   (0x607U 
                                                    == (IData)(vlSelf->__PVT__interface1_adr)));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__5(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__5\n"); );
    // Body
    vlSelf->__PVT__interrupt = 0U;
    vlSelf->__PVT__interrupt = ((0xfffffffcU & vlSelf->__PVT__interrupt) 
                                | ((((IData)(vlSelf->__PVT__timer_enable_storage) 
                                     & (IData)(vlSelf->__PVT__timer_zero_pending)) 
                                    << 1U) | (1U & 
                                              (((IData)(vlSelf->__PVT__uart_pending_status) 
                                                & (IData)(vlSelf->__PVT__uart_enable_storage)) 
                                               | (((IData)(vlSelf->__PVT__uart_pending_status) 
                                                   & (IData)(vlSelf->__PVT__uart_enable_storage)) 
                                                  >> 1U)))));
    vlSelf->__PVT__int_rst = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_we = 0U;
    if (vlSelf->__VdfgExtracted_h3483df38__0) {
        vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank0_reset0_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_re = 0U;
    if (vlSelf->__VdfgExtracted_h347da0bd__0) {
        vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_we = 0U;
    if (vlSelf->__VdfgExtracted_h347df110__0) {
        vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_load0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_load0_re = 0U;
    if (vlSelf->__VdfgExtracted_h8553e3f3__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_load0_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank1_load0_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_reload0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_reload0_we = 0U;
    if (vlSelf->__VdfgExtracted_h853cba48__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_reload0_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank1_reload0_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_en0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_en0_we = 0U;
    if (vlSelf->__VdfgExtracted_h853caf59__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_en0_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank1_en0_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_re = 0U;
    if (vlSelf->__VdfgExtracted_h853d24a6__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_value_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_value_we = 0U;
    if (vlSelf->__VdfgExtracted_h853c8a77__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_value_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank1_value_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_we = 0U;
    if (vlSelf->__VdfgExtracted_h859ddeff__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_re = 0U;
    if (vlSelf->__VdfgExtracted_h859e558e__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_we = 0U;
    if (vlSelf->__VdfgExtracted_h853d4c21__0) {
        vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__uart_rxtx_we = 0U;
    vlSelf->__PVT__uart_rxtx_re = 0U;
    if (vlSelf->__VdfgExtracted_hbece7cd5__0) {
        vlSelf->__PVT__uart_rxtx_we = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__uart_rxtx_re = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_txfull_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_txfull_re = 0U;
    if (vlSelf->__VdfgExtracted_hbec9f606__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_txfull_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank2_txfull_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_re = 0U;
    if (vlSelf->__VdfgExtracted_hbec9c775__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_we = 0U;
    if (vlSelf->__VdfgExtracted_hbec53ce8__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_we = 0U;
    if (vlSelf->__VdfgExtracted_hbecb2757__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_re = 0U;
    if (vlSelf->__VdfgExtracted_hbec47a0f__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_we 
            = vlSelf->__PVT__interface1_re;
        vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_re 
            = vlSelf->__PVT__interface1_we;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_txempty_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_txempty_we = 0U;
    if (vlSelf->__VdfgExtracted_hbec80b00__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_txempty_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank2_txempty_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_we = 0U;
    if (vlSelf->__VdfgExtracted_hbec565ad__0) {
        vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_we 
            = vlSelf->__PVT__interface1_re;
    }
    vlSelf->__Vcellinp__VexRiscv__reset = (((IData)(vlSelf->__PVT__int_rst) 
                                            | (IData)(vlSelf->__PVT__soc_rst)) 
                                           | ((IData)(vlSelf->__PVT__reset_storage) 
                                              >> 1U));
}
