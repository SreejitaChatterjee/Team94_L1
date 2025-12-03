// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

extern const VlUnpacked<QData/*39:0*/, 4> Vsim__ConstPool__TABLE_h82842568_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h9e379ad3_0;

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__3(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__3\n"); );
    // Init
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSelf->__PVT__when_CsrPlugin_l1587 = ((IData)(vlSelf->__PVT__decode_to_execute_IS_CSR) 
                                           & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)) 
                 | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception)));
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)) 
           & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    vlSelf->__PVT___zz_dBus_cmd_ready = ((IData)(vlSymsp->TOP__sim.__PVT__dbus_ack) 
                                         & (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid));
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_72;
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if ((1U & ((~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                   >> 7U)) | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    __Vtableidx5 = vlSelf->__PVT__decode_ENV_CTRL;
    vlSelf->__PVT__decode_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx5];
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_outNumerator 
        = (((IData)(vlSelf->__PVT__memory_DivPlugin_rs1) 
            << 1U) | (1U & (~ (IData)((vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                       >> 0x20U)))));
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
    vlSelf->__PVT__CsrPlugin_xtvec_mode = 0U;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_mode = vlSelf->__PVT__CsrPlugin_mtvec_mode;
        vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__PVT__CsrPlugin_mtvec_base;
    }
    vlSelf->CsrPlugin_inWfi = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1519) {
        vlSelf->CsrPlugin_inWfi = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l863 
        = ((0U != (0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                            >> 0xfU))) & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_valid));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 
            = vlSelf->__PVT___zz_externalInterrupt;
    }
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL 
        = (((IData)(vlSelf->__VdfgTmp_h60b553ac__0) 
            << 1U) | (0x40U == (0x58U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
        = vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT;
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) {
        vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
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
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)) 
                    || (3U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
            vlSelf->__PVT__memory_arbitration_haltItself = 1U;
        }
        vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__memory_DivPlugin_div_result;
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff000U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (((0x800U & (vlSelf->__PVT___zz_execute_SRC1 
                          >> 9U)) | ((0x400U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0xbU)) 
                                     | (0x200U & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 0xdU)))) 
              | (((0x100U & (vlSelf->__PVT___zz_execute_SRC1 
                             >> 0xfU)) | ((0x80U & 
                                           (vlSelf->__PVT___zz_execute_SRC1 
                                            >> 0x11U)) 
                                          | (0x40U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x13U)))) 
                 | (((0x20U & (vlSelf->__PVT___zz_execute_SRC1 
                               >> 0x15U)) | ((0x10U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 0x17U)) 
                                             | (8U 
                                                & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 0x19U)))) 
                    | ((4U & (vlSelf->__PVT___zz_execute_SRC1 
                              >> 0x1bU)) | ((2U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 0x1dU)) 
                                            | (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0x1fU)))))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff000fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (((0x800000U & (vlSelf->__PVT___zz_execute_SRC1 
                             << 0xfU)) | ((0x400000U 
                                           & (vlSelf->__PVT___zz_execute_SRC1 
                                              << 0xdU)) 
                                          | (0x200000U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                << 0xbU)))) 
              | (((0x100000U & (vlSelf->__PVT___zz_execute_SRC1 
                                << 9U)) | ((0x80000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 7U)) 
                                           | (0x40000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 5U)))) 
                 | (((0x20000U & (vlSelf->__PVT___zz_execute_SRC1 
                                  << 3U)) | ((0x10000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 1U)) 
                                             | (0x8000U 
                                                & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 1U)))) 
                    | ((0x4000U & (vlSelf->__PVT___zz_execute_SRC1 
                                   >> 3U)) | ((0x2000U 
                                               & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 5U)) 
                                              | (0x1000U 
                                                 & (vlSelf->__PVT___zz_execute_SRC1 
                                                    >> 7U))))))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (((vlSelf->__PVT___zz_execute_SRC1 << 0x1fU) 
               | (0x40000000U & (vlSelf->__PVT___zz_execute_SRC1 
                                 << 0x1dU))) | (((0x20000000U 
                                                  & (vlSelf->__PVT___zz_execute_SRC1 
                                                     << 0x1bU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->__PVT___zz_execute_SRC1 
                                                        << 0x19U)) 
                                                    | (0x8000000U 
                                                       & (vlSelf->__PVT___zz_execute_SRC1 
                                                          << 0x17U)))) 
                                                | ((0x4000000U 
                                                    & (vlSelf->__PVT___zz_execute_SRC1 
                                                       << 0x15U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->__PVT___zz_execute_SRC1 
                                                          << 0x13U)) 
                                                      | (0x1000000U 
                                                         & (vlSelf->__PVT___zz_execute_SRC1 
                                                            << 0x11U)))))));
    vlSelf->__PVT__execute_BranchPlugin_eq = (vlSelf->__PVT___zz_execute_SRC1 
                                              == vlSelf->__PVT___zz_execute_SRC2_4);
    vlSelf->__PVT__execute_SrcPlugin_addSub = ((vlSelf->__PVT___zz_execute_SRC1 
                                                + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_execute_SRC2_4)
                                                    : vlSelf->__PVT___zz_execute_SRC2_4)) 
                                               + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                   ? 1U
                                                   : 0U));
    if (vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelf->__PVT__execute_SrcPlugin_addSub = vlSelf->__PVT___zz_execute_SRC1;
    }
    vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted 
        = (0xffU & ((0U == (3U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                     ? vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data
                     : ((1U == (3U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                         ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                            >> 8U) : ((2U == (3U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                       ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                          >> 0x10U)
                                       : (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                          >> 0x18U)))));
}
