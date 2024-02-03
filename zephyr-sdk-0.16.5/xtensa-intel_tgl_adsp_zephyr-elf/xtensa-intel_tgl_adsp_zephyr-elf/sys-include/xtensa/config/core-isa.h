/* 
 * xtensa/config/core-isa.h -- HAL definitions that are dependent on Xtensa
 *				processor CORE configuration
 *
 *  See <xtensa/config/core.h>, which includes this file, for more details.
 */

/* Xtensa processor core configuration information.

   Copyright (c) 1999-2019 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */

#ifndef _XTENSA_CORE_CONFIGURATION_H
#define _XTENSA_CORE_CONFIGURATION_H


/****************************************************************************
	    Parameters Useful for Any Code, USER or PRIVILEGED
 ****************************************************************************/

/*
 *  Note:  Macros of the form XCHAL_HAVE_*** have a value of 1 if the option is
 *  configured, and a value of 0 otherwise.  These macros are always defined.
 */


/*----------------------------------------------------------------------
				ISA
  ----------------------------------------------------------------------*/

#define XCHAL_HAVE_BE			0	/* big-endian byte ordering */
#define XCHAL_HAVE_WINDOWED		1	/* windowed registers option */
#define XCHAL_NUM_AREGS			64	/* num of physical addr regs */
#define XCHAL_NUM_AREGS_LOG2		6	/* log2(XCHAL_NUM_AREGS) */
#define XCHAL_MAX_INSTRUCTION_SIZE	8	/* max instr bytes (3..8) */
#define XCHAL_HAVE_DEBUG		1	/* debug option */
#define XCHAL_HAVE_DENSITY		1	/* 16-bit instructions */
#define XCHAL_HAVE_LOOPS		1	/* zero-overhead loops */
#define XCHAL_LOOP_BUFFER_SIZE		64	/* zero-ov. loop instr buffer size */
#define XCHAL_HAVE_NSA			1	/* NSA/NSAU instructions */
#define XCHAL_HAVE_MINMAX		1	/* MIN/MAX instructions */
#define XCHAL_HAVE_SEXT			1	/* SEXT instruction */
#define XCHAL_HAVE_DEPBITS		0	/* DEPBITS instruction */
#define XCHAL_HAVE_CLAMPS		1	/* CLAMPS instruction */
#define XCHAL_HAVE_MUL16		1	/* MUL16S/MUL16U instructions */
#define XCHAL_HAVE_MUL32		1	/* MULL instruction */
#define XCHAL_HAVE_MUL32_HIGH		1	/* MULUH/MULSH instructions */
#define XCHAL_HAVE_DIV32		1	/* QUOS/QUOU/REMS/REMU instructions */
#define XCHAL_HAVE_L32R			1	/* L32R instruction */
#define XCHAL_HAVE_ABSOLUTE_LITERALS	0	/* non-PC-rel (extended) L32R */
#define XCHAL_HAVE_CONST16		0	/* CONST16 instruction */
#define XCHAL_HAVE_ADDX			1	/* ADDX#/SUBX# instructions */
#define XCHAL_HAVE_EXCLUSIVE            0	/* L32EX/S32EX instructions */
#define XCHAL_HAVE_WIDE_BRANCHES	0	/* B*.W18 or B*.W15 instr's */
#define XCHAL_HAVE_PREDICTED_BRANCHES	0	/* B[EQ/EQZ/NE/NEZ]T instr's */
#define XCHAL_HAVE_CALL4AND12		1	/* (obsolete option) */
#define XCHAL_HAVE_ABS			1	/* ABS instruction */
/*#define XCHAL_HAVE_POPC		0*/	/* POPC instruction */
/*#define XCHAL_HAVE_CRC		0*/	/* CRC instruction */
#define XCHAL_HAVE_RELEASE_SYNC		1	/* L32AI/S32RI instructions */
#define XCHAL_HAVE_S32C1I		1	/* S32C1I instruction */
#define XCHAL_HAVE_SPECULATION		0	/* speculation */
#define XCHAL_HAVE_FULL_RESET		1	/* all regs/state reset */
#define XCHAL_NUM_CONTEXTS		1	/* */
#define XCHAL_NUM_MISC_REGS		0	/* num of scratch regs (0..4) */
#define XCHAL_HAVE_TAP_MASTER		0	/* JTAG TAP control instr's */
#define XCHAL_HAVE_PRID			1	/* processor ID register */
#define XCHAL_HAVE_EXTERN_REGS		1	/* WER/RER instructions */
#define XCHAL_HAVE_MX			0	/* MX core (Tensilica internal) */
#define XCHAL_HAVE_MP_INTERRUPTS	0	/* interrupt distributor port */
#define XCHAL_HAVE_MP_RUNSTALL		0	/* core RunStall control port */
#define XCHAL_HAVE_PSO			0	/* Power Shut-Off */
#define XCHAL_HAVE_PSO_CDM		0	/* core/debug/mem pwr domains */
#define XCHAL_HAVE_PSO_FULL_RETENTION	0	/* all regs preserved on PSO */
#define XCHAL_HAVE_THREADPTR		1	/* THREADPTR register */
#define XCHAL_HAVE_BOOLEANS		1	/* boolean registers */
#define XCHAL_HAVE_CP			1	/* CPENABLE reg (coprocessor) */
#define XCHAL_CP_MAXCFG			2	/* max allowed cp id plus one */
#define XCHAL_HAVE_MAC16		0	/* MAC16 package */

#define XCHAL_HAVE_FUSION		0	/* Fusion*/
#define XCHAL_HAVE_FUSION_FP		0	/* Fusion FP option */
#define XCHAL_HAVE_FUSION_LOW_POWER	0	/* Fusion Low Power option */
#define XCHAL_HAVE_FUSION_AES		0	/* Fusion BLE/Wifi AES-128 CCM option */
#define XCHAL_HAVE_FUSION_CONVENC	0	/* Fusion Conv Encode option */
#define XCHAL_HAVE_FUSION_LFSR_CRC	0	/* Fusion LFSR-CRC option */
#define XCHAL_HAVE_FUSION_BITOPS	0	/* Fusion Bit Operations Support option */
#define XCHAL_HAVE_FUSION_AVS		0	/* Fusion AVS option */
#define XCHAL_HAVE_FUSION_16BIT_BASEBAND 0	/* Fusion 16-bit Baseband option */
#define XCHAL_HAVE_FUSION_VITERBI	0	/* Fusion Viterbi option */
#define XCHAL_HAVE_FUSION_SOFTDEMAP	0	/* Fusion Soft Bit Demap option */
#define XCHAL_HAVE_HIFIPRO		0	/* HiFiPro Audio Engine pkg */
#define XCHAL_HAVE_HIFI4		0	/* HiFi4 Audio Engine pkg */
#define XCHAL_HAVE_HIFI4_VFPU		0	/* HiFi4 Audio Engine VFPU option */
#define XCHAL_HAVE_HIFI3		1	/* HiFi3 Audio Engine pkg */
#define XCHAL_HAVE_HIFI3_VFPU		0	/* HiFi3 Audio Engine VFPU option */
#define XCHAL_HAVE_HIFI3Z		0	/* HiFi3Z Audio Engine pkg */
#define XCHAL_HAVE_HIFI3Z_VFPU	0	/* HiFi3Z Audio Engine VFPU option */
#define XCHAL_HAVE_HIFI2		0	/* HiFi2 Audio Engine pkg */
#define XCHAL_HAVE_HIFI2EP		0	/* HiFi2EP */
#define XCHAL_HAVE_HIFI_MINI		0	



#define XCHAL_HAVE_VECTORFPU2005	0	/* vector floating-point pkg */
#define XCHAL_HAVE_USER_DPFPU		0       /* user DP floating-point pkg */
#define XCHAL_HAVE_USER_SPFPU		0       /* user SP floating-point pkg */
#define XCHAL_HAVE_FP			1	/* single prec floating point */
#define XCHAL_HAVE_FP_DIV		1	/* FP with DIV instructions */
#define XCHAL_HAVE_FP_RECIP		1	/* FP with RECIP instructions */
#define XCHAL_HAVE_FP_SQRT		1	/* FP with SQRT instructions */
#define XCHAL_HAVE_FP_RSQRT		1	/* FP with RSQRT instructions */
#define XCHAL_HAVE_DFP			0	/* double precision FP pkg */
#define XCHAL_HAVE_DFP_DIV		0	/* DFP with DIV instructions */
#define XCHAL_HAVE_DFP_RECIP		0	/* DFP with RECIP instructions*/
#define XCHAL_HAVE_DFP_SQRT		0	/* DFP with SQRT instructions */
#define XCHAL_HAVE_DFP_RSQRT		0	/* DFP with RSQRT instructions*/
#define XCHAL_HAVE_DFP_ACCEL		0	/* double precision FP acceleration pkg */
#define XCHAL_HAVE_DFP_accel		XCHAL_HAVE_DFP_ACCEL	/* for backward compatibility */

#define XCHAL_HAVE_DFPU_SINGLE_ONLY	1	/* DFPU Coprocessor, single precision only */
#define XCHAL_HAVE_DFPU_SINGLE_DOUBLE	0	/* DFPU Coprocessor, single and double precision */
#define XCHAL_HAVE_VECTRA1		0	/* Vectra I  pkg */
#define XCHAL_HAVE_VECTRALX		0	/* Vectra LX pkg */

#define XCHAL_HAVE_FUSIONG		0    /* FusionG */
#define XCHAL_HAVE_FUSIONG3		0    /* FusionG3 */
#define XCHAL_HAVE_FUSIONG6		0    /* FusionG6 */
#define XCHAL_HAVE_FUSIONG_SP_VFPU	0    /* sp_vfpu option on FusionG */
#define XCHAL_HAVE_FUSIONG_DP_VFPU	0    /* dp_vfpu option on FusionG */
#define XCHAL_FUSIONG_SIMD32		0    /* simd32 for FusionG */

#define XCHAL_HAVE_PDX			0    /* PDX */
#define XCHAL_PDX_SIMD32		0    /* simd32 for PDX */
#define XCHAL_HAVE_PDX4			0    /* PDX4 */
#define XCHAL_HAVE_PDX8			0    /* PDX8 */
#define XCHAL_HAVE_PDX16		0    /* PDX16 */

#define XCHAL_HAVE_CONNXD2		0	/* ConnX D2 pkg */
#define XCHAL_HAVE_CONNXD2_DUALLSFLIX   0	/* ConnX D2 & Dual LoadStore Flix */
#define XCHAL_HAVE_BBE16		0	/* ConnX BBE16 pkg */
#define XCHAL_HAVE_BBE16_RSQRT		0	/* BBE16 & vector recip sqrt */
#define XCHAL_HAVE_BBE16_VECDIV		0	/* BBE16 & vector divide */
#define XCHAL_HAVE_BBE16_DESPREAD	0	/* BBE16 & despread */
#define XCHAL_HAVE_BBENEP		0	/* ConnX BBENEP pkgs */
#define XCHAL_HAVE_BBENEP_SP_VFPU	0      /* sp_vfpu option on BBE-EP */
#define XCHAL_HAVE_BSP3			0	/* ConnX BSP3 pkg */
#define XCHAL_HAVE_BSP3_TRANSPOSE	0	/* BSP3 & transpose32x32 */
#define XCHAL_HAVE_SSP16		0	/* ConnX SSP16 pkg */
#define XCHAL_HAVE_SSP16_VITERBI	0	/* SSP16 & viterbi */
#define XCHAL_HAVE_TURBO16		0	/* ConnX Turbo16 pkg */
#define XCHAL_HAVE_BBP16		0	/* ConnX BBP16 pkg */
#define XCHAL_HAVE_FLIX3		0	/* basic 3-way FLIX option */
#define XCHAL_HAVE_GRIVPEP		0	/* General Release of IVPEP */
#define XCHAL_HAVE_GRIVPEP_HISTOGRAM	0       /* Histogram option on GRIVPEP */

#define XCHAL_HAVE_VISION	        0     /* Vision P5/P6 */
#define XCHAL_VISION_SIMD16             0     /* simd16 for Vision P5/P6 */
#define XCHAL_VISION_TYPE               0     /* Vision P5, P6, or P3 */
#define XCHAL_VISION_QUAD_MAC_TYPE      0     /* quad_mac option on Vision P6 */
#define XCHAL_HAVE_VISION_HISTOGRAM     0     /* histogram option on Vision P5/P6 */
#define XCHAL_HAVE_VISION_SP_VFPU       0     /* sp_vfpu option on Vision P5/P6 */
#define XCHAL_HAVE_VISION_HP_VFPU       0     /* hp_vfpu option on Vision P6 */

#define XCHAL_HAVE_VISIONC	        0     /* Vision C */

/*----------------------------------------------------------------------
				MISC
  ----------------------------------------------------------------------*/

#define XCHAL_NUM_LOADSTORE_UNITS	1	/* load/store units */
#define XCHAL_NUM_WRITEBUFFER_ENTRIES	16	/* size of write buffer */
#define XCHAL_INST_FETCH_WIDTH		8	/* instr-fetch width in bytes */
#define XCHAL_DATA_WIDTH		8	/* data width in bytes */
#define XCHAL_DATA_PIPE_DELAY		2	/* d-side pipeline delay
						   (1 = 5-stage, 2 = 7-stage) */
#define XCHAL_CLOCK_GATING_GLOBAL	1	/* global clock gating */
#define XCHAL_CLOCK_GATING_FUNCUNIT	1	/* funct. unit clock gating */
/*  In T1050, applies to selected core load and store instructions (see ISA): */
#define XCHAL_UNALIGNED_LOAD_EXCEPTION	1	/* unaligned loads cause exc. */
#define XCHAL_UNALIGNED_STORE_EXCEPTION	1	/* unaligned stores cause exc.*/
#define XCHAL_UNALIGNED_LOAD_HW		0	/* unaligned loads work in hw */
#define XCHAL_UNALIGNED_STORE_HW	0	/* unaligned stores work in hw*/

#define XCHAL_SW_VERSION		1200008	/* sw version of this header */

#define XCHAL_CORE_ID			"cavs2x_LX6HiFi3_2017_8"	/* alphanum core name
						   (CoreID) set in the Xtensa
						   Processor Generator */

#define XCHAL_BUILD_UNIQUE_ID		0x0007AF71	/* 22-bit sw build ID */

/*
 *  These definitions describe the hardware targeted by this software.
 */
#define XCHAL_HW_CONFIGID0		0xC2F3FBFE	/* ConfigID hi 32 bits*/
#define XCHAL_HW_CONFIGID1		0x1CC6C29B	/* ConfigID lo 32 bits*/
#define XCHAL_HW_VERSION_NAME		"LX6.0.3"	/* full version name */
#define XCHAL_HW_VERSION_MAJOR		2600	/* major ver# of targeted hw */
#define XCHAL_HW_VERSION_MINOR		3	/* minor ver# of targeted hw */
#define XCHAL_HW_VERSION		260003	/* major*100+minor */
#define XCHAL_HW_REL_LX6		1
#define XCHAL_HW_REL_LX6_0		1
#define XCHAL_HW_REL_LX6_0_3		1
#define XCHAL_HW_CONFIGID_RELIABLE	1
/*  If software targets a *range* of hardware versions, these are the bounds: */
#define XCHAL_HW_MIN_VERSION_MAJOR	2600	/* major v of earliest tgt hw */
#define XCHAL_HW_MIN_VERSION_MINOR	3	/* minor v of earliest tgt hw */
#define XCHAL_HW_MIN_VERSION		260003	/* earliest targeted hw */
#define XCHAL_HW_MAX_VERSION_MAJOR	2600	/* major v of latest tgt hw */
#define XCHAL_HW_MAX_VERSION_MINOR	3	/* minor v of latest tgt hw */
#define XCHAL_HW_MAX_VERSION		260003	/* latest targeted hw */


/*----------------------------------------------------------------------
				CACHE
  ----------------------------------------------------------------------*/

#define XCHAL_ICACHE_LINESIZE		64	/* I-cache line size in bytes */
#define XCHAL_DCACHE_LINESIZE		64	/* D-cache line size in bytes */
#define XCHAL_ICACHE_LINEWIDTH		6	/* log2(I line size in bytes) */
#define XCHAL_DCACHE_LINEWIDTH		6	/* log2(D line size in bytes) */

#define XCHAL_ICACHE_SIZE		16384	/* I-cache size in bytes or 0 */
#define XCHAL_DCACHE_SIZE		49152	/* D-cache size in bytes or 0 */

#define XCHAL_DCACHE_IS_WRITEBACK	1	/* writeback feature */
#define XCHAL_DCACHE_IS_COHERENT	0	/* MP coherence feature */

#define XCHAL_HAVE_PREFETCH		1	/* PREFCTL register */
#define XCHAL_HAVE_PREFETCH_L1		1	/* prefetch to L1 dcache */
#define XCHAL_PREFETCH_CASTOUT_LINES	2	/* dcache pref. castout bufsz */
#define XCHAL_PREFETCH_ENTRIES		8	/* cache prefetch entries */
#define XCHAL_PREFETCH_BLOCK_ENTRIES	0	/* prefetch block streams */
#define XCHAL_HAVE_CACHE_BLOCKOPS	0	/* block prefetch for caches */
#define XCHAL_HAVE_ICACHE_TEST		1	/* Icache test instructions */
#define XCHAL_HAVE_DCACHE_TEST		1	/* Dcache test instructions */
#define XCHAL_HAVE_ICACHE_DYN_WAYS	1	/* Icache dynamic way support */
#define XCHAL_HAVE_DCACHE_DYN_WAYS	1	/* Dcache dynamic way support */




/****************************************************************************
    Parameters Useful for PRIVILEGED (Supervisory or Non-Virtualized) Code
 ****************************************************************************/


#ifndef XTENSA_HAL_NON_PRIVILEGED_ONLY

/*----------------------------------------------------------------------
				CACHE
  ----------------------------------------------------------------------*/

#define XCHAL_HAVE_PIF			1	/* any outbound bus present */

#define XCHAL_HAVE_AXI			0	/* AXI bus */
#define XCHAL_HAVE_AXI_ECC		0	/* ECC on AXI bus */
#define XCHAL_HAVE_ACELITE		0	/* ACELite bus */

#define XCHAL_HAVE_PIF_WR_RESP			0	/* pif write response */
#define XCHAL_HAVE_PIF_REQ_ATTR			1	/* pif attribute */

/*  If present, cache size in bytes == (ways * 2^(linewidth + setwidth)).  */

/*  Number of cache sets in log2(lines per way):  */
#define XCHAL_ICACHE_SETWIDTH		6
#define XCHAL_DCACHE_SETWIDTH		8

/*  Cache set associativity (number of ways):  */
#define XCHAL_ICACHE_WAYS		4
#define XCHAL_DCACHE_WAYS		3

/*  Cache features:  */
#define XCHAL_ICACHE_LINE_LOCKABLE	1
#define XCHAL_DCACHE_LINE_LOCKABLE	1
#define XCHAL_ICACHE_ECC_PARITY		XTHAL_MEMEP_ECC
#define XCHAL_DCACHE_ECC_PARITY		XTHAL_MEMEP_ECC

/*  Cache access size in bytes (affects operation of SICW instruction):  */
#define XCHAL_ICACHE_ACCESS_SIZE	8
#define XCHAL_DCACHE_ACCESS_SIZE	8

#define XCHAL_DCACHE_BANKS		1	/* number of banks */

/*  Number of encoded cache attr bits (see <xtensa/hal.h> for decoded bits):  */
#define XCHAL_CA_BITS			4


/*----------------------------------------------------------------------
			INTERNAL I/D RAM/ROMs and XLMI
  ----------------------------------------------------------------------*/
#define XCHAL_NUM_INSTROM		0	/* number of core instr. ROMs */
#define XCHAL_NUM_INSTRAM		1	/* number of core instr. RAMs */
#define XCHAL_NUM_DATAROM		0	/* number of core data ROMs */
#define XCHAL_NUM_DATARAM		1	/* number of core data RAMs */
#define XCHAL_NUM_URAM			0	/* number of core unified RAMs*/
#define XCHAL_NUM_XLMI			1	/* number of core XLMI ports */

/*  Instruction RAM 0:  */
#define XCHAL_INSTRAM0_VADDR		0x9F100000	/* virtual address */
#define XCHAL_INSTRAM0_PADDR		0x9F100000	/* physical address */
#define XCHAL_INSTRAM0_SIZE		1048576	/* size in bytes */
#define XCHAL_INSTRAM0_ECC_PARITY	XTHAL_MEMEP_ECC	/* ECC/parity type, 0=none */
#define XCHAL_HAVE_INSTRAM0		1
#define XCHAL_INSTRAM0_HAVE_IDMA	0	/* idma supported by this local memory */

/*  Data RAM 0:  */
#define XCHAL_DATARAM0_VADDR		0x9F000000	/* virtual address */
#define XCHAL_DATARAM0_PADDR		0x9F000000	/* physical address */
#define XCHAL_DATARAM0_SIZE		524288	/* size in bytes */
#define XCHAL_DATARAM0_ECC_PARITY	XTHAL_MEMEP_ECC	/* ECC/parity type, 0=none */
#define XCHAL_DATARAM0_BANKS		1	/* number of banks */
#define XCHAL_HAVE_DATARAM0		1
#define XCHAL_DATARAM0_HAVE_IDMA	0	/* idma supported by this local memory */

/*  XLMI Port 0:  */
#define XCHAL_XLMI0_VADDR		0x9F080000	/* virtual address */
#define XCHAL_XLMI0_PADDR		0x9F080000	/* physical address */
#define XCHAL_XLMI0_SIZE		65536	/* size in bytes */
#define XCHAL_XLMI0_ECC_PARITY	0	/* ECC/parity type, 0=none */

#define XCHAL_HAVE_IDMA			0
#define XCHAL_HAVE_IDMA_TRANSPOSE	0

#define XCHAL_HAVE_IMEM_LOADSTORE	1	/* can load/store to IROM/IRAM*/


/*----------------------------------------------------------------------
			INTERRUPTS and TIMERS
  ----------------------------------------------------------------------*/

#define XCHAL_HAVE_INTERRUPTS		1	/* interrupt option */
#define XCHAL_HAVE_HIGHPRI_INTERRUPTS	1	/* med/high-pri. interrupts */
#define XCHAL_HAVE_NMI			1	/* non-maskable interrupt */
#define XCHAL_HAVE_CCOUNT		1	/* CCOUNT reg. (timer option) */
#define XCHAL_NUM_TIMERS		3	/* number of CCOMPAREn regs */
#define XCHAL_NUM_INTERRUPTS		21	/* number of interrupts */
#define XCHAL_NUM_INTERRUPTS_LOG2	5	/* ceil(log2(NUM_INTERRUPTS)) */
#define XCHAL_NUM_EXTINTERRUPTS		8	/* num of external interrupts */
#define XCHAL_NUM_INTLEVELS		6	/* number of interrupt levels
						   (not including level zero) */
#define XCHAL_EXCM_LEVEL		5	/* level masked by PS.EXCM */
	/* (always 1 in XEA1; levels 2 .. EXCM_LEVEL are "medium priority") */

/*  Masks of interrupts at each interrupt level:  */
#define XCHAL_INTLEVEL1_MASK		0x0000000F
#define XCHAL_INTLEVEL2_MASK		0x000000F0
#define XCHAL_INTLEVEL3_MASK		0x00000F00
#define XCHAL_INTLEVEL4_MASK		0x00007000
#define XCHAL_INTLEVEL5_MASK		0x000F8000
#define XCHAL_INTLEVEL6_MASK		0x00000000
#define XCHAL_INTLEVEL7_MASK		0x00100000

/*  Masks of interrupts at each range 1..n of interrupt levels:  */
#define XCHAL_INTLEVEL1_ANDBELOW_MASK	0x0000000F
#define XCHAL_INTLEVEL2_ANDBELOW_MASK	0x000000FF
#define XCHAL_INTLEVEL3_ANDBELOW_MASK	0x00000FFF
#define XCHAL_INTLEVEL4_ANDBELOW_MASK	0x00007FFF
#define XCHAL_INTLEVEL5_ANDBELOW_MASK	0x000FFFFF
#define XCHAL_INTLEVEL6_ANDBELOW_MASK	0x000FFFFF
#define XCHAL_INTLEVEL7_ANDBELOW_MASK	0x001FFFFF

/*  Level of each interrupt:  */
#define XCHAL_INT0_LEVEL		1
#define XCHAL_INT1_LEVEL		1
#define XCHAL_INT2_LEVEL		1
#define XCHAL_INT3_LEVEL		1
#define XCHAL_INT4_LEVEL		2
#define XCHAL_INT5_LEVEL		2
#define XCHAL_INT6_LEVEL		2
#define XCHAL_INT7_LEVEL		2
#define XCHAL_INT8_LEVEL		3
#define XCHAL_INT9_LEVEL		3
#define XCHAL_INT10_LEVEL		3
#define XCHAL_INT11_LEVEL		3
#define XCHAL_INT12_LEVEL		4
#define XCHAL_INT13_LEVEL		4
#define XCHAL_INT14_LEVEL		4
#define XCHAL_INT15_LEVEL		5
#define XCHAL_INT16_LEVEL		5
#define XCHAL_INT17_LEVEL		5
#define XCHAL_INT18_LEVEL		5
#define XCHAL_INT19_LEVEL		5
#define XCHAL_INT20_LEVEL		7
#define XCHAL_DEBUGLEVEL		6	/* debug interrupt level */
#define XCHAL_HAVE_DEBUG_EXTERN_INT	1	/* OCD external db interrupt */
#define XCHAL_NMILEVEL			7	/* NMI "level" (for use with
						   EXCSAVE/EPS/EPC_n, RFI n) */

/*  Type of each interrupt:  */
#define XCHAL_INT0_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT1_TYPE 	XTHAL_INTTYPE_TIMER
#define XCHAL_INT2_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT3_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT4_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT5_TYPE 	XTHAL_INTTYPE_TIMER
#define XCHAL_INT6_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT7_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT8_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT9_TYPE 	XTHAL_INTTYPE_TIMER
#define XCHAL_INT10_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT11_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT12_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT13_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT14_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT15_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT16_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT17_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT18_TYPE 	XTHAL_INTTYPE_EXTERN_LEVEL
#define XCHAL_INT19_TYPE 	XTHAL_INTTYPE_SOFTWARE
#define XCHAL_INT20_TYPE 	XTHAL_INTTYPE_NMI

/*  Masks of interrupts for each type of interrupt:  */
#define XCHAL_INTTYPE_MASK_UNCONFIGURED	0xFFE00000
#define XCHAL_INTTYPE_MASK_SOFTWARE	0x0008D999
#define XCHAL_INTTYPE_MASK_EXTERN_EDGE	0x00000000
#define XCHAL_INTTYPE_MASK_EXTERN_LEVEL	0x00072444
#define XCHAL_INTTYPE_MASK_TIMER	0x00000222
#define XCHAL_INTTYPE_MASK_NMI		0x00100000
#define XCHAL_INTTYPE_MASK_WRITE_ERROR	0x00000000
#define XCHAL_INTTYPE_MASK_PROFILING	0x00000000
#define XCHAL_INTTYPE_MASK_IDMA_DONE	0x00000000
#define XCHAL_INTTYPE_MASK_IDMA_ERR	0x00000000
#define XCHAL_INTTYPE_MASK_GS_ERR	0x00000000

/*  Interrupt numbers assigned to specific interrupt sources:  */
#define XCHAL_TIMER0_INTERRUPT		1	/* CCOMPARE0 */
#define XCHAL_TIMER1_INTERRUPT		5	/* CCOMPARE1 */
#define XCHAL_TIMER2_INTERRUPT		9	/* CCOMPARE2 */
#define XCHAL_TIMER3_INTERRUPT		XTHAL_TIMER_UNCONFIGURED
#define XCHAL_NMI_INTERRUPT		20	/* non-maskable interrupt */

/*  Interrupt numbers for levels at which only one interrupt is configured:  */
#define XCHAL_INTLEVEL7_NUM		20
/*  (There are many interrupts each at level(s) 1, 2, 3, 4, 5.)  */


/*
 *  External interrupt mapping.
 *  These macros describe how Xtensa processor interrupt numbers
 *  (as numbered internally, eg. in INTERRUPT and INTENABLE registers)
 *  map to external BInterrupt<n> pins, for those interrupts
 *  configured as external (level-triggered, edge-triggered, or NMI).
 *  See the Xtensa processor databook for more details.
 */

/*  Core interrupt numbers mapped to each EXTERNAL BInterrupt pin number:  */
#define XCHAL_EXTINT0_NUM		2	/* (intlevel 1) */
#define XCHAL_EXTINT1_NUM		6	/* (intlevel 2) */
#define XCHAL_EXTINT2_NUM		10	/* (intlevel 3) */
#define XCHAL_EXTINT3_NUM		13	/* (intlevel 4) */
#define XCHAL_EXTINT4_NUM		16	/* (intlevel 5) */
#define XCHAL_EXTINT5_NUM		17	/* (intlevel 5) */
#define XCHAL_EXTINT6_NUM		18	/* (intlevel 5) */
#define XCHAL_EXTINT7_NUM		20	/* (intlevel 7) */
/*  EXTERNAL BInterrupt pin numbers mapped to each core interrupt number:  */
#define XCHAL_INT2_EXTNUM		0	/* (intlevel 1) */
#define XCHAL_INT6_EXTNUM		1	/* (intlevel 2) */
#define XCHAL_INT10_EXTNUM		2	/* (intlevel 3) */
#define XCHAL_INT13_EXTNUM		3	/* (intlevel 4) */
#define XCHAL_INT16_EXTNUM		4	/* (intlevel 5) */
#define XCHAL_INT17_EXTNUM		5	/* (intlevel 5) */
#define XCHAL_INT18_EXTNUM		6	/* (intlevel 5) */
#define XCHAL_INT20_EXTNUM		7	/* (intlevel 7) */


/*----------------------------------------------------------------------
			EXCEPTIONS and VECTORS
  ----------------------------------------------------------------------*/

#define XCHAL_XEA_VERSION		2	/* Xtensa Exception Architecture
						   number: 1 == XEA1 (old)
							   2 == XEA2 (new)
							   0 == XEAX (extern) or TX */
#define XCHAL_HAVE_XEA1			0	/* Exception Architecture 1 */
#define XCHAL_HAVE_XEA2			1	/* Exception Architecture 2 */
#define XCHAL_HAVE_XEAX			0	/* External Exception Arch. */
#define XCHAL_HAVE_EXCEPTIONS		1	/* exception option */
#define XCHAL_HAVE_HALT			0	/* halt architecture option */
#define XCHAL_HAVE_BOOTLOADER		0	/* boot loader (for TX) */
#define XCHAL_HAVE_MEM_ECC_PARITY	1	/* local memory ECC/parity */
#define XCHAL_HAVE_VECTOR_SELECT	1	/* relocatable vectors */
#define XCHAL_HAVE_VECBASE		1	/* relocatable vectors */
#define XCHAL_VECBASE_RESET_VADDR	0x9F180800  /* VECBASE reset value */
#define XCHAL_VECBASE_RESET_PADDR	0x9F180800
#define XCHAL_RESET_VECBASE_OVERLAP	0

#define XCHAL_RESET_VECTOR0_VADDR	0x9F180000
#define XCHAL_RESET_VECTOR0_PADDR	0x9F180000
#define XCHAL_RESET_VECTOR1_VADDR	0xBE800000
#define XCHAL_RESET_VECTOR1_PADDR	0xBE800000
#define XCHAL_RESET_VECTOR_VADDR	0x9F180000
#define XCHAL_RESET_VECTOR_PADDR	0x9F180000
#define XCHAL_MEMERROR_VECTOR0_VADDR	0x9F180400
#define XCHAL_MEMERROR_VECTOR0_PADDR	0x9F180400
#define XCHAL_MEMERROR_VECTOR1_VADDR	0xBE800400
#define XCHAL_MEMERROR_VECTOR1_PADDR	0xBE800400
#define XCHAL_MEMERROR_VECTOR_VADDR	0x9F180400
#define XCHAL_MEMERROR_VECTOR_PADDR	0x9F180400
#define XCHAL_USER_VECOFS		0x00000340
#define XCHAL_USER_VECTOR_VADDR		0x9F180B40
#define XCHAL_USER_VECTOR_PADDR		0x9F180B40
#define XCHAL_KERNEL_VECOFS		0x00000300
#define XCHAL_KERNEL_VECTOR_VADDR	0x9F180B00
#define XCHAL_KERNEL_VECTOR_PADDR	0x9F180B00
#define XCHAL_DOUBLEEXC_VECOFS		0x000003C0
#define XCHAL_DOUBLEEXC_VECTOR_VADDR	0x9F180BC0
#define XCHAL_DOUBLEEXC_VECTOR_PADDR	0x9F180BC0
#define XCHAL_WINDOW_OF4_VECOFS		0x00000000
#define XCHAL_WINDOW_UF4_VECOFS		0x00000040
#define XCHAL_WINDOW_OF8_VECOFS		0x00000080
#define XCHAL_WINDOW_UF8_VECOFS		0x000000C0
#define XCHAL_WINDOW_OF12_VECOFS	0x00000100
#define XCHAL_WINDOW_UF12_VECOFS	0x00000140
#define XCHAL_WINDOW_VECTORS_VADDR	0x9F180800
#define XCHAL_WINDOW_VECTORS_PADDR	0x9F180800
#define XCHAL_INTLEVEL2_VECOFS		0x00000180
#define XCHAL_INTLEVEL2_VECTOR_VADDR	0x9F180980
#define XCHAL_INTLEVEL2_VECTOR_PADDR	0x9F180980
#define XCHAL_INTLEVEL3_VECOFS		0x000001C0
#define XCHAL_INTLEVEL3_VECTOR_VADDR	0x9F1809C0
#define XCHAL_INTLEVEL3_VECTOR_PADDR	0x9F1809C0
#define XCHAL_INTLEVEL4_VECOFS		0x00000200
#define XCHAL_INTLEVEL4_VECTOR_VADDR	0x9F180A00
#define XCHAL_INTLEVEL4_VECTOR_PADDR	0x9F180A00
#define XCHAL_INTLEVEL5_VECOFS		0x00000240
#define XCHAL_INTLEVEL5_VECTOR_VADDR	0x9F180A40
#define XCHAL_INTLEVEL5_VECTOR_PADDR	0x9F180A40
#define XCHAL_INTLEVEL6_VECOFS		0x00000280
#define XCHAL_INTLEVEL6_VECTOR_VADDR	0x9F180A80
#define XCHAL_INTLEVEL6_VECTOR_PADDR	0x9F180A80
#define XCHAL_DEBUG_VECOFS		XCHAL_INTLEVEL6_VECOFS
#define XCHAL_DEBUG_VECTOR_VADDR	XCHAL_INTLEVEL6_VECTOR_VADDR
#define XCHAL_DEBUG_VECTOR_PADDR	XCHAL_INTLEVEL6_VECTOR_PADDR
#define XCHAL_NMI_VECOFS		0x000002C0
#define XCHAL_NMI_VECTOR_VADDR		0x9F180AC0
#define XCHAL_NMI_VECTOR_PADDR		0x9F180AC0
#define XCHAL_INTLEVEL7_VECOFS		XCHAL_NMI_VECOFS
#define XCHAL_INTLEVEL7_VECTOR_VADDR	XCHAL_NMI_VECTOR_VADDR
#define XCHAL_INTLEVEL7_VECTOR_PADDR	XCHAL_NMI_VECTOR_PADDR


/*----------------------------------------------------------------------
				DEBUG MODULE
  ----------------------------------------------------------------------*/

/*  Misc  */
#define XCHAL_HAVE_DEBUG_ERI		0	/* ERI to debug module */
#define XCHAL_HAVE_DEBUG_APB		0	/* APB to debug module */
#define XCHAL_HAVE_DEBUG_JTAG		1	/* JTAG to debug module */

/*  On-Chip Debug (OCD)  */
#define XCHAL_HAVE_OCD			1	/* OnChipDebug option */
#define XCHAL_NUM_IBREAK		2	/* number of IBREAKn regs */
#define XCHAL_NUM_DBREAK		2	/* number of DBREAKn regs */
#define XCHAL_HAVE_OCD_DIR_ARRAY	0	/* faster OCD option (to LX4) */
#define XCHAL_HAVE_OCD_LS32DDR		1	/* L32DDR/S32DDR (faster OCD) */

/*  TRAX (in core)  */
#define XCHAL_HAVE_TRAX			0	/* TRAX in debug module */
#define XCHAL_TRAX_MEM_SIZE		0	/* TRAX memory size in bytes */
#define XCHAL_TRAX_MEM_SHAREABLE	0	/* start/end regs; ready sig. */
#define XCHAL_TRAX_ATB_WIDTH		0	/* ATB width (bits), 0=no ATB */
#define XCHAL_TRAX_TIME_WIDTH		0	/* timestamp bitwidth, 0=none */

/*  Perf counters  */
#define XCHAL_NUM_PERF_COUNTERS		0	/* performance counters */


/*----------------------------------------------------------------------
				MMU
  ----------------------------------------------------------------------*/

/*  See core-matmap.h header file for more details.  */

#define XCHAL_HAVE_TLBS			1	/* inverse of HAVE_CACHEATTR */
#define XCHAL_HAVE_SPANNING_WAY		1	/* one way maps I+D 4GB vaddr */
#define XCHAL_SPANNING_WAY		0	/* TLB spanning way number */
#define XCHAL_HAVE_IDENTITY_MAP		1	/* vaddr == paddr always */
#define XCHAL_HAVE_CACHEATTR		0	/* CACHEATTR register present */
#define XCHAL_HAVE_MIMIC_CACHEATTR	1	/* region protection */
#define XCHAL_HAVE_XLT_CACHEATTR	0	/* region prot. w/translation */
#define XCHAL_HAVE_PTP_MMU		0	/* full MMU (with page table
						   [autorefill] and protection)
						   usable for an MMU-based OS */

/*  If none of the above last 5 are set, it's a custom TLB configuration.  */

#define XCHAL_MMU_ASID_BITS		0	/* number of bits in ASIDs */
#define XCHAL_MMU_RINGS			1	/* number of rings (1..4) */
#define XCHAL_MMU_RING_BITS		0	/* num of bits in RING field */

/*----------------------------------------------------------------------
				MPU
  ----------------------------------------------------------------------*/
#define XCHAL_HAVE_MPU			0 
#define XCHAL_MPU_ENTRIES		0

#define XCHAL_MPU_ALIGN_REQ		1	/* MPU requires alignment of entries to background map */
#define XCHAL_MPU_BACKGROUND_ENTRIES	0	/* number of entries in bg map*/
#define XCHAL_MPU_BG_CACHEADRDIS	0	/* default CACHEADRDIS for bg */
 
#define XCHAL_MPU_ALIGN_BITS		0
#define XCHAL_MPU_ALIGN			0

#endif /* !XTENSA_HAL_NON_PRIVILEGED_ONLY */


#endif /* _XTENSA_CORE_CONFIGURATION_H */

