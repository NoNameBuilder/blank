// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

#ifndef _KBASE_GATOR_HWCNT_NAMES_TTRX_H_
#define _KBASE_GATOR_HWCNT_NAMES_TTRX_H_

static const char * const hardware_counters_mali_tTRx[] = {
	/* Performance counters for the Job Manager */
	"",
	"",
	"",
	"",
	"TTRx_MESSAGES_SENT",
	"TTRx_MESSAGES_RECEIVED",
	"TTRx_GPU_ACTIVE",
	"TTRx_IRQ_ACTIVE",
	"TTRx_JS0_JOBS",
	"TTRx_JS0_TASKS",
	"TTRx_JS0_ACTIVE",
	"",
	"TTRx_JS0_WAIT_READ",
	"TTRx_JS0_WAIT_ISSUE",
	"TTRx_JS0_WAIT_DEPEND",
	"TTRx_JS0_WAIT_FINISH",
	"TTRx_JS1_JOBS",
	"TTRx_JS1_TASKS",
	"TTRx_JS1_ACTIVE",
	"",
	"TTRx_JS1_WAIT_READ",
	"TTRx_JS1_WAIT_ISSUE",
	"TTRx_JS1_WAIT_DEPEND",
	"TTRx_JS1_WAIT_FINISH",
	"TTRx_JS2_JOBS",
	"TTRx_JS2_TASKS",
	"TTRx_JS2_ACTIVE",
	"",
	"TTRx_JS2_WAIT_READ",
	"TTRx_JS2_WAIT_ISSUE",
	"TTRx_JS2_WAIT_DEPEND",
	"TTRx_JS2_WAIT_FINISH",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/* Performance counters for the Tiler */
	"",
	"",
	"",
	"",
	"TTRx_TILER_ACTIVE",
	"TTRx_JOBS_PROCESSED",
	"TTRx_TRIANGLES",
	"TTRx_LINES",
	"TTRx_POINTS",
	"TTRx_FRONT_FACING",
	"TTRx_BACK_FACING",
	"TTRx_PRIM_VISIBLE",
	"TTRx_PRIM_CULLED",
	"TTRx_PRIM_CLIPPED",
	"TTRx_PRIM_SAT_CULLED",
	"TTRx_BIN_ALLOC_INIT",
	"TTRx_BIN_ALLOC_OVERFLOW",
	"TTRx_BUS_READ",
	"",
	"TTRx_BUS_WRITE",
	"TTRx_LOADING_DESC",
	"TTRx_IDVS_POS_SHAD_REQ",
	"TTRx_IDVS_POS_SHAD_WAIT",
	"TTRx_IDVS_POS_SHAD_STALL",
	"TTRx_IDVS_POS_FIFO_FULL",
	"TTRx_PREFETCH_STALL",
	"TTRx_VCACHE_HIT",
	"TTRx_VCACHE_MISS",
	"TTRx_VCACHE_LINE_WAIT",
	"TTRx_VFETCH_POS_READ_WAIT",
	"TTRx_VFETCH_VERTEX_WAIT",
	"TTRx_VFETCH_STALL",
	"TTRx_PRIMASSY_STALL",
	"TTRx_BBOX_GEN_STALL",
	"TTRx_IDVS_VBU_HIT",
	"TTRx_IDVS_VBU_MISS",
	"TTRx_IDVS_VBU_LINE_DEALLOCATE",
	"TTRx_IDVS_VAR_SHAD_REQ",
	"TTRx_IDVS_VAR_SHAD_STALL",
	"TTRx_BINNER_STALL",
	"TTRx_ITER_STALL",
	"TTRx_COMPRESS_MISS",
	"TTRx_COMPRESS_STALL",
	"TTRx_PCACHE_HIT",
	"TTRx_PCACHE_MISS",
	"TTRx_PCACHE_MISS_STALL",
	"TTRx_PCACHE_EVICT_STALL",
	"TTRx_PMGR_PTR_WR_STALL",
	"TTRx_PMGR_PTR_RD_STALL",
	"TTRx_PMGR_CMD_WR_STALL",
	"TTRx_WRBUF_ACTIVE",
	"TTRx_WRBUF_HIT",
	"TTRx_WRBUF_MISS",
	"TTRx_WRBUF_NO_FREE_LINE_STALL",
	"TTRx_WRBUF_NO_AXI_ID_STALL",
	"TTRx_WRBUF_AXI_STALL",
	"",
	"",
	"",
	"TTRx_UTLB_TRANS",
	"TTRx_UTLB_TRANS_HIT",
	"TTRx_UTLB_TRANS_STALL",
	"TTRx_UTLB_TRANS_MISS_DELAY",
	"TTRx_UTLB_MMU_REQ",

	/* Performance counters for the Shader Core */
	"",
	"",
	"",
	"",
	"TTRx_FRAG_ACTIVE",
	"TTRx_FRAG_PRIMITIVES_OUT",
	"TTRx_FRAG_PRIM_RAST",
	"TTRx_FRAG_FPK_ACTIVE",
	"TTRx_FRAG_STARVING",
	"TTRx_FRAG_WARPS",
	"TTRx_FRAG_PARTIAL_QUADS_RAST",
	"TTRx_FRAG_QUADS_RAST",
	"TTRx_FRAG_QUADS_EZS_TEST",
	"TTRx_FRAG_QUADS_EZS_UPDATE",
	"TTRx_FRAG_QUADS_EZS_KILL",
	"TTRx_FRAG_LZS_TEST",
	"TTRx_FRAG_LZS_KILL",
	"TTRx_WARP_REG_SIZE_64",
	"TTRx_FRAG_PTILES",
	"TTRx_FRAG_TRANS_ELIM",
	"TTRx_QUAD_FPK_KILLER",
	"TTRx_FULL_QUAD_WARPS",
	"TTRx_COMPUTE_ACTIVE",
	"TTRx_COMPUTE_TASKS",
	"TTRx_COMPUTE_WARPS",
	"TTRx_COMPUTE_STARVING",
	"TTRx_EXEC_CORE_ACTIVE",
	"TTRx_EXEC_INSTR_FMA",
	"TTRx_EXEC_INSTR_CVT",
	"TTRx_EXEC_INSTR_SFU",
	"TTRx_EXEC_INSTR_MSG",
	"TTRx_EXEC_INSTR_DIVERGED",
	"TTRx_EXEC_ICACHE_MISS",
	"TTRx_EXEC_STARVE_ARITH",
	"TTRx_CALL_BLEND_SHADER",
	"TTRx_TEX_MSGI_NUM_FLITS",
	"TTRx_TEX_DFCH_CLK_STALLED",
	"TTRx_TEX_TFCH_CLK_STALLED",
	"TTRx_TEX_TFCH_STARVED_PENDING_DATA_FETCH",
	"TTRx_TEX_FILT_NUM_OPERATIONS",
	"TTRx_TEX_FILT_NUM_FXR_OPERATIONS",
	"TTRx_TEX_FILT_NUM_FST_OPERATIONS",
	"TTRx_TEX_MSGO_NUM_MSG",
	"TTRx_TEX_MSGO_NUM_FLITS",
	"TTRx_LS_MEM_READ_FULL",
	"TTRx_LS_MEM_READ_SHORT",
	"TTRx_LS_MEM_WRITE_FULL",
	"TTRx_LS_MEM_WRITE_SHORT",
	"TTRx_LS_MEM_ATOMIC",
	"TTRx_VARY_INSTR",
	"TTRx_VARY_SLOT_32",
	"TTRx_VARY_SLOT_16",
	"TTRx_ATTR_INSTR",
	"TTRx_ARITH_INSTR_FP_MUL",
	"TTRx_BEATS_RD_FTC",
	"TTRx_BEATS_RD_FTC_EXT",
	"TTRx_BEATS_RD_LSC",
	"TTRx_BEATS_RD_LSC_EXT",
	"TTRx_BEATS_RD_TEX",
	"TTRx_BEATS_RD_TEX_EXT",
	"TTRx_BEATS_RD_OTHER",
	"TTRx_BEATS_WR_LSC_OTHER",
	"TTRx_BEATS_WR_TIB",
	"TTRx_BEATS_WR_LSC_WB",

	/* Performance counters for the Memory System */
	"",
	"",
	"",
	"",
	"TTRx_MMU_REQUESTS",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"TTRx_L2_RD_MSG_IN",
	"TTRx_L2_RD_MSG_IN_STALL",
	"TTRx_L2_WR_MSG_IN",
	"TTRx_L2_WR_MSG_IN_STALL",
	"TTRx_L2_SNP_MSG_IN",
	"TTRx_L2_SNP_MSG_IN_STALL",
	"TTRx_L2_RD_MSG_OUT",
	"TTRx_L2_RD_MSG_OUT_STALL",
	"TTRx_L2_WR_MSG_OUT",
	"TTRx_L2_ANY_LOOKUP",
	"TTRx_L2_READ_LOOKUP",
	"TTRx_L2_WRITE_LOOKUP",
	"TTRx_L2_EXT_SNOOP_LOOKUP",
	"TTRx_L2_EXT_READ",
	"TTRx_L2_EXT_READ_NOSNP",
	"TTRx_L2_EXT_READ_UNIQUE",
	"TTRx_L2_EXT_READ_BEATS",
	"TTRx_L2_EXT_AR_STALL",
	"TTRx_L2_EXT_AR_CNT_Q1",
	"TTRx_L2_EXT_AR_CNT_Q2",
	"TTRx_L2_EXT_AR_CNT_Q3",
	"TTRx_L2_EXT_RRESP_0_127",
	"TTRx_L2_EXT_RRESP_128_191",
	"TTRx_L2_EXT_RRESP_192_255",
	"TTRx_L2_EXT_RRESP_256_319",
	"TTRx_L2_EXT_RRESP_320_383",
	"TTRx_L2_EXT_WRITE",
	"TTRx_L2_EXT_WRITE_NOSNP_FULL",
	"TTRx_L2_EXT_WRITE_NOSNP_PTL",
	"TTRx_L2_EXT_WRITE_SNP_FULL",
	"TTRx_L2_EXT_WRITE_SNP_PTL",
	"TTRx_L2_EXT_WRITE_BEATS",
	"TTRx_L2_EXT_W_STALL",
	"TTRx_L2_EXT_AW_CNT_Q1",
	"TTRx_L2_EXT_AW_CNT_Q2",
	"TTRx_L2_EXT_AW_CNT_Q3",
	"TTRx_L2_EXT_SNOOP",
	"TTRx_L2_EXT_SNOOP_STALL",
	"TTRx_L2_EXT_SNOOP_RESP_CLEAN",
	"TTRx_L2_EXT_SNOOP_RESP_DATA",
	"TTRx_L2_EXT_SNOOP_INTERNAL",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
};

#endif /* _KBASE_GATOR_HWCNT_NAMES_TTRX_H_ */
