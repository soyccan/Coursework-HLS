// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

`define TV_IN_pstrmInput_TDATA "./c.fir_n11_strm.autotvin_pstrmInput_V_data_V.dat"
`define TV_IN_pstrmInput_TKEEP "./c.fir_n11_strm.autotvin_pstrmInput_V_keep_V.dat"
`define TV_IN_pstrmInput_TSTRB "./c.fir_n11_strm.autotvin_pstrmInput_V_strb_V.dat"
`define TV_IN_pstrmInput_TUSER "./c.fir_n11_strm.autotvin_pstrmInput_V_user_V.dat"
`define TV_IN_pstrmInput_TLAST "./c.fir_n11_strm.autotvin_pstrmInput_V_last_V.dat"
`define TV_IN_pstrmInput_TID "./c.fir_n11_strm.autotvin_pstrmInput_V_id_V.dat"
`define TV_IN_pstrmInput_TDEST "./c.fir_n11_strm.autotvin_pstrmInput_V_dest_V.dat"

`define AUTOTB_TRANSACTION_NUM 1

module AESL_axi_s_pstrmInput (
    input clk,
    input reset,
    output [32 - 1:0] TRAN_pstrmInput_TDATA,
    output [4 - 1:0] TRAN_pstrmInput_TKEEP,
    output [4 - 1:0] TRAN_pstrmInput_TSTRB,
    output TRAN_pstrmInput_TUSER,
    output TRAN_pstrmInput_TLAST,
    output TRAN_pstrmInput_TID,
    output TRAN_pstrmInput_TDEST,
    output TRAN_pstrmInput_TVALID,
    input TRAN_pstrmInput_TREADY,
    input ready,
    input done,
    output [31:0] transaction);

    wire TRAN_pstrmInput_TVALID_temp;
    wire pstrmInput_TDATA_full;
    wire pstrmInput_TDATA_empty;
    reg pstrmInput_TDATA_write_en;
    reg [32 - 1:0] pstrmInput_TDATA_write_data;
    reg pstrmInput_TDATA_read_en;
    wire [32 - 1:0] pstrmInput_TDATA_read_data;
    
    fifo #(600, 32) fifo_pstrmInput_TDATA (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TDATA_write_en),
        .write_data(pstrmInput_TDATA_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TDATA_read_en),
        .read_data(pstrmInput_TDATA_read_data),
        .full(pstrmInput_TDATA_full),
        .empty(pstrmInput_TDATA_empty));
    
    always @ (*) begin
        pstrmInput_TDATA_write_en <= 0;
        pstrmInput_TDATA_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TDATA = pstrmInput_TDATA_read_data;
    wire pstrmInput_TKEEP_full;
    wire pstrmInput_TKEEP_empty;
    reg pstrmInput_TKEEP_write_en;
    reg [4 - 1:0] pstrmInput_TKEEP_write_data;
    reg pstrmInput_TKEEP_read_en;
    wire [4 - 1:0] pstrmInput_TKEEP_read_data;
    
    fifo #(600, 4) fifo_pstrmInput_TKEEP (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TKEEP_write_en),
        .write_data(pstrmInput_TKEEP_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TKEEP_read_en),
        .read_data(pstrmInput_TKEEP_read_data),
        .full(pstrmInput_TKEEP_full),
        .empty(pstrmInput_TKEEP_empty));
    
    always @ (*) begin
        pstrmInput_TKEEP_write_en <= 0;
        pstrmInput_TKEEP_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TKEEP = pstrmInput_TKEEP_read_data;
    wire pstrmInput_TSTRB_full;
    wire pstrmInput_TSTRB_empty;
    reg pstrmInput_TSTRB_write_en;
    reg [4 - 1:0] pstrmInput_TSTRB_write_data;
    reg pstrmInput_TSTRB_read_en;
    wire [4 - 1:0] pstrmInput_TSTRB_read_data;
    
    fifo #(600, 4) fifo_pstrmInput_TSTRB (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TSTRB_write_en),
        .write_data(pstrmInput_TSTRB_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TSTRB_read_en),
        .read_data(pstrmInput_TSTRB_read_data),
        .full(pstrmInput_TSTRB_full),
        .empty(pstrmInput_TSTRB_empty));
    
    always @ (*) begin
        pstrmInput_TSTRB_write_en <= 0;
        pstrmInput_TSTRB_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TSTRB = pstrmInput_TSTRB_read_data;
    wire pstrmInput_TUSER_full;
    wire pstrmInput_TUSER_empty;
    reg pstrmInput_TUSER_write_en;
    reg [1 - 1:0] pstrmInput_TUSER_write_data;
    reg pstrmInput_TUSER_read_en;
    wire [1 - 1:0] pstrmInput_TUSER_read_data;
    
    fifo #(600, 1) fifo_pstrmInput_TUSER (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TUSER_write_en),
        .write_data(pstrmInput_TUSER_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TUSER_read_en),
        .read_data(pstrmInput_TUSER_read_data),
        .full(pstrmInput_TUSER_full),
        .empty(pstrmInput_TUSER_empty));
    
    always @ (*) begin
        pstrmInput_TUSER_write_en <= 0;
        pstrmInput_TUSER_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TUSER = pstrmInput_TUSER_read_data;
    wire pstrmInput_TLAST_full;
    wire pstrmInput_TLAST_empty;
    reg pstrmInput_TLAST_write_en;
    reg [1 - 1:0] pstrmInput_TLAST_write_data;
    reg pstrmInput_TLAST_read_en;
    wire [1 - 1:0] pstrmInput_TLAST_read_data;
    
    fifo #(600, 1) fifo_pstrmInput_TLAST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TLAST_write_en),
        .write_data(pstrmInput_TLAST_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TLAST_read_en),
        .read_data(pstrmInput_TLAST_read_data),
        .full(pstrmInput_TLAST_full),
        .empty(pstrmInput_TLAST_empty));
    
    always @ (*) begin
        pstrmInput_TLAST_write_en <= 0;
        pstrmInput_TLAST_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TLAST = pstrmInput_TLAST_read_data;
    wire pstrmInput_TID_full;
    wire pstrmInput_TID_empty;
    reg pstrmInput_TID_write_en;
    reg [1 - 1:0] pstrmInput_TID_write_data;
    reg pstrmInput_TID_read_en;
    wire [1 - 1:0] pstrmInput_TID_read_data;
    
    fifo #(600, 1) fifo_pstrmInput_TID (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TID_write_en),
        .write_data(pstrmInput_TID_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TID_read_en),
        .read_data(pstrmInput_TID_read_data),
        .full(pstrmInput_TID_full),
        .empty(pstrmInput_TID_empty));
    
    always @ (*) begin
        pstrmInput_TID_write_en <= 0;
        pstrmInput_TID_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TID = pstrmInput_TID_read_data;
    wire pstrmInput_TDEST_full;
    wire pstrmInput_TDEST_empty;
    reg pstrmInput_TDEST_write_en;
    reg [1 - 1:0] pstrmInput_TDEST_write_data;
    reg pstrmInput_TDEST_read_en;
    wire [1 - 1:0] pstrmInput_TDEST_read_data;
    
    fifo #(600, 1) fifo_pstrmInput_TDEST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(pstrmInput_TDEST_write_en),
        .write_data(pstrmInput_TDEST_write_data),
        .read_clock(clk),
        .read_en(pstrmInput_TDEST_read_en),
        .read_data(pstrmInput_TDEST_read_data),
        .full(pstrmInput_TDEST_full),
        .empty(pstrmInput_TDEST_empty));
    
    always @ (*) begin
        pstrmInput_TDEST_write_en <= 0;
        pstrmInput_TDEST_read_en <= TRAN_pstrmInput_TREADY & TRAN_pstrmInput_TVALID;
    end
    
    assign TRAN_pstrmInput_TDEST = pstrmInput_TDEST_read_data;
    assign TRAN_pstrmInput_TVALID = TRAN_pstrmInput_TVALID_temp;

    
    assign TRAN_pstrmInput_TVALID_temp = ~(pstrmInput_TDATA_empty || pstrmInput_TKEEP_empty || pstrmInput_TSTRB_empty || pstrmInput_TUSER_empty || pstrmInput_TLAST_empty || pstrmInput_TID_empty || pstrmInput_TDEST_empty);
    
    function is_blank_char(input [7:0] in_char);
        if (in_char == " " || in_char == "\011" || in_char == "\012" || in_char == "\015") begin
            is_blank_char = 1;
        end else begin
            is_blank_char = 0;
        end
    endfunction
    
    function [199:0] read_token(input integer fp);
        integer ret;
        begin
            read_token = "";
                    ret = 0;
                    ret = $fscanf(fp,"%s",read_token);
        end
    endfunction
    
    function [199:0] rm_0x(input [199:0] token);
        reg [199:0] token_tmp;
        integer i;
        begin
            token_tmp = "";
            for (i = 0; token[15:0] != "0x"; token = token >> 8) begin
                token_tmp = (token[7:0] << (8 * i)) | token_tmp;
                i = i + 1;
            end
            rm_0x = token_tmp;
        end
    endfunction
    
    reg [31:0] transaction_load_pstrmInput_TDATA;
    
    assign transaction = transaction_load_pstrmInput_TDATA;
    
    initial begin : AXI_stream_driver_pstrmInput_TDATA
        integer fp;
        reg [199:0] token;
        reg [32 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TDATA = 0;
        fifo_pstrmInput_TDATA.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TDATA, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TDATA);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TDATA.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TDATA.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TDATA.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TDATA.snapshot();
                end else begin
                    fifo_pstrmInput_TDATA.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TDATA = transaction_load_pstrmInput_TDATA + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_pstrmInput_TKEEP;
    
    initial begin : AXI_stream_driver_pstrmInput_TKEEP
        integer fp;
        reg [199:0] token;
        reg [4 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TKEEP = 0;
        fifo_pstrmInput_TKEEP.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TKEEP, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TKEEP);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TKEEP.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TKEEP.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TKEEP.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TKEEP.snapshot();
                end else begin
                    fifo_pstrmInput_TKEEP.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TKEEP = transaction_load_pstrmInput_TKEEP + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_pstrmInput_TSTRB;
    
    initial begin : AXI_stream_driver_pstrmInput_TSTRB
        integer fp;
        reg [199:0] token;
        reg [4 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TSTRB = 0;
        fifo_pstrmInput_TSTRB.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TSTRB, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TSTRB);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TSTRB.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TSTRB.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TSTRB.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TSTRB.snapshot();
                end else begin
                    fifo_pstrmInput_TSTRB.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TSTRB = transaction_load_pstrmInput_TSTRB + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_pstrmInput_TUSER;
    
    initial begin : AXI_stream_driver_pstrmInput_TUSER
        integer fp;
        reg [199:0] token;
        reg [1 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TUSER = 0;
        fifo_pstrmInput_TUSER.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TUSER, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TUSER);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TUSER.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TUSER.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TUSER.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TUSER.snapshot();
                end else begin
                    fifo_pstrmInput_TUSER.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TUSER = transaction_load_pstrmInput_TUSER + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_pstrmInput_TLAST;
    
    initial begin : AXI_stream_driver_pstrmInput_TLAST
        integer fp;
        reg [199:0] token;
        reg [1 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TLAST = 0;
        fifo_pstrmInput_TLAST.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TLAST, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TLAST);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TLAST.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TLAST.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TLAST.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TLAST.snapshot();
                end else begin
                    fifo_pstrmInput_TLAST.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TLAST = transaction_load_pstrmInput_TLAST + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_pstrmInput_TID;
    
    initial begin : AXI_stream_driver_pstrmInput_TID
        integer fp;
        reg [199:0] token;
        reg [1 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TID = 0;
        fifo_pstrmInput_TID.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TID, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TID);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TID.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TID.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TID.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TID.snapshot();
                end else begin
                    fifo_pstrmInput_TID.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TID = transaction_load_pstrmInput_TID + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_pstrmInput_TDEST;
    
    initial begin : AXI_stream_driver_pstrmInput_TDEST
        integer fp;
        reg [199:0] token;
        reg [1 - 1:0] data;
        reg [199:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_pstrmInput_TDEST = 0;
        fifo_pstrmInput_TDEST.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_pstrmInput_TDEST, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_pstrmInput_TDEST);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_pstrmInput_TDEST.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_pstrmInput_TDEST.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_pstrmInput_TDEST.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_pstrmInput_TDEST.snapshot();
                end else begin
                    fifo_pstrmInput_TDEST.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_pstrmInput_TDEST = transaction_load_pstrmInput_TDEST + 1;
            end
        end
    end

endmodule
