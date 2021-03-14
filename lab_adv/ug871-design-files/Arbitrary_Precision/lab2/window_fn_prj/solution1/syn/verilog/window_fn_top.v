// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="window_fn_top,hls_ip_2019_1_3,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xcvu9p-flgb2104-1-e,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.306000,HLS_SYN_LAT=97,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=56,HLS_SYN_LUT=71,HLS_VERSION=2019_1_3}" *)

module window_fn_top (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        outdata_V_address0,
        outdata_V_ce0,
        outdata_V_we0,
        outdata_V_d0,
        indata_V_address0,
        indata_V_ce0,
        indata_V_q0
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] outdata_V_address0;
output   outdata_V_ce0;
output   outdata_V_we0;
output  [23:0] outdata_V_d0;
output  [4:0] indata_V_address0;
output   indata_V_ce0;
input  [7:0] indata_V_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg outdata_V_ce0;
reg outdata_V_we0;
reg indata_V_ce0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] coeff_tab1_address0;
reg    coeff_tab1_ce0;
wire   [16:0] coeff_tab1_q0;
wire   [5:0] i_fu_84_p2;
reg   [5:0] i_reg_112;
wire    ap_CS_fsm_state2;
wire   [63:0] zext_ln131_fu_90_p1;
reg   [63:0] zext_ln131_reg_117;
wire   [0:0] icmp_ln129_fu_78_p2;
reg   [16:0] coeff_tab1_load_reg_128;
wire    ap_CS_fsm_state3;
reg   [5:0] i_0_i_reg_67;
wire    ap_CS_fsm_state4;
wire  signed [23:0] mul_ln703_fu_102_p2;
wire   [16:0] mul_ln703_fu_102_p0;
reg   [3:0] ap_NS_fsm;
wire   [23:0] mul_ln703_fu_102_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
end

window_fn_top_coebkb #(
    .DataWidth( 17 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
coeff_tab1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(coeff_tab1_address0),
    .ce0(coeff_tab1_ce0),
    .q0(coeff_tab1_q0)
);

window_fn_top_mulcud #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 17 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 24 ))
window_fn_top_mulcud_U1(
    .din0(mul_ln703_fu_102_p0),
    .din1(indata_V_q0),
    .dout(mul_ln703_fu_102_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_0_i_reg_67 <= i_reg_112;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_i_reg_67 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        coeff_tab1_load_reg_128 <= coeff_tab1_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_112 <= i_fu_84_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln129_fu_78_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln131_reg_117[5 : 0] <= zext_ln131_fu_90_p1[5 : 0];
    end
end

always @ (*) begin
    if (((icmp_ln129_fu_78_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln129_fu_78_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        coeff_tab1_ce0 = 1'b1;
    end else begin
        coeff_tab1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        indata_V_ce0 = 1'b1;
    end else begin
        indata_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        outdata_V_ce0 = 1'b1;
    end else begin
        outdata_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        outdata_V_we0 = 1'b1;
    end else begin
        outdata_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln129_fu_78_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign coeff_tab1_address0 = zext_ln131_fu_90_p1;

assign i_fu_84_p2 = (i_0_i_reg_67 + 6'd1);

assign icmp_ln129_fu_78_p2 = ((i_0_i_reg_67 == 6'd32) ? 1'b1 : 1'b0);

assign indata_V_address0 = zext_ln131_reg_117;

assign mul_ln703_fu_102_p0 = mul_ln703_fu_102_p00;

assign mul_ln703_fu_102_p00 = coeff_tab1_load_reg_128;

assign outdata_V_address0 = zext_ln131_reg_117;

assign outdata_V_d0 = mul_ln703_fu_102_p2;

assign zext_ln131_fu_90_p1 = i_0_i_reg_67;

always @ (posedge ap_clk) begin
    zext_ln131_reg_117[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
end

endmodule //window_fn_top
