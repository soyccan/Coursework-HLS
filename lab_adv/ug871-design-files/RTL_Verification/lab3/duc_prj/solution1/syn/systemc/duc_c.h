// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __duc_c_H__
#define __duc_c_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct duc_c_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 18;
  static const unsigned AddressRange = 48;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(duc_c_ram) {
        ram[0] = "0b000000000000011001";
        ram[1] = "0b111111111111001000";
        ram[2] = "0b000000000001111001";
        ram[3] = "0b111111111101100101";
        ram[4] = "0b000000000001010100";
        ram[5] = "0b000000000010110000";
        ram[6] = "0b111111110101011000";
        ram[7] = "0b000000010110000111";
        ram[8] = "0b111111011100010101";
        ram[9] = "0b000000110000101100";
        ram[10] = "0b111111000101111001";
        ram[11] = "0b010000111101100011";
        ram[12] = "0b111111000101111001";
        ram[13] = "0b000000110000101100";
        ram[14] = "0b111111011100010101";
        ram[15] = "0b000000010110000111";
        ram[16] = "0b111111110101011000";
        ram[17] = "0b000000000010110000";
        ram[18] = "0b000000000001010100";
        ram[19] = "0b111111111101100101";
        ram[20] = "0b000000000001111001";
        ram[21] = "0b111111111111001000";
        ram[22] = "0b000000000000011001";
        ram[23] = "0b000000000000000000";
        ram[24] = "0b000000000000101110";
        ram[25] = "0b111111111111110000";
        ram[26] = "0b111111111110110010";
        ram[27] = "0b000000000011100010";
        ram[28] = "0b111111111010100101";
        ram[29] = "0b000000000100001100";
        ram[30] = "0b000000000100100000";
        ram[31] = "0b111111100101000001";
        ram[32] = "0b000001001010001111";
        ram[33] = "0b111101001100100100";
        ram[34] = "0b001001111110100001";
        ram[35] = "0b001001111110100001";
        ram[36] = "0b111101001100100100";
        ram[37] = "0b000001001010001111";
        ram[38] = "0b111111100101000001";
        ram[39] = "0b000000000100100000";
        ram[40] = "0b000000000100001100";
        ram[41] = "0b111111111010100101";
        ram[42] = "0b000000000011100010";
        ram[43] = "0b111111111110110010";
        ram[44] = "0b111111111111110000";
        ram[45] = "0b000000000000101110";
        ram[46] = "0b000000000000000000";
        ram[47] = "0b000000000000000000";


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


SC_MODULE(duc_c) {


static const unsigned DataWidth = 18;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


duc_c_ram* meminst;


SC_CTOR(duc_c) {
meminst = new duc_c_ram("duc_c_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~duc_c() {
    delete meminst;
}


};//endmodule
#endif
