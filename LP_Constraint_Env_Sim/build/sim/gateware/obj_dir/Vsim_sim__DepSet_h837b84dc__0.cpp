// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___ico_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ico_sequent__TOP__sim__0\n"); );
    // Body
    vlSelf->__PVT__uart_tx_fifo_syncfifo_re = ((0U 
                                                != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)) 
                                               & ((~ (IData)(vlSelf->__PVT__uart_tx_fifo_readable)) 
                                                  | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelf->__PVT__uart_tx_fifo_do_read = ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)) 
                                           & (IData)(vlSelf->__PVT__uart_tx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__0\n"); );
    // Body
    vlSelf->__Vdlyvset__storage_1__v0 = 0U;
    vlSelf->__Vdlyvset__storage__v0 = 0U;
    vlSelf->__Vdly__bus_errors = vlSelf->__PVT__bus_errors;
    vlSelf->__Vdly__uart_tx_fifo_consume = vlSelf->__PVT__uart_tx_fifo_consume;
    vlSelf->__Vdly__uart_rx_fifo_consume = vlSelf->__PVT__uart_rx_fifo_consume;
    vlSelf->__Vdly__uart_rx_fifo_level0 = vlSelf->__PVT__uart_rx_fifo_level0;
    vlSelf->__Vdly__uart_tx_fifo_level0 = vlSelf->__PVT__uart_tx_fifo_level0;
    vlSelf->__Vdly__interface1_ram_bus_ack = vlSelf->__PVT__interface1_ram_bus_ack;
    vlSelf->__Vdly__interface0_ram_bus_ack = vlSelf->__PVT__interface0_ram_bus_ack;
    vlSelf->__Vdly__timer_value = vlSelf->__PVT__timer_value;
    vlSelf->__Vdlyvset__sram__v0 = 0U;
    vlSelf->__Vdlyvset__sram__v1 = 0U;
    vlSelf->__Vdlyvset__sram__v2 = 0U;
    vlSelf->__Vdlyvset__sram__v3 = 0U;
    vlSelf->__Vdlyvset__main_ram__v0 = 0U;
    vlSelf->__Vdlyvset__main_ram__v1 = 0U;
    vlSelf->__Vdlyvset__main_ram__v2 = 0U;
    vlSelf->__Vdlyvset__main_ram__v3 = 0U;
    vlSelf->__Vdly__ram_bus_ack = vlSelf->__PVT__ram_bus_ack;
    vlSelf->__PVT__mem_write_block__DOT__we_index = 4U;
    vlSelf->__PVT__mem_write_block_1__DOT__we_index_1 = 4U;
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & 
         (0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_level0)))) {
        vlSelf->__Vdlyvval__storage_1__v0 = vlSymsp->TOP.serial_sink_data;
        vlSelf->__Vdlyvset__storage_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage_1__v0 = vlSelf->__PVT__uart_rx_fifo_wrport_adr;
        vlSelf->__PVT__uart_rx_fifo_produce = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__uart_rx_fifo_produce)));
    }
    if (((IData)(vlSelf->__PVT__uart_rxtx_re) & (0x10U 
                                                 != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)))) {
        vlSelf->__Vdlyvval__storage__v0 = (0xffU & vlSelf->__PVT__interface1_dat_w);
        vlSelf->__Vdlyvset__storage__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage__v0 = vlSelf->__PVT__uart_tx_fifo_wrport_adr;
        vlSelf->__PVT__uart_tx_fifo_produce = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__uart_tx_fifo_produce)));
    }
    if ((0xffffffffU != vlSelf->__PVT__bus_errors)) {
        if (vlSelf->__PVT__error) {
            vlSelf->__Vdly__bus_errors = ((IData)(1U) 
                                          + vlSelf->__PVT__bus_errors);
        }
    }
    if (vlSelf->__PVT__uart_tx_fifo_do_read) {
        vlSelf->__Vdly__uart_tx_fifo_consume = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__uart_tx_fifo_consume)));
    }
    if (vlSelf->__PVT__uart_rx_fifo_do_read) {
        vlSelf->__Vdly__uart_rx_fifo_consume = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__uart_rx_fifo_consume)));
    }
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & (IData)(vlSelf->serial_sink_ready))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_fifo_do_read)))) {
            vlSelf->__Vdly__uart_rx_fifo_level0 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__uart_rx_fifo_level0)));
        }
    } else if (vlSelf->__PVT__uart_rx_fifo_do_read) {
        vlSelf->__Vdly__uart_rx_fifo_level0 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__uart_rx_fifo_level0) 
                                                  - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__uart_rxtx_re) & (IData)(vlSelf->__PVT__uart_tx0))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_fifo_do_read)))) {
            vlSelf->__Vdly__uart_tx_fifo_level0 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__uart_tx_fifo_level0)));
        }
    } else if (vlSelf->__PVT__uart_tx_fifo_do_read) {
        vlSelf->__Vdly__uart_tx_fifo_level0 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__uart_tx_fifo_level0) 
                                                  - (IData)(1U)));
    }
    vlSelf->__Vdly__interface1_ram_bus_ack = 0U;
    if ((((IData)(vlSelf->__PVT__interface1_ram_bus_cyc) 
          & (IData)(vlSelf->__PVT__self4)) & (~ (IData)(vlSelf->__PVT__interface1_ram_bus_ack)))) {
        vlSelf->__Vdly__interface1_ram_bus_ack = 1U;
    }
    vlSelf->__Vdly__interface0_ram_bus_ack = 0U;
    if ((((IData)(vlSelf->__PVT__interface0_ram_bus_cyc) 
          & (IData)(vlSelf->__PVT__self4)) & (~ (IData)(vlSelf->__PVT__interface0_ram_bus_ack)))) {
        vlSelf->__Vdly__interface0_ram_bus_ack = 1U;
    }
    if (((IData)(vlSelf->__PVT__self4) & ((~ (IData)(vlSelf->__PVT__shared_ack)) 
                                          & (IData)(vlSelf->__PVT__self3)))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__done)))) {
            vlSelf->__PVT__count = (0xfffffU & (vlSelf->__PVT__count 
                                                - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__count = 0xf4240U;
    }
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__Vdly__bus_errors = 0U;
        vlSelf->__Vdly__uart_tx_fifo_consume = 0U;
        vlSelf->__Vdly__uart_rx_fifo_consume = 0U;
        vlSelf->__PVT__uart_rx_fifo_produce = 0U;
        vlSelf->__PVT__uart_tx_fifo_produce = 0U;
        vlSelf->__Vdly__uart_rx_fifo_level0 = 0U;
        vlSelf->__Vdly__uart_tx_fifo_level0 = 0U;
        vlSelf->__Vdly__interface1_ram_bus_ack = 0U;
        vlSelf->__Vdly__interface0_ram_bus_ack = 0U;
        vlSelf->__PVT__count = 0xf4240U;
    }
    if ((1U & (IData)(vlSelf->__PVT__sram0_we))) {
        vlSelf->__Vdlyvval__sram__v0 = (0xffU & vlSelf->__PVT__self1);
        vlSelf->__Vdlyvset__sram__v0 = 1U;
        vlSelf->__Vdlyvlsb__sram__v0 = 0U;
        vlSelf->__Vdlyvdim0__sram__v0 = (0x7ffU & vlSelf->__PVT__self0);
    }
    if ((2U & (IData)(vlSelf->__PVT__sram0_we))) {
        vlSelf->__Vdlyvval__sram__v1 = (0xffU & (vlSelf->__PVT__self1 
                                                 >> 8U));
        vlSelf->__Vdlyvset__sram__v1 = 1U;
        vlSelf->__Vdlyvlsb__sram__v1 = 8U;
        vlSelf->__Vdlyvdim0__sram__v1 = (0x7ffU & vlSelf->__PVT__self0);
    }
    if ((4U & (IData)(vlSelf->__PVT__sram0_we))) {
        vlSelf->__Vdlyvval__sram__v2 = (0xffU & (vlSelf->__PVT__self1 
                                                 >> 0x10U));
        vlSelf->__Vdlyvset__sram__v2 = 1U;
        vlSelf->__Vdlyvlsb__sram__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__sram__v2 = (0x7ffU & vlSelf->__PVT__self0);
    }
    if ((8U & (IData)(vlSelf->__PVT__sram0_we))) {
        vlSelf->__Vdlyvval__sram__v3 = (vlSelf->__PVT__self1 
                                        >> 0x18U);
        vlSelf->__Vdlyvset__sram__v3 = 1U;
        vlSelf->__Vdlyvlsb__sram__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__sram__v3 = (0x7ffU & vlSelf->__PVT__self0);
    }
    if ((1U & (IData)(vlSelf->__PVT__sram1_we))) {
        vlSelf->__Vlvbound_hf9c541d9__0 = (0xffU & vlSelf->__PVT__self1);
        if ((0x18fffffU >= (0x1ffffffU & vlSelf->__PVT__self0))) {
            vlSelf->__Vdlyvval__main_ram__v0 = vlSelf->__Vlvbound_hf9c541d9__0;
            vlSelf->__Vdlyvset__main_ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__main_ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__main_ram__v0 = (0x1ffffffU 
                                                 & vlSelf->__PVT__self0);
        }
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__2\n"); );
    // Body
    vlSelf->__PVT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSelf->__PVT__interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr))))) {
            vlSelf->__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                    ? vlSelf->__PVT__timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                        ? vlSelf->__PVT__timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                            ? (IData)(vlSelf->__PVT__timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                                ? (IData)(vlSelf->__PVT__timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSelf->__PVT__interface1_adr)))
                                    ? vlSelf->__PVT__timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelf->__PVT__interface1_adr)))
                                        ? (0U == vlSelf->__PVT__timer_value)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelf->__PVT__interface1_adr)))
                                            ? (IData)(vlSelf->__PVT__timer_zero_pending)
                                            : (IData)(vlSelf->__PVT__timer_enable_storage))))))));
        }
    }
    vlSelf->__PVT__interface1_ram_bus_ack = vlSelf->__Vdly__interface1_ram_bus_ack;
    vlSelf->__PVT__interface0_ram_bus_ack = vlSelf->__Vdly__interface0_ram_bus_ack;
    if (vlSelf->__Vdlyvset__sram__v0) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v0))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v0))));
    }
    if (vlSelf->__Vdlyvset__sram__v1) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v1))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v1))));
    }
    if (vlSelf->__Vdlyvset__sram__v2) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v2))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v2))));
    }
    if (vlSelf->__Vdlyvset__sram__v3) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v3))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v3))));
    }
    if (vlSelf->__Vdlyvset__main_ram__v0) {
        vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__main_ram__v0))) 
                & vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__main_ram__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__main_ram__v0))));
    }
    if (vlSelf->__Vdlyvset__main_ram__v1) {
        vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__main_ram__v1))) 
                & vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__main_ram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__main_ram__v1))));
    }
    if (vlSelf->__Vdlyvset__main_ram__v2) {
        vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__main_ram__v2))) 
                & vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__main_ram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__main_ram__v2))));
    }
    if (vlSelf->__Vdlyvset__main_ram__v3) {
        vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__main_ram__v3))) 
                & vlSelf->__PVT__main_ram[vlSelf->__Vdlyvdim0__main_ram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__main_ram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__main_ram__v3))));
    }
    vlSelf->__PVT__ram_bus_ack = vlSelf->__Vdly__ram_bus_ack;
    vlSelf->__PVT__request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                               << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSelf->__PVT__uart_tx_fifo_consume = vlSelf->__Vdly__uart_tx_fifo_consume;
    if (vlSelf->__Vdlyvset__storage__v0) {
        vlSelf->__PVT__storage[vlSelf->__Vdlyvdim0__storage__v0] 
            = vlSelf->__Vdlyvval__storage__v0;
    }
    vlSelf->__PVT__bus_errors = vlSelf->__Vdly__bus_errors;
    vlSelf->__PVT__uart_rx_fifo_level0 = vlSelf->__Vdly__uart_rx_fifo_level0;
    vlSelf->__PVT__uart_tx_fifo_level0 = vlSelf->__Vdly__uart_tx_fifo_level0;
    vlSelf->__PVT__uart_rx_fifo_wrport_adr = vlSelf->__PVT__uart_rx_fifo_produce;
    vlSelf->__PVT__uart_tx_fifo_wrport_adr = vlSelf->__PVT__uart_tx_fifo_produce;
    vlSelf->__PVT__error = 0U;
    if ((0U == vlSelf->__PVT__count)) {
        vlSelf->__PVT__error = 1U;
        vlSelf->__PVT__done = 1U;
    } else {
        vlSelf->__PVT__done = 0U;
    }
    if (vlSelf->__PVT__grant) {
        vlSelf->__PVT__self1 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSelf->__PVT__self6 = ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                 ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                     ? 7U : 2U) : 0U);
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
        vlSelf->__PVT__self2 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                 : 0xfU);
    } else {
        vlSelf->__PVT__self1 = 0U;
        vlSelf->__PVT__self6 = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                 ? 7U : 2U);
        vlSelf->__PVT__self0 = (0x3fffffffU & ((0x3ffffff8U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 2U)) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
        vlSelf->__PVT__self2 = 0xfU;
    }
    vlSelf->__PVT__self5 = ((IData)(vlSelf->__PVT__grant) 
                            && (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__3(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__3\n"); );
    // Body
    if (vlSelf->__PVT__grant) {
        vlSelf->__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelf->__PVT__self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSelf->__PVT__self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSelf->__PVT__self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
    }
    vlSelf->__PVT__uart_tx_clear = 0U;
    if (((IData)(vlSelf->__PVT__uart_pending_re) & (IData)(vlSelf->__PVT__uart_pending_r))) {
        vlSelf->__PVT__uart_tx_clear = 1U;
    }
    vlSelf->__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->__PVT__csr_bankarray_sel_r) {
        vlSelf->__PVT__csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSelf->__PVT__mem_adr0))
                ? vlSelf->__PVT__mem[vlSelf->__PVT__mem_adr0]
                : 0U);
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_re) {
        vlSelf->__PVT__scratch_storage = vlSelf->__PVT__interface1_dat_w;
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re) {
        vlSelf->__PVT__reset_storage = (3U & vlSelf->__PVT__interface1_dat_w);
    }
    vlSelf->__PVT__interface0_ack = 0U;
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_level0));
    vlSelf->__PVT__uart_tx0 = (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_level0));
    if (vlSelf->__PVT__uart_rx_fifo_do_read) {
        vlSelf->__PVT__storage_1_dat1 = vlSelf->__PVT__storage_1
            [vlSelf->__PVT__uart_rx_fifo_consume];
    }
    if (vlSelf->__PVT__uart_tx_fifo_syncfifo_re) {
        vlSelf->__PVT__uart_tx_fifo_readable = 1U;
    } else if (vlSymsp->TOP.serial_source_ready) {
        vlSelf->__PVT__uart_tx_fifo_readable = 0U;
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_re) {
        vlSelf->__PVT__uart_enable_storage = (3U & vlSelf->__PVT__interface1_dat_w);
    }
    if (vlSelf->__PVT__uart_rx_fifo_syncfifo_re) {
        vlSelf->__PVT__uart_rx_fifo_readable = 1U;
    } else if (vlSelf->__PVT__uart_rx_clear) {
        vlSelf->__PVT__uart_rx_fifo_readable = 0U;
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_re) {
        vlSelf->__PVT__timer_update_value_storage = 
            (1U & vlSelf->__PVT__interface1_dat_w);
    }
    if (vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_re) {
        vlSelf->__PVT__timer_enable_storage = (1U & vlSelf->__PVT__interface1_dat_w);
    }
    if (vlSelf->__PVT__timer_zero_clear) {
        vlSelf->__PVT__timer_zero_pending = 0U;
    }
    if (((0U == vlSelf->__PVT__timer_value) & (~ (IData)(vlSelf->__PVT__timer_zero_trigger_d)))) {
        vlSelf->__PVT__timer_zero_pending = 1U;
    }
    vlSelf->__Vdly__timer_value = ((IData)(vlSelf->__PVT__timer_en_storage)
                                    ? ((0U == vlSelf->__PVT__timer_value)
                                        ? vlSelf->__PVT__timer_reload_storage
                                        : (vlSelf->__PVT__timer_value 
                                           - (IData)(1U)))
                                    : vlSelf->__PVT__timer_load_storage);
    if (vlSelf->__PVT__timer_update_value_re) {
        vlSelf->__PVT__timer_value_status = vlSelf->__PVT__timer_value;
    }
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
    vlSelf->__VdfgTmp_hc57f6bfd__0 = ((IData)(vlSelf->__PVT__self4) 
                                      & (IData)(vlSelf->__PVT__self5));
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
    vlSelf->__PVT__uart_rx_fifo_consume = vlSelf->__Vdly__uart_rx_fifo_consume;
    if (vlSelf->__Vdlyvset__storage_1__v0) {
        vlSelf->__PVT__storage_1[vlSelf->__Vdlyvdim0__storage_1__v0] 
            = vlSelf->__Vdlyvval__storage_1__v0;
    }
    vlSelf->__PVT__uart_rx_clear = 0U;
    if (((IData)(vlSelf->__PVT__uart_pending_re) & 
         ((IData)(vlSelf->__PVT__uart_pending_r) >> 1U))) {
        vlSelf->__PVT__uart_rx_clear = 1U;
    }
    vlSelf->__PVT__timer_zero_clear = 0U;
    if (((IData)(vlSelf->__PVT__timer_pending_re) & (IData)(vlSelf->__PVT__timer_pending_r))) {
        vlSelf->__PVT__timer_zero_clear = 1U;
    }
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
        vlSelf->__PVT__shared_ack = 1U;
        vlSelf->__PVT__shared_dat_r = 0xffffffffU;
    }
    vlSelf->__PVT__soc_rst = 0U;
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__PVT__scratch_storage = 0x12345678U;
        vlSelf->__PVT__reset_storage = 0U;
    }
    if (vlSelf->__PVT__reset_re) {
        vlSelf->__PVT__soc_rst = (1U & (IData)(vlSelf->__PVT__reset_storage));
    }
    vlSelf->__PVT__ibus_ack = ((~ (IData)(vlSelf->__PVT__grant)) 
                               & (IData)(vlSelf->__PVT__shared_ack));
    vlSelf->__PVT__dbus_ack = ((IData)(vlSelf->__PVT__grant) 
                               & (IData)(vlSelf->__PVT__shared_ack));
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__PVT__uart_tx_fifo_readable = 0U;
    }
    vlSelf->__PVT__uart_tx_fifo_syncfifo_re = ((0U 
                                                != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)) 
                                               & ((~ (IData)(vlSelf->__PVT__uart_tx_fifo_readable)) 
                                                  | (IData)(vlSymsp->TOP.serial_source_ready)));
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__PVT__uart_enable_storage = 0U;
        vlSelf->__PVT__uart_rx_fifo_readable = 0U;
    }
    vlSelf->__PVT__uart_rx_fifo_syncfifo_re = ((0U 
                                                != (IData)(vlSelf->__PVT__uart_rx_fifo_level0)) 
                                               & ((~ (IData)(vlSelf->__PVT__uart_rx_fifo_readable)) 
                                                  | (IData)(vlSelf->__PVT__uart_rx_clear)));
    vlSelf->__VdfgExtracted_ha83cb52b__0 = (((IData)(vlSelf->__PVT__uart_rx_fifo_readable) 
                                             << 1U) 
                                            | (0x10U 
                                               != (IData)(vlSelf->__PVT__uart_tx_fifo_level0)));
    vlSelf->__PVT__timer_zero_trigger_d = (0U == vlSelf->__PVT__timer_value);
    if (vlSelf->__PVT__int_rst) {
        vlSelf->__PVT__timer_update_value_storage = 0U;
        vlSelf->__PVT__timer_enable_storage = 0U;
        vlSelf->__PVT__timer_zero_pending = 0U;
        vlSelf->__PVT__timer_value_status = 0U;
        vlSelf->__Vdly__timer_value = 0U;
        vlSelf->__PVT__timer_zero_trigger_d = 0U;
    }
    vlSelf->__PVT__timer_update_value_re = vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_re;
}
