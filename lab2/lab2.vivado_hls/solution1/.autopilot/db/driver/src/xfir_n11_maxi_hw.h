// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of pn32HPInput
//        bit 31~0 - pn32HPInput[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of pn32HPOutput
//        bit 31~0 - pn32HPOutput[31:0] (Read/Write)
// 0x1c : reserved
// 0x80 : Data signal of regXferLeng_V
//        bit 31~0 - regXferLeng_V[31:0] (Read/Write)
// 0x84 : reserved
// 0x40 ~
// 0x7f : Memory 'an32Coef' (12 * 32b)
//        Word n : bit [31:0] - an32Coef[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XFIR_N11_MAXI_AXILITES_ADDR_AP_CTRL            0x00
#define XFIR_N11_MAXI_AXILITES_ADDR_GIE                0x04
#define XFIR_N11_MAXI_AXILITES_ADDR_IER                0x08
#define XFIR_N11_MAXI_AXILITES_ADDR_ISR                0x0c
#define XFIR_N11_MAXI_AXILITES_ADDR_PN32HPINPUT_DATA   0x10
#define XFIR_N11_MAXI_AXILITES_BITS_PN32HPINPUT_DATA   32
#define XFIR_N11_MAXI_AXILITES_ADDR_PN32HPOUTPUT_DATA  0x18
#define XFIR_N11_MAXI_AXILITES_BITS_PN32HPOUTPUT_DATA  32
#define XFIR_N11_MAXI_AXILITES_ADDR_REGXFERLENG_V_DATA 0x80
#define XFIR_N11_MAXI_AXILITES_BITS_REGXFERLENG_V_DATA 32
#define XFIR_N11_MAXI_AXILITES_ADDR_AN32COEF_BASE      0x40
#define XFIR_N11_MAXI_AXILITES_ADDR_AN32COEF_HIGH      0x7f
#define XFIR_N11_MAXI_AXILITES_WIDTH_AN32COEF          32
#define XFIR_N11_MAXI_AXILITES_DEPTH_AN32COEF          12

