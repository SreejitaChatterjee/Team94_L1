// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__1(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 
            = (0xffU & vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data);
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 2U) & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 
            = (0xffU & (vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 0x10U));
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__Vdly__IBusCachedPlugin_rspCounter = 0U;
        vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
        vlSelf->__Vdly___zz_iBusWishbone_ADR = 0U;
        vlSelf->__Vdly___zz_dBusWishbone_ADR = 0U;
        vlSelf->__Vdly__DBusCachedPlugin_rspCounter = 0U;
        vlSelf->__Vdly__CsrPlugin_mcycle = 0ULL;
        vlSelf->__Vdly__CsrPlugin_minstret = 0ULL;
        vlSelf->__Vdly__CsrPlugin_mstatus_MIE = 0U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
    } else {
        if (vlSelf->__PVT___zz_iBus_rsp_valid) {
            vlSelf->__Vdly__IBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSelf->__PVT__IBusCachedPlugin_rspCounter);
            vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
        }
        if (vlSelf->__PVT__when_InstructionCache_l239) {
            if (vlSymsp->TOP__sim.__PVT__ibus_ack) {
                vlSelf->__Vdly___zz_iBusWishbone_ADR 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT___zz_iBusWishbone_ADR)));
            }
        }
        if (((IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
             & (IData)(vlSelf->__PVT___zz_dBus_cmd_ready))) {
            vlSelf->__Vdly___zz_dBusWishbone_ADR = 
                (7U & ((IData)(1U) + (IData)(vlSelf->__PVT___zz_dBusWishbone_ADR)));
            if (vlSelf->__PVT___zz_dBus_cmd_ready_2) {
                vlSelf->__Vdly___zz_dBusWishbone_ADR = 0U;
            }
        }
        if (vlSelf->__PVT___zz_dBus_rsp_valid) {
            vlSelf->__Vdly__DBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSelf->__PVT__DBusCachedPlugin_rspCounter);
        }
        vlSelf->__Vdly__CsrPlugin_mcycle = (1ULL + vlSelf->__PVT__CsrPlugin_mcycle);
        if (vlSelf->__PVT__execute_CsrPlugin_csr_2816) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__Vdly__CsrPlugin_mcycle = 
                    ((0xffffffff00000000ULL & vlSelf->__Vdly__CsrPlugin_mcycle) 
                     | (IData)((IData)(vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal)));
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_2944) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__Vdly__CsrPlugin_mcycle = 
                    ((0xffffffffULL & vlSelf->__Vdly__CsrPlugin_mcycle) 
                     | ((QData)((IData)(vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal)) 
                        << 0x20U));
            }
        }
        if (vlSelf->__PVT__writeBack_arbitration_isFiring) {
            vlSelf->__Vdly__CsrPlugin_minstret = (1ULL 
                                                  + vlSelf->__PVT__CsrPlugin_minstret);
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_2818) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__Vdly__CsrPlugin_minstret 
                    = ((0xffffffff00000000ULL & vlSelf->__Vdly__CsrPlugin_minstret) 
                       | (IData)((IData)(vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal)));
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_2946) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__Vdly__CsrPlugin_minstret 
                    = ((0xffffffffULL & vlSelf->__Vdly__CsrPlugin_minstret) 
                       | ((QData)((IData)(vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal)) 
                          << 0x20U));
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = 1U;
        }
        if (vlSelf->__PVT__when_Fetcher_l133) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_fire) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid)) 
             & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready))) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache_io_flush) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
        }
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1) {
        vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = vlSelf->__PVT__iBusWishbone_DAT_MISO_regNext;
        vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = ((0x3f8U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                          >> 2U)) | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2) {
        vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = ((0x3ffffcU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                             >> 0xaU)) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                 >> 7U))));
        vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 1U;
        vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = (0x7fU & ((0x80U & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                         ? (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                            >> 5U) : (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l829) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = 1U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation 
            = vlSelf->__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation;
    }
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port1 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                  >> 0x14U))];
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port0 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                  >> 0xfU))];
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation 
            = vlSelf->__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess 
            = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
               >> 0x1fU);
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid)))) {
        vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 
        = (1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
        vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = 0U;
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data 
        = vlSelf->__PVT___zz_decode_RS2_2;
    vlSelf->__PVT___zz_10 = vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset;
    if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
            vlSelf->CsrPlugin_interrupt_code = 7U;
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
            vlSelf->CsrPlugin_interrupt_code = 3U;
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
            vlSelf->CsrPlugin_interrupt_code = 0xbU;
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
    }
    vlSelf->__PVT__CsrPlugin_mip_MTIP = 0U;
    vlSelf->__PVT__externalInterruptArray_regNext = vlSymsp->TOP__sim.__PVT__interrupt;
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
           && (IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid));
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
        = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
           && ((IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers) 
               && (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    vlSelf->__PVT__CsrPlugin_mip_MEIP = (0U != vlSelf->__PVT___zz_externalInterrupt);
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_ALU_CTRL = vlSelf->__PVT__decode_ALU_CTRL;
        vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = vlSelf->__PVT__decode_ALU_BITWISE_CTRL;
        vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = vlSelf->__PVT__decode_SRC_LESS_UNSIGNED;
        vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_117;
    }
    vlSelf->__PVT__execute_CsrPlugin_wfiWake = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
                                                && (0U 
                                                    != 
                                                    (((IData)(vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->__PVT___zz_when_CsrPlugin_l1302)))));
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT 
            = vlSelf->__PVT__decode_to_execute_FORMAL_PC_NEXT;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__2(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__2\n"); );
    // Body
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = ((1U & (IData)(vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1))
                ? (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code)
                : 2U);
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = vlSelf->__PVT__CsrPlugin_selfException_payload_code;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = 0U;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l829) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = 1U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = 1U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
            = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_59;
        vlSelf->__PVT__decode_to_execute_SRC2_CTRL 
            = vlSelf->__PVT__decode_SRC2_CTRL;
        vlSelf->__PVT__decode_to_execute_SRC1_CTRL 
            = vlSelf->__PVT__decode_SRC1_CTRL;
        vlSelf->__PVT__decode_to_execute_IS_CSR = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_6;
        vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED 
            = (0U == (0x1000U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
        vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT 
            = (0x4008U == (0x4048U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
        vlSelf->__PVT__execute_CsrPlugin_csr_3860 = 
            (0xf14U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address 
            = (0xfffffU & (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                           >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid 
            = (1U & vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
        vlSelf->__PVT__memory_to_writeBack_MUL_HH = vlSelf->__PVT__execute_to_memory_MUL_HH;
        vlSelf->__PVT__dataCache_1__DOT__stageB_request_totalyConsistent 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent;
        vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0 
            = (((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                << 0x18U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                              << 0x10U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))));
        vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error 
            = (1U & (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                     >> 1U));
        vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID;
        vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions 
            = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
               | ((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l648) 
                  & (((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                      == (0x3ffU & (vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                    >> 2U))) & (0U 
                                                != 
                                                ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
                                                 & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageA_mask))))));
    }
    vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext = vlSymsp->TOP__sim.__PVT__shared_dat_r;
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute 
        = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
           && ((IData)(vlSelf->__PVT__execute_arbitration_isStuck)
                ? (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute)
                : ((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
                   & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)))));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error 
            = (1U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                     >> 1U));
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid 
            = (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
               & ((0xfffffU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                               >> 2U)) == (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                           >> 0xcU)));
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = 1U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
    } else {
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSelf->CsrPlugin_interruptJump) {
            vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 
                    = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 1U;
        }
        if (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack))) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 1U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
        }
    }
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory 
        = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
           && ((IData)(vlSelf->__PVT__memory_arbitration_isStuck)
                ? (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory)
                : ((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                   & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))));
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack 
        = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
           && ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself))) 
               && ((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                   & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))));
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_accumulator[0U] 
                = ((1U & (IData)((vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                  >> 0x20U))) ? vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outRemainder_1
                    : (IData)(vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator));
            vlSelf->__PVT__memory_DivPlugin_rs1 = (
                                                   (0x100000000ULL 
                                                    & vlSelf->__PVT__memory_DivPlugin_rs1) 
                                                   | (IData)((IData)(vlSelf->__PVT__memory_DivPlugin_div_stage_0_outNumerator)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_SHIFT_CTRL 
            = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
        vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE 
            = vlSelf->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
        vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
            = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                          & (vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                       (0x1fU 
                                                        & vlSelf->__PVT___zz_execute_SRC2_4))));
        vlSelf->__PVT__memory_DivPlugin_rs2 = (((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs2_2)
                                                 ? 
                                                (~ vlSelf->__PVT__decode_to_execute_RS2)
                                                 : vlSelf->__PVT__decode_to_execute_RS2) 
                                               + (IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs2_2));
        vlSelf->__PVT__memory_DivPlugin_accumulator[0U] = 0U;
        vlSelf->__PVT__memory_DivPlugin_accumulator[1U] = 0U;
        vlSelf->__PVT__memory_DivPlugin_accumulator[2U] = 0U;
        vlSelf->__PVT__memory_DivPlugin_rs1 = (0x1ffffffffULL 
                                               & (((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs1_3)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_memory_DivPlugin_rs1_1)
                                                    : vlSelf->__PVT___zz_memory_DivPlugin_rs1_1) 
                                                  + (QData)((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs1_3))));
    }
    if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_last 
            = ((IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) 
               || (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last));
        if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address;
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size;
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask 
                = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
        } else {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address 
                = vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address;
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size 
                = vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size;
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask 
                = vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask;
        }
    }
    vlSelf->__PVT__CsrPlugin_lastStageWasWfi = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
                                                && ((IData)(vlSelf->__PVT__writeBack_arbitration_isFiring) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL))));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__3(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__3\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE 
            = (0x20U != (0x7fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                  >> 7U)));
        vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE 
            = (1U & (~ (IData)(((0U == (0xf8000U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                & ((1U == (3U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 0xdU))) 
                                   | (3U == (3U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0xdU))))))));
        vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO 
            = ((~ (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_117)) 
               & (0x24U == (0x64U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
        vlSelf->__PVT__execute_CsrPlugin_csr_769 = 
            (0x301U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3857 = 
            (0xf11U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3264 = 
            (0xcc0U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3858 = 
            (0xf12U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3859 = 
            (0xf13U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3202 = 
            (0xc82U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3074 = 
            (0xc02U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3200 = 
            (0xc80U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_4032 = 
            (0xfc0U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3072 = 
            (0xc00U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_MEMORY_WR 
            = vlSelf->__PVT__execute_to_memory_MEMORY_WR;
        vlSelf->__PVT__memory_to_writeBack_IS_MUL = vlSelf->__PVT__execute_to_memory_IS_MUL;
        vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate;
        vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate 
            = (((vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                 >> 0xcU) == (0xfffffU & (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                          >> 2U))) 
               & vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
        vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
            = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__execute_to_memory_MUL_LL)) 
                                      + (((QData)((IData)(
                                                          (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                          << 0x32U) 
                                         | (0x3ffffffffffffULL 
                                            & (vlSelf->__PVT__execute_to_memory_MUL_LH 
                                               << 0x10U)))) 
                                     + (((QData)((IData)(
                                                         (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                         << 0x32U) 
                                        | (0x3ffffffffffffULL 
                                           & (vlSelf->__PVT__execute_to_memory_MUL_HL 
                                              << 0x10U)))));
        vlSelf->__PVT__dataCache_1__DOT__stageB_request_size 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_request_size;
        vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned 
            = (0U != ((((2U == (IData)(vlSelf->__PVT__dataCache_1__DOT__stageA_request_size)) 
                        & (0U != (3U & vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA))) 
                       << 1U) | ((1U == (IData)(vlSelf->__PVT__dataCache_1__DOT__stageA_request_size)) 
                                 & vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA)));
        vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr;
        vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE 
            = vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_IS_DIV = vlSelf->__PVT__decode_to_execute_IS_DIV;
        vlSelf->__PVT__execute_to_memory_BRANCH_DO 
            = (((IData)(vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                != (IData)(vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
               | ((IData)(vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                  & ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                      ? ((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                          >> 0x15U) ^ (vlSelf->__PVT__decode_to_execute_RS1 
                                       >> 1U)) : ((2U 
                                                   == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? 
                                                  (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 8U)))));
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_832) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mscratch = vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
        }
    }
    vlSelf->__PVT__CsrPlugin_mip_MSIP = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mip_MSIP = (1U 
                                                 & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 3U));
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mtvec_base = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 2U);
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_mie_MSIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MTIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MEIE = 0U;
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit = 0U;
        vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
    } else {
        if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mie_MSIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 3U));
                vlSelf->__PVT__CsrPlugin_mie_MTIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 7U));
                vlSelf->__PVT__CsrPlugin_mie_MEIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 0xbU));
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                    = vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
            }
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid 
                = ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                   & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush)));
        }
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
            vlSelf->__PVT__CsrPlugin_mcause_interrupt 
                = (1U & (~ (IData)(vlSelf->CsrPlugin_hadException)));
            vlSelf->__PVT__CsrPlugin_mcause_exceptionCode 
                = vlSelf->__PVT__CsrPlugin_trapCause;
            vlSelf->__PVT__CsrPlugin_mepc = vlSelf->__PVT__memory_to_writeBack_PC;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mcause_interrupt 
                = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                   >> 0x1fU);
            vlSelf->__PVT__CsrPlugin_mcause_exceptionCode 
                = (0xfU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal);
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mepc = vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
        }
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address 
        = (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = 0U;
        vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit 
            = vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit;
    }
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            if ((0x20U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value))) {
                vlSelf->__PVT__memory_DivPlugin_div_result 
                    = (((IData)(vlSelf->__PVT__memory_DivPlugin_div_needRevert)
                         ? (~ vlSelf->__PVT___zz_memory_DivPlugin_div_result)
                         : vlSelf->__PVT___zz_memory_DivPlugin_div_result) 
                       + (IData)((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_div_needRevert))));
            }
        }
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__4\n"); );
    // Body
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
        vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
    } else {
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 0U;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                if ((3U == (3U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                  >> 0xbU)))) {
                    vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
                   | (IData)(vlSelf->__PVT__writeBack_arbitration_removeIt)))) {
            vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
        }
        if (vlSelf->__PVT__memory_arbitration_isMoving) {
            vlSelf->__PVT__writeBack_arbitration_isValid 
                = vlSelf->__PVT__memory_arbitration_isValid;
        }
    }
    if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready) {
        if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached 
                = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess;
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data 
                = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
        } else {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached 
                = vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached;
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data 
                = vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data;
        }
    }
    vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext 
        = vlSelf->__PVT__dataCache_1__DOT__loader_valid;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
            if (vlSelf->CsrPlugin_hadException) {
                vlSelf->__PVT__CsrPlugin_mtval = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr;
            }
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mtval = vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
        }
    }
    vlSelf->__PVT__IBusCachedPlugin_rspCounter = vlSelf->__Vdly__IBusCachedPlugin_rspCounter;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSelf->__PVT___zz_iBusWishbone_ADR = vlSelf->__Vdly___zz_iBusWishbone_ADR;
    vlSelf->__PVT___zz_dBusWishbone_ADR = vlSelf->__Vdly___zz_dBusWishbone_ADR;
    vlSelf->__PVT__DBusCachedPlugin_rspCounter = vlSelf->__Vdly__DBusCachedPlugin_rspCounter;
    vlSelf->__PVT__CsrPlugin_mcycle = vlSelf->__Vdly__CsrPlugin_mcycle;
    vlSelf->__PVT__CsrPlugin_minstret = vlSelf->__Vdly__CsrPlugin_minstret;
    if (vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0) {
        vlSelf->RegFilePlugin_regFile[vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0] 
            = vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
        = vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_hcb73f343_0;
extern const VlUnpacked<IData/*23:0*/, 4> Vsim__ConstPool__TABLE_h445ffbe1_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_had01290b_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__5\n"); );
    // Init
    CData/*1:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*1:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*1:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*1:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*1:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    // Body
    vlSelf->__PVT___zz_iBus_rsp_valid = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
                                         && ((IData)(vlSelf->__PVT__iBusWishbone_CYC) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack)));
    vlSelf->__PVT__iBusWishbone_DAT_MISO_regNext = vlSymsp->TOP__sim.__PVT__shared_dat_r;
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        vlSelf->__PVT__CsrPlugin_mstatus_MPIE = 0U;
    } else {
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MIE;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE = 1U;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 7U));
            }
        }
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    vlSelf->__PVT___zz_dBus_rsp_valid = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
                                         && (((IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                              & (~ (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr))) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__dbus_ack)));
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_2816 = 
            (0xb00U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_2944 = 
            (0xb80U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_2818 = 
            (0xb02U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_2946 = 
            (0xb82U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_FORMAL_PC_NEXT 
            = vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT;
        vlSelf->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
            = (0U != (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_48));
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid 
        = (1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    __Vtableidx33 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__memory_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx33][0U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx33][1U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx33][2U];
    vlSelf->__Vtableidx56 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[vlSelf->__Vtableidx56][0U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[vlSelf->__Vtableidx56][1U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[vlSelf->__Vtableidx56][2U];
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_MUL_HH = (0x3ffffffffULL 
                                                   & VL_MULS_QQQ(34, 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_aHigh)), 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_bHigh))));
        vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent 
            = vlSelf->__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY;
    }
    __Vtableidx37 = vlSelf->__PVT__decode_to_execute_SRC2_CTRL;
    vlSelf->__PVT__execute_SRC2_CTRL_string = Vsim__ConstPool__TABLE_h445ffbe1_0
        [__Vtableidx37];
    __Vtableidx54 = vlSelf->__PVT__decode_to_execute_SRC2_CTRL;
    vlSelf->__PVT__decode_to_execute_SRC2_CTRL_string 
        = Vsim__ConstPool__TABLE_h445ffbe1_0[__Vtableidx54];
    __Vtableidx39 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__execute_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx39][0U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx39][1U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx39][2U];
    __Vtableidx53 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_had01290b_0[__Vtableidx53][0U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_had01290b_0[__Vtableidx53][1U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_had01290b_0[__Vtableidx53][2U];
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffff000U 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | (((0x800U 
                                            & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 9U)) 
                                           | ((0x400U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 0xbU)) 
                                              | (0x200U 
                                                 & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    >> 0xdU)))) 
                                          | (((0x100U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 0xfU)) 
                                              | ((0x80U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 0x11U)) 
                                                 | (0x40U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x13U)))) 
                                             | (((0x20U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        >> 0x17U)) 
                                                    | (8U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 0x19U)))) 
                                                | ((4U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x1bU)) 
                                                   | ((2U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 0x1dU)) 
                                                      | (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x1fU)))))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xff000fffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | (((0x800000U 
                                            & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0xfU)) 
                                           | ((0x400000U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0xdU)) 
                                              | (0x200000U 
                                                 & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0xbU)))) 
                                          | (((0x100000U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 9U)) 
                                              | ((0x80000U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 7U)) 
                                                 | (0x40000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 5U)))) 
                                             | (((0x20000U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 3U)) 
                                                 | ((0x10000U 
                                                     & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        << 1U)) 
                                                    | (0x8000U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 1U)))) 
                                                | ((0x4000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 3U)) 
                                                   | ((0x2000U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 5U)) 
                                                      | (0x1000U 
                                                         & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                            >> 7U))))))));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__6\n"); );
    // Body
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffffffU & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | (((vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            << 0x1fU) 
                                           | (0x40000000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x1dU))) 
                                          | (((0x20000000U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0x1bU)) 
                                              | ((0x10000000U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0x19U)) 
                                                 | (0x8000000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 0x17U)))) 
                                             | ((0x4000000U 
                                                 & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0x15U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 0x13U)) 
                                                   | (0x1000000U 
                                                      & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         << 0x11U)))))));
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_SHIFT_CTRL 
            = vlSelf->__PVT__decode_SHIFT_CTRL;
        vlSelf->__PVT__decode_to_execute_IS_DIV = (0x2004020U 
                                                   == 
                                                   (0x2004064U 
                                                    & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
        vlSelf->__PVT__execute_CsrPlugin_csr_832 = 
            (0x340U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_836 = 
            (0x344U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_773 = 
            (0x305U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_772 = 
            (0x304U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_3008 = 
            (0xbc0U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
    }
    if (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem) {
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outRemainder_1 
        = ((vlSelf->__PVT__memory_DivPlugin_accumulator[0U] 
            << 1U) | (1U & (IData)((vlSelf->__PVT__memory_DivPlugin_rs1 
                                    >> 0x1fU))));
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & ((((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_accumulator[0U])) 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__memory_DivPlugin_rs1 
                                                                    >> 0x1fU)))))) 
                             - (QData)((IData)(vlSelf->__PVT__memory_DivPlugin_rs2))));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
    } else {
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID;
        vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen 
            = ((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l648) 
               & (((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                   == (0x3ffU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                                 >> 2U))) & (0U != 
                                             ((IData)(vlSelf->__PVT__dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))));
        vlSelf->__PVT__execute_to_memory_MEMORY_WR 
            = vlSelf->__PVT__decode_to_execute_MEMORY_WR;
        vlSelf->__PVT__execute_to_memory_IS_MUL = vlSelf->__PVT__decode_to_execute_IS_MUL;
        vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate = 0U;
        vlSelf->__PVT__execute_to_memory_MUL_HL = (0x3ffffffffULL 
                                                   & VL_MULS_QQQ(34, 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_aHigh)), 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, 
                                                                                (0xffffU 
                                                                                & vlSelf->__PVT__decode_to_execute_RS2)))));
        vlSelf->__PVT__execute_to_memory_MUL_LH = (0x3ffffffffULL 
                                                   & VL_MULS_QQQ(34, 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, 
                                                                                (0xffffU 
                                                                                & vlSelf->__PVT__decode_to_execute_RS1))), 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_bHigh))));
        vlSelf->__PVT__execute_to_memory_MUL_LL = (
                                                   (0xffffU 
                                                    & vlSelf->__PVT__decode_to_execute_RS1) 
                                                   * 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__decode_to_execute_RS2));
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags
            [(0x7fU & (vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
                       >> 5U))];
    }
    if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last = 1U;
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address 
            = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address;
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size 
            = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size;
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_ENV_CTRL 
            = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    vlSelf->__PVT___zz_dBus_cmd_ready_2 = ((5U != (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size)) 
                                           | (7U == (IData)(vlSelf->__PVT___zz_dBusWishbone_ADR)));
    vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)) 
                 | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception)));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_769) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = (0x40000000U | (0x3fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = (0x42U | (0xfc000000U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3857) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0xbU | (0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = (0x1000U | (0xffffe000U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = (0x2000000U | (0xfc0fffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3858) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = (0x16U | (0xffffffe0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3859) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = (0x21U | (0xffffffc0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3202) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 
            = (IData)((vlSelf->__PVT__CsrPlugin_minstret 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3074) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 
            = (IData)(vlSelf->__PVT__CsrPlugin_minstret);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3200) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 
            = (IData)((vlSelf->__PVT__CsrPlugin_mcycle 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3072) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 
            = (IData)(vlSelf->__PVT__CsrPlugin_mcycle);
    }
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                                               & (IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP));
    vlSelf->__PVT___zz_externalInterrupt = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                                            & vlSelf->__PVT__externalInterruptArray_regNext);
    if (((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_tags
            [vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload];
    }
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__7\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
               & (~ (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))) {
        vlSelf->__PVT__memory_to_writeBack_PC = vlSelf->__PVT__execute_to_memory_PC;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)) 
           & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    if ((0x20U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value))) {
        vlSelf->__PVT__memory_DivPlugin_div_done = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__dataCache_1__DOT__stageA_request_size 
            = (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                     >> 0xcU));
        vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr 
            = vlSelf->__PVT__decode_to_execute_MEMORY_WR;
        vlSelf->__PVT__memory_DivPlugin_div_done = 0U;
        vlSelf->__PVT__memory_DivPlugin_div_needRevert 
            = (((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs1_3) 
                ^ ((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs2_2) 
                   & (~ (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                         >> 0xdU)))) & (~ (((0U == vlSelf->__PVT__decode_to_execute_RS2) 
                                            & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED)) 
                                           & (~ (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xdU)))));
    }
    if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess;
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data 
            = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
    }
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->__PVT__when_HazardSimplePlugin_l45 = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                                  & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1 = 0U;
    } else {
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1 
                = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)) 
                   & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_834 = 
            (0x342U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_833 = 
            (0x341U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 
            = vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__dataCache_1__DOT__memCmdSent = 0U;
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start = 1U;
        vlSelf->__PVT__dataCache_1__DOT__loader_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_value = 0U;
        vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator = 1U;
        vlSelf->__Vdly__dataCache_1__DOT__loader_error = 0U;
        vlSelf->__PVT__dataCache_1__DOT__loader_killReg = 0U;
    } else {
        if (vlSelf->__PVT__dataCache_1_io_cpu_flush_ready) {
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        }
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                          & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt))) 
                         & (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
            VL_WRITEF("ERROR writeBack stuck by another plugin is not allowed\n");
        }
        if (((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_valid) 
             & (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))) {
            vlSelf->__PVT__dataCache_1__DOT__memCmdSent = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT____VdfgTmp_ha666bb4c__0)))) {
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter)));
            if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l863) {
                vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x80U | (IData)(vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter));
            }
        }
        if (vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid) {
            vlSelf->__PVT__dataCache_1__DOT__loader_valid = 1U;
        }
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_value 
            = vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext;
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1125) {
            vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator 
                = (1U & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
            vlSelf->__PVT__dataCache_1__DOT__memCmdSent = 0U;
        }
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start 
            = (((((((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone)) 
                    & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start))) 
                   & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_valid)) 
                  & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid))) 
                 & (~ ((IData)(vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE) 
                       & (IData)(vlSelf->__PVT__memory_arbitration_isValid)))) 
                & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid))) 
               & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_redo)));
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097) {
            vlSelf->__Vdly__dataCache_1__DOT__loader_error 
                = vlSelf->__PVT__dataCache_1__DOT__loader_error;
        }
        if (vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start) {
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 1U;
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
            if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l863) {
                vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x7fU & (vlSelf->__PVT__decode_to_execute_RS1 
                                >> 5U));
            }
        }
        if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
            vlSelf->__PVT__dataCache_1__DOT__loader_valid = 0U;
            vlSelf->__Vdly__dataCache_1__DOT__loader_error = 0U;
            vlSelf->__PVT__dataCache_1__DOT__loader_killReg = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_835 = 
            (0x343U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
    }
    vlSelf->CsrPlugin_hadException = ((1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset))) 
                                      && (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = ((1U & (IData)(vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1))
                ? (0xfffffffcU & vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)
                : vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen);
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSelf->__PVT__decode_to_execute_INSTRUCTION;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    }
    vlSelf->__PVT__CsrPlugin_mstatus_MIE = vlSelf->__Vdly__CsrPlugin_mstatus_MIE;
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0;
    }
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_outNumerator 
        = (((IData)(vlSelf->__PVT__memory_DivPlugin_rs1) 
            << 1U) | (1U & (~ (IData)((vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                       >> 0x20U)))));
    if (vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0] 
            = vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0;
    }
    vlSelf->__PVT__when_InstructionCache_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT___zz_iBusWishbone_ADR)));
}

extern const VlUnpacked<QData/*39:0*/, 4> Vsim__ConstPool__TABLE_h82842568_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__8(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__8\n"); );
    // Init
    CData/*1:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*1:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*1:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*1:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 
            = vlSelf->__PVT___zz_externalInterrupt;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_tags[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1009 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
           | (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr));
    vlSelf->__PVT__when_IBusCachedPlugin_l245 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start 
        = vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start;
    vlSelf->__PVT__dataCache_1__DOT__loader_error = vlSelf->__Vdly__dataCache_1__DOT__loader_error;
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter 
        = vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter;
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSelf->__PVT___zz_iBus_rsp_valid) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 1U;
        if ((7U == (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
            = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
    } else {
        if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid 
                = (1U & ((~ (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)) 
                         | (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_valid)));
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
    }
    if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr 
            = ((IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                ? (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr)
                : (IData)(vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2816) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 
            = (IData)(vlSelf->__PVT__CsrPlugin_mcycle);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2944) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 
            = (IData)((vlSelf->__PVT__CsrPlugin_mcycle 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2818) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 
            = (IData)(vlSelf->__PVT__CsrPlugin_minstret);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2946) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 
            = (IData)((vlSelf->__PVT__CsrPlugin_minstret 
                       >> 0x20U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_768 = 
            (0x300U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY = 0U;
        vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_REGFILE_WRITE_VALID;
        vlSelf->__PVT__decode_to_execute_IS_MUL = (0x2000030U 
                                                   == 
                                                   (0x2004074U 
                                                    & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
            = vlSelf->__PVT__execute_to_memory_INSTRUCTION;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_mask;
    }
    __Vtableidx35 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__execute_SHIFT_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx35][0U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx35][1U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx35][2U];
    __Vtableidx55 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx55][0U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx55][1U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx55][2U];
    __Vtableidx29 = vlSelf->__PVT__memory_to_writeBack_ENV_CTRL;
    vlSelf->__PVT__writeBack_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx29];
    __Vtableidx60 = vlSelf->__PVT__memory_to_writeBack_ENV_CTRL;
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL_string 
        = Vsim__ConstPool__TABLE_h82842568_0[__Vtableidx60];
    vlSelf->__PVT__when_CsrPlugin_l1456 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                           & (1U == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL)));
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_ENV_CTRL = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
    }
    vlSelf->__PVT__iBusWishbone_STB = 0U;
    vlSelf->__PVT__iBusWishbone_CYC = 0U;
    if (vlSelf->__PVT__when_InstructionCache_l239) {
        vlSelf->__PVT__iBusWishbone_STB = 1U;
        vlSelf->__PVT__iBusWishbone_CYC = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_832) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 
            = vlSelf->__PVT__CsrPlugin_mscratch;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = ((3U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9) 
               | (vlSelf->__PVT__CsrPlugin_mtvec_base 
                  << 2U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 
            = ((0x7fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 
            = ((0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12) 
               | (IData)(vlSelf->__PVT__CsrPlugin_mcause_exceptionCode));
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__9(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__9\n"); );
    // Init
    CData/*1:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*1:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    // Body
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_PC = vlSelf->__PVT__decode_to_execute_PC;
        vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE 
            = vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE;
        vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
            = (0xfffffffeU & (((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSelf->__PVT__decode_to_execute_RS1
                                : vlSelf->__PVT__decode_to_execute_PC) 
                              + vlSelf->__PVT__execute_BranchPlugin_branch_src2));
        vlSelf->__PVT__execute_to_memory_INSTRUCTION 
            = vlSelf->__PVT__decode_to_execute_INSTRUCTION;
        vlSelf->__PVT__dataCache_1__DOT__stageA_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stage0_mask;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
            = vlSelf->__PVT__CsrPlugin_mepc;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_MEMORY_WR 
            = (0x20U == (0x20U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
        vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED 
            = (0U == (0x1000U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
        vlSelf->__PVT__decode_to_execute_ENV_CTRL = vlSelf->__PVT__decode_ENV_CTRL;
    }
    vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
         | (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((~ (((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
                & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1)) 
               | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid))) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l245) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_value = 0U;
        vlSelf->__PVT__memory_arbitration_isValid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
    } else {
        vlSelf->__PVT__memory_DivPlugin_div_counter_value 
            = vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext;
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
                   | (IData)(vlSelf->__PVT__memory_arbitration_removeIt)))) {
            vlSelf->__PVT__memory_arbitration_isValid = 0U;
        }
        if (vlSelf->__PVT__execute_arbitration_isMoving) {
            vlSelf->__PVT__memory_arbitration_isValid 
                = vlSelf->__PVT__execute_arbitration_isValid;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l829) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess 
            = (vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
               >> 0x1fU);
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF 
            = vlSelf->__PVT__execute_to_memory_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
            = vlSelf->__PVT___zz_decode_RS2_1;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator 
        = (3U & (- (IData)((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator))));
    vlSelf->dataCache_1__DOT____VdfgTmp_ha666bb4c__0 
        = (1U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                 >> 7U));
    vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_flush_ready = 
        ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone) 
         & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
            >> 7U));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1125 
        = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid)));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097 
        = ((IData)(vlSelf->__PVT___zz_dBus_rsp_valid) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned));
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception) 
              | (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                  & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                 | ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                    & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr))))));
    vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->CsrPlugin_interrupt_code;
    vlSelf->__PVT__CsrPlugin_targetPrivilege = vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege;
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                 << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                            << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
        vlSelf->__PVT__CsrPlugin_targetPrivilege = 3U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 
            = vlSelf->__PVT__CsrPlugin_mtval;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if ((1U & ((~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                   >> 7U)) | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__when_IBusCachedPlugin_l250 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1)) 
                                                    & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                                       & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging) 
                                                          & (IData)(vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSelf->__PVT__CsrPlugin_xtvec_mode = 0U;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_mode = vlSelf->__PVT__CsrPlugin_mtvec_mode;
        vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__PVT__CsrPlugin_mtvec_base;
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_done));
    if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr 
            = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = ((0xffffe7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
    }
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    if (vlSelf->__PVT___zz_10) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
    }
    __Vtableidx25 = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    vlSelf->__PVT__memory_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx25];
    __Vtableidx59 = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    vlSelf->__PVT__execute_to_memory_ENV_CTRL_string 
        = Vsim__ConstPool__TABLE_h82842568_0[__Vtableidx59];
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h0f34cc8f_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__10(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__10\n"); );
    // Init
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
            = vlSelf->__PVT___zz_decode_RS2;
        vlSelf->__PVT__execute_to_memory_MEMORY_STORE_DATA_RF 
            = ((0U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU))) ? ((vlSelf->__PVT__decode_to_execute_RS2 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (vlSelf->__PVT__decode_to_execute_RS2 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__decode_to_execute_RS2 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__decode_to_execute_RS2))))
                : ((1U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xcU))) ? ((vlSelf->__PVT__decode_to_execute_RS2 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__decode_to_execute_RS2))
                    : vlSelf->__PVT__decode_to_execute_RS2));
    }
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress;
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_size;
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 0U;
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError 
        = ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))) 
           && (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
                & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error)) 
               | ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
                  & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    __Vtableidx65 = ((((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext)) 
                       & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid)) 
                      << 5U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling) 
                                 << 4U) | ((((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                             & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                                & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1009) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid))))));
    vlSelf->__PVT__dataCache_1_io_cpu_redo = Vsim__ConstPool__TABLE_h0f34cc8f_0
        [__Vtableidx65];
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE 
            = (0U == (0x58U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen));
        vlSelf->__PVT__decode_to_execute_BRANCH_CTRL 
            = vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL;
        vlSelf->__PVT__decode_to_execute_RS1 = vlSelf->__PVT__decode_RS1;
        vlSelf->__PVT__decode_to_execute_PC = vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong 
        = ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
           & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__when_HazardSimplePlugin_l45_1 = 
        ((IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID) 
         & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__when_MulDivIterativePlugin_l128 
        = ((IData)(vlSelf->__PVT__execute_to_memory_IS_DIV) 
           & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__execute_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   | (IData)(vlSelf->__PVT__execute_arbitration_removeIt)))) {
            vlSelf->__PVT__execute_arbitration_isValid = 0U;
        }
        if (vlSelf->__PVT__decode_arbitration_isMoving) {
            vlSelf->__PVT__execute_arbitration_isValid 
                = vlSelf->__PVT__decode_arbitration_isValid;
        }
    }
    vlSelf->__PVT__when_CsrPlugin_l1390 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
              & (vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
                 >> 1U)));
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr;
    vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal 
        = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
           | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
              | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
                 | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
                    | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
                       | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
                          | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
                             | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
                                | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
                                   | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
                                      | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 
                                         | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 
                                            | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 
                                               | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 
                                                  | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 
                                                     | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 
                                                        | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 
                                                           | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 
                                                              | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 
                                                                 | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 
                                                                    | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 
                                                                       | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 
                                                                          | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23))))))))))))))))))))));
    vlSelf->__PVT__when_IBusCachedPlugin_l256 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2)) 
                                                    & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))));
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1009)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
                    = (0xffffffe0U & vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address);
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size = 5U;
            }
            if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1009) {
                vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 1U;
            }
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = (0x3ffU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits;
    } else {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0xfU;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = ((0x3f8U & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                          >> 2U)) | (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
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
    vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2 
        = (0xffU & ((2U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA)
                     ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                        >> 0x18U) : (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                     >> 8U)));
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1072 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling) 
           | ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) 
              | ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) 
                 | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess))));
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1009)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr = 0U;
            }
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 7U : 5U);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 0xfU : 0xdU);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 6U : 4U);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
        }
    }
    vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
}

extern const VlUnpacked<IData/*31:0*/, 4> Vsim__ConstPool__TABLE_h08f62071_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__11(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__11\n"); );
    // Init
    CData/*1:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*1:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*1:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*1:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 1U;
    }
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
        = vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT;
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = 0U;
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSelf->__PVT__CsrPlugin_xtvec_base 
               << 2U);
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) {
        vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN = 1U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
    } else {
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_valid) {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN = 0U;
        }
        if (vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN = 1U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 1U;
        }
    }
    vlSelf->__PVT___zz_memory_DivPlugin_div_result 
        = ((0x2000U & vlSelf->__PVT__execute_to_memory_INSTRUCTION)
            ? vlSelf->__PVT__memory_DivPlugin_accumulator[0U]
            : (IData)(vlSelf->__PVT__memory_DivPlugin_rs1));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    __Vtableidx27 = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
    vlSelf->__PVT__execute_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx27];
    __Vtableidx58 = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
    vlSelf->__PVT__decode_to_execute_ENV_CTRL_string 
        = Vsim__ConstPool__TABLE_h82842568_0[__Vtableidx58];
    vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l245) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l256) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 = 1U;
    }
    vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)) 
                    || (3U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
            vlSelf->__PVT__memory_arbitration_haltItself = 1U;
        }
        vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__memory_DivPlugin_div_result;
    }
    vlSelf->__VdfgTmp_he4444737__0 = (((IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2) 
                                       << 8U) | (IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted));
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error 
            = vlSelf->__PVT__dataCache_1__DOT__loader_error;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            = (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
               >> 0xcU);
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid 
            = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_killReg)));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1072) {
            vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        if (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) 
             & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits))) {
            vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
        }
    }
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1072) {
            vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_flushIt = 0U;
    if (vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushIt = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_RS2 = vlSelf->__PVT__decode_RS2;
        vlSelf->__PVT__decode_to_execute_INSTRUCTION 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen;
    }
    vlSelf->__PVT__execute_CsrPlugin_readInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE));
    vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid 
        = ((IData)(vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE) 
           & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid))) {
        vlSelf->__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSelf->__PVT__when_CsrPlugin_l1519 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                           & (2U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)));
    vlSelf->__PVT__dataCache_1_io_cpu_flush_valid = 
        ((IData)(vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__when_CsrPlugin_l1555 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                           & (3U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)));
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    vlSelf->__PVT__when_HazardSimplePlugin_l45_2 = 
        ((IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__when_CsrPlugin_l1587 = ((IData)(vlSelf->__PVT__decode_to_execute_IS_CSR) 
                                           & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    __Vtableidx31 = vlSelf->__PVT__decode_to_execute_BRANCH_CTRL;
    vlSelf->__PVT__execute_BRANCH_CTRL_string = Vsim__ConstPool__TABLE_h08f62071_0
        [__Vtableidx31];
    __Vtableidx57 = vlSelf->__PVT__decode_to_execute_BRANCH_CTRL;
    vlSelf->__PVT__decode_to_execute_BRANCH_CTRL_string 
        = Vsim__ConstPool__TABLE_h08f62071_0[__Vtableidx57];
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_1 = (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED) 
                                                                   & (vlSelf->__PVT__decode_to_execute_RS1 
                                                                      >> 0x1fU)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__decode_to_execute_RS1)));
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_3 = ((IData)(vlSelf->__PVT__decode_to_execute_IS_DIV) 
                                                 & ((vlSelf->__PVT__decode_to_execute_RS1 
                                                     >> 0x1fU) 
                                                    & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED)));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
            = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__13(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__13\n"); );
    // Body
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0U;
    if ((0U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                      >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 1U;
    } else if ((1U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 3U;
    } else if ((2U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0xfU;
    }
    vlSelf->__PVT__CsrPlugin_csrMapping_allowCsrSignal = 0U;
    if (((IData)(vlSelf->__PVT__when_CsrPlugin_l1587) 
         & ((0xe8U == (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x16U)) | (0x3bU == (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x18U))))) {
        vlSelf->__PVT__CsrPlugin_csrMapping_allowCsrSignal = 1U;
    }
    if (((IData)(vlSelf->__PVT__when_CsrPlugin_l1587) 
         & ((3U <= (0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0x14U))) & ((0xb00U 
                                             == (0xf60U 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))) 
                                            | (((~ (IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction)) 
                                                & (0xc0000000U 
                                                   == 
                                                   (0xf6000000U 
                                                    & vlSelf->__PVT__decode_to_execute_INSTRUCTION))) 
                                               | (0x320U 
                                                  == 
                                                  (0xfe0U 
                                                   & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x14U)))))))) {
        vlSelf->__PVT__CsrPlugin_csrMapping_allowCsrSignal = 1U;
    }
    vlSelf->__PVT___zz_execute_SRC2_4 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                          ? vlSelf->__PVT__decode_to_execute_RS2
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                              ? (((- (IData)(
                                                             (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 7U))))
                                                  : vlSelf->__PVT__decode_to_execute_PC)));
    vlSelf->__PVT___zz_execute_SRC1 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                        ? vlSelf->__PVT__decode_to_execute_RS1
                                        : ((2U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                            ? 4U : 
                                           ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                             ? (0xfffff000U 
                                                & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                                             : (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU)))));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = 0U;
    } else if (((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted) 
                & ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready) 
                   | (IData)(vlSelf->__PVT__when_Fetcher_l133)))) {
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc;
    }
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         | (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt))) {
        vlSelf->__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3857) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3858) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3859) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3860) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_769) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_832) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2816) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2944) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2818) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2946) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3072) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3200) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3074) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3202) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__CsrPlugin_csrMapping_allowCsrSignal) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__when_CsrPlugin_l1587)))) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? ((~ vlSelf->__PVT___zz_execute_SRC1) 
                   & vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal)
                : (vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
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
}
