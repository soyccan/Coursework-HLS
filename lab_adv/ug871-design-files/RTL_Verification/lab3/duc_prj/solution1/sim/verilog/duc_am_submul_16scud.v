// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps

module duc_am_submul_16scud_DSP48_1(
    input clk,
    input rst,
    input ce,
    input  [16 - 1:0] in0,
    input  [16 - 1:0] in1,
    input  [18 - 1:0] in2,
    output [32 - 1:0]  dout);

wire signed [18 - 1:0]     b;
wire signed [27 - 1:0]     a;
wire signed [27 - 1:0]     d;
wire signed [45 - 1:0]     m;
wire signed [27 - 1:0]    ad;
reg  signed [45 - 1:0]    m_reg;

assign a = $signed(in0);
assign d = $signed(in1);
assign b = $signed(in2);

assign ad = a - d;
assign m  = ad * b;

always @(posedge clk) begin
    if (ce) begin
        m_reg <= m;
    end
end

assign dout = m_reg;

endmodule
`timescale 1 ns / 1 ps
module duc_am_submul_16scud(
    clk,
    reset,
    ce,
    din0,
    din1,
    din2,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter din2_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
input[din2_WIDTH - 1:0] din2;
output[dout_WIDTH - 1:0] dout;



duc_am_submul_16scud_DSP48_1 duc_am_submul_16scud_DSP48_1_U(
    .clk( clk ),
    .rst( reset ),
    .ce( ce ),
    .in0( din0 ),
    .in1( din1 ),
    .in2( din2 ),
    .dout( dout ));

endmodule

