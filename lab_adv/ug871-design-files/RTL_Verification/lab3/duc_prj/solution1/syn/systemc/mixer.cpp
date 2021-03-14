// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mixer.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic mixer::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic mixer::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> mixer::ap_ST_fsm_state1 = "1";
const sc_lv<7> mixer::ap_ST_fsm_state2 = "10";
const sc_lv<7> mixer::ap_ST_fsm_state3 = "100";
const sc_lv<7> mixer::ap_ST_fsm_state4 = "1000";
const sc_lv<7> mixer::ap_ST_fsm_state5 = "10000";
const sc_lv<7> mixer::ap_ST_fsm_state6 = "100000";
const sc_lv<7> mixer::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> mixer::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<3> mixer::ap_const_lv3_0 = "000";
const sc_lv<1> mixer::ap_const_lv1_1 = "1";
const sc_lv<16> mixer::ap_const_lv16_0 = "0000000000000000";
const sc_lv<1> mixer::ap_const_lv1_0 = "0";
const sc_lv<32> mixer::ap_const_lv32_1 = "1";
const sc_lv<32> mixer::ap_const_lv32_2 = "10";
const sc_lv<32> mixer::ap_const_lv32_3 = "11";
const sc_lv<32> mixer::ap_const_lv32_4 = "100";
const sc_lv<32> mixer::ap_const_lv32_5 = "101";
const sc_lv<32> mixer::ap_const_lv32_6 = "110";
const sc_lv<3> mixer::ap_const_lv3_1 = "1";
const sc_lv<2> mixer::ap_const_lv2_0 = "00";
const sc_lv<32> mixer::ap_const_lv32_B = "1011";
const sc_lv<32> mixer::ap_const_lv32_F = "1111";
const sc_lv<5> mixer::ap_const_lv5_8 = "1000";
const sc_lv<32> mixer::ap_const_lv32_E = "1110";
const sc_lv<32> mixer::ap_const_lv32_1F = "11111";
const sc_lv<4> mixer::ap_const_lv4_F = "1111";
const sc_lv<4> mixer::ap_const_lv4_1 = "1";
const sc_lv<3> mixer::ap_const_lv3_5 = "101";
const bool mixer::ap_const_boolean_1 = true;

mixer::mixer(sc_module_name name) : sc_module(name), mVcdFile(0) {
    DI_cache_U = new mixer_DI_cache("DI_cache_U");
    DI_cache_U->clk(ap_clk);
    DI_cache_U->reset(ap_rst);
    DI_cache_U->address0(DI_cache_address0);
    DI_cache_U->ce0(DI_cache_ce0);
    DI_cache_U->we0(DI_cache_we0);
    DI_cache_U->d0(Din);
    DI_cache_U->q0(DI_cache_q0);
    dds_table_U = new mixer_dds_table("dds_table_U");
    dds_table_U->clk(ap_clk);
    dds_table_U->reset(ap_rst);
    dds_table_U->address0(dds_table_address0);
    dds_table_U->ce0(dds_table_ce0);
    dds_table_U->q0(dds_table_q0);
    dds_table_U->address1(dds_table_address1);
    dds_table_U->ce1(dds_table_ce1);
    dds_table_U->q1(dds_table_q1);
    duc_am_submul_16scud_U11 = new duc_am_submul_16scud<1,2,16,16,18,32>("duc_am_submul_16scud_U11");
    duc_am_submul_16scud_U11->clk(ap_clk);
    duc_am_submul_16scud_U11->reset(ap_rst);
    duc_am_submul_16scud_U11->din0(sine_reg_419);
    duc_am_submul_16scud_U11->din1(cosine_reg_425);
    duc_am_submul_16scud_U11->din2(Din);
    duc_am_submul_16scud_U11->ce(ap_var_for_const0);
    duc_am_submul_16scud_U11->dout(grp_fu_340_p3);
    duc_ama_submuladddEe_U12 = new duc_ama_submuladddEe<1,2,18,18,16,32,32>("duc_ama_submuladddEe_U12");
    duc_ama_submuladddEe_U12->clk(ap_clk);
    duc_ama_submuladddEe_U12->reset(ap_rst);
    duc_ama_submuladddEe_U12->din0(grp_fu_348_p0);
    duc_ama_submuladddEe_U12->din1(grp_fu_348_p1);
    duc_ama_submuladddEe_U12->din2(sine_reg_419);
    duc_ama_submuladddEe_U12->din3(mul_ln4_reg_441);
    duc_ama_submuladddEe_U12->ce(ap_var_for_const0);
    duc_ama_submuladddEe_U12->dout(grp_fu_348_p4);
    duc_ama_addmuladdeOg_U13 = new duc_ama_addmuladdeOg<1,2,18,18,16,32,32>("duc_ama_addmuladdeOg_U13");
    duc_ama_addmuladdeOg_U13->clk(ap_clk);
    duc_ama_addmuladdeOg_U13->reset(ap_rst);
    duc_ama_addmuladdeOg_U13->din0(grp_fu_357_p0);
    duc_ama_addmuladdeOg_U13->din1(grp_fu_357_p1);
    duc_ama_addmuladdeOg_U13->din2(cosine_reg_425);
    duc_ama_addmuladdeOg_U13->din3(mul_ln4_reg_441);
    duc_ama_addmuladdeOg_U13->ce(ap_var_for_const0);
    duc_ama_addmuladdeOg_U13->dout(grp_fu_357_p4);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_DI_cache_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln46_fu_219_p1 );
    sensitive << ( zext_ln50_fu_238_p1 );

    SC_METHOD(thread_DI_cache_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_DI_cache_we0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( and_ln45_fu_183_p2 );

    SC_METHOD(thread_Dout_I);
    sensitive << ( valid_in_reg_382 );
    sensitive << ( and_ln45_reg_391 );
    sensitive << ( add_ln59_reg_457 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_Dout_I_ap_vld);
    sensitive << ( valid_in_reg_382 );
    sensitive << ( and_ln45_reg_391 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_Dout_Q);
    sensitive << ( valid_in_reg_382 );
    sensitive << ( and_ln45_reg_391 );
    sensitive << ( add_ln60_reg_462 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_Dout_Q_ap_vld);
    sensitive << ( valid_in_reg_382 );
    sensitive << ( and_ln45_reg_391 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_add_ln12_fu_197_p2);
    sensitive << ( acc );
    sensitive << ( freq_dds_fu_171_p3 );

    SC_METHOD(thread_add_ln69_fu_311_p2);
    sensitive << ( index_load_reg_395 );

    SC_METHOD(thread_and_ln45_fu_183_p2);
    sensitive << ( ch_1 );
    sensitive << ( valid_in_fu_161_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_dds_table_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln26_fu_224_p1 );

    SC_METHOD(thread_dds_table_address1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln33_fu_233_p1 );

    SC_METHOD(thread_dds_table_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_dds_table_ce1);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_freq_dds_fu_171_p3);
    sensitive << ( freq );
    sensitive << ( init_1 );

    SC_METHOD(thread_grp_fu_348_p0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln7_2_fu_251_p1 );

    SC_METHOD(thread_grp_fu_348_p1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln7_3_fu_255_p1 );

    SC_METHOD(thread_grp_fu_357_p0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln7_2_fu_251_p1 );

    SC_METHOD(thread_grp_fu_357_p1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln7_3_fu_255_p1 );

    SC_METHOD(thread_icmp_ln62_fu_284_p2);
    sensitive << ( valid_in_reg_382 );
    sensitive << ( and_ln45_reg_391 );
    sensitive << ( index_load_reg_395 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_icmp_ln68_fu_295_p2);
    sensitive << ( index_load_reg_395 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_icmp_ln70_fu_322_p2);
    sensitive << ( i_1_load_reg_372 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_inc_1_fu_327_p3);
    sensitive << ( inc_reg_377 );
    sensitive << ( icmp_ln70_fu_322_p2 );

    SC_METHOD(thread_inc_fu_145_p2);
    sensitive << ( i_1 );

    SC_METHOD(thread_phase2_fu_228_p2);
    sensitive << ( phase1_reg_403 );

    SC_METHOD(thread_sext_ln7_2_fu_251_p1);
    sensitive << ( DI_cache_q0 );

    SC_METHOD(thread_sext_ln7_3_fu_255_p0);
    sensitive << ( Din );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_sext_ln7_3_fu_255_p1);
    sensitive << ( sext_ln7_3_fu_255_p0 );

    SC_METHOD(thread_tmp_3_fu_151_p4);
    sensitive << ( i_1 );

    SC_METHOD(thread_valid_in_fu_161_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_3_fu_151_p4 );

    SC_METHOD(thread_xor_ln68_fu_300_p2);
    sensitive << ( ch_1_load_reg_386 );

    SC_METHOD(thread_zext_ln26_fu_224_p1);
    sensitive << ( phase1_reg_403 );

    SC_METHOD(thread_zext_ln33_fu_233_p1);
    sensitive << ( phase2_fu_228_p2 );

    SC_METHOD(thread_zext_ln46_fu_219_p1);
    sensitive << ( index );

    SC_METHOD(thread_zext_ln50_fu_238_p1);
    sensitive << ( index_load_reg_395 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( valid_in_fu_161_p2 );
    sensitive << ( and_ln45_fu_183_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "0000001";
    i_1 = "000";
    init_1 = "1";
    ch_1 = "1";
    index = "0000";
    acc = "0000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mixer_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, freq, "(port)freq");
    sc_trace(mVcdFile, Din, "(port)Din");
    sc_trace(mVcdFile, Dout_I, "(port)Dout_I");
    sc_trace(mVcdFile, Dout_I_ap_vld, "(port)Dout_I_ap_vld");
    sc_trace(mVcdFile, Dout_Q, "(port)Dout_Q");
    sc_trace(mVcdFile, Dout_Q_ap_vld, "(port)Dout_Q_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_1, "i_1");
    sc_trace(mVcdFile, init_1, "init_1");
    sc_trace(mVcdFile, ch_1, "ch_1");
    sc_trace(mVcdFile, index, "index");
    sc_trace(mVcdFile, DI_cache_address0, "DI_cache_address0");
    sc_trace(mVcdFile, DI_cache_ce0, "DI_cache_ce0");
    sc_trace(mVcdFile, DI_cache_we0, "DI_cache_we0");
    sc_trace(mVcdFile, DI_cache_q0, "DI_cache_q0");
    sc_trace(mVcdFile, acc, "acc");
    sc_trace(mVcdFile, dds_table_address0, "dds_table_address0");
    sc_trace(mVcdFile, dds_table_ce0, "dds_table_ce0");
    sc_trace(mVcdFile, dds_table_q0, "dds_table_q0");
    sc_trace(mVcdFile, dds_table_address1, "dds_table_address1");
    sc_trace(mVcdFile, dds_table_ce1, "dds_table_ce1");
    sc_trace(mVcdFile, dds_table_q1, "dds_table_q1");
    sc_trace(mVcdFile, i_1_load_reg_372, "i_1_load_reg_372");
    sc_trace(mVcdFile, inc_fu_145_p2, "inc_fu_145_p2");
    sc_trace(mVcdFile, inc_reg_377, "inc_reg_377");
    sc_trace(mVcdFile, valid_in_fu_161_p2, "valid_in_fu_161_p2");
    sc_trace(mVcdFile, valid_in_reg_382, "valid_in_reg_382");
    sc_trace(mVcdFile, ch_1_load_reg_386, "ch_1_load_reg_386");
    sc_trace(mVcdFile, and_ln45_fu_183_p2, "and_ln45_fu_183_p2");
    sc_trace(mVcdFile, and_ln45_reg_391, "and_ln45_reg_391");
    sc_trace(mVcdFile, index_load_reg_395, "index_load_reg_395");
    sc_trace(mVcdFile, phase1_reg_403, "phase1_reg_403");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, sine_reg_419, "sine_reg_419");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, cosine_reg_425, "cosine_reg_425");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, grp_fu_340_p3, "grp_fu_340_p3");
    sc_trace(mVcdFile, mul_ln4_reg_441, "mul_ln4_reg_441");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, grp_fu_348_p4, "grp_fu_348_p4");
    sc_trace(mVcdFile, add_ln59_reg_457, "add_ln59_reg_457");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_fu_357_p4, "grp_fu_357_p4");
    sc_trace(mVcdFile, add_ln60_reg_462, "add_ln60_reg_462");
    sc_trace(mVcdFile, zext_ln46_fu_219_p1, "zext_ln46_fu_219_p1");
    sc_trace(mVcdFile, zext_ln26_fu_224_p1, "zext_ln26_fu_224_p1");
    sc_trace(mVcdFile, zext_ln33_fu_233_p1, "zext_ln33_fu_233_p1");
    sc_trace(mVcdFile, zext_ln50_fu_238_p1, "zext_ln50_fu_238_p1");
    sc_trace(mVcdFile, inc_1_fu_327_p3, "inc_1_fu_327_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, icmp_ln62_fu_284_p2, "icmp_ln62_fu_284_p2");
    sc_trace(mVcdFile, xor_ln68_fu_300_p2, "xor_ln68_fu_300_p2");
    sc_trace(mVcdFile, icmp_ln68_fu_295_p2, "icmp_ln68_fu_295_p2");
    sc_trace(mVcdFile, add_ln69_fu_311_p2, "add_ln69_fu_311_p2");
    sc_trace(mVcdFile, add_ln12_fu_197_p2, "add_ln12_fu_197_p2");
    sc_trace(mVcdFile, tmp_3_fu_151_p4, "tmp_3_fu_151_p4");
    sc_trace(mVcdFile, freq_dds_fu_171_p3, "freq_dds_fu_171_p3");
    sc_trace(mVcdFile, phase2_fu_228_p2, "phase2_fu_228_p2");
    sc_trace(mVcdFile, sext_ln7_3_fu_255_p0, "sext_ln7_3_fu_255_p0");
    sc_trace(mVcdFile, icmp_ln70_fu_322_p2, "icmp_ln70_fu_322_p2");
    sc_trace(mVcdFile, grp_fu_348_p0, "grp_fu_348_p0");
    sc_trace(mVcdFile, sext_ln7_2_fu_251_p1, "sext_ln7_2_fu_251_p1");
    sc_trace(mVcdFile, grp_fu_348_p1, "grp_fu_348_p1");
    sc_trace(mVcdFile, sext_ln7_3_fu_255_p1, "sext_ln7_3_fu_255_p1");
    sc_trace(mVcdFile, grp_fu_357_p0, "grp_fu_357_p0");
    sc_trace(mVcdFile, grp_fu_357_p1, "grp_fu_357_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

mixer::~mixer() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete DI_cache_U;
    delete dds_table_U;
    delete duc_am_submul_16scud_U11;
    delete duc_ama_submuladddEe_U12;
    delete duc_ama_addmuladdeOg_U13;
}

void mixer::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void mixer::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(and_ln45_fu_183_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_1, valid_in_fu_161_p2.read()))) {
        acc = add_ln12_fu_197_p2.read();
        phase1_reg_403 = add_ln12_fu_197_p2.read().range(15, 11);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        add_ln59_reg_457 = grp_fu_348_p4.read();
        add_ln60_reg_462 = grp_fu_357_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        and_ln45_reg_391 = and_ln45_fu_183_p2.read();
        ch_1_load_reg_386 = ch_1.read();
        i_1_load_reg_372 = i_1.read();
        inc_reg_377 = inc_fu_145_p2.read();
        index_load_reg_395 = index.read();
        valid_in_reg_382 = valid_in_fu_161_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln68_fu_295_p2.read()))) {
        ch_1 = xor_ln68_fu_300_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        cosine_reg_425 = dds_table_q1.read();
        sine_reg_419 = dds_table_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_1 = inc_1_fu_327_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, valid_in_reg_382.read()))) {
        index = add_ln69_fu_311_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(and_ln45_reg_391.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_1, valid_in_reg_382.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln62_fu_284_p2.read()))) {
        init_1 = ap_const_lv1_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        mul_ln4_reg_441 = grp_fu_340_p3.read();
    }
}

void mixer::thread_DI_cache_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        DI_cache_address0 =  (sc_lv<4>) (zext_ln50_fu_238_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        DI_cache_address0 =  (sc_lv<4>) (zext_ln46_fu_219_p1.read());
    } else {
        DI_cache_address0 = "XXXX";
    }
}

void mixer::thread_DI_cache_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        DI_cache_ce0 = ap_const_logic_1;
    } else {
        DI_cache_ce0 = ap_const_logic_0;
    }
}

void mixer::thread_DI_cache_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln45_fu_183_p2.read()))) {
        DI_cache_we0 = ap_const_logic_1;
    } else {
        DI_cache_we0 = ap_const_logic_0;
    }
}

void mixer::thread_Dout_I() {
    Dout_I = add_ln59_reg_457.read().range(31, 14);
}

void mixer::thread_Dout_I_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(and_ln45_reg_391.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, valid_in_reg_382.read()))) {
        Dout_I_ap_vld = ap_const_logic_1;
    } else {
        Dout_I_ap_vld = ap_const_logic_0;
    }
}

void mixer::thread_Dout_Q() {
    Dout_Q = add_ln60_reg_462.read().range(31, 14);
}

void mixer::thread_Dout_Q_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(and_ln45_reg_391.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, valid_in_reg_382.read()))) {
        Dout_Q_ap_vld = ap_const_logic_1;
    } else {
        Dout_Q_ap_vld = ap_const_logic_0;
    }
}

void mixer::thread_add_ln12_fu_197_p2() {
    add_ln12_fu_197_p2 = (!acc.read().is_01() || !freq_dds_fu_171_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(acc.read()) + sc_biguint<16>(freq_dds_fu_171_p3.read()));
}

void mixer::thread_add_ln69_fu_311_p2() {
    add_ln69_fu_311_p2 = (!index_load_reg_395.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(index_load_reg_395.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void mixer::thread_and_ln45_fu_183_p2() {
    and_ln45_fu_183_p2 = (ch_1.read() & valid_in_fu_161_p2.read());
}

void mixer::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void mixer::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void mixer::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void mixer::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void mixer::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void mixer::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void mixer::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void mixer::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void mixer::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void mixer::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void mixer::thread_dds_table_address0() {
    dds_table_address0 =  (sc_lv<5>) (zext_ln26_fu_224_p1.read());
}

void mixer::thread_dds_table_address1() {
    dds_table_address1 =  (sc_lv<5>) (zext_ln33_fu_233_p1.read());
}

void mixer::thread_dds_table_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dds_table_ce0 = ap_const_logic_1;
    } else {
        dds_table_ce0 = ap_const_logic_0;
    }
}

void mixer::thread_dds_table_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dds_table_ce1 = ap_const_logic_1;
    } else {
        dds_table_ce1 = ap_const_logic_0;
    }
}

void mixer::thread_freq_dds_fu_171_p3() {
    freq_dds_fu_171_p3 = (!init_1.read()[0].is_01())? sc_lv<16>(): ((init_1.read()[0].to_bool())? ap_const_lv16_0: freq.read());
}

void mixer::thread_grp_fu_348_p0() {
    grp_fu_348_p0 =  (sc_lv<18>) (sext_ln7_2_fu_251_p1.read());
}

void mixer::thread_grp_fu_348_p1() {
    grp_fu_348_p1 =  (sc_lv<18>) (sext_ln7_3_fu_255_p1.read());
}

void mixer::thread_grp_fu_357_p0() {
    grp_fu_357_p0 =  (sc_lv<18>) (sext_ln7_2_fu_251_p1.read());
}

void mixer::thread_grp_fu_357_p1() {
    grp_fu_357_p1 =  (sc_lv<18>) (sext_ln7_3_fu_255_p1.read());
}

void mixer::thread_icmp_ln62_fu_284_p2() {
    icmp_ln62_fu_284_p2 = (!index_load_reg_395.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(index_load_reg_395.read() == ap_const_lv4_F);
}

void mixer::thread_icmp_ln68_fu_295_p2() {
    icmp_ln68_fu_295_p2 = (!index_load_reg_395.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(index_load_reg_395.read() == ap_const_lv4_F);
}

void mixer::thread_icmp_ln70_fu_322_p2() {
    icmp_ln70_fu_322_p2 = (!i_1_load_reg_372.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(i_1_load_reg_372.read() == ap_const_lv3_5);
}

void mixer::thread_inc_1_fu_327_p3() {
    inc_1_fu_327_p3 = (!icmp_ln70_fu_322_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln70_fu_322_p2.read()[0].to_bool())? ap_const_lv3_0: inc_reg_377.read());
}

void mixer::thread_inc_fu_145_p2() {
    inc_fu_145_p2 = (!i_1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_1.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void mixer::thread_phase2_fu_228_p2() {
    phase2_fu_228_p2 = (!ap_const_lv5_8.is_01() || !phase1_reg_403.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_8) - sc_biguint<5>(phase1_reg_403.read()));
}

void mixer::thread_sext_ln7_2_fu_251_p1() {
    sext_ln7_2_fu_251_p1 = esl_sext<19,18>(DI_cache_q0.read());
}

void mixer::thread_sext_ln7_3_fu_255_p0() {
    sext_ln7_3_fu_255_p0 = Din.read();
}

void mixer::thread_sext_ln7_3_fu_255_p1() {
    sext_ln7_3_fu_255_p1 = esl_sext<19,18>(sext_ln7_3_fu_255_p0.read());
}

void mixer::thread_tmp_3_fu_151_p4() {
    tmp_3_fu_151_p4 = i_1.read().range(2, 1);
}

void mixer::thread_valid_in_fu_161_p2() {
    valid_in_fu_161_p2 = (!tmp_3_fu_151_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_fu_151_p4.read() == ap_const_lv2_0);
}

void mixer::thread_xor_ln68_fu_300_p2() {
    xor_ln68_fu_300_p2 = (ch_1_load_reg_386.read() ^ ap_const_lv1_1);
}

void mixer::thread_zext_ln26_fu_224_p1() {
    zext_ln26_fu_224_p1 = esl_zext<64,5>(phase1_reg_403.read());
}

void mixer::thread_zext_ln33_fu_233_p1() {
    zext_ln33_fu_233_p1 = esl_zext<64,5>(phase2_fu_228_p2.read());
}

void mixer::thread_zext_ln46_fu_219_p1() {
    zext_ln46_fu_219_p1 = esl_zext<64,4>(index.read());
}

void mixer::thread_zext_ln50_fu_238_p1() {
    zext_ln50_fu_238_p1 = esl_zext<64,4>(index_load_reg_395.read());
}

void mixer::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && (esl_seteq<1,1,1>(valid_in_fu_161_p2.read(), ap_const_lv1_0) || 
  esl_seteq<1,1,1>(ap_const_lv1_1, and_ln45_fu_183_p2.read())))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(and_ln45_fu_183_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_1, valid_in_fu_161_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<7>) ("XXXXXXX");
            break;
    }
}

}

