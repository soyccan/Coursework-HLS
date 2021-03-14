// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __duc_c_2_H__
#define __duc_c_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct duc_c_2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 18;
  static const unsigned AddressRange = 24;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(duc_c_2_ram) {
        ram[0] = "0b111111111100100000";
        ram[1] = "0b000000010001110011";
        ram[2] = "0b111111000111000110";
        ram[3] = "0b000010010001111111";
        ram[4] = "0b111010011101011111";
        ram[5] = "0b010011111010111101";
        ram[6] = "0b010011111010111101";
        ram[7] = "0b111010011101011111";
        ram[8] = "0b000010010001111111";
        ram[9] = "0b111111000111000110";
        ram[10] = "0b000000010001110011";
        ram[11] = "0b111111111100100000";
        for (unsigned i = 12; i < 17 ; i = i + 1) {
            ram[i] = "0b000000000000000000";
        }
        ram[17] = "0b011111111111111111";
        for (unsigned i = 18; i < 24 ; i = i + 1) {
            ram[i] = "0b000000000000000000";
        }


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


SC_MODULE(duc_c_2) {


static const unsigned DataWidth = 18;
static const unsigned AddressRange = 24;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


duc_c_2_ram* meminst;


SC_CTOR(duc_c_2) {
meminst = new duc_c_2_ram("duc_c_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~duc_c_2() {
    delete meminst;
}


};//endmodule
#endif
