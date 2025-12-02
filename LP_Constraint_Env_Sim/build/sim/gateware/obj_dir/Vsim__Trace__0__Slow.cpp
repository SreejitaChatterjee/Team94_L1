// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__0(Vsim___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__1(Vsim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__0(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("sim", VerilatedTracePrefixType::SCOPE_MODULE);
    Vsim___024root__trace_init_sub__TOP__sim__0(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__1(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+879,0,"serial_sink_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+880,0,"serial_sink_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"serial_sink_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+882,0,"serial_source_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+883,0,"serial_source_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"serial_source_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"sim_trace",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__0(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+879,0,"serial_sink_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+48,0,"serial_sink_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"serial_sink_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"serial_source_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+883,0,"serial_source_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"serial_source_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"sim_trace",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+936,0,"adr_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"bus_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"bus_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"bus_errors_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"bus_errors_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"bus_errors_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+57,0,"cpu_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"csr_bankarray_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+59,0,"csr_bankarray_csrbank0_bus_errors_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"csr_bankarray_csrbank0_bus_errors_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"csr_bankarray_csrbank0_bus_errors_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"csr_bankarray_csrbank0_bus_errors_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"csr_bankarray_csrbank0_reset0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"csr_bankarray_csrbank0_reset0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"csr_bankarray_csrbank0_reset0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+64,0,"csr_bankarray_csrbank0_reset0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"csr_bankarray_csrbank0_scratch0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"csr_bankarray_csrbank0_scratch0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"csr_bankarray_csrbank0_scratch0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"csr_bankarray_csrbank0_scratch0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"csr_bankarray_csrbank0_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank1_en0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"csr_bankarray_csrbank1_en0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"csr_bankarray_csrbank1_en0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"csr_bankarray_csrbank1_en0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank1_ev_enable0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"csr_bankarray_csrbank1_ev_enable0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"csr_bankarray_csrbank1_ev_enable0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"csr_bankarray_csrbank1_ev_enable0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank1_ev_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"csr_bankarray_csrbank1_ev_pending_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"csr_bankarray_csrbank1_ev_pending_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"csr_bankarray_csrbank1_ev_pending_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank1_ev_status_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"csr_bankarray_csrbank1_ev_status_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"csr_bankarray_csrbank1_ev_status_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"csr_bankarray_csrbank1_ev_status_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"csr_bankarray_csrbank1_load0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"csr_bankarray_csrbank1_load0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"csr_bankarray_csrbank1_load0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"csr_bankarray_csrbank1_load0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"csr_bankarray_csrbank1_reload0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"csr_bankarray_csrbank1_reload0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"csr_bankarray_csrbank1_reload0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"csr_bankarray_csrbank1_reload0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"csr_bankarray_csrbank1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank1_update_value0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"csr_bankarray_csrbank1_update_value0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"csr_bankarray_csrbank1_update_value0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"csr_bankarray_csrbank1_update_value0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"csr_bankarray_csrbank1_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"csr_bankarray_csrbank1_value_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"csr_bankarray_csrbank1_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"csr_bankarray_csrbank1_value_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"csr_bankarray_csrbank2_ev_enable0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+95,0,"csr_bankarray_csrbank2_ev_enable0_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"csr_bankarray_csrbank2_ev_enable0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"csr_bankarray_csrbank2_ev_enable0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"csr_bankarray_csrbank2_ev_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+98,0,"csr_bankarray_csrbank2_ev_pending_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"csr_bankarray_csrbank2_ev_pending_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+100,0,"csr_bankarray_csrbank2_ev_pending_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"csr_bankarray_csrbank2_ev_status_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+101,0,"csr_bankarray_csrbank2_ev_status_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"csr_bankarray_csrbank2_ev_status_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"csr_bankarray_csrbank2_ev_status_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank2_rxempty_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"csr_bankarray_csrbank2_rxempty_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"csr_bankarray_csrbank2_rxempty_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"csr_bankarray_csrbank2_rxempty_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank2_rxfull_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"csr_bankarray_csrbank2_rxfull_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"csr_bankarray_csrbank2_rxfull_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"csr_bankarray_csrbank2_rxfull_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"csr_bankarray_csrbank2_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank2_txempty_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"csr_bankarray_csrbank2_txempty_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"csr_bankarray_csrbank2_txempty_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"csr_bankarray_csrbank2_txempty_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"csr_bankarray_csrbank2_txfull_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"csr_bankarray_csrbank2_txfull_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"csr_bankarray_csrbank2_txfull_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"csr_bankarray_csrbank2_txfull_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"csr_bankarray_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"csr_bankarray_interface0_bank_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+119,0,"csr_bankarray_interface0_bank_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"csr_bankarray_interface0_bank_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_bankarray_interface0_bank_bus_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"csr_bankarray_interface0_bank_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"csr_bankarray_interface1_bank_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+122,0,"csr_bankarray_interface1_bank_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"csr_bankarray_interface1_bank_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_bankarray_interface1_bank_bus_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"csr_bankarray_interface1_bank_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"csr_bankarray_interface2_bank_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+123,0,"csr_bankarray_interface2_bank_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"csr_bankarray_interface2_bank_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_bankarray_interface2_bank_bus_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"csr_bankarray_interface2_bank_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"csr_bankarray_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"csr_bankarray_sel_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"csr_bankarray_sram_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+126,0,"csr_bankarray_sram_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"csr_bankarray_sram_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_bankarray_sram_bus_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"csr_bankarray_sram_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"csr_interconnect_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+127,0,"csr_interconnect_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"csr_interconnect_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"csr_interconnect_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"csr_interconnect_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"dbus_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"dbus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+937,0,"dbus_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+131,0,"dbus_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+132,0,"dbus_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"dbus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"dbus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"dbus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"dbus_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,0,"dbus_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dbus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ibus_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"ibus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+937,0,"ibus_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"ibus_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+142,0,"ibus_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"ibus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"ibus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+939,0,"ibus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+940,0,"ibus_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+143,0,"ibus_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"ibus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"int_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"interface0_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"interface0_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1,0,"interface0_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"interface0_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+148,0,"interface0_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"interface0_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"interface0_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"interface0_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"interface0_ram_bus_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"interface0_ram_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1,0,"interface0_ram_bus_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"interface0_ram_bus_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+152,0,"interface0_ram_bus_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"interface0_ram_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"interface0_ram_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"interface0_ram_bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"interface0_ram_bus_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"interface0_ram_bus_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"interface0_ram_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"interface0_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"interface0_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"interface0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"interface1_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+127,0,"interface1_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"interface1_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"interface1_ram_bus_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"interface1_ram_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1,0,"interface1_ram_bus_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"interface1_ram_bus_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+158,0,"interface1_ram_bus_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"interface1_ram_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"interface1_ram_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"interface1_ram_bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"interface1_ram_bus_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"interface1_ram_bus_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"interface1_ram_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"interface1_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"interface1_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"por_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"ram_bus_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"ram_bus_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1,0,"ram_bus_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"ram_bus_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+163,0,"ram_bus_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"ram_bus_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"ram_bus_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"ram_bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"ram_bus_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"ram_bus_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ram_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"reset_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+167,0,"scratch_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"scratch_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"self0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+150,0,"self1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"self2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+168,0,"self3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"self4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"self5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"self6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"self7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+169,0,"shared_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"shared_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1,0,"shared_bte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"shared_cti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+168,0,"shared_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"shared_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"shared_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"shared_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"shared_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"shared_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"shared_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"sink_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"sink_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"sink_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+883,0,"sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"slave_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"slave_sel_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"soc_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"source_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"source_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"source_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+48,0,"source_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"source_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"sram0_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+936,0,"sram0_adr_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"sram0_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"sram0_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"sram0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"sram1_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+936,0,"sram1_adr_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"sram1_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"sram1_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"sram1_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+179,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"sys_clk_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"sys_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0(Vsim___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1(Vsim___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2(Vsim___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3(Vsim___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4(Vsim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__1(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+180,0,"timer_en_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"timer_en_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"timer_enable_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"timer_enable_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"timer_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"timer_load_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"timer_load_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"timer_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"timer_pending_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"timer_pending_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"timer_pending_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"timer_reload_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"timer_reload_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+187,0,"timer_status_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"timer_status_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"timer_status_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"timer_update_value_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"timer_update_value_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"timer_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+190,0,"timer_value_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"timer_value_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"timer_value_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"timer_zero0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"timer_zero1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"timer_zero2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"timer_zero_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"timer_zero_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"timer_zero_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"timer_zero_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"timer_zero_trigger_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"uart_enable_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"uart_enable_storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+194,0,"uart_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"uart_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+196,0,"uart_pending_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"uart_pending_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+100,0,"uart_pending_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"uart_rx2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"uart_rx_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"uart_rx_fifo_consume",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+201,0,"uart_rx_fifo_do_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_rx_fifo_fifo_in_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_rx_fifo_fifo_in_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"uart_rx_fifo_fifo_in_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+202,0,"uart_rx_fifo_fifo_out_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"uart_rx_fifo_fifo_out_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"uart_rx_fifo_fifo_out_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"uart_rx_fifo_level0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+206,0,"uart_rx_fifo_level1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+207,0,"uart_rx_fifo_produce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"uart_rx_fifo_rdport_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"uart_rx_fifo_rdport_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+201,0,"uart_rx_fifo_rdport_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"uart_rx_fifo_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx_fifo_readable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_rx_fifo_replace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_rx_fifo_sink_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_rx_fifo_sink_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"uart_rx_fifo_sink_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+48,0,"uart_rx_fifo_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"uart_rx_fifo_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"uart_rx_fifo_source_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"uart_rx_fifo_source_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"uart_rx_fifo_source_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+199,0,"uart_rx_fifo_source_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx_fifo_source_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"uart_rx_fifo_syncfifo_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+208,0,"uart_rx_fifo_syncfifo_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+209,0,"uart_rx_fifo_syncfifo_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"uart_rx_fifo_syncfifo_readable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"uart_rx_fifo_syncfifo_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"uart_rx_fifo_syncfifo_writable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"uart_rx_fifo_wrport_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"uart_rx_fifo_wrport_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+887,0,"uart_rx_fifo_wrport_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+888,0,"uart_rx_fifo_wrport_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"uart_rx_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"uart_rxempty_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"uart_rxempty_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"uart_rxempty_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"uart_rxfull_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"uart_rxfull_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"uart_rxfull_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"uart_rxtx_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+216,0,"uart_rxtx_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"uart_rxtx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+217,0,"uart_rxtx_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"uart_status_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"uart_status_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"uart_status_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"uart_tx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"uart_tx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"uart_tx2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"uart_tx_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"uart_tx_fifo_consume",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"uart_tx_fifo_do_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_tx_fifo_fifo_in_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_tx_fifo_fifo_in_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"uart_tx_fifo_fifo_in_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+170,0,"uart_tx_fifo_fifo_out_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"uart_tx_fifo_fifo_out_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"uart_tx_fifo_fifo_out_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"uart_tx_fifo_level0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+224,0,"uart_tx_fifo_level1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+225,0,"uart_tx_fifo_produce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+222,0,"uart_tx_fifo_rdport_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"uart_tx_fifo_rdport_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2,0,"uart_tx_fifo_rdport_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"uart_tx_fifo_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"uart_tx_fifo_readable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_tx_fifo_replace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_tx_fifo_sink_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_tx_fifo_sink_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"uart_tx_fifo_sink_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"uart_tx_fifo_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"uart_tx_fifo_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"uart_tx_fifo_source_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"uart_tx_fifo_source_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"uart_tx_fifo_source_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+883,0,"uart_tx_fifo_source_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"uart_tx_fifo_source_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"uart_tx_fifo_syncfifo_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+226,0,"uart_tx_fifo_syncfifo_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+3,0,"uart_tx_fifo_syncfifo_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"uart_tx_fifo_syncfifo_readable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"uart_tx_fifo_syncfifo_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"uart_tx_fifo_syncfifo_writable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"uart_tx_fifo_wrport_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"uart_tx_fifo_wrport_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+227,0,"uart_tx_fifo_wrport_dat_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+231,0,"uart_tx_fifo_wrport_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"uart_tx_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"uart_tx_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"uart_tx_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"uart_txempty_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"uart_txempty_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"uart_txempty_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"uart_txfull_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"uart_txfull_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"uart_txfull_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_uart_sink_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"uart_uart_sink_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"uart_uart_sink_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+48,0,"uart_uart_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"uart_uart_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"uart_uart_source_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"uart_uart_source_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"uart_uart_source_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+883,0,"uart_uart_source_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"uart_uart_source_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+938,0,"vexriscv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"wait_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"rom_dat0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"sram_adr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+236,0,"main_ram_adr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+237,0,"mem_adr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("storage", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+238+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+230,0,"storage_dat0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+226,0,"storage_dat1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("storage_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+254+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+212,0,"storage_1_dat0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+208,0,"storage_1_dat1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("VexRiscv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_block", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+270,0,"we_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_block_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+271,0,"we_index_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+938,0,"externalResetVector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"timerInterrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"softwareInterrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"externalInterruptArray",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"iBusWishbone_CYC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"iBusWishbone_STB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"iBusWishbone_ACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"iBusWishbone_WE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"iBusWishbone_ADR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+133,0,"iBusWishbone_DAT_MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"iBusWishbone_DAT_MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+940,0,"iBusWishbone_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+939,0,"iBusWishbone_ERR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"iBusWishbone_CTI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+937,0,"iBusWishbone_BTE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+132,0,"dBusWishbone_CYC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"dBusWishbone_STB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"dBusWishbone_ACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dBusWishbone_WE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"dBusWishbone_ADR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+133,0,"dBusWishbone_DAT_MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"dBusWishbone_DAT_MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"dBusWishbone_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+936,0,"dBusWishbone_ERR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"dBusWishbone_CTI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+937,0,"dBusWishbone_BTE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+886,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+937,0,"ShiftCtrlEnum_DISABLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"ShiftCtrlEnum_SLL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"ShiftCtrlEnum_SRL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"ShiftCtrlEnum_SRA_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+937,0,"EnvCtrlEnum_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"EnvCtrlEnum_XRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"EnvCtrlEnum_WFI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"EnvCtrlEnum_ECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+937,0,"BranchCtrlEnum_INC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"BranchCtrlEnum_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"BranchCtrlEnum_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"BranchCtrlEnum_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+937,0,"AluBitwiseCtrlEnum_XOR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"AluBitwiseCtrlEnum_OR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"AluBitwiseCtrlEnum_AND_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+937,0,"Src2CtrlEnum_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"Src2CtrlEnum_IMI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"Src2CtrlEnum_IMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"Src2CtrlEnum_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+937,0,"AluCtrlEnum_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"AluCtrlEnum_SLT_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"AluCtrlEnum_BITWISE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+937,0,"Src1CtrlEnum_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+941,0,"Src1CtrlEnum_IMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+942,0,"Src1CtrlEnum_PC_INCREMENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"Src1CtrlEnum_URS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+273,0,"IBusCachedPlugin_cache_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"IBusCachedPlugin_cache_io_cpu_prefetch_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"IBusCachedPlugin_cache_io_cpu_fetch_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"IBusCachedPlugin_cache_io_cpu_fetch_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"IBusCachedPlugin_cache_io_cpu_fetch_isRemoved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"IBusCachedPlugin_cache_io_cpu_decode_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"IBusCachedPlugin_cache_io_cpu_decode_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_cache_io_cpu_decode_isUser",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"IBusCachedPlugin_cache_io_cpu_fill_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"dataCache_1_io_cpu_execute_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"dataCache_1_io_cpu_execute_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,0,"dataCache_1_io_cpu_memory_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"dataCache_1_io_cpu_memory_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+282,0,"dataCache_1_io_cpu_memory_mmuRsp_isIoAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"dataCache_1_io_cpu_writeBack_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"dataCache_1_io_cpu_writeBack_isUser",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"dataCache_1_io_cpu_writeBack_storeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"dataCache_1_io_cpu_writeBack_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+945,0,"dataCache_1_io_cpu_writeBack_fence_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"dataCache_1_io_cpu_writeBack_fence_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+947,0,"dataCache_1_io_cpu_writeBack_fence_SO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+948,0,"dataCache_1_io_cpu_writeBack_fence_SI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+949,0,"dataCache_1_io_cpu_writeBack_fence_PW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"dataCache_1_io_cpu_writeBack_fence_PR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"dataCache_1_io_cpu_writeBack_fence_PO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"dataCache_1_io_cpu_writeBack_fence_PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"dataCache_1_io_cpu_writeBack_fence_FM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+286,0,"dataCache_1_io_cpu_flush_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"dataCache_1_io_cpu_flush_payload_singleLine",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"dataCache_1_io_cpu_flush_payload_lineId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+289,0,"IBusCachedPlugin_cache_io_cpu_prefetch_haltIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"IBusCachedPlugin_cache_io_cpu_fetch_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"IBusCachedPlugin_cache_io_cpu_fetch_physicalAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+291,0,"IBusCachedPlugin_cache_io_cpu_decode_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"IBusCachedPlugin_cache_io_cpu_decode_mmuRefilling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"IBusCachedPlugin_cache_io_cpu_decode_mmuException",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"IBusCachedPlugin_cache_io_cpu_decode_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"IBusCachedPlugin_cache_io_cpu_decode_cacheMiss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"IBusCachedPlugin_cache_io_cpu_decode_physicalAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"IBusCachedPlugin_cache_io_mem_cmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"IBusCachedPlugin_cache_io_mem_cmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"IBusCachedPlugin_cache_io_mem_cmd_payload_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+299,0,"dataCache_1_io_cpu_execute_haltIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"dataCache_1_io_cpu_execute_refilling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"dataCache_1_io_cpu_memory_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"dataCache_1_io_cpu_writeBack_haltIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"dataCache_1_io_cpu_writeBack_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+304,0,"dataCache_1_io_cpu_writeBack_mmuException",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"dataCache_1_io_cpu_writeBack_unalignedAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"dataCache_1_io_cpu_writeBack_accessError",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"dataCache_1_io_cpu_writeBack_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"dataCache_1_io_cpu_writeBack_keepMemRspData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"dataCache_1_io_cpu_writeBack_exclusiveOk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"dataCache_1_io_cpu_flush_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"dataCache_1_io_cpu_redo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"dataCache_1_io_cpu_writesPending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"dataCache_1_io_mem_cmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"dataCache_1_io_mem_cmd_payload_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"dataCache_1_io_mem_cmd_payload_uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"dataCache_1_io_mem_cmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"dataCache_1_io_mem_cmd_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"dataCache_1_io_mem_cmd_payload_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"dataCache_1_io_mem_cmd_payload_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+935,0,"dataCache_1_io_mem_cmd_payload_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+316,0,"memory_MUL_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+318,0,"memory_MUL_HH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+320,0,"execute_MUL_HH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+322,0,"execute_MUL_HL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+324,0,"execute_MUL_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+326,0,"execute_MUL_LL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"execute_BRANCH_CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+328,0,"execute_BRANCH_DO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"execute_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"execute_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"memory_MEMORY_STORE_DATA_RF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"execute_MEMORY_STORE_DATA_RF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"decode_CSR_READ_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"decode_CSR_WRITE_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"decode_PREDICTION_HAD_BRANCHED2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"decode_SRC2_FORCE_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"decode_IS_RS2_SIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"decode_IS_RS1_SIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"decode_IS_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"memory_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"execute_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"decode_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"decode_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+343,0,"decode_IS_CSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+344,0,"decode_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,0,"decode_ALU_BITWISE_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+346,0,"decode_SRC_LESS_UNSIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"decode_MEMORY_MANAGMENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"memory_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"decode_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"execute_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"decode_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"decode_BYPASSABLE_EXECUTE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"decode_SRC2_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+354,0,"decode_ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+355,0,"decode_SRC1_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+936,0,"decode_MEMORY_FORCE_CONSTISTENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"writeBack_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"memory_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"execute_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"decode_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"memory_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+361,0,"execute_IS_RS1_SIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"execute_IS_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"execute_IS_RS2_SIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"memory_IS_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"writeBack_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+366,0,"writeBack_MUL_HH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+368,0,"writeBack_MUL_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+370,0,"memory_MUL_HL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+372,0,"memory_MUL_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+374,0,"memory_MUL_LL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"execute_CSR_READ_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"execute_CSR_WRITE_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"execute_IS_CSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"memory_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+379,0,"execute_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+380,0,"writeBack_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+381,0,"memory_BRANCH_CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+382,0,"memory_BRANCH_DO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"execute_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+384,0,"execute_PREDICTION_HAD_BRANCHED2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"execute_BRANCH_COND_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"execute_BRANCH_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+387,0,"decode_RS2_USE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"decode_RS1_USE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"execute_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"execute_BYPASSABLE_EXECUTE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"memory_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"memory_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+393,0,"memory_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"writeBack_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"decode_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"decode_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"memory_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+398,0,"memory_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+399,0,"execute_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+400,0,"execute_SRC_LESS_UNSIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"execute_SRC2_FORCE_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"execute_SRC_USE_SUB_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"execute_SRC2_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+404,0,"execute_SRC1_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+405,0,"decode_SRC_USE_SUB_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"decode_SRC_ADD_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"execute_SRC_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+407,0,"execute_SRC_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"execute_ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+409,0,"execute_SRC2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"execute_SRC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"execute_ALU_BITWISE_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+412,0,"decode_INSTRUCTION_ANTICIPATED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+413,0,"decode_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"decode_LEGAL_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"writeBack_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"writeBack_MEMORY_STORE_DATA_RF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"writeBack_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+416,0,"writeBack_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"memory_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+417,0,"memory_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"execute_MEMORY_FORCE_CONSTISTENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"execute_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+420,0,"execute_MEMORY_MANAGMENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+421,0,"execute_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"execute_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"execute_SRC_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+423,0,"execute_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"execute_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+425,0,"decode_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"decode_FLUSH_ALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"IBusCachedPlugin_rsp_issueDetected_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"IBusCachedPlugin_rsp_issueDetected_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"IBusCachedPlugin_rsp_issueDetected_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"IBusCachedPlugin_rsp_issueDetected_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"decode_BRANCH_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+294,0,"decode_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"decode_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"writeBack_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"writeBack_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"decode_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"decode_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"decode_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"decode_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"decode_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"decode_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"decode_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"decode_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"decode_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"decode_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"decode_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"execute_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"execute_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"execute_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"execute_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+441,0,"execute_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"execute_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"execute_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"execute_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"execute_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"execute_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"execute_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"memory_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"memory_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"memory_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"memory_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"memory_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"memory_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"memory_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"memory_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"memory_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"memory_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"memory_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"writeBack_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"writeBack_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"writeBack_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"writeBack_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"writeBack_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"writeBack_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"writeBack_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"writeBack_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"writeBack_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"writeBack_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"writeBack_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"lastStageInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+891,0,"lastStagePc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+892,0,"lastStageIsValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"lastStageIsFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"IBusCachedPlugin_fetcherHalt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_forceNoDecodeCond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"IBusCachedPlugin_incomingInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"IBusCachedPlugin_predictionJumpInterface_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"IBusCachedPlugin_predictionJumpInterface_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"IBusCachedPlugin_decodePrediction_cmd_hadBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"IBusCachedPlugin_decodePrediction_rsp_wasWrong",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"IBusCachedPlugin_pcValids_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"IBusCachedPlugin_pcValids_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"IBusCachedPlugin_pcValids_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"IBusCachedPlugin_pcValids_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"IBusCachedPlugin_decodeExceptionPort_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"IBusCachedPlugin_decodeExceptionPort_payload_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+465,0,"IBusCachedPlugin_decodeExceptionPort_payload_badAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+274,0,"IBusCachedPlugin_mmuBus_cmd_0_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"IBusCachedPlugin_mmuBus_cmd_0_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"IBusCachedPlugin_mmuBus_cmd_0_virtualAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"IBusCachedPlugin_mmuBus_cmd_0_bypassTranslation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"IBusCachedPlugin_mmuBus_rsp_physicalAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+894,0,"IBusCachedPlugin_mmuBus_rsp_isIoAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_mmuBus_rsp_isPaging",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"IBusCachedPlugin_mmuBus_rsp_allowRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"IBusCachedPlugin_mmuBus_rsp_allowWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"IBusCachedPlugin_mmuBus_rsp_allowExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_mmuBus_rsp_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_mmuBus_rsp_refilling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"IBusCachedPlugin_mmuBus_rsp_bypassTranslation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"IBusCachedPlugin_mmuBus_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_mmuBus_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"dBus_cmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"dBus_cmd_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dBus_cmd_payload_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"dBus_cmd_payload_uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"dBus_cmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"dBus_cmd_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"dBus_cmd_payload_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+470,0,"dBus_cmd_payload_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+471,0,"dBus_cmd_payload_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"dBus_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"dBus_rsp_payload_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"dBus_rsp_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"dBus_rsp_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"DBusCachedPlugin_mmuBus_cmd_0_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"DBusCachedPlugin_mmuBus_cmd_0_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"DBusCachedPlugin_mmuBus_cmd_0_virtualAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"DBusCachedPlugin_mmuBus_rsp_physicalAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+282,0,"DBusCachedPlugin_mmuBus_rsp_isIoAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"DBusCachedPlugin_mmuBus_rsp_isPaging",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"DBusCachedPlugin_mmuBus_rsp_allowRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"DBusCachedPlugin_mmuBus_rsp_allowWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"DBusCachedPlugin_mmuBus_rsp_allowExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"DBusCachedPlugin_mmuBus_rsp_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"DBusCachedPlugin_mmuBus_rsp_refilling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"DBusCachedPlugin_mmuBus_rsp_bypassTranslation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"DBusCachedPlugin_mmuBus_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"DBusCachedPlugin_mmuBus_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"DBusCachedPlugin_redoBranch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"DBusCachedPlugin_redoBranch_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+475,0,"DBusCachedPlugin_exceptionBus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+476,0,"DBusCachedPlugin_exceptionBus_payload_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"DBusCachedPlugin_exceptionBus_payload_badAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+477,0,"decodeExceptionPort_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+960,0,"decodeExceptionPort_payload_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"decodeExceptionPort_payload_badAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+458,0,"BranchPlugin_jumpInterface_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+381,0,"BranchPlugin_jumpInterface_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"BranchPlugin_branchExceptionPort_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"BranchPlugin_branchExceptionPort_payload_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+381,0,"BranchPlugin_branchExceptionPort_payload_badAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"BranchPlugin_inDebugNoFetchFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+479,0,"CsrPlugin_csrMapping_readDataSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"CsrPlugin_csrMapping_readDataInit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"CsrPlugin_csrMapping_writeDataSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+481,0,"CsrPlugin_csrMapping_allowCsrSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"CsrPlugin_csrMapping_hazardFree",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"CsrPlugin_csrMapping_doForceFailCsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"CsrPlugin_inWfi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"CsrPlugin_thirdPartyWake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"CsrPlugin_jumpInterface_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"CsrPlugin_jumpInterface_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+483,0,"CsrPlugin_exceptionPendings_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"CsrPlugin_exceptionPendings_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"CsrPlugin_exceptionPendings_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"CsrPlugin_exceptionPendings_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"externalInterrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"contextSwitching",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+943,0,"CsrPlugin_privilege",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+936,0,"CsrPlugin_forceMachineWire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"CsrPlugin_selfException_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"CsrPlugin_selfException_payload_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+424,0,"CsrPlugin_selfException_payload_badAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+935,0,"CsrPlugin_allowInterrupts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"CsrPlugin_allowException",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"CsrPlugin_allowEbreakException",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"CsrPlugin_xretAwayFromMachine",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IBusCachedPlugin_externalFlush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IBusCachedPlugin_jump_pcLoad_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"IBusCachedPlugin_jump_pcLoad_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"IBusCachedPlugin_fetchPc_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"IBusCachedPlugin_fetchPc_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"IBusCachedPlugin_fetchPc_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"IBusCachedPlugin_fetchPc_pcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"IBusCachedPlugin_fetchPc_correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"IBusCachedPlugin_fetchPc_correctionReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"IBusCachedPlugin_fetchPc_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"IBusCachedPlugin_fetchPc_corrected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"IBusCachedPlugin_fetchPc_pcRegPropagate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"IBusCachedPlugin_fetchPc_booted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"IBusCachedPlugin_fetchPc_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"when_Fetcher_l133",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"when_Fetcher_l133_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"IBusCachedPlugin_fetchPc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+495,0,"IBusCachedPlugin_fetchPc_redo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"IBusCachedPlugin_fetchPc_redo_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"IBusCachedPlugin_fetchPc_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"when_Fetcher_l160",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"IBusCachedPlugin_iBusRsp_redoFetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"IBusCachedPlugin_iBusRsp_stages_0_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"IBusCachedPlugin_iBusRsp_stages_0_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"IBusCachedPlugin_iBusRsp_stages_0_input_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"IBusCachedPlugin_iBusRsp_stages_0_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"IBusCachedPlugin_iBusRsp_stages_0_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"IBusCachedPlugin_iBusRsp_stages_0_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+497,0,"IBusCachedPlugin_iBusRsp_stages_0_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"IBusCachedPlugin_iBusRsp_stages_1_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"IBusCachedPlugin_iBusRsp_stages_1_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"IBusCachedPlugin_iBusRsp_stages_1_input_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+498,0,"IBusCachedPlugin_iBusRsp_stages_1_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"IBusCachedPlugin_iBusRsp_stages_1_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"IBusCachedPlugin_iBusRsp_stages_1_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"IBusCachedPlugin_iBusRsp_stages_1_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"IBusCachedPlugin_iBusRsp_stages_2_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"IBusCachedPlugin_iBusRsp_stages_2_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"IBusCachedPlugin_iBusRsp_stages_2_input_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+437,0,"IBusCachedPlugin_iBusRsp_stages_2_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"IBusCachedPlugin_iBusRsp_stages_2_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"IBusCachedPlugin_iBusRsp_stages_2_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+501,0,"IBusCachedPlugin_iBusRsp_stages_2_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"IBusCachedPlugin_iBusRsp_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"IBusCachedPlugin_iBusRsp_readyForError",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"IBusCachedPlugin_iBusRsp_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"IBusCachedPlugin_iBusRsp_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"IBusCachedPlugin_iBusRsp_output_payload_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+962,0,"IBusCachedPlugin_iBusRsp_output_payload_rsp_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"IBusCachedPlugin_iBusRsp_output_payload_rsp_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+963,0,"IBusCachedPlugin_iBusRsp_output_payload_isRvc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"when_Fetcher_l242",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"when_Fetcher_l322",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"IBusCachedPlugin_injector_nextPcCalc_valids_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"when_Fetcher_l331",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"IBusCachedPlugin_injector_nextPcCalc_valids_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"when_Fetcher_l331_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"IBusCachedPlugin_injector_nextPcCalc_valids_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Fetcher_l331_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"IBusCachedPlugin_injector_nextPcCalc_valids_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Fetcher_l331_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"IBusCachedPlugin_injector_nextPcCalc_valids_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_Fetcher_l331_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"iBus_cmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"iBus_cmd_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"iBus_cmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"iBus_cmd_payload_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+510,0,"iBus_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"iBus_rsp_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"iBus_rsp_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"IBusCachedPlugin_rspCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"IBusCachedPlugin_s0_tightlyCoupledHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"IBusCachedPlugin_s1_tightlyCoupledHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"IBusCachedPlugin_s2_tightlyCoupledHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_rsp_iBusRspOutputHalt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"IBusCachedPlugin_rsp_issueDetected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"IBusCachedPlugin_rsp_redoFetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"when_IBusCachedPlugin_l245",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"when_IBusCachedPlugin_l250",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"when_IBusCachedPlugin_l256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"when_IBusCachedPlugin_l262",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"when_IBusCachedPlugin_l273",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+524,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+527,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+528,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"toplevel_dataCache_1_io_mem_cmd_rValidN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"toplevel_dataCache_1_io_mem_cmd_rData_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"toplevel_dataCache_1_io_mem_cmd_rData_uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+532,0,"toplevel_dataCache_1_io_mem_cmd_rData_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+533,0,"toplevel_dataCache_1_io_mem_cmd_rData_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+534,0,"toplevel_dataCache_1_io_mem_cmd_rData_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+535,0,"toplevel_dataCache_1_io_mem_cmd_rData_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+536,0,"toplevel_dataCache_1_io_mem_cmd_rData_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+470,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+471,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+470,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+471,0,"toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"when_Stream_l369",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+538,0,"DBusCachedPlugin_rspCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"when_DBusCachedPlugin_l352",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+539,0,"execute_DBusCachedPlugin_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+540,0,"toplevel_dataCache_1_io_cpu_flush_isStall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"when_DBusCachedPlugin_l394",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"when_DBusCachedPlugin_l410",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"when_DBusCachedPlugin_l472",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"when_DBusCachedPlugin_l533",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"when_DBusCachedPlugin_l553",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"writeBack_DBusCachedPlugin_rspData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"writeBack_DBusCachedPlugin_rspSplits_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"writeBack_DBusCachedPlugin_rspSplits_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+546,0,"writeBack_DBusCachedPlugin_rspSplits_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+547,0,"writeBack_DBusCachedPlugin_rspSplits_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+548,0,"writeBack_DBusCachedPlugin_rspShifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+548,0,"writeBack_DBusCachedPlugin_rspRf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"switch_Misc_l232",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+550,0,"writeBack_DBusCachedPlugin_rspFormated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+283,0,"when_DBusCachedPlugin_l580",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"when_RegFilePlugin_l63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"decode_RegFilePlugin_regFileReadAddress1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+553,0,"decode_RegFilePlugin_regFileReadAddress2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+554,0,"decode_RegFilePlugin_rs1Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"decode_RegFilePlugin_rs2Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+896,0,"lastStageRegFileWrite_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+897,0,"lastStageRegFileWrite_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+898,0,"lastStageRegFileWrite_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"execute_IntAluPlugin_bitwise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"execute_SrcPlugin_addSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+407,0,"execute_SrcPlugin_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"execute_FullBarrelShifterPlugin_amplitude",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+558,0,"execute_FullBarrelShifterPlugin_reversed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+559,0,"HazardSimplePlugin_src0Hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"HazardSimplePlugin_src1Hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"HazardSimplePlugin_writeBackWrites_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+562,0,"HazardSimplePlugin_writeBackWrites_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+563,0,"HazardSimplePlugin_writeBackWrites_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"HazardSimplePlugin_writeBackBuffer_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"HazardSimplePlugin_writeBackBuffer_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+566,0,"HazardSimplePlugin_writeBackBuffer_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+567,0,"HazardSimplePlugin_addr0Match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"HazardSimplePlugin_addr1Match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"when_HazardSimplePlugin_l47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"when_HazardSimplePlugin_l48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"when_HazardSimplePlugin_l51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"when_HazardSimplePlugin_l45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"when_HazardSimplePlugin_l57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"when_HazardSimplePlugin_l58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"when_HazardSimplePlugin_l48_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"when_HazardSimplePlugin_l51_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"when_HazardSimplePlugin_l45_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"when_HazardSimplePlugin_l57_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"when_HazardSimplePlugin_l58_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"when_HazardSimplePlugin_l48_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"when_HazardSimplePlugin_l51_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"when_HazardSimplePlugin_l45_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"when_HazardSimplePlugin_l57_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"when_HazardSimplePlugin_l58_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"when_HazardSimplePlugin_l105",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"when_HazardSimplePlugin_l108",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"when_HazardSimplePlugin_l113",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"execute_BranchPlugin_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+584,0,"switch_Misc_l232_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+585,0,"execute_BranchPlugin_missAlignedTarget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"execute_BranchPlugin_branch_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"execute_BranchPlugin_branch_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"execute_BranchPlugin_branchAdder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"CsrPlugin_misa_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+964,0,"CsrPlugin_misa_extensions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+965,0,"CsrPlugin_mtvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+589,0,"CsrPlugin_mtvec_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+590,0,"CsrPlugin_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+591,0,"CsrPlugin_mstatus_MIE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"CsrPlugin_mstatus_MPIE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+593,0,"CsrPlugin_mstatus_MPP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+594,0,"CsrPlugin_mip_MEIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"CsrPlugin_mip_MTIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+596,0,"CsrPlugin_mip_MSIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"CsrPlugin_mie_MEIE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"CsrPlugin_mie_MTIE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"CsrPlugin_mie_MSIE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+600,0,"CsrPlugin_mscratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+601,0,"CsrPlugin_mcause_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"CsrPlugin_mcause_exceptionCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+603,0,"CsrPlugin_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+604,0,"CsrPlugin_mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+606,0,"CsrPlugin_minstret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+36,0,"CsrPlugin_exceptionPortCtrl_exceptionValids_decode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"CsrPlugin_exceptionPortCtrl_exceptionValids_execute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"CsrPlugin_exceptionPortCtrl_exceptionValids_memory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+609,0,"CsrPlugin_exceptionPortCtrl_exceptionContext_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+610,0,"CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilege",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+500,0,"when_CsrPlugin_l1259",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1259_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_CsrPlugin_l1259_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_CsrPlugin_l1259_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"when_CsrPlugin_l1272",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"CsrPlugin_interrupt_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"CsrPlugin_interrupt_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+612,0,"CsrPlugin_interrupt_targetPrivilege",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+591,0,"when_CsrPlugin_l1296",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"when_CsrPlugin_l1302",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"when_CsrPlugin_l1302_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"when_CsrPlugin_l1302_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"CsrPlugin_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"CsrPlugin_lastStageWasWfi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"CsrPlugin_pipelineLiberator_pcValids_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"CsrPlugin_pipelineLiberator_pcValids_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"CsrPlugin_pipelineLiberator_pcValids_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"CsrPlugin_pipelineLiberator_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1335",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_CsrPlugin_l1335_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_CsrPlugin_l1335_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"when_CsrPlugin_l1340",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"CsrPlugin_pipelineLiberator_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"when_CsrPlugin_l1346",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"CsrPlugin_interruptJump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"CsrPlugin_hadException",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"CsrPlugin_targetPrivilege",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+43,0,"CsrPlugin_trapCause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+936,0,"CsrPlugin_trapCauseEbreakDebug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"CsrPlugin_xtvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"CsrPlugin_xtvec_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+936,0,"CsrPlugin_trapEnterDebug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"when_CsrPlugin_l1390",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"when_CsrPlugin_l1398",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"when_CsrPlugin_l1456",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+623,0,"switch_CsrPlugin_l1460",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+624,0,"execute_CsrPlugin_wfiWake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"when_CsrPlugin_l1519",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"when_CsrPlugin_l1521",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"when_CsrPlugin_l1527",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"execute_CsrPlugin_blockedBySideEffects",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"execute_CsrPlugin_illegalAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"execute_CsrPlugin_illegalInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"when_CsrPlugin_l1540",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"when_CsrPlugin_l1547",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"when_CsrPlugin_l1548",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"when_CsrPlugin_l1555",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"execute_CsrPlugin_writeInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"execute_CsrPlugin_readInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"execute_CsrPlugin_writeEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"execute_CsrPlugin_readEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+479,0,"execute_CsrPlugin_readToWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"switch_Misc_l232_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"when_CsrPlugin_l1587",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"when_CsrPlugin_l1591",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+638,0,"execute_CsrPlugin_csrAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+639,0,"execute_MulPlugin_aSigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"execute_MulPlugin_bSigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"execute_MulPlugin_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"execute_MulPlugin_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"switch_MulPlugin_l87",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+641,0,"execute_MulPlugin_aULow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+642,0,"execute_MulPlugin_bULow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+643,0,"execute_MulPlugin_aSLow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+644,0,"execute_MulPlugin_bSLow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+645,0,"execute_MulPlugin_aHigh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+646,0,"execute_MulPlugin_bHigh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declArray(c+647,0,"writeBack_MulPlugin_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+650,0,"when_MulPlugin_l147",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+549,0,"switch_MulPlugin_l148",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+651,0,"memory_DivPlugin_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+653,0,"memory_DivPlugin_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+654,0,"memory_DivPlugin_accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+935,0,"memory_DivPlugin_frontendOk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"memory_DivPlugin_div_needRevert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"memory_DivPlugin_div_counter_willIncrement",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"memory_DivPlugin_div_counter_willClear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"memory_DivPlugin_div_counter_valueNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+661,0,"memory_DivPlugin_div_counter_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+662,0,"memory_DivPlugin_div_counter_willOverflowIfInc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"memory_DivPlugin_div_counter_willOverflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,0,"memory_DivPlugin_div_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"when_MulDivIterativePlugin_l126",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_MulDivIterativePlugin_l126_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"memory_DivPlugin_div_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+667,0,"when_MulDivIterativePlugin_l128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"when_MulDivIterativePlugin_l129",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"when_MulDivIterativePlugin_l132",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+669,0,"memory_DivPlugin_div_stage_0_remainderShifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+671,0,"memory_DivPlugin_div_stage_0_remainderMinusDenominator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+673,0,"memory_DivPlugin_div_stage_0_outRemainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+674,0,"memory_DivPlugin_div_stage_0_outNumerator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+665,0,"when_MulDivIterativePlugin_l151",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_MulDivIterativePlugin_l162",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"externalInterruptArray_regNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"decode_to_execute_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"execute_to_memory_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+676,0,"when_Pipeline_l124_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"memory_to_writeBack_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"decode_to_execute_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"execute_to_memory_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"memory_to_writeBack_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"decode_to_execute_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"execute_to_memory_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"memory_to_writeBack_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"decode_to_execute_MEMORY_FORCE_CONSTISTENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"decode_to_execute_SRC1_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"decode_to_execute_SRC_USE_SUB_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"decode_to_execute_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"execute_to_memory_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_Pipeline_l124_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"memory_to_writeBack_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"decode_to_execute_ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"decode_to_execute_SRC2_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"decode_to_execute_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"execute_to_memory_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_Pipeline_l124_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"memory_to_writeBack_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"decode_to_execute_BYPASSABLE_EXECUTE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"decode_to_execute_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"execute_to_memory_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"decode_to_execute_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"execute_to_memory_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_Pipeline_l124_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"memory_to_writeBack_MEMORY_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"decode_to_execute_MEMORY_MANAGMENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"decode_to_execute_SRC_LESS_UNSIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"decode_to_execute_ALU_BITWISE_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+399,0,"decode_to_execute_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"execute_to_memory_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"decode_to_execute_BRANCH_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"decode_to_execute_IS_CSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"decode_to_execute_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"execute_to_memory_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"memory_to_writeBack_ENV_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"decode_to_execute_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"execute_to_memory_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_Pipeline_l124_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"memory_to_writeBack_IS_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"decode_to_execute_IS_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"execute_to_memory_IS_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"decode_to_execute_IS_RS1_SIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"decode_to_execute_IS_RS2_SIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"decode_to_execute_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+421,0,"decode_to_execute_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+506,0,"when_Pipeline_l124_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"decode_to_execute_SRC2_FORCE_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"decode_to_execute_PREDICTION_HAD_BRANCHED2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"decode_to_execute_CSR_WRITE_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_Pipeline_l124_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"decode_to_execute_CSR_READ_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"execute_to_memory_MEMORY_STORE_DATA_RF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"memory_to_writeBack_MEMORY_STORE_DATA_RF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"execute_to_memory_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"memory_to_writeBack_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"execute_to_memory_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"execute_to_memory_BRANCH_DO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_Pipeline_l124_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+381,0,"execute_to_memory_BRANCH_CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"execute_to_memory_MUL_LL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+372,0,"execute_to_memory_MUL_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+370,0,"execute_to_memory_MUL_HL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+507,0,"when_Pipeline_l124_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+318,0,"execute_to_memory_MUL_HH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+366,0,"memory_to_writeBack_MUL_HH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+508,0,"when_Pipeline_l124_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+368,0,"memory_to_writeBack_MUL_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+47,0,"when_Pipeline_l151",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"when_Pipeline_l154",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"when_Pipeline_l151_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"when_Pipeline_l154_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"when_Pipeline_l151_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l154_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"execute_CsrPlugin_csr_3264",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"execute_CsrPlugin_csr_3857",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"execute_CsrPlugin_csr_3858",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"execute_CsrPlugin_csr_3859",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"execute_CsrPlugin_csr_3860",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"execute_CsrPlugin_csr_769",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"execute_CsrPlugin_csr_768",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"execute_CsrPlugin_csr_836",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"execute_CsrPlugin_csr_772",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"execute_CsrPlugin_csr_773",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"execute_CsrPlugin_csr_833",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"execute_CsrPlugin_csr_832",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"execute_CsrPlugin_csr_834",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"execute_CsrPlugin_csr_835",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"execute_CsrPlugin_csr_2816",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"execute_CsrPlugin_csr_2944",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"execute_CsrPlugin_csr_2818",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"execute_CsrPlugin_csr_2946",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"execute_CsrPlugin_csr_3072",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"execute_CsrPlugin_csr_3200",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"execute_CsrPlugin_csr_3074",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"execute_CsrPlugin_csr_3202",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"execute_CsrPlugin_csr_3008",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"when_CsrPlugin_l1669_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"execute_CsrPlugin_csr_4032",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+702,0,"switch_CsrPlugin_l1031",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+703,0,"when_CsrPlugin_l1702",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"when_CsrPlugin_l1709",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"when_CsrPlugin_l1719",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"when_CsrPlugin_l1717",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"when_CsrPlugin_l1725",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"when_InstructionCache_l239",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"iBusWishbone_DAT_MISO_regNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"dBusWishbone_DAT_MISO_regNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+707,0,"decode_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declArray(c+709,0,"decode_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declQuad(c+712,0,"decode_ALU_BITWISE_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+714,0,"decode_SRC2_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+715,0,"decode_ALU_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+717,0,"decode_SRC1_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declQuad(c+720,0,"memory_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+722,0,"execute_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+724,0,"writeBack_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+726,0,"execute_BRANCH_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+727,0,"memory_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+730,0,"execute_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+733,0,"execute_SRC2_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+734,0,"execute_SRC1_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declQuad(c+737,0,"execute_ALU_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+739,0,"execute_ALU_BITWISE_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+741,0,"decode_BRANCH_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+742,0,"decode_to_execute_SRC1_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declQuad(c+737,0,"decode_to_execute_ALU_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+745,0,"decode_to_execute_SRC2_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+739,0,"decode_to_execute_ALU_BITWISE_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declArray(c+746,0,"decode_to_execute_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+749,0,"execute_to_memory_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+752,0,"decode_to_execute_BRANCH_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+753,0,"decode_to_execute_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+755,0,"execute_to_memory_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+757,0,"memory_to_writeBack_ENV_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("RegFilePlugin_regFile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+902+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("IBusCachedPlugin_cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_cpu_prefetch_isValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"io_cpu_prefetch_haltIt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"io_cpu_prefetch_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+274,0,"io_cpu_fetch_isValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"io_cpu_fetch_isStuck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"io_cpu_fetch_isRemoved",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"io_cpu_fetch_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_cpu_fetch_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"io_cpu_fetch_mmuRsp_physicalAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+894,0,"io_cpu_fetch_mmuRsp_isIoAccess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_fetch_mmuRsp_isPaging",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_cpu_fetch_mmuRsp_allowRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_cpu_fetch_mmuRsp_allowWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_cpu_fetch_mmuRsp_allowExecute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_fetch_mmuRsp_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_fetch_mmuRsp_refilling",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"io_cpu_fetch_mmuRsp_bypassTranslation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"io_cpu_fetch_physicalAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+276,0,"io_cpu_decode_isValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"io_cpu_decode_isStuck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"io_cpu_decode_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_cpu_decode_physicalAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"io_cpu_decode_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"io_cpu_decode_cacheMiss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"io_cpu_decode_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"io_cpu_decode_mmuRefilling",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"io_cpu_decode_mmuException",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_decode_isUser",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"io_cpu_fill_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"io_cpu_fill_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"io_mem_cmd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"io_mem_cmd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"io_mem_cmd_payload_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"io_mem_cmd_payload_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+510,0,"io_mem_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"io_mem_rsp_payload_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"io_mem_rsp_payload_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"lineLoader_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"lineLoader_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"lineLoader_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+762,0,"lineLoader_hadError",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"lineLoader_flushPending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"lineLoader_flushCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+765,0,"when_InstructionCache_l338",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"when_InstructionCache_l342",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"when_InstructionCache_l351",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"lineLoader_cmdSent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"io_mem_cmd_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"when_Utils_l560",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"lineLoader_wayToAllocate_willIncrement",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"lineLoader_wayToAllocate_willClear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"lineLoader_wayToAllocate_willOverflowIfInc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"lineLoader_wayToAllocate_willOverflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+771,0,"lineLoader_wordIndex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+772,0,"lineLoader_write_tag_0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+773,0,"lineLoader_write_tag_0_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+774,0,"lineLoader_write_tag_0_payload_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"lineLoader_write_tag_0_payload_data_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+775,0,"lineLoader_write_tag_0_payload_data_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+510,0,"lineLoader_write_data_0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+776,0,"lineLoader_write_data_0_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+511,0,"lineLoader_write_data_0_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+777,0,"when_InstructionCache_l401",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"fetchStage_read_banksValue_0_dataMem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"fetchStage_read_banksValue_0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+778,0,"fetchStage_read_waysValues_0_tag_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"fetchStage_read_waysValues_0_tag_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+780,0,"fetchStage_read_waysValues_0_tag_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+934,0,"fetchStage_hit_hits_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"fetchStage_hit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"fetchStage_hit_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"fetchStage_hit_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"fetchStage_hit_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+496,0,"when_InstructionCache_l435",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"io_cpu_fetch_data_regNextWhen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+496,0,"when_InstructionCache_l459",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"decodeStage_mmuRsp_physicalAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+781,0,"decodeStage_mmuRsp_isIoAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"decodeStage_mmuRsp_isPaging",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+783,0,"decodeStage_mmuRsp_allowRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"decodeStage_mmuRsp_allowWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"decodeStage_mmuRsp_allowExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"decodeStage_mmuRsp_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"decodeStage_mmuRsp_refilling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"decodeStage_mmuRsp_bypassTranslation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"when_InstructionCache_l459_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"decodeStage_hit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"when_InstructionCache_l459_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"decodeStage_hit_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dataCache_1", VerilatedTracePrefixType::SCOPE_MODULE);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,0,"io_cpu_execute_isValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"io_cpu_execute_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+299,0,"io_cpu_execute_haltIt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"io_cpu_execute_args_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"io_cpu_execute_args_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+418,0,"io_cpu_execute_args_totalyConsistent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"io_cpu_execute_refilling",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"io_cpu_memory_isValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"io_cpu_memory_isStuck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"io_cpu_memory_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"io_cpu_memory_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"io_cpu_memory_mmuRsp_physicalAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+282,0,"io_cpu_memory_mmuRsp_isIoAccess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_memory_mmuRsp_isPaging",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_cpu_memory_mmuRsp_allowRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_cpu_memory_mmuRsp_allowWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_cpu_memory_mmuRsp_allowExecute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_memory_mmuRsp_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_memory_mmuRsp_refilling",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"io_cpu_memory_mmuRsp_bypassTranslation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"io_cpu_writeBack_isValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"io_cpu_writeBack_isStuck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"io_cpu_writeBack_isFiring",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_writeBack_isUser",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"io_cpu_writeBack_haltIt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"io_cpu_writeBack_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"io_cpu_writeBack_storeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_cpu_writeBack_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_cpu_writeBack_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+304,0,"io_cpu_writeBack_mmuException",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"io_cpu_writeBack_unalignedAccess",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"io_cpu_writeBack_accessError",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_cpu_writeBack_keepMemRspData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+945,0,"io_cpu_writeBack_fence_SW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"io_cpu_writeBack_fence_SR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+947,0,"io_cpu_writeBack_fence_SO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+948,0,"io_cpu_writeBack_fence_SI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+949,0,"io_cpu_writeBack_fence_PW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"io_cpu_writeBack_fence_PR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"io_cpu_writeBack_fence_PO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"io_cpu_writeBack_fence_PI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"io_cpu_writeBack_fence_FM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+955,0,"io_cpu_writeBack_exclusiveOk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"io_cpu_redo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"io_cpu_flush_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"io_cpu_flush_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"io_cpu_flush_payload_singleLine",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"io_cpu_flush_payload_lineId",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+956,0,"io_cpu_writesPending",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"io_mem_cmd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"io_mem_cmd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"io_mem_cmd_payload_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"io_mem_cmd_payload_uncached",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"io_mem_cmd_payload_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"io_mem_cmd_payload_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"io_mem_cmd_payload_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"io_mem_cmd_payload_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+935,0,"io_mem_cmd_payload_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"io_mem_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"io_mem_rsp_payload_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"io_mem_rsp_payload_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"io_mem_rsp_payload_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"haltCpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"tagsReadCmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+791,0,"tagsReadCmd_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+792,0,"tagsWriteCmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+793,0,"tagsWriteCmd_payload_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+794,0,"tagsWriteCmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+795,0,"tagsWriteCmd_payload_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"tagsWriteCmd_payload_data_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"tagsWriteCmd_payload_data_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+798,0,"tagsWriteLastCmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"tagsWriteLastCmd_payload_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+800,0,"tagsWriteLastCmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+801,0,"tagsWriteLastCmd_payload_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"tagsWriteLastCmd_payload_data_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"tagsWriteLastCmd_payload_data_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+804,0,"dataReadCmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"dataReadCmd_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+806,0,"dataWriteCmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"dataWriteCmd_payload_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+808,0,"dataWriteCmd_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+809,0,"dataWriteCmd_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+810,0,"dataWriteCmd_payload_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+811,0,"ways_0_tagsReadRsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"ways_0_tagsReadRsp_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"ways_0_tagsReadRsp_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+814,0,"ways_0_dataReadRspMem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"ways_0_dataReadRsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+815,0,"when_DataCache_l645",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"when_DataCache_l648",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"when_DataCache_l667",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"rspSync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"rspLast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"memCmdSent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"io_mem_cmd_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_DataCache_l689",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+820,0,"stage0_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+821,0,"stage0_dataColisions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+936,0,"stage0_wayInvalidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+936,0,"stage0_isAmo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_DataCache_l776",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"stageA_request_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"stageA_request_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+823,0,"stageA_request_totalyConsistent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"when_DataCache_l776_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+824,0,"stageA_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+936,0,"stageA_isAmo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"stageA_isLrsc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+825,0,"stageA_wayHits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+507,0,"when_DataCache_l776_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+826,0,"stageA_wayInvalidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+507,0,"when_DataCache_l776_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"stage0_dataColisions_regNextWhen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+828,0,"stageA_dataColisions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+508,0,"when_DataCache_l827",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"stageB_request_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+829,0,"stageB_request_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+830,0,"stageB_request_totalyConsistent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"stageB_mmuRspFreeze",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"when_DataCache_l829",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+833,0,"stageB_mmuRsp_physicalAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+312,0,"stageB_mmuRsp_isIoAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"stageB_mmuRsp_isPaging",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"stageB_mmuRsp_allowRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+836,0,"stageB_mmuRsp_allowWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+837,0,"stageB_mmuRsp_allowExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"stageB_mmuRsp_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"stageB_mmuRsp_refilling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"stageB_mmuRsp_bypassTranslation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_DataCache_l826",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"stageB_tagsReadRsp_0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"stageB_tagsReadRsp_0_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+843,0,"stageB_tagsReadRsp_0_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+508,0,"when_DataCache_l826_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+844,0,"stageB_dataReadRsp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"when_DataCache_l825",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+845,0,"stageB_wayInvalidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+936,0,"stageB_consistancyHazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_DataCache_l825_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+846,0,"stageB_dataColisions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+508,0,"when_DataCache_l825_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"stageB_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"when_DataCache_l825_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"stageB_waysHitsBeforeInvalidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+849,0,"stageB_waysHits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+849,0,"stageB_waysHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+844,0,"stageB_dataMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"when_DataCache_l825_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"stageB_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+850,0,"stageB_loaderValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"stageB_ioMemRspMuxed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+851,0,"stageB_flusher_waitDone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"stageB_flusher_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+852,0,"stageB_flusher_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+853,0,"when_DataCache_l855",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"when_DataCache_l861",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"when_DataCache_l863",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"stageB_flusher_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"when_DataCache_l877",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"stageB_isAmo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"stageB_isAmoCached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"stageB_isExternalLsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"stageB_isExternalAmo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"stageB_requestDataBypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+856,0,"stageB_cpuWriteToCache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"when_DataCache_l931",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"stageB_badPermissions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"stageB_loadStoreFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"stageB_bypassCache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"when_DataCache_l1000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"when_DataCache_l1009",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"when_DataCache_l1014",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"when_DataCache_l1025",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"when_DataCache_l1037",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"when_DataCache_l996",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"when_DataCache_l1072",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"when_DataCache_l1081",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"loader_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"loader_counter_willIncrement",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"loader_counter_willClear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+867,0,"loader_counter_valueNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+868,0,"loader_counter_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+869,0,"loader_counter_willOverflowIfInc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"loader_counter_willOverflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"loader_waysAllocator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+872,0,"loader_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"loader_kill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"loader_killReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"when_DataCache_l1097",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"loader_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"when_DataCache_l1125",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"loader_valid_regNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"when_DataCache_l1129",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"when_DataCache_l1132",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsim___024root__trace_init_top(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_top\n"); );
    // Body
    Vsim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsim___024root__trace_register(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vsim___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsim___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsim___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsim___024root__trace_const_0_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_const_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsim___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsim___024root__trace_const_0_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+935,(1U));
    bufp->fullBit(oldp+936,(0U));
    bufp->fullCData(oldp+937,(0U),2);
    bufp->fullIData(oldp+938,(0U),32);
    bufp->fullBit(oldp+939,(0U));
    bufp->fullCData(oldp+940,(0xfU),4);
    bufp->fullCData(oldp+941,(1U),2);
    bufp->fullCData(oldp+942,(2U),2);
    bufp->fullCData(oldp+943,(3U),2);
    bufp->fullBit(oldp+944,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved));
    bufp->fullBit(oldp+945,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SW));
    bufp->fullBit(oldp+946,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SR));
    bufp->fullBit(oldp+947,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SO));
    bufp->fullBit(oldp+948,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SI));
    bufp->fullBit(oldp+949,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PW));
    bufp->fullBit(oldp+950,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PR));
    bufp->fullBit(oldp+951,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PO));
    bufp->fullBit(oldp+952,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PI));
    bufp->fullCData(oldp+953,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_FM),4);
    bufp->fullCData(oldp+954,(5U),3);
    bufp->fullBit(oldp+955,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk));
    bufp->fullBit(oldp+956,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writesPending));
    bufp->fullBit(oldp+957,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation));
    bufp->fullBit(oldp+958,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBus_rsp_payload_last));
    bufp->fullBit(oldp+959,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation));
    bufp->fullCData(oldp+960,(2U),4);
    bufp->fullCData(oldp+961,(0U),4);
    bufp->fullBit(oldp+962,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error));
    bufp->fullBit(oldp+963,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc));
    bufp->fullIData(oldp+964,(0x42U),26);
    bufp->fullCData(oldp+965,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsim___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_0_sub_1((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_0_sub_2((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_0_sub_3((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_0_sub_4((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_0_sub_5((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_0_sub_6((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__sim.__PVT__self7),2);
    bufp->fullBit(oldp+2,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isMoving));
    bufp->fullBit(oldp+8,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isMoving))));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isMoving));
    bufp->fullBit(oldp+12,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isMoving))));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isMoving));
    bufp->fullBit(oldp+16,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isMoving))));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
    bufp->fullBit(oldp+19,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) 
                            | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
    bufp->fullBit(oldp+20,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
    bufp->fullIData(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
    bufp->fullBit(oldp+23,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
    bufp->fullIData(oldp+25,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                               ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                               : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                   : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_fire));
    bufp->fullBit(oldp+29,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                            | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_Fetcher_l133));
    bufp->fullBit(oldp+31,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid)) 
                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready))));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
    bufp->fullBit(oldp+33,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                            & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_Fetcher_l133)))));
    bufp->fullBit(oldp+34,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)) 
                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid))));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
    bufp->fullBit(oldp+39,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1340));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
    bufp->fullCData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1390));
    bufp->fullBit(oldp+47,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
    bufp->fullBit(oldp+48,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
    bufp->fullCData(oldp+49,((0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1))),8);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable));
    bufp->fullSData(oldp+51,((0x7fffU & vlSymsp->TOP__sim.__PVT__self0)),15);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__sim.__PVT__error));
    bufp->fullIData(oldp+53,(vlSymsp->TOP__sim.__PVT__bus_errors),32);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__sim.__PVT__bus_errors_re));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_we));
    bufp->fullIData(oldp+56,(vlSymsp->TOP__sim.__PVT__count),20);
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                  >> 1U))));
    bufp->fullCData(oldp+58,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))),6);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__sim.__PVT__interface1_dat_w),32);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re));
    bufp->fullCData(oldp+61,((3U & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),2);
    bufp->fullBit(oldp+62,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re));
    bufp->fullCData(oldp+63,(vlSymsp->TOP__sim.__PVT__reset_storage),2);
    bufp->fullBit(oldp+64,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_we));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re));
    bufp->fullIData(oldp+66,(vlSymsp->TOP__sim.__PVT__scratch_storage),32);
    bufp->fullBit(oldp+67,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_we));
    bufp->fullBit(oldp+68,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                            >> 9U)))));
    bufp->fullBit(oldp+69,((1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w)));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__sim.__PVT__timer_en_storage));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_we));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__sim.__PVT__timer_enable_storage));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_we));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__sim.__PVT__timer_zero_pending));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_we));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re));
    bufp->fullBit(oldp+80,((0U == vlSymsp->TOP__sim.__PVT__timer_value)));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_we));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re));
    bufp->fullIData(oldp+83,(vlSymsp->TOP__sim.__PVT__timer_load_storage),32);
    bufp->fullBit(oldp+84,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_we));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re));
    bufp->fullIData(oldp+86,(vlSymsp->TOP__sim.__PVT__timer_reload_storage),32);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_we));
    bufp->fullBit(oldp+88,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                            >> 9U)))));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__sim.__PVT__timer_update_value_storage));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_we));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re));
    bufp->fullIData(oldp+93,(vlSymsp->TOP__sim.__PVT__timer_value_status),32);
    bufp->fullBit(oldp+94,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_we));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re));
    bufp->fullCData(oldp+96,(vlSymsp->TOP__sim.__PVT__uart_enable_storage),2);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_we));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re));
    bufp->fullCData(oldp+99,(vlSymsp->TOP__sim.__PVT__uart_pending_status),2);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_we));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re));
    bufp->fullCData(oldp+102,(vlSymsp->TOP__sim.__PVT__uart_status_status),2);
    bufp->fullBit(oldp+103,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_we));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re));
    bufp->fullBit(oldp+105,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_we));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re));
    bufp->fullBit(oldp+108,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_we));
    bufp->fullBit(oldp+110,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re));
    bufp->fullBit(oldp+112,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_we));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re));
    bufp->fullBit(oldp+115,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_we));
    bufp->fullCData(oldp+117,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                ? vlSymsp->TOP__sim.__PVT__mem
                               [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                : 0U)),8);
    bufp->fullSData(oldp+118,(vlSymsp->TOP__sim.__PVT__interface1_adr),14);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r),32);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__sim.__PVT__interface1_re));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__sim.__PVT__interface1_we));
    bufp->fullIData(oldp+122,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r),32);
    bufp->fullBit(oldp+124,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r));
    bufp->fullIData(oldp+126,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r),32);
    bufp->fullIData(oldp+127,((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                               | (vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                                  | (vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                                     | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r)))),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__sim.__PVT__dbus_ack));
    bufp->fullIData(oldp+130,((((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                 ? ((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                    | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBusWishbone_ADR) 
                                       << 2U)) : (0xfffffffcU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                               >> 2U)),30);
    bufp->fullCData(oldp+131,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                    ? 7U : 2U) : 0U)),3);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid));
    bufp->fullIData(oldp+133,(vlSymsp->TOP__sim.__PVT__shared_dat_r),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
    bufp->fullCData(oldp+135,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                : 0xfU)),4);
    bufp->fullBit(oldp+136,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    bufp->fullBit(oldp+137,((0U == vlSymsp->TOP__sim.__PVT__count)));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__sim.__PVT__grant));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__sim.__PVT__ibus_ack));
    bufp->fullIData(oldp+140,(((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                               >> 2U)) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
    bufp->fullCData(oldp+141,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                ? 7U : 2U)),3);
    bufp->fullBit(oldp+142,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__sim.__PVT__int_rst));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__sim.__PVT__interface0_ack));
    bufp->fullIData(oldp+146,(vlSymsp->TOP__sim.__PVT__self0),30);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__sim.__PVT__self6),3);
    bufp->fullBit(oldp+148,(((IData)(vlSymsp->TOP__sim.__PVT__self3) 
                             & ((IData)(vlSymsp->TOP__sim.__PVT__slave_sel) 
                                >> 3U))));
    bufp->fullIData(oldp+149,(vlSymsp->TOP__sim.__PVT__interface0_dat_r),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__sim.__PVT__self1),32);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+152,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc));
    bufp->fullIData(oldp+153,(vlSymsp->TOP__sim.__PVT__sram
                              [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__sim.__PVT__self2),4);
    bufp->fullBit(oldp+155,(vlSymsp->TOP__sim.__PVT__self4));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__sim.__PVT__self5));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc));
    bufp->fullIData(oldp+159,(((0x18fffffU >= vlSymsp->TOP__sim.__PVT__main_ram_adr0)
                                ? vlSymsp->TOP__sim.__PVT__main_ram
                               [vlSymsp->TOP__sim.__PVT__main_ram_adr0]
                                : 0U)),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__sim.__PVT__interrupt),32);
    bufp->fullBit(oldp+161,(vlSymsp->TOP__sim.__PVT__next_state));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__sim.__PVT__ram_bus_ack));
    bufp->fullBit(oldp+163,(((IData)(vlSymsp->TOP__sim.__PVT__self3) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__slave_sel))));
    bufp->fullCData(oldp+164,(vlSymsp->TOP__sim.__PVT__request),2);
    bufp->fullBit(oldp+165,(((IData)(vlSymsp->TOP__sim.__PVT__soc_rst) 
                             | ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                >> 1U))));
    bufp->fullBit(oldp+166,(vlSymsp->TOP__sim.__PVT__reset_re));
    bufp->fullBit(oldp+167,(vlSymsp->TOP__sim.__PVT__scratch_re));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__sim.__PVT__self3));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__sim.__PVT__shared_ack));
    bufp->fullBit(oldp+170,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                                   >> 8U))));
    bufp->fullBit(oldp+171,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                                   >> 9U))));
    bufp->fullCData(oldp+172,(vlSymsp->TOP__sim.__PVT__slave_sel),4);
    bufp->fullCData(oldp+173,(vlSymsp->TOP__sim.__PVT__slave_sel_r),4);
    bufp->fullBit(oldp+174,(vlSymsp->TOP__sim.__PVT__soc_rst));
    bufp->fullSData(oldp+175,((0x7ffU & vlSymsp->TOP__sim.__PVT__self0)),11);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__sim.__PVT__sram0_we),4);
    bufp->fullIData(oldp+177,((0x1ffffffU & vlSymsp->TOP__sim.__PVT__self0)),25);
    bufp->fullCData(oldp+178,(vlSymsp->TOP__sim.__PVT__sram1_we),4);
    bufp->fullBit(oldp+179,(vlSymsp->TOP__sim.__PVT__state));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__sim.__PVT__timer_en_re));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__sim.__PVT__timer_enable_re));
    bufp->fullBit(oldp+182,(((IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending))));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__sim.__PVT__timer_load_re));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__sim.__PVT__timer_pending_r));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__sim.__PVT__timer_pending_re));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__sim.__PVT__timer_reload_re));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__sim.__PVT__timer_status_re));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__sim.__PVT__timer_update_value_re));
    bufp->fullIData(oldp+189,(vlSymsp->TOP__sim.__PVT__timer_value),32);
    bufp->fullBit(oldp+190,(vlSymsp->TOP__sim.__PVT__timer_value_re));
    bufp->fullBit(oldp+191,(vlSymsp->TOP__sim.__PVT__timer_zero_clear));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__sim.__PVT__uart_enable_re));
    bufp->fullBit(oldp+194,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                   | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                       & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                      >> 1U)))));
    bufp->fullCData(oldp+195,(vlSymsp->TOP__sim.__PVT__uart_pending_r),2);
    bufp->fullBit(oldp+196,(vlSymsp->TOP__sim.__PVT__uart_pending_re));
    bufp->fullBit(oldp+197,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable));
    bufp->fullBit(oldp+198,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage) 
                                   >> 1U))));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__sim.__PVT__uart_rx_clear));
    bufp->fullCData(oldp+200,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume),4);
    bufp->fullBit(oldp+201,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read));
    bufp->fullBit(oldp+202,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                                   >> 8U))));
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                                   >> 9U))));
    bufp->fullCData(oldp+204,((0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1))),8);
    bufp->fullCData(oldp+205,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0),5);
    bufp->fullCData(oldp+206,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))),5);
    bufp->fullCData(oldp+207,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce),4);
    bufp->fullSData(oldp+208,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
    bufp->fullBit(oldp+209,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
    bufp->fullBit(oldp+210,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
    bufp->fullCData(oldp+211,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+212,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
    bufp->fullBit(oldp+213,(vlSymsp->TOP__sim.__PVT__uart_rxempty_re));
    bufp->fullBit(oldp+214,(vlSymsp->TOP__sim.__PVT__uart_rxfull_re));
    bufp->fullCData(oldp+215,((0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),8);
    bufp->fullBit(oldp+216,(vlSymsp->TOP__sim.__PVT__uart_rxtx_re));
    bufp->fullBit(oldp+217,(vlSymsp->TOP__sim.__PVT__uart_rxtx_we));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__sim.__PVT__uart_status_re));
    bufp->fullBit(oldp+219,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
    bufp->fullBit(oldp+220,((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage))));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__sim.__PVT__uart_tx_clear));
    bufp->fullCData(oldp+222,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume),4);
    bufp->fullCData(oldp+223,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0),5);
    bufp->fullCData(oldp+224,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))),5);
    bufp->fullCData(oldp+225,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce),4);
    bufp->fullSData(oldp+226,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
    bufp->fullSData(oldp+227,((0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),10);
    bufp->fullBit(oldp+228,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
    bufp->fullCData(oldp+229,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+230,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
    bufp->fullBit(oldp+231,(((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
                             & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))));
    bufp->fullBit(oldp+232,(vlSymsp->TOP__sim.__PVT__uart_txempty_re));
    bufp->fullBit(oldp+233,(vlSymsp->TOP__sim.__PVT__uart_txfull_re));
    bufp->fullBit(oldp+234,(((IData)(vlSymsp->TOP__sim.__PVT__self4) 
                             & ((~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__self3)))));
    bufp->fullSData(oldp+235,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__sim.__PVT__main_ram_adr0),25);
    bufp->fullCData(oldp+237,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
    bufp->fullSData(oldp+238,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
    bufp->fullSData(oldp+239,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
    bufp->fullSData(oldp+240,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
    bufp->fullSData(oldp+241,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
    bufp->fullSData(oldp+242,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
    bufp->fullSData(oldp+243,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
    bufp->fullSData(oldp+244,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
    bufp->fullSData(oldp+245,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
    bufp->fullSData(oldp+246,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
    bufp->fullSData(oldp+247,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
    bufp->fullSData(oldp+248,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
    bufp->fullSData(oldp+249,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
    bufp->fullSData(oldp+250,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
    bufp->fullSData(oldp+251,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
    bufp->fullSData(oldp+252,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
    bufp->fullSData(oldp+253,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
    bufp->fullSData(oldp+254,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
    bufp->fullSData(oldp+255,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
    bufp->fullSData(oldp+256,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
    bufp->fullSData(oldp+257,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
    bufp->fullSData(oldp+258,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
    bufp->fullSData(oldp+259,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
    bufp->fullSData(oldp+260,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
    bufp->fullSData(oldp+261,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
    bufp->fullSData(oldp+262,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
    bufp->fullSData(oldp+263,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
    bufp->fullSData(oldp+264,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
    bufp->fullSData(oldp+265,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
    bufp->fullSData(oldp+266,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
    bufp->fullSData(oldp+267,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
    bufp->fullSData(oldp+268,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
    bufp->fullSData(oldp+269,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__sim.__PVT__mem_write_block__DOT__we_index),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__sim.__PVT__mem_write_block_1__DOT__we_index_1),32);
    bufp->fullBit(oldp+272,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
    bufp->fullBit(oldp+274,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1))));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready)))));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
    bufp->fullBit(oldp+278,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
    bufp->fullIData(oldp+279,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
    bufp->fullBit(oldp+280,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
    bufp->fullIData(oldp+281,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+282,((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                             >> 0x1fU)));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
    bufp->fullIData(oldp+284,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+286,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
    bufp->fullBit(oldp+287,((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xfU)))));
    bufp->fullCData(oldp+288,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                        >> 5U))),7);
    bufp->fullBit(oldp+289,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
    bufp->fullIData(oldp+290,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
    bufp->fullBit(oldp+291,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                             | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    bufp->fullBit(oldp+293,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
    bufp->fullIData(oldp+294,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
    bufp->fullIData(oldp+296,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+297,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
    bufp->fullIData(oldp+298,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
    bufp->fullBit(oldp+299,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
    bufp->fullBit(oldp+300,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
    bufp->fullBit(oldp+301,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
    bufp->fullBit(oldp+302,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
    bufp->fullIData(oldp+303,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
    bufp->fullBit(oldp+304,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
    bufp->fullBit(oldp+305,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    bufp->fullBit(oldp+306,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
    bufp->fullBit(oldp+307,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
    bufp->fullBit(oldp+308,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
    bufp->fullBit(oldp+311,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
    bufp->fullIData(oldp+313,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
    bufp->fullCData(oldp+314,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
    bufp->fullQData(oldp+316,((0xfffffffffffffULL & 
                               (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                 + (((QData)((IData)(
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (1ULL 
                                                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                     << 0x32U) | (0x3ffffffffffffULL 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                     << 0x10U)))) 
                                + (((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (1ULL 
                                                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                    << 0x32U) | (0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                    << 0x10U)))))),52);
    bufp->fullQData(oldp+318,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
    bufp->fullQData(oldp+320,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullQData(oldp+322,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, 
                                                                             (0xffffU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
    bufp->fullQData(oldp+324,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, 
                                                                             (0xffffU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullIData(oldp+326,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                               * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullIData(oldp+327,((0xfffffffeU & (((3U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                              + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
    bufp->fullBit(oldp+328,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                              != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                             | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                    ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0x15U) ^ 
                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                        >> 1U)) : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                    ? 
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x15U)
                                                    : 
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 8U)))))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+329,((IData)((0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          ((3U 
                                                                            == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                              >> 0x1fU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                        (0x1fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4))))),32);
    bufp->fullIData(oldp+330,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                    : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                        ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                           | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                        : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                           ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)))
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA)
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+332,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU)))
                                ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                        << 0x10U) | 
                                       (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullBit(oldp+333,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 7U)))));
    bufp->fullBit(oldp+334,((1U & (~ (IData)(((0U == 
                                               (0xf8000U 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                              & ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0xdU))) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 0xdU))))))))));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    bufp->fullBit(oldp+336,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_117)) 
                             & (0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))));
    bufp->fullBit(oldp+337,((0U == (0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+338,((0x2004020U == (0x2004064U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
    bufp->fullBit(oldp+340,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
    bufp->fullBit(oldp+341,((0x2000030U == (0x2004074U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullCData(oldp+342,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL),2);
    bufp->fullBit(oldp+343,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_6));
    bufp->fullCData(oldp+344,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL),2);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL),2);
    bufp->fullBit(oldp+346,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+347,((0x4008U == (0x4048U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
    bufp->fullBit(oldp+349,((0x20U == (0x20U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+351,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_48))));
    bufp->fullBit(oldp+352,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_59));
    bufp->fullCData(oldp+353,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL),2);
    bufp->fullCData(oldp+354,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL),2);
    bufp->fullCData(oldp+355,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL),2);
    bufp->fullIData(oldp+356,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+357,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+358,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+359,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullIData(oldp+360,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
    bufp->fullBit(oldp+361,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
    bufp->fullBit(oldp+362,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
    bufp->fullBit(oldp+363,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    bufp->fullBit(oldp+364,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
    bufp->fullQData(oldp+366,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
    bufp->fullQData(oldp+368,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
    bufp->fullQData(oldp+370,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
    bufp->fullQData(oldp+372,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
    bufp->fullIData(oldp+374,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
    bufp->fullBit(oldp+375,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
    bufp->fullBit(oldp+376,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
    bufp->fullCData(oldp+378,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
    bufp->fullCData(oldp+379,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
    bufp->fullCData(oldp+380,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
    bufp->fullIData(oldp+381,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
    bufp->fullBit(oldp+382,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    bufp->fullIData(oldp+383,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
    bufp->fullBit(oldp+384,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
    bufp->fullCData(oldp+386,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
    bufp->fullBit(oldp+387,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_32));
    bufp->fullBit(oldp+388,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_103))));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+390,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullBit(oldp+391,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+392,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
    bufp->fullBit(oldp+393,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+394,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+395,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
    bufp->fullIData(oldp+396,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
    bufp->fullIData(oldp+397,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
    bufp->fullBit(oldp+400,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+401,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
    bufp->fullCData(oldp+403,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
    bufp->fullCData(oldp+404,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
    bufp->fullBit(oldp+405,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_117));
    bufp->fullBit(oldp+406,((0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+407,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA));
    bufp->fullCData(oldp+408,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
    bufp->fullIData(oldp+409,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4),32);
    bufp->fullIData(oldp+410,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
    bufp->fullCData(oldp+411,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
    bufp->fullIData(oldp+412,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
    bufp->fullBit(oldp+413,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+414,(((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                             | ((0x6fU == (0x7fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                | ((0x1073U == (0x107fU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                   | ((0x2073U == (0x207fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | ((0x4063U == 
                                          (0x407fU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         | ((0x2013U 
                                             == (0x207fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            | ((0x13U 
                                                == 
                                                (0x107fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x603fU 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  | ((3U 
                                                      == 
                                                      (0x207fU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     | ((3U 
                                                         == 
                                                         (0x505fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        | ((0x63U 
                                                            == 
                                                            (0x707bU 
                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           | ((0xfU 
                                                               == 
                                                               (0x607fU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0xfc00007fU 
                                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 | ((0x500fU 
                                                                     == 
                                                                     (0x1f0707fU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    | ((0x5013U 
                                                                        == 
                                                                        (0xbe00705fU 
                                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       | ((0x1013U 
                                                                           == 
                                                                           (0xfe00305fU 
                                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                          | ((0x33U 
                                                                              == 
                                                                              (0xbe00707fU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                             | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))));
    bufp->fullBit(oldp+415,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
    bufp->fullBit(oldp+416,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    bufp->fullBit(oldp+417,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    bufp->fullBit(oldp+418,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
    bufp->fullIData(oldp+419,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
    bufp->fullBit(oldp+420,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    bufp->fullIData(oldp+421,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
    bufp->fullBit(oldp+422,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
    bufp->fullBit(oldp+423,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    bufp->fullIData(oldp+424,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
    bufp->fullBit(oldp+425,((0U == (0x58U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+426,((0x1008U == (0x5048U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+427,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
    bufp->fullBit(oldp+429,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
    bufp->fullBit(oldp+430,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
    bufp->fullCData(oldp+431,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_BRANCH_CTRL),2);
    bufp->fullIData(oldp+432,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
    bufp->fullIData(oldp+433,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
    bufp->fullIData(oldp+434,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
    bufp->fullBit(oldp+435,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
    bufp->fullBit(oldp+436,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
    bufp->fullBit(oldp+437,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid));
    bufp->fullBit(oldp+438,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
    bufp->fullBit(oldp+439,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
    bufp->fullBit(oldp+440,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
    bufp->fullBit(oldp+441,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
    bufp->fullBit(oldp+442,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
    bufp->fullBit(oldp+443,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
    bufp->fullBit(oldp+444,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_h017d330c__0))));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
    bufp->fullBit(oldp+446,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
    bufp->fullBit(oldp+448,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    bufp->fullBit(oldp+450,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
    bufp->fullBit(oldp+451,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
    bufp->fullBit(oldp+452,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
    bufp->fullBit(oldp+453,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+454,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    bufp->fullBit(oldp+455,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
    bufp->fullBit(oldp+456,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
    bufp->fullIData(oldp+457,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
    bufp->fullBit(oldp+458,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong));
    bufp->fullBit(oldp+459,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
    bufp->fullBit(oldp+460,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
    bufp->fullBit(oldp+461,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
    bufp->fullBit(oldp+462,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
    bufp->fullBit(oldp+463,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    bufp->fullCData(oldp+464,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
    bufp->fullIData(oldp+465,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullBit(oldp+466,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)))));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
    bufp->fullIData(oldp+468,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
    bufp->fullCData(oldp+469,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
    bufp->fullCData(oldp+470,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
    bufp->fullBit(oldp+471,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_last));
    bufp->fullBit(oldp+472,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
    bufp->fullIData(oldp+473,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
    bufp->fullBit(oldp+474,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
    bufp->fullBit(oldp+475,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
    bufp->fullCData(oldp+476,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
    bufp->fullBit(oldp+477,(((~ ((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                    | ((0x1073U == 
                                        (0x107fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       | ((0x2073U 
                                           == (0x207fU 
                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                          | ((0x4063U 
                                              == (0x407fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                             | ((0x2013U 
                                                 == 
                                                 (0x207fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                | ((0x13U 
                                                    == 
                                                    (0x107fU 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x603fU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                      | ((3U 
                                                          == 
                                                          (0x207fU 
                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                         | ((3U 
                                                             == 
                                                             (0x505fU 
                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                            | ((0x63U 
                                                                == 
                                                                (0x707bU 
                                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                               | ((0xfU 
                                                                   == 
                                                                   (0x607fU 
                                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                  | ((0x33U 
                                                                      == 
                                                                      (0xfc00007fU 
                                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                     | ((0x500fU 
                                                                         == 
                                                                         (0x1f0707fU 
                                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                        | ((0x5013U 
                                                                            == 
                                                                            (0xbe00705fU 
                                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                           | ((0x1013U 
                                                                               == 
                                                                               (0xfe00305fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                              | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid))));
    bufp->fullBit(oldp+478,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
    bufp->fullIData(oldp+479,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataSignal),32);
    bufp->fullIData(oldp+480,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
    bufp->fullBit(oldp+481,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_allowCsrSignal));
    bufp->fullBit(oldp+482,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid))))));
    bufp->fullBit(oldp+483,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
    bufp->fullBit(oldp+484,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
    bufp->fullBit(oldp+485,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
    bufp->fullBit(oldp+486,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
    bufp->fullBit(oldp+487,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_externalInterrupt)));
    bufp->fullBit(oldp+488,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
    bufp->fullCData(oldp+489,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
    bufp->fullBit(oldp+490,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready));
    bufp->fullBit(oldp+491,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
    bufp->fullBit(oldp+492,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    bufp->fullBit(oldp+493,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    bufp->fullBit(oldp+494,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
    bufp->fullBit(oldp+495,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    bufp->fullBit(oldp+496,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready));
    bufp->fullBit(oldp+497,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
    bufp->fullBit(oldp+498,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1));
    bufp->fullBit(oldp+499,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
    bufp->fullBit(oldp+501,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
    bufp->fullBit(oldp+502,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
    bufp->fullBit(oldp+503,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
    bufp->fullBit(oldp+505,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
    bufp->fullBit(oldp+509,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack))));
    bufp->fullBit(oldp+510,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
    bufp->fullIData(oldp+511,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
    bufp->fullBit(oldp+513,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
    bufp->fullBit(oldp+514,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
    bufp->fullBit(oldp+515,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
    bufp->fullBit(oldp+516,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l245));
    bufp->fullBit(oldp+517,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
    bufp->fullBit(oldp+518,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
    bufp->fullBit(oldp+519,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l262));
    bufp->fullBit(oldp+520,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid)))));
    bufp->fullBit(oldp+521,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready));
    bufp->fullBit(oldp+522,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                              ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr)
                              : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr))));
    bufp->fullBit(oldp+523,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                              ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
                              : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached))));
    bufp->fullIData(oldp+524,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address)),32);
    bufp->fullIData(oldp+525,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data)),32);
    bufp->fullCData(oldp+526,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask))),4);
    bufp->fullCData(oldp+527,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size))),3);
    bufp->fullBit(oldp+528,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) 
                             || (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last))));
    bufp->fullBit(oldp+529,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN));
    bufp->fullBit(oldp+530,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr));
    bufp->fullBit(oldp+531,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached));
    bufp->fullIData(oldp+532,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address),32);
    bufp->fullIData(oldp+533,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data),32);
    bufp->fullCData(oldp+534,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask),4);
    bufp->fullCData(oldp+535,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size),3);
    bufp->fullBit(oldp+536,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last));
    bufp->fullBit(oldp+537,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
    bufp->fullIData(oldp+538,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
    bufp->fullCData(oldp+539,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+540,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid))));
    bufp->fullBit(oldp+541,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid)) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
    bufp->fullBit(oldp+542,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
    bufp->fullBit(oldp+543,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
    bufp->fullCData(oldp+544,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
    bufp->fullCData(oldp+545,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+546,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+547,((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+548,(((0xffff0000U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))),32);
    bufp->fullCData(oldp+549,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0xcU))),2);
    bufp->fullIData(oldp+550,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 0xcU)))
                                ? (((- (IData)(((~ 
                                                 (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                  >> 0xeU)) 
                                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspShifted) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspShifted))
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? (((- (IData)(
                                                   ((~ 
                                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xeU)) 
                                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2) 
                                                       >> 7U)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))
                                    : ((0xffff0000U 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))))),32);
    bufp->fullBit(oldp+551,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                             >> 7U)))));
    bufp->fullCData(oldp+552,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+553,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+554,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
    bufp->fullIData(oldp+555,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
    bufp->fullIData(oldp+556,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                   & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                    : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)))),32);
    bufp->fullCData(oldp+557,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)),5);
    bufp->fullIData(oldp+558,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
    bufp->fullBit(oldp+559,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
    bufp->fullBit(oldp+560,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
    bufp->fullBit(oldp+561,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackWrites_valid));
    bufp->fullCData(oldp+562,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U))),5);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    bufp->fullBit(oldp+564,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
    bufp->fullCData(oldp+565,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
    bufp->fullIData(oldp+566,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
    bufp->fullBit(oldp+567,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+568,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+569,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0xfU)))));
    bufp->fullBit(oldp+570,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0x14U)))));
    bufp->fullBit(oldp+571,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
    bufp->fullBit(oldp+572,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
    bufp->fullBit(oldp+574,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
    bufp->fullBit(oldp+576,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
    bufp->fullBit(oldp+577,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
    bufp->fullBit(oldp+578,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
    bufp->fullBit(oldp+579,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
    bufp->fullBit(oldp+580,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_103)))))));
    bufp->fullBit(oldp+581,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_32)))));
    bufp->fullBit(oldp+582,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
    bufp->fullCData(oldp+584,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+585,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                             & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0x15U) ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                  >> 1U))
                                 : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0x15U) : 
                                    (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 8U))))));
    bufp->fullIData(oldp+586,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
    bufp->fullIData(oldp+587,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
    bufp->fullIData(oldp+588,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                               + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
    bufp->fullIData(oldp+590,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
    bufp->fullBit(oldp+592,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
    bufp->fullCData(oldp+593,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
    bufp->fullBit(oldp+594,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
    bufp->fullBit(oldp+595,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
    bufp->fullBit(oldp+596,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
    bufp->fullBit(oldp+597,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    bufp->fullBit(oldp+598,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    bufp->fullBit(oldp+599,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    bufp->fullIData(oldp+600,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mscratch),32);
    bufp->fullBit(oldp+601,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
    bufp->fullCData(oldp+602,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
    bufp->fullIData(oldp+603,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
    bufp->fullQData(oldp+604,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
    bufp->fullQData(oldp+606,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
    bufp->fullBit(oldp+608,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    bufp->fullCData(oldp+609,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
    bufp->fullBit(oldp+611,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
    bufp->fullCData(oldp+612,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
    bufp->fullBit(oldp+613,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302));
    bufp->fullBit(oldp+614,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302_1));
    bufp->fullBit(oldp+615,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302_2));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_lastStageWasWfi));
    bufp->fullBit(oldp+617,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
    bufp->fullBit(oldp+618,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
    bufp->fullBit(oldp+619,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
    bufp->fullBit(oldp+620,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
    bufp->fullBit(oldp+621,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                     << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
    bufp->fullBit(oldp+622,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1456));
    bufp->fullCData(oldp+623,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+624,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
    bufp->fullBit(oldp+625,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1519));
    bufp->fullBit(oldp+626,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake)))));
    bufp->fullBit(oldp+627,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1456) 
                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                 & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                   & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
    bufp->fullBit(oldp+628,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid))));
    bufp->fullBit(oldp+629,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
    bufp->fullBit(oldp+630,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                             & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
    bufp->fullBit(oldp+631,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1555));
    bufp->fullBit(oldp+632,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
    bufp->fullBit(oldp+633,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
    bufp->fullBit(oldp+634,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
    bufp->fullBit(oldp+635,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction))));
    bufp->fullBit(oldp+636,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                   >> 0xdU))));
    bufp->fullBit(oldp+637,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1587));
    bufp->fullSData(oldp+638,((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+639,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU))) 
                             || (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU))))));
    bufp->fullBit(oldp+640,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))));
    bufp->fullSData(oldp+641,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
    bufp->fullSData(oldp+642,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
    bufp->fullIData(oldp+643,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
    bufp->fullIData(oldp+644,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
    bufp->fullIData(oldp+645,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
    __Vtemp_2[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                >> 0x33U))))) 
                      << 0x14U) | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (3U & ((- (IData)((1U & (IData)(
                                                    (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                     >> 0x33U))))) 
                           >> 0xcU));
    __Vtemp_3[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
    __Vtemp_3[1U] = (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    VL_SHIFTL_WWI(66,66,6, __Vtemp_4, __Vtemp_3, 0x20U);
    VL_ADD_W(3, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    __Vtemp_6[0U] = __Vtemp_5[0U];
    __Vtemp_6[1U] = __Vtemp_5[1U];
    __Vtemp_6[2U] = (3U & __Vtemp_5[2U]);
    bufp->fullWData(oldp+647,(__Vtemp_6),66);
    bufp->fullBit(oldp+650,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid))));
    bufp->fullQData(oldp+651,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
    bufp->fullIData(oldp+653,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
    bufp->fullWData(oldp+654,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
    bufp->fullBit(oldp+657,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
    bufp->fullBit(oldp+658,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
    bufp->fullBit(oldp+659,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
    bufp->fullCData(oldp+660,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
    bufp->fullCData(oldp+661,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
    bufp->fullBit(oldp+662,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullBit(oldp+663,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    bufp->fullBit(oldp+664,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
    bufp->fullBit(oldp+665,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullIData(oldp+666,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
    bufp->fullBit(oldp+667,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
    bufp->fullBit(oldp+668,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
    bufp->fullQData(oldp+669,((((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U])) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                                     >> 0x1fU))))))),33);
    bufp->fullQData(oldp+671,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
    bufp->fullIData(oldp+673,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                              >> 0x20U)))
                                ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U] 
                                    << 1U) | (1U & (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                            >> 0x1fU))))
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
    bufp->fullIData(oldp+674,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                << 1U) | (1U & (~ (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                           >> 0x20U)))))),32);
    bufp->fullIData(oldp+675,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
    bufp->fullBit(oldp+676,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
    bufp->fullBit(oldp+677,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
    bufp->fullBit(oldp+678,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
    bufp->fullBit(oldp+679,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3857));
    bufp->fullBit(oldp+680,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3858));
    bufp->fullBit(oldp+681,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3859));
    bufp->fullBit(oldp+682,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3860));
    bufp->fullBit(oldp+683,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_769));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
    bufp->fullBit(oldp+685,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
    bufp->fullBit(oldp+686,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
    bufp->fullBit(oldp+687,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
    bufp->fullBit(oldp+689,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_832));
    bufp->fullBit(oldp+690,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
    bufp->fullBit(oldp+691,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
    bufp->fullBit(oldp+692,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2816));
    bufp->fullBit(oldp+693,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2944));
    bufp->fullBit(oldp+694,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2818));
    bufp->fullBit(oldp+695,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2946));
    bufp->fullBit(oldp+696,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3072));
    bufp->fullBit(oldp+697,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3200));
    bufp->fullBit(oldp+698,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3074));
    bufp->fullBit(oldp+699,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3202));
    bufp->fullBit(oldp+700,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
    bufp->fullBit(oldp+701,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
    bufp->fullCData(oldp+702,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                     >> 0xbU))),2);
    bufp->fullBit(oldp+703,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1587) 
                             & ((0xe8U == (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x16U)) 
                                | (0x3bU == (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0x18U))))));
    bufp->fullBit(oldp+704,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1587) 
                             & ((3U <= (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x14U))) 
                                & ((0xb00U == (0xf60U 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0x14U))) 
                                   | (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction)) 
                                       & (0xc0000000U 
                                          == (0xf6000000U 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION))) 
                                      | (0x320U == 
                                         (0xfe0U & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x14U)))))))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+705,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1587)))));
    bufp->fullBit(oldp+706,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
    bufp->fullQData(oldp+707,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL_string),40);
    bufp->fullWData(oldp+709,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
    bufp->fullQData(oldp+712,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                ? 0x584f525f31ULL : 
                               ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                 ? 0x4f525f3120ULL : 
                                ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                  ? 0x414e445f31ULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+714,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL_string),24);
    bufp->fullQData(oldp+715,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                ? 0x4144445f53554220ULL
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                    ? 0x534c545f534c5455ULL
                                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                        ? 0x4249545749534520ULL
                                        : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullWData(oldp+717,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+720,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_ENV_CTRL_string),40);
    bufp->fullQData(oldp+722,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_ENV_CTRL_string),40);
    bufp->fullQData(oldp+724,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_ENV_CTRL_string),40);
    bufp->fullIData(oldp+726,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+727,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+730,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+733,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+734,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+737,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                ? 0x4144445f53554220ULL
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                    ? 0x534c545f534c5455ULL
                                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                        ? 0x4249545749534520ULL
                                        : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullQData(oldp+739,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? 0x584f525f31ULL : 
                               ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? 0x4f525f3120ULL : 
                                ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? 0x414e445f31ULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+741,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+742,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
    bufp->fullIData(oldp+745,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+746,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+749,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+752,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL_string),32);
    bufp->fullQData(oldp+753,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL_string),40);
    bufp->fullQData(oldp+755,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL_string),40);
    bufp->fullQData(oldp+757,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL_string),40);
    bufp->fullBit(oldp+759,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
    bufp->fullBit(oldp+760,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    bufp->fullIData(oldp+761,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
    bufp->fullBit(oldp+762,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
    bufp->fullBit(oldp+763,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    bufp->fullCData(oldp+764,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
    bufp->fullBit(oldp+765,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                      >> 7U)))));
    bufp->fullBit(oldp+766,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
    bufp->fullBit(oldp+767,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
    bufp->fullBit(oldp+768,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
    bufp->fullBit(oldp+769,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
    bufp->fullBit(oldp+770,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
    bufp->fullCData(oldp+771,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
    bufp->fullBit(oldp+772,((1U & ((~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                       >> 7U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))));
    bufp->fullCData(oldp+773,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                            >> 5U) : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
    bufp->fullBit(oldp+774,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                   >> 7U))));
    bufp->fullIData(oldp+775,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+776,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                          >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
    bufp->fullBit(oldp+777,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
    bufp->fullBit(oldp+778,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
    bufp->fullBit(oldp+779,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                   >> 1U))));
    bufp->fullIData(oldp+780,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                           >> 2U))),20);
    bufp->fullBit(oldp+781,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
    bufp->fullBit(oldp+782,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
    bufp->fullBit(oldp+783,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
    bufp->fullBit(oldp+784,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
    bufp->fullBit(oldp+785,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
    bufp->fullBit(oldp+786,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
    bufp->fullBit(oldp+787,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+788,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
    bufp->fullBit(oldp+789,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
    bufp->fullBit(oldp+790,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
    bufp->fullCData(oldp+791,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
    bufp->fullBit(oldp+792,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
    bufp->fullBit(oldp+793,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
    bufp->fullCData(oldp+794,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
    bufp->fullBit(oldp+795,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
    bufp->fullBit(oldp+796,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
    bufp->fullIData(oldp+797,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
    bufp->fullBit(oldp+798,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
    bufp->fullBit(oldp+799,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
    bufp->fullCData(oldp+800,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
    bufp->fullBit(oldp+801,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
    bufp->fullIData(oldp+803,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
    bufp->fullBit(oldp+804,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
    bufp->fullSData(oldp+805,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
    bufp->fullBit(oldp+806,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
    bufp->fullBit(oldp+807,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
    bufp->fullSData(oldp+808,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
    bufp->fullIData(oldp+809,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
    bufp->fullCData(oldp+810,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
    bufp->fullBit(oldp+811,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+812,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                   >> 1U))));
    bufp->fullIData(oldp+813,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                           >> 2U))),20);
    bufp->fullIData(oldp+814,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                              << 0x10U) 
                                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                 << 8U) 
                                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
    bufp->fullBit(oldp+815,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid))));
    bufp->fullBit(oldp+816,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l648));
    bufp->fullBit(oldp+817,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667));
    bufp->fullBit(oldp+818,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
    bufp->fullBit(oldp+819,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))));
    bufp->fullCData(oldp+820,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
    bufp->fullBit(oldp+821,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l648) 
                             & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                 == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                               >> 2U))) 
                                & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                          & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
    bufp->fullCData(oldp+822,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
    bufp->fullBit(oldp+823,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
    bufp->fullCData(oldp+824,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
    bufp->fullBit(oldp+825,((((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                               >> 0xcU) == (0xfffffU 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                               >> 2U))) 
                             & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+826,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
    bufp->fullBit(oldp+827,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
    bufp->fullBit(oldp+828,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                             | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l648) 
                                & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                    == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                  >> 2U))) 
                                   & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
                                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask))))))));
    bufp->fullCData(oldp+829,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
    bufp->fullBit(oldp+830,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
    bufp->fullBit(oldp+831,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
    bufp->fullBit(oldp+832,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l829));
    bufp->fullIData(oldp+833,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+834,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    bufp->fullBit(oldp+835,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
    bufp->fullIData(oldp+843,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
    bufp->fullIData(oldp+844,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
    bufp->fullBit(oldp+845,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
    bufp->fullBit(oldp+848,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
    bufp->fullBit(oldp+850,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
    bufp->fullBit(oldp+851,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
    bufp->fullCData(oldp+852,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
    bufp->fullBit(oldp+853,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                      >> 7U)))));
    bufp->fullBit(oldp+854,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l863));
    bufp->fullBit(oldp+855,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
    bufp->fullBit(oldp+856,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
    bufp->fullBit(oldp+857,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
    bufp->fullBit(oldp+858,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                   | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
    bufp->fullBit(oldp+859,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
    bufp->fullBit(oldp+860,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                              ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                              : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid))));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1009));
    bufp->fullBit(oldp+862,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)))));
    bufp->fullBit(oldp+863,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
    bufp->fullBit(oldp+864,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
    bufp->fullBit(oldp+865,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1072));
    bufp->fullBit(oldp+866,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    bufp->fullCData(oldp+867,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                     + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
    bufp->fullCData(oldp+868,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
    bufp->fullBit(oldp+869,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
    bufp->fullBit(oldp+873,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
    bufp->fullBit(oldp+874,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1097));
    bufp->fullBit(oldp+875,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
    bufp->fullBit(oldp+877,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
    bufp->fullBit(oldp+878,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid))));
}
