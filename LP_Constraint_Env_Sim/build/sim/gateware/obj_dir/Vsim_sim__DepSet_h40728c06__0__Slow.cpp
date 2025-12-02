// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim\n"); );
    // Body
    vlSelf->__PVT__bus_errors = 0U;
    vlSelf->__PVT__bus_errors_re = 0U;
    vlSelf->__PVT__count = 0xf4240U;
    vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_en0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_en0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_load0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_load0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_reload0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_reload0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_value_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank1_value_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_txempty_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_txempty_we = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_txfull_re = 0U;
    vlSelf->__PVT__csr_bankarray_csrbank2_txfull_we = 0U;
    vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSelf->__PVT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSelf->__PVT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSelf->__PVT__csr_bankarray_sel_r = 0U;
    vlSelf->__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    vlSelf->__PVT__error = 0U;
    vlSelf->__PVT__grant = 0U;
    vlSelf->__PVT__int_rst = 1U;
    vlSelf->__PVT__interface0_ack = 0U;
    vlSelf->__PVT__interface0_dat_r = 0U;
    vlSelf->__PVT__interface0_ram_bus_ack = 0U;
    vlSelf->__PVT__interface1_adr = 0U;
    vlSelf->__PVT__interface1_dat_w = 0U;
    vlSelf->__PVT__interface1_ram_bus_ack = 0U;
    vlSelf->__PVT__interface1_re = 0U;
    vlSelf->__PVT__interface1_we = 0U;
    vlSelf->__PVT__interrupt = 0U;
    vlSelf->__PVT__next_state = 0U;
    vlSelf->__PVT__ram_bus_ack = 0U;
    vlSelf->__PVT__reset_re = 0U;
    vlSelf->__PVT__reset_storage = 0U;
    vlSelf->__PVT__scratch_re = 0U;
    vlSelf->__PVT__scratch_storage = 0x12345678U;
    vlSelf->__PVT__self0 = 0U;
    vlSelf->__PVT__self1 = 0U;
    vlSelf->__PVT__self2 = 0U;
    vlSelf->__PVT__self3 = 0U;
    vlSelf->__PVT__self4 = 0U;
    vlSelf->__PVT__self5 = 0U;
    vlSelf->__PVT__self6 = 0U;
    vlSelf->__PVT__self7 = 0U;
    vlSelf->__PVT__shared_ack = 0U;
    vlSelf->__PVT__shared_dat_r = 0U;
    vlSelf->__PVT__slave_sel = 0U;
    vlSelf->__PVT__slave_sel_r = 0U;
    vlSelf->__PVT__soc_rst = 0U;
    vlSelf->__PVT__sram0_we = 0U;
    vlSelf->__PVT__sram1_we = 0U;
    vlSelf->__PVT__state = 0U;
    vlSelf->__PVT__timer_en_re = 0U;
    vlSelf->__PVT__timer_en_storage = 0U;
    vlSelf->__PVT__timer_enable_re = 0U;
    vlSelf->__PVT__timer_enable_storage = 0U;
    vlSelf->__PVT__timer_load_re = 0U;
    vlSelf->__PVT__timer_load_storage = 0U;
    vlSelf->__PVT__timer_pending_r = 0U;
    vlSelf->__PVT__timer_pending_re = 0U;
    vlSelf->__PVT__timer_reload_re = 0U;
    vlSelf->__PVT__timer_reload_storage = 0U;
    vlSelf->__PVT__timer_status_re = 0U;
    vlSelf->__PVT__timer_update_value_re = 0U;
    vlSelf->__PVT__timer_update_value_storage = 0U;
    vlSelf->__PVT__timer_value = 0U;
    vlSelf->__PVT__timer_value_re = 0U;
    vlSelf->__PVT__timer_value_status = 0U;
    vlSelf->__PVT__timer_zero_clear = 0U;
    vlSelf->__PVT__timer_zero_pending = 0U;
    vlSelf->__PVT__timer_zero_trigger_d = 0U;
    vlSelf->__PVT__uart_enable_re = 0U;
    vlSelf->__PVT__uart_enable_storage = 0U;
    vlSelf->__PVT__uart_pending_r = 0U;
    vlSelf->__PVT__uart_pending_re = 0U;
    vlSelf->__PVT__uart_pending_status = 0U;
    vlSelf->__PVT__uart_rx_clear = 0U;
    vlSelf->__PVT__uart_rx_fifo_consume = 0U;
    vlSelf->__PVT__uart_rx_fifo_level0 = 0U;
    vlSelf->__PVT__uart_rx_fifo_produce = 0U;
    vlSelf->__PVT__uart_rx_fifo_readable = 0U;
    vlSelf->__PVT__uart_rx_fifo_wrport_adr = 0U;
    vlSelf->__PVT__uart_rxempty_re = 0U;
    vlSelf->__PVT__uart_rxfull_re = 0U;
    vlSelf->__PVT__uart_rxtx_re = 0U;
    vlSelf->__PVT__uart_rxtx_we = 0U;
    vlSelf->__PVT__uart_status_re = 0U;
    vlSelf->__PVT__uart_status_status = 0U;
    vlSelf->__PVT__uart_tx_clear = 0U;
    vlSelf->__PVT__uart_tx_fifo_consume = 0U;
    vlSelf->__PVT__uart_tx_fifo_level0 = 0U;
    vlSelf->__PVT__uart_tx_fifo_produce = 0U;
    vlSelf->__PVT__uart_tx_fifo_readable = 0U;
    vlSelf->__PVT__uart_tx_fifo_wrport_adr = 0U;
    vlSelf->__PVT__uart_txempty_re = 0U;
    vlSelf->__PVT__uart_txfull_re = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_initial__TOP__sim(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_initial__TOP__sim\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__self7 = 0U;
    __Vtemp_1[0U] = 0x696e6974U;
    __Vtemp_1[1U] = 0x726f6d2eU;
    __Vtemp_1[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->__PVT__rom), 0, ~0ULL);
    __Vtemp_2[0U] = 0x696e6974U;
    __Vtemp_2[1U] = 0x72616d2eU;
    __Vtemp_2[2U] = 0x696d5f73U;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelf->__PVT__sram), 0, ~0ULL);
    __Vtemp_3[0U] = 0x696e6974U;
    __Vtemp_3[1U] = 0x72616d2eU;
    __Vtemp_3[2U] = 0x61696e5fU;
    __Vtemp_3[3U] = 0x696d5f6dU;
    __Vtemp_3[4U] = 0x73U;
    VL_READMEM_N(true, 32, 26214400, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_3)
                 ,  &(vlSelf->__PVT__main_ram), 0, ~0ULL);
    __Vtemp_4[0U] = 0x696e6974U;
    __Vtemp_4[1U] = 0x6d656d2eU;
    __Vtemp_4[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 37, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_4)
                 ,  &(vlSelf->__PVT__mem), 0, ~0ULL);
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__2\n"); );
    // Body
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
}

VL_ATTR_COLD void Vsim_sim___ctor_var_reset(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ctor_var_reset\n"); );
    // Body
    vlSelf->serial_sink_data = VL_RAND_RESET_I(8);
    vlSelf->serial_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_source_data = VL_RAND_RESET_I(8);
    vlSelf->serial_source_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sim_trace = VL_RAND_RESET_I(1);
    vlSelf->sys_clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bus_errors = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bus_errors_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count = VL_RAND_RESET_I(20);
    vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank0_bus_errors_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank0_reset0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank0_scratch0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_en0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_en0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_enable0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_pending_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_ev_status_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_load0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_load0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_reload0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_reload0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_update_value0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank1_value_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_enable0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_pending_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_ev_status_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_rxempty_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_rxfull_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_txempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_txempty_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_txfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_csrbank2_txfull_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_interface0_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_bankarray_interface1_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_bankarray_interface2_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_bankarray_sel_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_bankarray_sram_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dbus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__grant = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ibus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface0_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface0_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interface0_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface0_ram_bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface1_adr = VL_RAND_RESET_I(14);
    vlSelf->__PVT__interface1_dat_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interface1_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface1_ram_bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface1_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interface1_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__request = VL_RAND_RESET_I(2);
    vlSelf->__PVT__reset_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__scratch_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__scratch_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__self0 = VL_RAND_RESET_I(30);
    vlSelf->__PVT__self1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__self2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__self3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__self4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__self5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__self6 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__self7 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__shared_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shared_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__slave_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__slave_sel_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__soc_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sram0_we = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sram1_we = VL_RAND_RESET_I(4);
    vlSelf->__PVT__state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_en_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_en_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_enable_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_load_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_load_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timer_pending_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_reload_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_reload_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timer_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_update_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_update_value_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_value = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timer_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_value_status = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timer_zero_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_zero_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_zero_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_enable_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__uart_pending_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__uart_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_pending_status = VL_RAND_RESET_I(2);
    vlSelf->__PVT__uart_rx_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uart_rx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uart_rx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uart_rx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uart_rxempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rxfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rxtx_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rxtx_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_status_status = VL_RAND_RESET_I(2);
    vlSelf->__PVT__uart_tx0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uart_tx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uart_tx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uart_tx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uart_txempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_txfull_re = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->__PVT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__rom_dat0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__sram_adr0 = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 26214400; ++__Vi0) {
        vlSelf->__PVT__main_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__main_ram_adr0 = VL_RAND_RESET_I(25);
    for (int __Vi0 = 0; __Vi0 < 37; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__mem_adr0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__storage[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__storage_dat0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__storage_dat1 = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__storage_1[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__storage_1_dat0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__storage_1_dat1 = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__VexRiscv__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_write_block__DOT__we_index = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_write_block_1__DOT__we_index_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_hf9c541d9__0 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgExtracted_h34b3db20__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h3483df38__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h347da0bd__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h347df110__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h8553e3f3__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h853cba48__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h853caf59__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h853d24a6__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h853c8a77__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h859ddeff__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h859e558e__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h853d4c21__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbece7cd5__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbec9f606__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbec9c775__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbec53ce8__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbecb2757__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbec47a0f__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbec80b00__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_hbec565ad__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_ha83cb52b__0 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgTmp_hc57f6bfd__0 = 0;
    vlSelf->__Vdly__interface0_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__timer_value = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__bus_errors = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__interface1_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__sram__v0 = 0;
    vlSelf->__Vdlyvlsb__sram__v0 = 0;
    vlSelf->__Vdlyvval__sram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v0 = 0;
    vlSelf->__Vdlyvdim0__sram__v1 = 0;
    vlSelf->__Vdlyvlsb__sram__v1 = 0;
    vlSelf->__Vdlyvval__sram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v1 = 0;
    vlSelf->__Vdlyvdim0__sram__v2 = 0;
    vlSelf->__Vdlyvlsb__sram__v2 = 0;
    vlSelf->__Vdlyvval__sram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v2 = 0;
    vlSelf->__Vdlyvdim0__sram__v3 = 0;
    vlSelf->__Vdlyvlsb__sram__v3 = 0;
    vlSelf->__Vdlyvval__sram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v3 = 0;
    vlSelf->__Vdlyvdim0__main_ram__v0 = 0;
    vlSelf->__Vdlyvlsb__main_ram__v0 = 0;
    vlSelf->__Vdlyvval__main_ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__main_ram__v0 = 0;
    vlSelf->__Vdlyvdim0__main_ram__v1 = 0;
    vlSelf->__Vdlyvlsb__main_ram__v1 = 0;
    vlSelf->__Vdlyvval__main_ram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__main_ram__v1 = 0;
    vlSelf->__Vdlyvdim0__main_ram__v2 = 0;
    vlSelf->__Vdlyvlsb__main_ram__v2 = 0;
    vlSelf->__Vdlyvval__main_ram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__main_ram__v2 = 0;
    vlSelf->__Vdlyvdim0__main_ram__v3 = 0;
    vlSelf->__Vdlyvlsb__main_ram__v3 = 0;
    vlSelf->__Vdlyvval__main_ram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__main_ram__v3 = 0;
    vlSelf->__Vdlyvdim0__storage__v0 = 0;
    vlSelf->__Vdlyvval__storage__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__storage__v0 = 0;
    vlSelf->__Vdlyvdim0__storage_1__v0 = 0;
    vlSelf->__Vdlyvval__storage_1__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__storage_1__v0 = 0;
}
