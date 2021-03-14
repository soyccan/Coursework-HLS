// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.3
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dct_2d (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_block_address0,
        in_block_ce0,
        in_block_q0,
        out_block_address0,
        out_block_ce0,
        out_block_we0,
        out_block_d0
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_pp0_stage0 = 9'd8;
parameter    ap_ST_fsm_state6 = 9'd16;
parameter    ap_ST_fsm_state7 = 9'd32;
parameter    ap_ST_fsm_state8 = 9'd64;
parameter    ap_ST_fsm_pp1_stage0 = 9'd128;
parameter    ap_ST_fsm_state11 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] in_block_address0;
output   in_block_ce0;
input  [15:0] in_block_q0;
output  [5:0] out_block_address0;
output   out_block_ce0;
output   out_block_we0;
output  [15:0] out_block_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg in_block_ce0;
reg out_block_ce0;
reg out_block_we0;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [6:0] indvar_flatten_reg_137;
reg   [3:0] j_0_reg_148;
reg   [3:0] i_1_reg_159;
reg   [6:0] indvar_flatten11_reg_182;
reg   [3:0] j_1_reg_193;
reg   [3:0] i_3_reg_204;
wire   [0:0] icmp_ln76_fu_230_p2;
wire    ap_CS_fsm_state2;
wire   [3:0] i_fu_236_p2;
reg   [3:0] i_reg_454;
wire   [0:0] icmp_ln81_fu_242_p2;
reg   [0:0] icmp_ln81_reg_459;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state4_pp0_stage0_iter0;
wire    ap_block_state5_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [6:0] add_ln81_fu_248_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [3:0] select_ln84_fu_266_p3;
reg   [3:0] select_ln84_reg_468;
wire   [3:0] select_ln84_1_fu_274_p3;
reg   [3:0] select_ln84_1_reg_473;
wire   [3:0] i_4_fu_309_p2;
wire   [0:0] icmp_ln87_fu_340_p2;
wire    ap_CS_fsm_state7;
wire   [3:0] i_5_fu_346_p2;
reg   [3:0] i_5_reg_493;
wire   [0:0] icmp_ln92_fu_352_p2;
reg   [0:0] icmp_ln92_reg_498;
wire    ap_CS_fsm_pp1_stage0;
wire    ap_block_state9_pp1_stage0_iter0;
wire    ap_block_state10_pp1_stage0_iter1;
wire    ap_block_pp1_stage0_11001;
wire   [6:0] add_ln92_fu_358_p2;
reg    ap_enable_reg_pp1_iter0;
wire   [3:0] select_ln95_fu_376_p3;
reg   [3:0] select_ln95_reg_507;
wire   [3:0] select_ln95_1_fu_384_p3;
reg   [3:0] select_ln95_1_reg_512;
wire   [3:0] i_6_fu_419_p2;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state4;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state9;
reg    ap_enable_reg_pp1_iter1;
reg   [5:0] row_outbuf_address0;
reg    row_outbuf_ce0;
reg    row_outbuf_we0;
wire   [15:0] row_outbuf_q0;
reg   [5:0] col_outbuf_address0;
reg    col_outbuf_ce0;
reg    col_outbuf_we0;
wire   [15:0] col_outbuf_q0;
reg   [5:0] col_inbuf_address0;
reg    col_inbuf_ce0;
reg    col_inbuf_we0;
wire   [15:0] col_inbuf_q0;
wire    grp_dct_1d2_fu_215_ap_start;
wire    grp_dct_1d2_fu_215_ap_done;
wire    grp_dct_1d2_fu_215_ap_idle;
wire    grp_dct_1d2_fu_215_ap_ready;
wire   [5:0] grp_dct_1d2_fu_215_src_address0;
wire    grp_dct_1d2_fu_215_src_ce0;
reg   [15:0] grp_dct_1d2_fu_215_src_q0;
reg   [3:0] grp_dct_1d2_fu_215_src_offset;
wire   [5:0] grp_dct_1d2_fu_215_dst_address0;
wire    grp_dct_1d2_fu_215_dst_ce0;
wire    grp_dct_1d2_fu_215_dst_we0;
wire   [15:0] grp_dct_1d2_fu_215_dst_d0;
reg   [3:0] grp_dct_1d2_fu_215_dst_offset;
reg   [3:0] i_0_reg_125;
wire    ap_CS_fsm_state3;
reg   [3:0] ap_phi_mux_j_0_phi_fu_152_p4;
wire    ap_block_pp0_stage0;
reg   [3:0] i_2_reg_170;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state6;
reg   [3:0] ap_phi_mux_j_1_phi_fu_197_p4;
wire    ap_block_pp1_stage0;
reg    grp_dct_1d2_fu_215_ap_start_reg;
wire   [63:0] zext_ln84_4_fu_304_p1;
wire   [63:0] zext_ln84_5_fu_335_p1;
wire   [63:0] zext_ln95_5_fu_414_p1;
wire   [63:0] zext_ln95_3_fu_445_p1;
wire   [0:0] icmp_ln83_fu_260_p2;
wire   [3:0] j_fu_254_p2;
wire   [6:0] tmp_1_fu_286_p3;
wire   [7:0] zext_ln84_fu_282_p1;
wire   [7:0] zext_ln84_3_fu_294_p1;
wire   [7:0] add_ln84_fu_298_p2;
wire   [6:0] tmp_fu_315_p3;
wire   [7:0] zext_ln84_2_fu_326_p1;
wire   [7:0] zext_ln84_1_fu_322_p1;
wire   [7:0] add_ln84_1_fu_329_p2;
wire   [0:0] icmp_ln94_fu_370_p2;
wire   [3:0] j_2_fu_364_p2;
wire   [6:0] tmp_3_fu_396_p3;
wire   [7:0] zext_ln95_fu_392_p1;
wire   [7:0] zext_ln95_4_fu_404_p1;
wire   [7:0] add_ln95_1_fu_408_p2;
wire   [6:0] tmp_2_fu_425_p3;
wire   [7:0] zext_ln95_2_fu_436_p1;
wire   [7:0] zext_ln95_1_fu_432_p1;
wire   [7:0] add_ln95_fu_439_p2;
wire    ap_CS_fsm_state11;
reg   [8:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
#0 grp_dct_1d2_fu_215_ap_start_reg = 1'b0;
end

dct_2d_row_outbuf #(
    .DataWidth( 16 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
row_outbuf_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(row_outbuf_address0),
    .ce0(row_outbuf_ce0),
    .we0(row_outbuf_we0),
    .d0(grp_dct_1d2_fu_215_dst_d0),
    .q0(row_outbuf_q0)
);

dct_2d_row_outbuf #(
    .DataWidth( 16 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
col_outbuf_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(col_outbuf_address0),
    .ce0(col_outbuf_ce0),
    .we0(col_outbuf_we0),
    .d0(grp_dct_1d2_fu_215_dst_d0),
    .q0(col_outbuf_q0)
);

dct_2d_row_outbuf #(
    .DataWidth( 16 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
col_inbuf_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(col_inbuf_address0),
    .ce0(col_inbuf_ce0),
    .we0(col_inbuf_we0),
    .d0(row_outbuf_q0),
    .q0(col_inbuf_q0)
);

dct_1d2 grp_dct_1d2_fu_215(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_dct_1d2_fu_215_ap_start),
    .ap_done(grp_dct_1d2_fu_215_ap_done),
    .ap_idle(grp_dct_1d2_fu_215_ap_idle),
    .ap_ready(grp_dct_1d2_fu_215_ap_ready),
    .src_address0(grp_dct_1d2_fu_215_src_address0),
    .src_ce0(grp_dct_1d2_fu_215_src_ce0),
    .src_q0(grp_dct_1d2_fu_215_src_q0),
    .src_offset(grp_dct_1d2_fu_215_src_offset),
    .dst_address0(grp_dct_1d2_fu_215_dst_address0),
    .dst_ce0(grp_dct_1d2_fu_215_dst_ce0),
    .dst_we0(grp_dct_1d2_fu_215_dst_we0),
    .dst_d0(grp_dct_1d2_fu_215_dst_d0),
    .dst_offset(grp_dct_1d2_fu_215_dst_offset)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state4) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((icmp_ln76_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state4) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state4);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((icmp_ln76_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp1_exit_iter0_state9) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_subdone))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if (((icmp_ln87_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp1_exit_iter0_state9) & (1'b0 == ap_block_pp1_stage0_subdone))) begin
            ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state9);
        end else if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
        end else if (((icmp_ln87_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
            ap_enable_reg_pp1_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_dct_1d2_fu_215_ap_start_reg <= 1'b0;
    end else begin
        if ((((icmp_ln76_fu_230_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | ((icmp_ln87_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7)))) begin
            grp_dct_1d2_fu_215_ap_start_reg <= 1'b1;
        end else if ((grp_dct_1d2_fu_215_ap_ready == 1'b1)) begin
            grp_dct_1d2_fu_215_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (grp_dct_1d2_fu_215_ap_done == 1'b1))) begin
        i_0_reg_125 <= i_reg_454;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_125 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln76_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_1_reg_159 <= 4'd0;
    end else if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln81_fu_242_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_1_reg_159 <= i_4_fu_309_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_2_reg_170 <= 4'd0;
    end else if (((1'b1 == ap_CS_fsm_state8) & (grp_dct_1d2_fu_215_ap_done == 1'b1))) begin
        i_2_reg_170 <= i_5_reg_493;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln87_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        i_3_reg_204 <= 4'd0;
    end else if (((icmp_ln92_fu_352_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        i_3_reg_204 <= i_6_fu_419_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln87_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        indvar_flatten11_reg_182 <= 7'd0;
    end else if (((icmp_ln92_fu_352_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        indvar_flatten11_reg_182 <= add_ln92_fu_358_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln76_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        indvar_flatten_reg_137 <= 7'd0;
    end else if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln81_fu_242_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_137 <= add_ln81_fu_248_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln76_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_0_reg_148 <= 4'd0;
    end else if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln81_reg_459 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        j_0_reg_148 <= select_ln84_1_reg_473;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln87_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        j_1_reg_193 <= 4'd0;
    end else if (((icmp_ln92_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        j_1_reg_193 <= select_ln95_1_reg_512;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_5_reg_493 <= i_5_fu_346_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_454 <= i_fu_236_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln81_reg_459 <= icmp_ln81_fu_242_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln92_reg_498 <= icmp_ln92_fu_352_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln81_fu_242_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln84_1_reg_473 <= select_ln84_1_fu_274_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln81_fu_242_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln84_reg_468 <= select_ln84_fu_266_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln92_fu_352_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        select_ln95_1_reg_512 <= select_ln95_1_fu_384_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln92_fu_352_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        select_ln95_reg_507 <= select_ln95_fu_376_p3;
    end
end

always @ (*) begin
    if ((icmp_ln81_fu_242_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state4 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state4 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln92_fu_352_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state9 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state9 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln81_reg_459 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_j_0_phi_fu_152_p4 = select_ln84_1_reg_473;
    end else begin
        ap_phi_mux_j_0_phi_fu_152_p4 = j_0_reg_148;
    end
end

always @ (*) begin
    if (((icmp_ln92_reg_498 == 1'd0) & (1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        ap_phi_mux_j_1_phi_fu_197_p4 = select_ln95_1_reg_512;
    end else begin
        ap_phi_mux_j_1_phi_fu_197_p4 = j_1_reg_193;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        col_inbuf_address0 = zext_ln84_5_fu_335_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        col_inbuf_address0 = grp_dct_1d2_fu_215_src_address0;
    end else begin
        col_inbuf_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        col_inbuf_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        col_inbuf_ce0 = grp_dct_1d2_fu_215_src_ce0;
    end else begin
        col_inbuf_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln81_reg_459 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        col_inbuf_we0 = 1'b1;
    end else begin
        col_inbuf_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        col_outbuf_address0 = zext_ln95_5_fu_414_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        col_outbuf_address0 = grp_dct_1d2_fu_215_dst_address0;
    end else begin
        col_outbuf_address0 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        col_outbuf_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        col_outbuf_ce0 = grp_dct_1d2_fu_215_dst_ce0;
    end else begin
        col_outbuf_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        col_outbuf_we0 = grp_dct_1d2_fu_215_dst_we0;
    end else begin
        col_outbuf_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_dct_1d2_fu_215_dst_offset = i_2_reg_170;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_dct_1d2_fu_215_dst_offset = i_0_reg_125;
    end else begin
        grp_dct_1d2_fu_215_dst_offset = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_dct_1d2_fu_215_src_offset = i_2_reg_170;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_dct_1d2_fu_215_src_offset = i_0_reg_125;
    end else begin
        grp_dct_1d2_fu_215_src_offset = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_dct_1d2_fu_215_src_q0 = col_inbuf_q0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_dct_1d2_fu_215_src_q0 = in_block_q0;
    end else begin
        grp_dct_1d2_fu_215_src_q0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        in_block_ce0 = grp_dct_1d2_fu_215_src_ce0;
    end else begin
        in_block_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        out_block_ce0 = 1'b1;
    end else begin
        out_block_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln92_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        out_block_we0 = 1'b1;
    end else begin
        out_block_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        row_outbuf_address0 = zext_ln84_4_fu_304_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        row_outbuf_address0 = grp_dct_1d2_fu_215_dst_address0;
    end else begin
        row_outbuf_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        row_outbuf_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        row_outbuf_ce0 = grp_dct_1d2_fu_215_dst_ce0;
    end else begin
        row_outbuf_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        row_outbuf_we0 = grp_dct_1d2_fu_215_dst_we0;
    end else begin
        row_outbuf_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln76_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (grp_dct_1d2_fu_215_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((icmp_ln81_fu_242_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((icmp_ln81_fu_242_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((icmp_ln87_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & (grp_dct_1d2_fu_215_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_pp1_stage0 : begin
            if (~((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln92_fu_352_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln92_fu_352_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln81_fu_248_p2 = (indvar_flatten_reg_137 + 7'd1);

assign add_ln84_1_fu_329_p2 = (zext_ln84_2_fu_326_p1 + zext_ln84_1_fu_322_p1);

assign add_ln84_fu_298_p2 = (zext_ln84_fu_282_p1 + zext_ln84_3_fu_294_p1);

assign add_ln92_fu_358_p2 = (indvar_flatten11_reg_182 + 7'd1);

assign add_ln95_1_fu_408_p2 = (zext_ln95_fu_392_p1 + zext_ln95_4_fu_404_p1);

assign add_ln95_fu_439_p2 = (zext_ln95_2_fu_436_p1 + zext_ln95_1_fu_432_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd6];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign grp_dct_1d2_fu_215_ap_start = grp_dct_1d2_fu_215_ap_start_reg;

assign i_4_fu_309_p2 = (select_ln84_fu_266_p3 + 4'd1);

assign i_5_fu_346_p2 = (i_2_reg_170 + 4'd1);

assign i_6_fu_419_p2 = (select_ln95_fu_376_p3 + 4'd1);

assign i_fu_236_p2 = (i_0_reg_125 + 4'd1);

assign icmp_ln76_fu_230_p2 = ((i_0_reg_125 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln81_fu_242_p2 = ((indvar_flatten_reg_137 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln83_fu_260_p2 = ((i_1_reg_159 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln87_fu_340_p2 = ((i_2_reg_170 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln92_fu_352_p2 = ((indvar_flatten11_reg_182 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln94_fu_370_p2 = ((i_3_reg_204 == 4'd8) ? 1'b1 : 1'b0);

assign in_block_address0 = grp_dct_1d2_fu_215_src_address0;

assign j_2_fu_364_p2 = (ap_phi_mux_j_1_phi_fu_197_p4 + 4'd1);

assign j_fu_254_p2 = (ap_phi_mux_j_0_phi_fu_152_p4 + 4'd1);

assign out_block_address0 = zext_ln95_3_fu_445_p1;

assign out_block_d0 = col_outbuf_q0;

assign select_ln84_1_fu_274_p3 = ((icmp_ln83_fu_260_p2[0:0] === 1'b1) ? j_fu_254_p2 : ap_phi_mux_j_0_phi_fu_152_p4);

assign select_ln84_fu_266_p3 = ((icmp_ln83_fu_260_p2[0:0] === 1'b1) ? 4'd0 : i_1_reg_159);

assign select_ln95_1_fu_384_p3 = ((icmp_ln94_fu_370_p2[0:0] === 1'b1) ? j_2_fu_364_p2 : ap_phi_mux_j_1_phi_fu_197_p4);

assign select_ln95_fu_376_p3 = ((icmp_ln94_fu_370_p2[0:0] === 1'b1) ? 4'd0 : i_3_reg_204);

assign tmp_1_fu_286_p3 = {{select_ln84_fu_266_p3}, {3'd0}};

assign tmp_2_fu_425_p3 = {{select_ln95_1_reg_512}, {3'd0}};

assign tmp_3_fu_396_p3 = {{select_ln95_fu_376_p3}, {3'd0}};

assign tmp_fu_315_p3 = {{select_ln84_1_reg_473}, {3'd0}};

assign zext_ln84_1_fu_322_p1 = tmp_fu_315_p3;

assign zext_ln84_2_fu_326_p1 = select_ln84_reg_468;

assign zext_ln84_3_fu_294_p1 = tmp_1_fu_286_p3;

assign zext_ln84_4_fu_304_p1 = add_ln84_fu_298_p2;

assign zext_ln84_5_fu_335_p1 = add_ln84_1_fu_329_p2;

assign zext_ln84_fu_282_p1 = select_ln84_1_fu_274_p3;

assign zext_ln95_1_fu_432_p1 = tmp_2_fu_425_p3;

assign zext_ln95_2_fu_436_p1 = select_ln95_reg_507;

assign zext_ln95_3_fu_445_p1 = add_ln95_fu_439_p2;

assign zext_ln95_4_fu_404_p1 = tmp_3_fu_396_p3;

assign zext_ln95_5_fu_414_p1 = add_ln95_1_fu_408_p2;

assign zext_ln95_fu_392_p1 = select_ln95_1_fu_384_p3;

endmodule //dct_2d
