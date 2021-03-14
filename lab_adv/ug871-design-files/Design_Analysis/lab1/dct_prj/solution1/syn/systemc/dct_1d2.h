// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dct_1d2_HH_
#define _dct_1d2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dct_mac_muladd_15cud.h"
#include "dct_1d2_dct_coeffbkb.h"

namespace ap_rtl {

struct dct_1d2 : public sc_module {
    // Port declarations 15
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > src_address0;
    sc_out< sc_logic > src_ce0;
    sc_in< sc_lv<16> > src_q0;
    sc_in< sc_lv<4> > src_offset;
    sc_out< sc_lv<6> > dst_address0;
    sc_out< sc_logic > dst_ce0;
    sc_out< sc_logic > dst_we0;
    sc_out< sc_lv<16> > dst_d0;
    sc_in< sc_lv<4> > dst_offset;


    // Module declarations
    dct_1d2(sc_module_name name);
    SC_HAS_PROCESS(dct_1d2);

    ~dct_1d2();

    sc_trace_file* mVcdFile;

    dct_1d2_dct_coeffbkb* dct_coeff_table_U;
    dct_mac_muladd_15cud<1,1,15,16,32,32>* dct_mac_muladd_15cud_U1;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > dct_coeff_table_address0;
    sc_signal< sc_logic > dct_coeff_table_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_q0;
    sc_signal< sc_lv<8> > zext_ln59_fu_140_p1;
    sc_signal< sc_lv<8> > zext_ln59_reg_267;
    sc_signal< sc_lv<8> > zext_ln48_fu_152_p1;
    sc_signal< sc_lv<8> > zext_ln48_reg_272;
    sc_signal< sc_lv<4> > k_fu_162_p2;
    sc_signal< sc_lv<4> > k_reg_280;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > zext_ln61_fu_180_p1;
    sc_signal< sc_lv<8> > zext_ln61_reg_285;
    sc_signal< sc_lv<1> > icmp_ln55_fu_156_p2;
    sc_signal< sc_lv<6> > dst_addr_reg_290;
    sc_signal< sc_lv<4> > n_fu_200_p2;
    sc_signal< sc_lv<4> > n_reg_298;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln57_fu_194_p2;
    sc_signal< sc_lv<32> > grp_fu_259_p3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > k_0_reg_98;
    sc_signal< sc_lv<4> > n_0_reg_109;
    sc_signal< sc_lv<32> > tmp_0_reg_120;
    sc_signal< sc_lv<64> > zext_ln61_1_fu_189_p1;
    sc_signal< sc_lv<64> > zext_ln58_2_fu_215_p1;
    sc_signal< sc_lv<64> > zext_ln59_1_fu_225_p1;
    sc_signal< sc_lv<7> > tmp_6_fu_132_p3;
    sc_signal< sc_lv<7> > tmp_7_fu_144_p3;
    sc_signal< sc_lv<7> > tmp_8_fu_172_p3;
    sc_signal< sc_lv<8> > zext_ln58_fu_168_p1;
    sc_signal< sc_lv<8> > add_ln61_1_fu_184_p2;
    sc_signal< sc_lv<8> > zext_ln58_1_fu_206_p1;
    sc_signal< sc_lv<8> > add_ln58_fu_210_p2;
    sc_signal< sc_lv<8> > add_ln59_fu_220_p2;
    sc_signal< sc_lv<29> > trunc_ln57_fu_230_p1;
    sc_signal< sc_lv<29> > add_ln61_fu_234_p2;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<29> ap_const_lv29_1000;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1C;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln58_fu_210_p2();
    void thread_add_ln59_fu_220_p2();
    void thread_add_ln61_1_fu_184_p2();
    void thread_add_ln61_fu_234_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_dct_coeff_table_address0();
    void thread_dct_coeff_table_ce0();
    void thread_dst_address0();
    void thread_dst_ce0();
    void thread_dst_d0();
    void thread_dst_we0();
    void thread_icmp_ln55_fu_156_p2();
    void thread_icmp_ln57_fu_194_p2();
    void thread_k_fu_162_p2();
    void thread_n_fu_200_p2();
    void thread_src_address0();
    void thread_src_ce0();
    void thread_tmp_6_fu_132_p3();
    void thread_tmp_7_fu_144_p3();
    void thread_tmp_8_fu_172_p3();
    void thread_trunc_ln57_fu_230_p1();
    void thread_zext_ln48_fu_152_p1();
    void thread_zext_ln58_1_fu_206_p1();
    void thread_zext_ln58_2_fu_215_p1();
    void thread_zext_ln58_fu_168_p1();
    void thread_zext_ln59_1_fu_225_p1();
    void thread_zext_ln59_fu_140_p1();
    void thread_zext_ln61_1_fu_189_p1();
    void thread_zext_ln61_fu_180_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
