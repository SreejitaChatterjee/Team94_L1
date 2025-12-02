// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+879,(vlSelf->serial_sink_data),8);
    bufp->fullBit(oldp+880,(vlSelf->serial_sink_ready));
    bufp->fullBit(oldp+881,(vlSelf->serial_sink_valid));
    bufp->fullCData(oldp+882,(vlSelf->serial_source_data),8);
    bufp->fullBit(oldp+883,(vlSelf->serial_source_ready));
    bufp->fullBit(oldp+884,(vlSelf->serial_source_valid));
    bufp->fullBit(oldp+885,(vlSelf->sim_trace));
    bufp->fullBit(oldp+886,(vlSelf->sys_clk));
    bufp->fullSData(oldp+887,(vlSelf->serial_sink_data),10);
    bufp->fullBit(oldp+888,(((IData)(vlSelf->serial_sink_valid) 
                             & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))));
    bufp->fullIData(oldp+889,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->fullIData(oldp+890,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->fullIData(oldp+891,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->fullBit(oldp+892,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->fullBit(oldp+893,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->fullBit(oldp+894,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                             >> 0x1fU)));
    bufp->fullBit(oldp+895,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->fullBit(oldp+896,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->fullCData(oldp+897,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->fullIData(oldp+898,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->fullCData(oldp+899,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->fullBit(oldp+900,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->fullBit(oldp+901,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->fullIData(oldp+902,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->fullIData(oldp+909,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->fullIData(oldp+916,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->fullIData(oldp+917,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->fullIData(oldp+920,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->fullIData(oldp+921,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->fullIData(oldp+922,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->fullIData(oldp+923,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->fullIData(oldp+925,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->fullIData(oldp+926,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->fullIData(oldp+927,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->fullIData(oldp+928,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->fullIData(oldp+929,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->fullIData(oldp+930,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->fullIData(oldp+931,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->fullIData(oldp+932,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->fullIData(oldp+933,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->fullBit(oldp+934,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                             & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                             >> 2U)) 
                                == (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                    >> 0xcU)))));
}
