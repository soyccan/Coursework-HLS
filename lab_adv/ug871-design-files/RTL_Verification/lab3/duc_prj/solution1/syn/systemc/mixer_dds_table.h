// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mixer_dds_table_H__
#define __mixer_dds_table_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct mixer_dds_table_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(mixer_dds_table_ram) {
        ram[0] = "0b0000000000000000";
        ram[1] = "0b0000110001111100";
        ram[2] = "0b0001100001111110";
        ram[3] = "0b0010001110001110";
        ram[4] = "0b0010110101000001";
        ram[5] = "0b0011010100110111";
        ram[6] = "0b0011101100100001";
        ram[7] = "0b0011111011000101";
        ram[8] = "0b0100000000000000";
        ram[9] = "0b0011111011000101";
        ram[10] = "0b0011101100100001";
        ram[11] = "0b0011010100110111";
        ram[12] = "0b0010110101000001";
        ram[13] = "0b0010001110001110";
        ram[14] = "0b0001100001111110";
        ram[15] = "0b0000110001111100";
        ram[16] = "0b0000000000000000";
        ram[17] = "0b1111001110000100";
        ram[18] = "0b1110011110000010";
        ram[19] = "0b1101110001110010";
        ram[20] = "0b1101001010111111";
        ram[21] = "0b1100101011001001";
        ram[22] = "0b1100010011011111";
        ram[23] = "0b1100000100111011";
        ram[24] = "0b1100000000000000";
        ram[25] = "0b1100000100111011";
        ram[26] = "0b1100010011011111";
        ram[27] = "0b1100101011001001";
        ram[28] = "0b1101001010111111";
        ram[29] = "0b1101110001110010";
        ram[30] = "0b1110011110000010";
        ram[31] = "0b1111001110000100";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
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


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(mixer_dds_table) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


mixer_dds_table_ram* meminst;


SC_CTOR(mixer_dds_table) {
meminst = new mixer_dds_table_ram("mixer_dds_table_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~mixer_dds_table() {
    delete meminst;
}


};//endmodule
#endif
