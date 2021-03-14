// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Loop_Row_DCT_Loopibs_H__
#define __Loop_Row_DCT_Loopibs_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Loop_Row_DCT_Loopibs_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 15;
  static const unsigned AddressRange = 8;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(Loop_Row_DCT_Loopibs_ram) {
        ram[0] = "0b010000000000000";
        ram[1] = "0b101001110011110";
        ram[2] = "0b010100111001111";
        ram[3] = "0b101101001100000";
        ram[4] = "0b010000000000000";
        ram[5] = "0b110011011011100";
        ram[6] = "0b001000101010001";
        ram[7] = "0b111011100101100";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(Loop_Row_DCT_Loopibs) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 8;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Loop_Row_DCT_Loopibs_ram* meminst;


SC_CTOR(Loop_Row_DCT_Loopibs) {
meminst = new Loop_Row_DCT_Loopibs_ram("Loop_Row_DCT_Loopibs_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Loop_Row_DCT_Loopibs() {
    delete meminst;
}


};//endmodule
#endif
