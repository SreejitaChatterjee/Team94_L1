// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__0\n"); );
    // Body
    vlSelf->__PVT__error = 0U;
    vlSelf->__PVT__uart_tx_fifo_wrport_adr = vlSelf->__PVT__uart_tx_fifo_produce;
    vlSelf->__PVT__uart_rx_fifo_wrport_adr = vlSelf->__PVT__uart_rx_fifo_produce;
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_level0));
    vlSelf->__PVT__uart_tx0 = (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_level0));
    vlSelf->__PVT__done = (0U == vlSelf->__PVT__count);
    vlSelf->__PVT__uart_tx_clear = 0U;
    if (((IData)(vlSelf->__PVT__uart_pending_re) & (IData)(vlSelf->__PVT__uart_pending_r))) {
        vlSelf->__PVT__uart_tx_clear = 1U;
    }
    vlSelf->__PVT__timer_zero_clear = 0U;
    if (((IData)(vlSelf->__PVT__timer_pending_re) & (IData)(vlSelf->__PVT__timer_pending_r))) {
        vlSelf->__PVT__timer_zero_clear = 1U;
    }
    if (vlSelf->__PVT__grant) {
        vlSelf->__PVT__self1 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSelf->__PVT__self2 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                 : 0xfU);
        vlSelf->__PVT__self0 = (0x3fffffffU & (((5U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                 ? 
                                                ((0xffffffe0U 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                 | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBusWishbone_ADR) 
                                                    << 2U))
                                                 : 
                                                (0xfffffffcU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                               >> 2U));
    } else {
        vlSelf->__PVT__self1 = 0U;
        vlSelf->__PVT__self2 = 0xfU;
        vlSelf->__PVT__self0 = (0x3fffffffU & ((0x3ffffff8U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 2U)) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
    }
    vlSelf->__PVT__soc_rst = 0U;
    if (vlSelf->__PVT__reset_re) {
        vlSelf->__PVT__soc_rst = (1U & (IData)(vlSelf->__PVT__reset_storage));
    }
    vlSelf->__PVT__uart_tx_fifo_syncfifo_re = ((0U 
                                                != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)) 
                                               & ((~ (IData)(vlSelf->__PVT__uart_tx_fifo_readable)) 
                                                  | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelf->__PVT__uart_rx_clear = 0U;
    if (((IData)(vlSelf->__PVT__uart_pending_re) & 
         ((IData)(vlSelf->__PVT__uart_pending_r) >> 1U))) {
        vlSelf->__PVT__uart_rx_clear = 1U;
    }
    vlSelf->__VdfgExtracted_ha83cb52b__0 = (((IData)(vlSelf->__PVT__uart_rx_fifo_readable) 
                                             << 1U) 
                                            | (0x10U 
                                               != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)));
    vlSelf->__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->__PVT__csr_bankarray_sel_r) {
        vlSelf->__PVT__csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSelf->__PVT__mem_adr0))
                ? vlSelf->__PVT__mem[vlSelf->__PVT__mem_adr0]
                : 0U);
    }
    vlSelf->__PVT__interface0_ack = 0U;
    vlSelf->__PVT__self5 = ((IData)(vlSelf->__PVT__grant) 
                            && (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    vlSelf->__PVT__interface1_dat_w = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__state)))) {
        vlSelf->__PVT__interface1_dat_w = vlSelf->__PVT__self1;
    }
    vlSelf->__Vcellinp__VexRiscv__reset = (((IData)(vlSelf->__PVT__int_rst) 
                                            | (IData)(vlSelf->__PVT__soc_rst)) 
                                           | ((IData)(vlSelf->__PVT__reset_storage) 
                                              >> 1U));
    vlSelf->__PVT__uart_tx_fifo_do_read = ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)) 
                                           & (IData)(vlSelf->__PVT__uart_tx_fifo_syncfifo_re));
    vlSelf->__PVT__uart_rx_fifo_syncfifo_re = ((0U 
                                                != (IData)(vlSelf->__PVT__uart_rx_fifo_level0)) 
                                               & ((~ (IData)(vlSelf->__PVT__uart_rx_fifo_readable)) 
                                                  | (IData)(vlSelf->__PVT__uart_rx_clear)));
    vlSelf->__PVT__uart_status_status = vlSelf->__VdfgExtracted_ha83cb52b__0;
    vlSelf->__PVT__uart_pending_status = vlSelf->__VdfgExtracted_ha83cb52b__0;
    vlSelf->__PVT__interface0_dat_r = 0U;
    if (vlSelf->__PVT__state) {
        vlSelf->__PVT__interface0_ack = 1U;
        vlSelf->__PVT__interface0_dat_r = (vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                                           | (vlSelf->__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                                              | (vlSelf->__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                                                 | vlSelf->__PVT__csr_bankarray_sram_bus_dat_r)));
    }
    vlSelf->__PVT__shared_ack = ((((IData)(vlSelf->__PVT__ram_bus_ack) 
                                   | (IData)(vlSelf->__PVT__interface0_ram_bus_ack)) 
                                  | (IData)(vlSelf->__PVT__interface1_ram_bus_ack)) 
                                 | (IData)(vlSelf->__PVT__interface0_ack));
    vlSelf->__PVT__slave_sel = ((((0xf000U == (0xffffU 
                                               & (vlSelf->__PVT__self0 
                                                  >> 0xeU))) 
                                  << 3U) | ((8U == 
                                             (0x1fU 
                                              & (vlSelf->__PVT__self0 
                                                 >> 0x19U))) 
                                            << 2U)) 
                                | (((0x8000U == (0x7ffffU 
                                                 & (vlSelf->__PVT__self0 
                                                    >> 0xbU))) 
                                    << 1U) | (0U == 
                                              (0x7fffU 
                                               & (vlSelf->__PVT__self0 
                                                  >> 0xfU)))));
    vlSelf->__PVT__uart_rx_fifo_do_read = ((0U != (IData)(vlSelf->__PVT__uart_rx_fifo_level0)) 
                                           & (IData)(vlSelf->__PVT__uart_rx_fifo_syncfifo_re));
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
    vlSelf->__PVT__shared_dat_r = (((((- (IData)((1U 
                                                  & (IData)(vlSelf->__PVT__slave_sel_r)))) 
                                      & vlSelf->__PVT__rom_dat0) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__slave_sel_r) 
                                                       >> 1U)))) 
                                        & vlSelf->__PVT__sram
                                        [vlSelf->__PVT__sram_adr0])) 
                                    | ((- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__slave_sel_r) 
                                                      >> 2U)))) 
                                       & ((0x18fffffU 
                                           >= vlSelf->__PVT__main_ram_adr0)
                                           ? vlSelf->__PVT__main_ram
                                          [vlSelf->__PVT__main_ram_adr0]
                                           : 0U))) 
                                   | ((- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__slave_sel_r) 
                                                     >> 3U)))) 
                                      & vlSelf->__PVT__interface0_dat_r));
    if ((0U == vlSelf->__PVT__count)) {
        vlSelf->__PVT__error = 1U;
        vlSelf->__PVT__shared_ack = 1U;
        vlSelf->__PVT__shared_dat_r = 0xffffffffU;
    }
    vlSelf->__PVT__ibus_ack = ((~ (IData)(vlSelf->__PVT__grant)) 
                               & (IData)(vlSelf->__PVT__shared_ack));
    vlSelf->__PVT__dbus_ack = ((IData)(vlSelf->__PVT__grant) 
                               & (IData)(vlSelf->__PVT__shared_ack));
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_hf5eda57e__0;
    __VdfgTmp_hf5eda57e__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha7d9b28e__0;
    __VdfgTmp_ha7d9b28e__0 = 0;
    // Body
    if (vlSelf->__PVT__grant) {
        vlSelf->__PVT__self6 = ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                 ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                     ? 7U : 2U) : 0U);
        vlSelf->__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelf->__PVT__self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSelf->__PVT__self6 = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                 ? 7U : 2U);
        vlSelf->__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSelf->__PVT__self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
    }
    vlSelf->__PVT__request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                               << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSelf->__VdfgTmp_hc57f6bfd__0 = ((IData)(vlSelf->__PVT__self4) 
                                      & (IData)(vlSelf->__PVT__self5));
    vlSelf->__PVT__interface0_ram_bus_cyc = ((IData)(vlSelf->__PVT__self3) 
                                             & ((IData)(vlSelf->__PVT__slave_sel) 
                                                >> 1U));
    vlSelf->__PVT__interface1_ram_bus_cyc = ((IData)(vlSelf->__PVT__self3) 
                                             & ((IData)(vlSelf->__PVT__slave_sel) 
                                                >> 2U));
    vlSelf->__VdfgExtracted_h34b3db20__0 = (((IData)(vlSelf->__PVT__self3) 
                                             & ((IData)(vlSelf->__PVT__slave_sel) 
                                                >> 3U)) 
                                            & (IData)(vlSelf->__PVT__self4));
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
    if ((1U & (~ (IData)(vlSelf->__PVT__state)))) {
        if (vlSelf->__VdfgExtracted_h34b3db20__0) {
            vlSelf->__PVT__interface1_re = ((~ (IData)(vlSelf->__PVT__self5)) 
                                            & (0U != (IData)(vlSelf->__PVT__self2)));
            vlSelf->__PVT__interface1_we = ((IData)(vlSelf->__PVT__self5) 
                                            & (0U != (IData)(vlSelf->__PVT__self2)));
            vlSelf->__PVT__interface1_adr = (0x3fffU 
                                             & vlSelf->__PVT__self0);
        }
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
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_we = 0U;
    if (vlSelf->__VdfgExtracted_h3483df38__0) {
        vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re 
            = vlSelf->__PVT__interface1_we;
        vlSelf->__PVT__csr_bankarray_csrbank0_reset0_we 
            = vlSelf->__PVT__interface1_re;
    }
}
