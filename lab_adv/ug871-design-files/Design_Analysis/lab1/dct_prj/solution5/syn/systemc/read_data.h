// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _read_data_HH_
#define _read_data_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct read_data : public sc_module {
    // Port declarations 42
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<16> > input_r_q0;
    sc_out< sc_lv<3> > buf_0_address0;
    sc_out< sc_logic > buf_0_ce0;
    sc_out< sc_logic > buf_0_we0;
    sc_out< sc_lv<16> > buf_0_d0;
    sc_out< sc_lv<3> > buf_1_address0;
    sc_out< sc_logic > buf_1_ce0;
    sc_out< sc_logic > buf_1_we0;
    sc_out< sc_lv<16> > buf_1_d0;
    sc_out< sc_lv<3> > buf_2_address0;
    sc_out< sc_logic > buf_2_ce0;
    sc_out< sc_logic > buf_2_we0;
    sc_out< sc_lv<16> > buf_2_d0;
    sc_out< sc_lv<3> > buf_3_address0;
    sc_out< sc_logic > buf_3_ce0;
    sc_out< sc_logic > buf_3_we0;
    sc_out< sc_lv<16> > buf_3_d0;
    sc_out< sc_lv<3> > buf_4_address0;
    sc_out< sc_logic > buf_4_ce0;
    sc_out< sc_logic > buf_4_we0;
    sc_out< sc_lv<16> > buf_4_d0;
    sc_out< sc_lv<3> > buf_5_address0;
    sc_out< sc_logic > buf_5_ce0;
    sc_out< sc_logic > buf_5_we0;
    sc_out< sc_lv<16> > buf_5_d0;
    sc_out< sc_lv<3> > buf_6_address0;
    sc_out< sc_logic > buf_6_ce0;
    sc_out< sc_logic > buf_6_we0;
    sc_out< sc_lv<16> > buf_6_d0;
    sc_out< sc_lv<3> > buf_7_address0;
    sc_out< sc_logic > buf_7_ce0;
    sc_out< sc_logic > buf_7_we0;
    sc_out< sc_lv<16> > buf_7_d0;


    // Module declarations
    read_data(sc_module_name name);
    SC_HAS_PROCESS(read_data);

    ~read_data();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > indvar_flatten_reg_197;
    sc_signal< sc_lv<4> > r_0_reg_208;
    sc_signal< sc_lv<4> > c_0_reg_219;
    sc_signal< sc_lv<1> > icmp_ln103_fu_230_p2;
    sc_signal< sc_lv<1> > icmp_ln103_reg_318;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > add_ln103_fu_236_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > select_ln103_1_fu_262_p3;
    sc_signal< sc_lv<4> > select_ln103_1_reg_327;
    sc_signal< sc_lv<3> > trunc_ln106_fu_297_p1;
    sc_signal< sc_lv<3> > trunc_ln106_reg_338;
    sc_signal< sc_lv<4> > c_fu_301_p2;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<4> > ap_phi_mux_r_0_phi_fu_212_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln106_fu_292_p1;
    sc_signal< sc_lv<64> > zext_ln103_fu_307_p1;
    sc_signal< sc_lv<1> > icmp_ln105_fu_248_p2;
    sc_signal< sc_lv<4> > r_fu_242_p2;
    sc_signal< sc_lv<3> > trunc_ln103_fu_270_p1;
    sc_signal< sc_lv<4> > select_ln103_fu_254_p3;
    sc_signal< sc_lv<6> > zext_ln105_fu_282_p1;
    sc_signal< sc_lv<6> > shl_ln106_mid2_fu_274_p3;
    sc_signal< sc_lv<6> > add_ln106_fu_286_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln103_fu_236_p2();
    void thread_add_ln106_fu_286_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_r_0_phi_fu_212_p4();
    void thread_ap_ready();
    void thread_buf_0_address0();
    void thread_buf_0_ce0();
    void thread_buf_0_d0();
    void thread_buf_0_we0();
    void thread_buf_1_address0();
    void thread_buf_1_ce0();
    void thread_buf_1_d0();
    void thread_buf_1_we0();
    void thread_buf_2_address0();
    void thread_buf_2_ce0();
    void thread_buf_2_d0();
    void thread_buf_2_we0();
    void thread_buf_3_address0();
    void thread_buf_3_ce0();
    void thread_buf_3_d0();
    void thread_buf_3_we0();
    void thread_buf_4_address0();
    void thread_buf_4_ce0();
    void thread_buf_4_d0();
    void thread_buf_4_we0();
    void thread_buf_5_address0();
    void thread_buf_5_ce0();
    void thread_buf_5_d0();
    void thread_buf_5_we0();
    void thread_buf_6_address0();
    void thread_buf_6_ce0();
    void thread_buf_6_d0();
    void thread_buf_6_we0();
    void thread_buf_7_address0();
    void thread_buf_7_ce0();
    void thread_buf_7_d0();
    void thread_buf_7_we0();
    void thread_c_fu_301_p2();
    void thread_icmp_ln103_fu_230_p2();
    void thread_icmp_ln105_fu_248_p2();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_r_fu_242_p2();
    void thread_select_ln103_1_fu_262_p3();
    void thread_select_ln103_fu_254_p3();
    void thread_shl_ln106_mid2_fu_274_p3();
    void thread_trunc_ln103_fu_270_p1();
    void thread_trunc_ln106_fu_297_p1();
    void thread_zext_ln103_fu_307_p1();
    void thread_zext_ln105_fu_282_p1();
    void thread_zext_ln106_fu_292_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
