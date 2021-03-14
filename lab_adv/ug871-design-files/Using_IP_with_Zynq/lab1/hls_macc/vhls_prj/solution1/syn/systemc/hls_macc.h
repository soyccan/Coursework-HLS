// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _hls_macc_HH_
#define _hls_macc_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "hls_macc_mul_32s_bkb.h"
#include "hls_macc_HLS_MACC_PERIPH_BUS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_HLS_MACC_PERIPH_BUS_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_HLS_MACC_PERIPH_BUS_DATA_WIDTH = 32>
struct hls_macc : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_AWVALID;
    sc_out< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_AWREADY;
    sc_in< sc_uint<C_S_AXI_HLS_MACC_PERIPH_BUS_ADDR_WIDTH> > s_axi_HLS_MACC_PERIPH_BUS_AWADDR;
    sc_in< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_WVALID;
    sc_out< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_WREADY;
    sc_in< sc_uint<C_S_AXI_HLS_MACC_PERIPH_BUS_DATA_WIDTH> > s_axi_HLS_MACC_PERIPH_BUS_WDATA;
    sc_in< sc_uint<C_S_AXI_HLS_MACC_PERIPH_BUS_DATA_WIDTH/8> > s_axi_HLS_MACC_PERIPH_BUS_WSTRB;
    sc_in< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_ARVALID;
    sc_out< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_ARREADY;
    sc_in< sc_uint<C_S_AXI_HLS_MACC_PERIPH_BUS_ADDR_WIDTH> > s_axi_HLS_MACC_PERIPH_BUS_ARADDR;
    sc_out< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_RVALID;
    sc_in< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_RREADY;
    sc_out< sc_uint<C_S_AXI_HLS_MACC_PERIPH_BUS_DATA_WIDTH> > s_axi_HLS_MACC_PERIPH_BUS_RDATA;
    sc_out< sc_lv<2> > s_axi_HLS_MACC_PERIPH_BUS_RRESP;
    sc_out< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_BVALID;
    sc_in< sc_logic > s_axi_HLS_MACC_PERIPH_BUS_BREADY;
    sc_out< sc_lv<2> > s_axi_HLS_MACC_PERIPH_BUS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    hls_macc(sc_module_name name);
    SC_HAS_PROCESS(hls_macc);

    ~hls_macc();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    hls_macc_HLS_MACC_PERIPH_BUS_s_axi<C_S_AXI_HLS_MACC_PERIPH_BUS_ADDR_WIDTH,C_S_AXI_HLS_MACC_PERIPH_BUS_DATA_WIDTH>* hls_macc_HLS_MACC_PERIPH_BUS_s_axi_U;
    hls_macc_mul_32s_bkb<1,7,32,32,32>* hls_macc_mul_32s_bkb_U1;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > a;
    sc_signal< sc_lv<32> > b;
    sc_signal< sc_logic > accum_ap_vld;
    sc_signal< sc_lv<1> > accum_clr;
    sc_signal< sc_lv<32> > acc_reg;
    sc_signal< sc_lv<1> > accum_clr_read_reg_85;
    sc_signal< sc_lv<32> > grp_fu_57_p2;
    sc_signal< sc_lv<32> > mul_ln14_reg_100;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > add_ln14_fu_74_p2;
    sc_signal< sc_lv<32> > add_ln14_reg_105;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > select_ln12_fu_67_p3;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_accum_ap_vld();
    void thread_add_ln14_fu_74_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_select_ln12_fu_67_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
