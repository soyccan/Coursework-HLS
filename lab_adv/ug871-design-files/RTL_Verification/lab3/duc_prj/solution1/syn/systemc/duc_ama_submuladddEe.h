// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __duc_ama_submuladddEe__HH__
#define __duc_ama_submuladddEe__HH__
#include "simcore_ama_0.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int din3_WIDTH,
    int dout_WIDTH>
SC_MODULE(duc_ama_submuladddEe) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_in< sc_dt::sc_lv<din3_WIDTH> >   din3;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    simcore_ama_0<ID, 2, din0_WIDTH, din1_WIDTH, din2_WIDTH, din3_WIDTH, dout_WIDTH> simcore_ama_0_U;

    SC_CTOR(duc_ama_submuladddEe):  simcore_ama_0_U ("simcore_ama_0_U") {
        simcore_ama_0_U.clk(clk);
        simcore_ama_0_U.reset(reset);
        simcore_ama_0_U.ce(ce);
        simcore_ama_0_U.din0(din0);
        simcore_ama_0_U.din1(din1);
        simcore_ama_0_U.din2(din2);
        simcore_ama_0_U.din3(din3);
        simcore_ama_0_U.dout(dout);

    }

};

#endif //
