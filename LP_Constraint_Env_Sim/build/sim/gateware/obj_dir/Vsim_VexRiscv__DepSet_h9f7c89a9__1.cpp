// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h2191630b_0;
extern const VlUnpacked<QData/*39:0*/, 4> Vsim__ConstPool__TABLE_h82842568_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h9e379ad3_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__15(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__15\n"); );
    // Init
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*6:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    // Body
    vlSelf->__PVT__when_HazardSimplePlugin_l48_2 = 
        ((0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)));
    vlSelf->__VdfgTmp_h60b553ac__0 = ((0x48U == (0x48U 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | (4U == (0x1cU 
                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)));
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isFiring;
    vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isFiring));
    vlSelf->__PVT__memory_arbitration_isMoving = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
                                                     & (~ (IData)(vlSelf->__PVT__memory_arbitration_removeIt))));
    vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l667 
        = ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
           & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid));
    vlSelf->__VdfgTmp_h017d330c__0 = ((IData)(vlSelf->__PVT__memory_arbitration_isStuck) 
                                      | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_flush 
        = ((IData)(vlSelf->__PVT__decode_arbitration_isValid) 
           & (0x1008U == (0x5048U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = ((((~ ((0x17U == (0x5fU & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                 | ((0x6fU == (0x7fU & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                    | ((0x1073U == (0x107fU & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                       | ((0x2073U == (0x207fU & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                          | ((0x4063U == (0x407fU & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                             | ((0x2013U == (0x207fU 
                                             & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                | ((0x13U == (0x107fU 
                                              & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                   | ((0x23U == (0x603fU 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | ((3U == (0x207fU 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         | ((3U == 
                                             (0x505fU 
                                              & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            | ((0x63U 
                                                == 
                                                (0x707bU 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               | ((0xfU 
                                                   == 
                                                   (0x607fU 
                                                    & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  | ((0x33U 
                                                      == 
                                                      (0xfc00007fU 
                                                       & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     | ((0x500fU 
                                                         == 
                                                         (0x1f0707fU 
                                                          & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        | ((0x5013U 
                                                            == 
                                                            (0xbe00705fU 
                                                             & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           | ((0x1013U 
                                                               == 
                                                               (0xfe00305fU 
                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0xbe00707fU 
                                                                   & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 | ((0x10200073U 
                                                                     == 
                                                                     (0xdfffffffU 
                                                                      & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    | ((0x10500073U 
                                                                        == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                       | (0x73U 
                                                                          == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))) 
             & (IData)(vlSelf->__PVT__decode_arbitration_isValid)) 
            << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__decode_arbitration_isValid));
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSelf->__PVT__execute_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_flushNext = 1U;
    }
    __Vtableidx63 = (((IData)(vlSelf->__PVT__execute_BranchPlugin_eq) 
                      << 6U) | ((0x20U & ((~ (IData)(vlSelf->__PVT__execute_BranchPlugin_eq)) 
                                          << 5U)) | 
                                (((IData)(vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA) 
                                  << 4U) | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA)) 
                                                   << 3U)) 
                                            | (7U & 
                                               (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU))))));
    vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT = 
        Vsim__ConstPool__TABLE_h2191630b_0[__Vtableidx63];
    vlSelf->__PVT___zz_decode_RS2 = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                      ? ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSelf->__PVT___zz_execute_SRC1 
                                             & vlSelf->__PVT___zz_execute_SRC2_4)
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? (vlSelf->__PVT___zz_execute_SRC1 
                                                 | vlSelf->__PVT___zz_execute_SRC2_4)
                                              : (vlSelf->__PVT___zz_execute_SRC1 
                                                 ^ vlSelf->__PVT___zz_execute_SRC2_4)))
                                      : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                          ? (IData)(vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA)
                                          : vlSelf->__PVT__execute_SrcPlugin_addSub));
    if (vlSelf->__PVT__when_CsrPlugin_l1587) {
        vlSelf->__PVT___zz_decode_RS2 = vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal;
    }
    if (vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0[vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0] 
            = vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0;
    }
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_72;
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    __Vtableidx5 = vlSelf->__PVT__decode_ENV_CTRL;
    vlSelf->__PVT__decode_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx5];
    vlSelf->__PVT__decode_SHIFT_CTRL = (((0x5010U == 
                                          (0x2007054U 
                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_18));
    vlSelf->__PVT__decode_SRC2_CTRL = (((IData)((0U 
                                                 != (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_87))) 
                                        << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_90));
    vlSelf->__PVT__decode_SRC1_CTRL = (((IData)((0U 
                                                 != (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_126))) 
                                        << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_129));
    __Vtableidx62 = ((0x40U & ((~ (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_32)) 
                               << 6U)) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_2) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src1Hazard = 
        Vsim__ConstPool__TABLE_h9e379ad3_0[__Vtableidx62];
    __Vtableidx61 = ((0x40U & ((~ (IData)((0U != (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_103)))) 
                               << 6U)) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_2) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src0Hazard = 
        Vsim__ConstPool__TABLE_h9e379ad3_0[__Vtableidx61];
    vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL 
        = (((IData)(vlSelf->__VdfgTmp_h60b553ac__0) 
            << 1U) | (0x40U == (0x58U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->lastStageRegFileWrite_valid = vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid;
    if (vlSelf->__PVT___zz_10) {
        vlSelf->lastStageRegFileWrite_valid = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext 
        = (((0x21U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value)) 
            & (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))
            ? 0U : (0x3fU & ((IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value) 
                             + (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSelf->__PVT__memory_DivPlugin_div_counter_willClear) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l667) {
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 1U;
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload 
            = (0x7fU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(vlSelf->__PVT__execute_arbitration_haltItself) 
                                                  | ((IData)(vlSelf->__PVT__execute_arbitration_haltByOther) 
                                                     | (IData)(vlSelf->__VdfgTmp_h017d330c__0)));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                  >> 7U)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_flush) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((~ ((IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
               - (IData)(1U))) & (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__18(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__18\n"); );
    // Body
    vlSelf->__PVT___zz_dBus_cmd_ready = ((IData)(vlSymsp->TOP__sim.__PVT__dbus_ack) 
                                         & (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid));
    vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready 
        = ((IData)(vlSelf->__PVT___zz_dBus_cmd_ready) 
           & ((IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
              | (IData)(vlSelf->__PVT___zz_dBus_cmd_ready_2)));
    if ((1U & (~ (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid)))) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready = 1U;
    }
}
