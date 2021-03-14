// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrixmul_HH_
#define _matrixmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrixmul_mac_mulbkb.h"
#include "matrixmul_mac_mulcud.h"

namespace ap_rtl {

struct matrixmul : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<8> > a_q0;
    sc_out< sc_lv<4> > a_address1;
    sc_out< sc_logic > a_ce1;
    sc_in< sc_lv<8> > a_q1;
    sc_out< sc_lv<4> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<8> > b_q0;
    sc_out< sc_lv<4> > b_address1;
    sc_out< sc_logic > b_ce1;
    sc_in< sc_lv<8> > b_q1;
    sc_out< sc_lv<4> > res_address0;
    sc_out< sc_logic > res_ce0;
    sc_out< sc_logic > res_we0;
    sc_out< sc_lv<16> > res_d0;


    // Module declarations
    matrixmul(sc_module_name name);
    SC_HAS_PROCESS(matrixmul);

    ~matrixmul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U1;
    matrixmul_mac_mulcud<1,1,8,8,16,16>* matrixmul_mac_mulcud_U2;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > indvar_flatten_reg_139;
    sc_signal< sc_lv<2> > i_0_reg_150;
    sc_signal< sc_lv<2> > j_0_reg_161;
    sc_signal< sc_lv<1> > icmp_ln54_fu_172_p2;
    sc_signal< sc_lv<1> > icmp_ln54_reg_353;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln54_reg_353_pp0_iter1_reg;
    sc_signal< sc_lv<4> > add_ln54_fu_178_p2;
    sc_signal< sc_lv<4> > add_ln54_reg_357;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<2> > select_ln57_fu_196_p3;
    sc_signal< sc_lv<2> > select_ln57_reg_362;
    sc_signal< sc_lv<2> > select_ln57_1_fu_204_p3;
    sc_signal< sc_lv<2> > select_ln57_1_reg_370;
    sc_signal< sc_lv<5> > sub_ln60_fu_228_p2;
    sc_signal< sc_lv<5> > sub_ln60_reg_375;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<8> > a_load_reg_402;
    sc_signal< sc_lv<8> > b_load_reg_407;
    sc_signal< sc_lv<2> > j_fu_268_p2;
    sc_signal< sc_lv<2> > j_reg_412;
    sc_signal< sc_lv<5> > add_ln57_fu_300_p2;
    sc_signal< sc_lv<5> > add_ln57_reg_427;
    sc_signal< sc_lv<16> > grp_fu_337_p3;
    sc_signal< sc_lv<16> > add_ln60_reg_432;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_lv<4> > ap_phi_mux_indvar_flatten_phi_fu_143_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<2> > ap_phi_mux_i_0_phi_fu_154_p4;
    sc_signal< sc_lv<2> > ap_phi_mux_j_0_phi_fu_165_p4;
    sc_signal< sc_lv<64> > sext_ln60_6_fu_234_p1;
    sc_signal< sc_lv<64> > zext_ln57_fu_239_p1;
    sc_signal< sc_lv<64> > sext_ln60_8_fu_249_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<64> > zext_ln60_6_fu_263_p1;
    sc_signal< sc_lv<64> > sext_ln60_7_fu_278_p1;
    sc_signal< sc_lv<64> > zext_ln60_5_fu_295_p1;
    sc_signal< sc_lv<64> > sext_ln57_fu_325_p1;
    sc_signal< sc_lv<16> > grp_fu_345_p3;
    sc_signal< sc_lv<1> > icmp_ln56_fu_190_p2;
    sc_signal< sc_lv<2> > i_fu_184_p2;
    sc_signal< sc_lv<4> > tmp_fu_216_p3;
    sc_signal< sc_lv<5> > zext_ln60_1_fu_224_p1;
    sc_signal< sc_lv<5> > zext_ln60_fu_212_p1;
    sc_signal< sc_lv<5> > add_ln60_3_fu_244_p2;
    sc_signal< sc_lv<4> > zext_ln60_3_fu_254_p1;
    sc_signal< sc_lv<4> > add_ln60_5_fu_257_p2;
    sc_signal< sc_lv<5> > add_ln60_2_fu_273_p2;
    sc_signal< sc_lv<3> > zext_ln60_4_fu_286_p1;
    sc_signal< sc_lv<3> > add_ln60_4_fu_289_p2;
    sc_signal< sc_lv<5> > zext_ln60_2_fu_283_p1;
    sc_signal< sc_lv<8> > mul_ln60_2_fu_319_p0;
    sc_signal< sc_lv<8> > mul_ln60_2_fu_319_p1;
    sc_signal< sc_lv<16> > grp_fu_337_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_pp0_stage1;
    static const sc_lv<4> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_address1();
    void thread_a_ce0();
    void thread_a_ce1();
    void thread_add_ln54_fu_178_p2();
    void thread_add_ln57_fu_300_p2();
    void thread_add_ln60_2_fu_273_p2();
    void thread_add_ln60_3_fu_244_p2();
    void thread_add_ln60_4_fu_289_p2();
    void thread_add_ln60_5_fu_257_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage1_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_0_phi_fu_154_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_143_p4();
    void thread_ap_phi_mux_j_0_phi_fu_165_p4();
    void thread_ap_ready();
    void thread_b_address0();
    void thread_b_address1();
    void thread_b_ce0();
    void thread_b_ce1();
    void thread_grp_fu_337_p2();
    void thread_i_fu_184_p2();
    void thread_icmp_ln54_fu_172_p2();
    void thread_icmp_ln56_fu_190_p2();
    void thread_j_fu_268_p2();
    void thread_mul_ln60_2_fu_319_p0();
    void thread_mul_ln60_2_fu_319_p1();
    void thread_res_address0();
    void thread_res_ce0();
    void thread_res_d0();
    void thread_res_we0();
    void thread_select_ln57_1_fu_204_p3();
    void thread_select_ln57_fu_196_p3();
    void thread_sext_ln57_fu_325_p1();
    void thread_sext_ln60_6_fu_234_p1();
    void thread_sext_ln60_7_fu_278_p1();
    void thread_sext_ln60_8_fu_249_p1();
    void thread_sub_ln60_fu_228_p2();
    void thread_tmp_fu_216_p3();
    void thread_zext_ln57_fu_239_p1();
    void thread_zext_ln60_1_fu_224_p1();
    void thread_zext_ln60_2_fu_283_p1();
    void thread_zext_ln60_3_fu_254_p1();
    void thread_zext_ln60_4_fu_286_p1();
    void thread_zext_ln60_5_fu_295_p1();
    void thread_zext_ln60_6_fu_263_p1();
    void thread_zext_ln60_fu_212_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
