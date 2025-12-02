// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_1(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset_1\n"); );
    // Body
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = VL_RAND_RESET_I(10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = VL_RAND_RESET_I(10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l648 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l667 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__memCmdSent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stage0_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_size = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageA_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_size = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_totalyConsistent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l829 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l863 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1009 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1072 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_value = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_killReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1097 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1125 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 = VL_RAND_RESET_I(8);
    vlSelf->dataCache_1__DOT____VdfgTmp_ha666bb4c__0 = 0;
    vlSelf->__Vtableidx56 = 0;
    vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__Vdly___zz_dBusWishbone_ADR = VL_RAND_RESET_I(3);
    vlSelf->__Vdly___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__CsrPlugin_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_0(Vsim_VexRiscv* vlSelf);

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset\n"); );
    // Body
    Vsim_VexRiscv___ctor_var_reset_0(vlSelf);
    Vsim_VexRiscv___ctor_var_reset_1(vlSelf);
}
