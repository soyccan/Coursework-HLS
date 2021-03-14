// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __window_fn_top_coebkb_H__
#define __window_fn_top_coebkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct window_fn_top_coebkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 17;
  static const unsigned AddressRange = 32;
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


   SC_CTOR(window_fn_top_coebkb_ram) {
        ram[0] = "0b00000000000000000";
        ram[1] = "0b00000001001110101";
        ram[2] = "0b00000100110111110";
        ram[3] = "0b00001010110010010";
        ram[4] = "0b00010010101111101";
        ram[5] = "0b00011100011100011";
        ram[6] = "0b00100111100000100";
        ram[7] = "0b00110011100000111";
        ram[8] = "0b00111111111111111";
        ram[9] = "0b01001100011111000";
        ram[10] = "0b01011000011111011";
        ram[11] = "0b01100011100011100";
        ram[12] = "0b01101101010000010";
        ram[13] = "0b01110101001101101";
        ram[14] = "0b01111011001000001";
        ram[15] = "0b01111110110001010";
        ram[16] = "0b10000000000000000";
        ram[17] = "0b01111110110001010";
        ram[18] = "0b01111011001000001";
        ram[19] = "0b01110101001101101";
        ram[20] = "0b01101101010000010";
        ram[21] = "0b01100011100011100";
        ram[22] = "0b01011000011111011";
        ram[23] = "0b01001100011111000";
        ram[24] = "0b01000000000000000";
        ram[25] = "0b00110011100000111";
        ram[26] = "0b00100111100000100";
        ram[27] = "0b00011100011100011";
        ram[28] = "0b00010010101111101";
        ram[29] = "0b00001010110010010";
        ram[30] = "0b00000100110111110";
        ram[31] = "0b00000001001110101";


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


SC_MODULE(window_fn_top_coebkb) {


static const unsigned DataWidth = 17;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


window_fn_top_coebkb_ram* meminst;


SC_CTOR(window_fn_top_coebkb) {
meminst = new window_fn_top_coebkb_ram("window_fn_top_coebkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~window_fn_top_coebkb() {
    delete meminst;
}


};//endmodule
#endif
