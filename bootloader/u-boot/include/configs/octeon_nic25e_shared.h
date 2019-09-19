#ifndef __OCTEON_NIC25E_SHARED_H__
#define __OCTEON_NIC25E_SHARED_H__



#define OCTEON_NIC25E_DRAM_SOCKET_CONFIGURATION0 \
    {{0x0, 0x0}, {octeon_nic25e_cfg0_spd_values, NULL}}

#define  NIC25E_MTA8ATF51264AZ2G3_SPD_VALUES \
0x23,0x10,0x0c,0x02,0x84,0x19,0x00,0x08,0x00,0x00,0x00,0x03,0x01,0x0b,0x80,0x00,\
0x00,0x00,0x08,0x0c,0xf4,0x1b,0x00,0x00,0x6c,0x6c,0x6c,0x11,0x08,0x74,0x20,0x08,\
0x00,0x05,0x70,0x03,0x00,0xa8,0x1e,0x2b,0x2b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x2c,0x15,0x35,\
0x15,0x35,0x0b,0x2c,0x15,0x35,0x0b,0x35,0x0b,0x2c,0x0b,0x35,0x15,0x36,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0xec,0xb5,0xce,0x00,0x00,0x00,0x00,0x00,0xc2,0x30,0x0e,\
0x11,0x11,0x04,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x2e,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x80,0x2c,0x0f,0x14,0x50,0x0e,0x08,0x18,0xc8,0x31,0x38,0x41,0x53,0x46,0x31,0x47,\
0x37,0x32,0x41,0x5a,0x2d,0x32,0x47,0x31,0x41,0x31,0x20,0x20,0x20,0x31,0x80,0x2c,\
0x41,0x44,0x50,0x41,0x45,0x4e,0x43,0x39,0x30,0x30,0x32,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

#if 0
/*0	DDR4-SPD BYTES USE/TOTAL BYTES AVAILABLE/CRC COVERAGE	23 */ 0x23, \
/*1	DDR4-SPD REVISION	10 */ 0x10, \
/*2	DDR4-DRAM DEVICE TYPE	0C */ 0xc, \
/*3	DDR4-MODULE TYPE (FORM FACTOR)	2 */ 0x2, \
/*4	DDR4-SDRAM DEVICE DENSITY BANKS	84 */ 0x84, \
/*5	DDR4-SDRAM DEVICE ADDRESSING	19 */ 0x19, \
/*6	DDR4-SDRAM DEVICE TYPE (ARCHITECURE)	0 */ 0x0, \
/*7	DDR4-SDRAM DEVICE OPTIONAL FEATURES	8 */ 0x8, \
/*8	DDR4-SDRAM DEVICE THERMAL REFRESH OPTIONS	0 */ 0, \
/*9	DDR4-OTHER SDRAM OPTIONAL FEATURES	60 */ 0x60, \
/*10	DDR4-BYTE 10 RESERVED	0 */ 0, \
/*11	DDR4-NOMINAL MODULE VOLTAGE (VDD)	3 */ 0x3, \
/*12	DDR4-MODULE ORG. (PACKAGE RANKS DEVICE WIDTH)	1 */ 1, \
/*13	DDR4-MODULE MEMORY BUS WIDTH	3 */ 0x3, \
/*14	DDR4-MODULE THERMAL SENSOR SUPPORT	0 */ 0, \
/*15	DDR4-BYTE 15 RESERVED	0 */ 0, \
/*16	DDR4-BYTE 16 RESERVED	0 */ 0, \
/*17	DDR4-TIMEBASES (MTB FTB)	0 */ 0x0,\
/*18	DDR4-SDRAM DEVICE TCKMIN	7 */ 0x7,\
/*19	DDR4- SDRM DEVICE TCKMAX	0D */ 0x0d,\
/*20	DDR4-CL7 THROUGH CL14 SUPPORT	F8 */ 0xf8,\
/*21	DDR4-CL15 THROUGH CL22 SUPPORT	7F */ 0x7f,\
/*22	DDR4-CL23, CL24, RESERVED SUPPORT	0 */ 0x0,\
/*23	DDR4-CL SUPPORT RESERVED	0 */ 0x0,\
/*24	DDR4-MIN CAS LATENCY (TAAMIN)	6 */ 0x6,\
/*25	DDR4-MIN RAS TO CAS DELAY (TRCDMIN)	6 */ 0x6,\
/*26	DDR4-MIN ROW PRECHARGE DELAY (TRPMIN)	6 */ 0x6,\
/*27	DDR4-UPPER NIBBLE TRASMIN, TRCMIN	11 */ 0x11,\
/*28	DDR4-MIN ACTIVE TO PRECHARGE DELAY (TRASMIN) LSB	0 */ 0x0, \
/*29	DDR4-MIN ACTIVE TO ACTIVE/REFRESH DELAY (TRCMIN) LSB	6 */ 0x6, \
/*30	DDR4-MIN REFRESH RECOVERY DELAY (TRFC1MIN) LSB	20 */ 0x20,\
/*31	DDR4-MIN REFRESH RECOVERY DELAY (TRFC1MIN) MSB	8 */ 0x8, \
/*32	DDR4-MIN REFRESH RECOVERY TIME DELAY (TRFC2MIN) LSB	0 */ 0x0,\
/*33	DDR4-MIN REFRESH RECOVERY DELAY (TRFC2MIN) MSB	5 */ 0x5,\
/*34	DDR4-MIN REFRESH RECOVERY DELAY (TRFC4MIN) LSB	70 */ 0x70, \
/*35	DDR4-MIN REFRESH RECOVERY DELAY (TRFC4MIN) MSB	3 */ 0x3, \
/*36	DDR4-MIN FOUR ACTIVE WINDOW DELAY (TFAWMIN) UPPER NIB	0 */ 0x0, \
/*37	DDR4-MIN FOUR ACTIVE WINDOW DELAY (TFAWMIN) LSB	A8 */ 0xa8, \
/*38	DDR4-MIN ACTIVE TO ACTIVE DELAY (TRRD_SMIN) DIFRNT BANK GRP	1B */ 0x1b, \
/*39	DDR4-MIN ACTIVE TO ACTIVE DELAY (TRRD_LMIN) SAME BANK GRP	28 */ 0x28,\
/*40	DDR4-MIN CAS TO CAS DELAY, SAME BG (TCCDLMIN)	28 */ 0x28,\
/*41-59	DDR4-RESERVE BYTE 41 - 59	0 */ 0x0, 00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00, \
/*60	DDR4-BIT MAP, DQ0 - 3	16 */ 0x16,\
/*61	DDR4-BIT MAP, DQ4 -7	36 */ 0x36,\
/*62	DDR4-BIT MAP, DQ8 - 11	16 */ 0x16,\
/*63	DDR4-BIT MAP, DQ12 - 15	36 */ 0x36,\
/*64	DDR4-BIT MAP, DQ16 - 19	16 */ 0x16,\
/*65	DDR4-BIT MAP, DQ20 - 23	36 */ 0x36,\
/*66	DDR4-BIT MAP, DQ24 - 27	16 */ 0x16,\
/*67	DDR4-BIT MAP, DQ28 - 31	36 */ 0x36,\
/*68	DDR4-BIT MAP, CB0 - 3	0 */ 0x0,\
/*69	DDR4-BIT MAP, CB4 - 7	0 */ 0x0,\
/*70	DDR4-BIT MAP, DQ32 - 35	16 */ 0x16,\
/*71	DDR4-BIT MAP, DQ36 - 39	36 */ 0x36,\
/*72	DDR4-BIT MAP, DQ40 - 43	16 */ 0x16,\
/*73	DDR4-BIT MAP, DQ44 - 47	36 */ 0x36,\
/*74	DDR4-BIT MAP, DQ48 - 51	16 */ 0x16,\
/*75	DDR4-BIT MAP, DQ52 - 55	36 */ 0x36,\
/*76	DDR4-BIT MAP, DQ56 - 59	16 */ 0x16, \
/*77	DDR4-BIT MAP, DQ60 - 63	36 */ 0x36,\
/*78-116	DDR4-RESERVE BYTES 78 - 116	0 */ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, \
/*117	DDR4-FTB OFFSET - TCCDLMIN	0 */ 0x0,\
/*118	DDR4-FTB OFFSET - TRRD_LMIN	9C */ 0x9c,\
/*119	DDR4-FTB OFFSET - TRRD_SMIN	B5 */ 0xb5,\
/*120	DDR4-FTB OFFSET - TRCMIN	0 */ 0,\
/*121	DDR4-FTB OFFSET - TRPMIN	0 */ 0,\
/*122	DDR4-FTB OFFSET - TRCDMIN	0 */ 0,\
/*123	DDR4-FTB OFFSET - TAAMIN	0 */ 0,\
/*124	DDR4-FTB OFFSET - TCKMAX	E7 */ 0xe7,\
/*125	DDR4-FTB OFFSET - TCKMIN	D6 */ 0xd6,\
/*126-127	DDR4-CRC FOR BYTES 0 - 125, BASE CONFIG	006A */ 0x00, 0x6a, \
/*128	DDR4-RAW CARD EXT. AND MODULE NOM. HEIGHT	11 */ 0x11, \
/*129	DDR4-MODULE MAX THICKNESS	1 */ 0x1,\
/*130	DDR4-RAW CARD ID	20 */ 0x20, \
/*131	DDR4-UDIMM ADDRESS MAPPING - RDIMM MODULE ATTRIBUTES	0 */ 0, \
/*132	DDR4-RDIMM HEAT SPREADER SOLUTION	0 */ 0, \
/*133	DDR4-RDIMM REGISER MFR. ID (LSB)	0 */ 0, \
/*134	DDR4-REGISTER MFR. ID (MSB)	0 */ 0, \
/*135	DDR4-REGISTER REVISION NUMBER	0 */ 0, \
/*136	DDR4-REGISTER ADDRESS MAPPING	0 */ 0, \
/*137	DDR4-REG OUTPUT DRIVE FOR CONTROL	0 */0,  \
/*138	DDR4-REG OUTPUT DRIVE FOR CLOCK	0 */ 0, \
/*139-253	DDR4-RESERVE BYTES 139 - 253	0 */ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,\
/*254-255	DDR4-CRC FOR MODULE SPECIFIC BYTES 128-253	074A */ 0x7, 0x4A, \
/*256-319	DDR4-BYTES 256 - 319 RESERVED	0 */ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, \
/*320	DDR4-MODULE MFR. ID CODE (LSB)	80 */ 0x80, \
/*321   DDR4-MODULE MFR. ID COD (MSB)   2C */ 0x2c, \
/*322	DDR4-MODULE MFR. LOCATION	0 */ 0, \
/*323-324	DDR4-MODULE MFR. DATE	0 */ 0x00,0x00, \
/*325-328	DDR4-MODULE SERIAL NUMBER	0 */ 0x0, 0x0, 0x0, 0x0, \
/*329-348	DDR4-MODULE PART NUMBER	8ATF51264AZ-2G3A2 */ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, \
/*349	DDR4-MODULE PCB REV	32 */ 0x32, \
/*350	DDR4-DRAM MFR. ID CODE (LSB)	80 */ 0x80, \
/*351	DDR4-DRAM MFR. ID CODE (MSB)	2C */  0x2c,\
/*352	DDR4-DEVICE DIE REV (PART MARKING)	41 */ 0x41,\
/*353-383	DDR4-BYTES 353 - 383 RESERVED	0 */ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, \
/*384-511	DDR4-BYTES 384-511 END USER RESERVED	0 */  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif

#define OCTEON_NIC25E_CFG0_SPD_VALUES  NIC25E_MTA8ATF51264AZ2G3_SPD_VALUES


#define OCTEON_NIC25E_BOARD_EEPROM_TWSI_ADDR        (0x56)


#define OCTEON_NIC25E_MODEREG_PARAMS1_1RANK_1SLOT	\
{							\
	.cn73xx = {					\
		.pasr_00	= 0,			\
		.asr_00		= 0,			\
		.srt_00		= 0,			\
		.rtt_wr_00	= 0,			\
		.dic_00		= 0,			\
		.rtt_nom_00	= rttnom_40ohm,		\
		.pasr_01	= 0,			\
		.asr_01		= 0,			\
		.srt_01		= 0,			\
		.rtt_wr_01	= 0,			\
		.dic_01		= 0,			\
		.rtt_nom_01	= 0,			\
		.pasr_10	= 0,			\
		.asr_10		= 0,			\
		.srt_10		= 0,			\
		.rtt_wr_10	= 0,			\
		.dic_10		= 0,			\
		.rtt_nom_10	= 0,			\
		.pasr_11	= 0,			\
		.asr_11		= 0,			\
		.srt_11		= 0,			\
		.rtt_wr_11	= 0,			\
		.dic_11		= 0,			\
		.rtt_nom_11	= 0,			\
	}						\
}

#define OCTEON_NIC25E_MODEREG_PARAMS1_1RANK_2SLOT	\
{							\
	.cn73xx = {					\
		.pasr_00	= 0,			\
		.asr_00		= 0,			\
		.srt_00		= 0,			\
		.rtt_wr_00	= rttwr_120ohm,		\
		.dic_00		= 0,			\
		.rtt_nom_00	= rttnom_20ohm,		\
		.pasr_01	= 0,			\
		.asr_01		= 0,			\
		.srt_01		= 0,			\
		.rtt_wr_01	= 0,			\
		.dic_01		= 0,			\
		.rtt_nom_01	= 0,			\
		.pasr_10	= 0,			\
		.asr_10		= 0,			\
		.srt_10		= 0,			\
		.rtt_wr_10	= rttwr_120ohm,		\
		.dic_10		= 0,			\
		.rtt_nom_10	= rttnom_20ohm,		\
		.pasr_11	= 0,			\
		.asr_11		= 0,			\
		.srt_11		= 0,			\
		.rtt_wr_11	= 0,			\
		.dic_11		= 0,			\
		.rtt_nom_11	= 0			\
	}						\
}

#define OCTEON_NIC25E_CN73XX_DRAM_ODT_1RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1             reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ==========================================  ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x00000001ULL, OCTEON_NIC25E_MODEREG_PARAMS1_1RANK_1SLOT, {.u64=0x0000},     3,     0x00000000ULL,  0  },      \
    /*   2 */ {   0,    0x00050005ULL, OCTEON_NIC25E_MODEREG_PARAMS1_1RANK_2SLOT, {.u64=0x0000},     3,     0x00010004ULL,  0  }


/* Construct a static initializer for the ddr_configuration_t variable that holds
** (almost) all of the information required for DDR initialization.
*/

/*
  The parameters below make up the custom_lmc_config data structure.
  This structure is used to customize the way that the LMC DRAM
  Controller is configured for a particular board design.

  Refer to the file lib_octeon_board_table_entry.h for a description
  of the custom board settings.  It is usually kept in the following
  location... arch/mips/include/asm/arch-octeon/

*/

#define OCTEON_NIC25E_DDR_CONFIGURATION					\
/* Interface 0 */							\
{									\
	.custom_lmc_config = {						\
		.min_rtt_nom_idx	= 2,				\
		.max_rtt_nom_idx	= 5,				\
		.min_rodt_ctl		= 2,				\
		.max_rodt_ctl		= 4,				\
		.dqx_ctl		= 4,				\
		.ck_ctl			= 4,				\
		.cmd_ctl		= 4,				\
		.min_cas_latency	= 7,				\
		.offset_en 		= 1,				\
		.offset_udimm		= 2,				\
		.offset_rdimm		= 1,				\
		.ddr_rtt_nom_auto	= 0,				\
		.ddr_rodt_ctl_auto	= 0,				\
		.rlevel_compute 	= 1,				\
		.ddr2t_udimm 		= 1,				\
		.ddr2t_rdimm 		= 1,				\
		.fprch2			= 2,				\
		.parity			= 0				\
	},								\
	.dimm_config_table = {						\
		OCTEON_NIC25E_DRAM_SOCKET_CONFIGURATION0,		\
		DIMM_CONFIG_TERMINATOR					\
	},								\
	.unbuffered = {							\
		.ddr_board_delay = 0,					\
		.lmc_delay_clk = 0,					\
		.lmc_delay_cmd = 0,					\
		.lmc_delay_dq = 0					\
	},								\
	.registered = {							\
		.ddr_board_delay = 0,					\
		.lmc_delay_clk = 0,					\
		.lmc_delay_cmd = 0,					\
		.lmc_delay_dq = 0					\
	},								\
	.odt_1rank_config = {						\
		OCTEON_NIC25E_CN73XX_DRAM_ODT_1RANK_CONFIGURATION	\
	},								\
},									\

#endif   /* __OCTEON_NIC25E_SHARED_H__ */