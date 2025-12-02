// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim___024root.h"

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_static(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_static\n"); );
    // Body
    Vsim_sim___eval_static__TOP__sim((&vlSymsp->TOP__sim));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf);
VL_ATTR_COLD void Vsim_sim___eval_initial__TOP__sim(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_initial(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial\n"); );
    // Body
    Vsim___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsim_sim___eval_initial__TOP__sim((&vlSymsp->TOP__sim));
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = vlSelf->sys_clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(Vsim___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___eval_triggers__stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->serial_source_valid = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable;
    vlSelf->serial_source_data = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1));
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0));
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__0(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__1(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__2(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__3(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__8(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__1(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__2(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsim___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vsim_sim___stl_sequent__TOP__sim__0((&vlSymsp->TOP__sim));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__0((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__1((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__2((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__3((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__4((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__5((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__6((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__7((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__8((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_sim___stl_sequent__TOP__sim__1((&vlSymsp->TOP__sim));
        Vsim_sim___stl_sequent__TOP__sim__2((&vlSymsp->TOP__sim));
    }
}
