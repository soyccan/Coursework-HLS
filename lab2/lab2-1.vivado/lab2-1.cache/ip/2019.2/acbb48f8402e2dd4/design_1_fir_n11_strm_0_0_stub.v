// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
// Date        : Sun Mar  7 17:35:33 2021
// Host        : EMPEROR running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_fir_n11_strm_0_0_stub.v
// Design      : design_1_fir_n11_strm_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fir_n11_strm,Vivado 2019.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_AXILiteS_AWADDR, 
  s_axi_AXILiteS_AWVALID, s_axi_AXILiteS_AWREADY, s_axi_AXILiteS_WDATA, 
  s_axi_AXILiteS_WSTRB, s_axi_AXILiteS_WVALID, s_axi_AXILiteS_WREADY, 
  s_axi_AXILiteS_BRESP, s_axi_AXILiteS_BVALID, s_axi_AXILiteS_BREADY, 
  s_axi_AXILiteS_ARADDR, s_axi_AXILiteS_ARVALID, s_axi_AXILiteS_ARREADY, 
  s_axi_AXILiteS_RDATA, s_axi_AXILiteS_RRESP, s_axi_AXILiteS_RVALID, 
  s_axi_AXILiteS_RREADY, ap_clk, ap_rst_n, interrupt, pstrmInput_TVALID, pstrmInput_TREADY, 
  pstrmInput_TDATA, pstrmInput_TDEST, pstrmInput_TKEEP, pstrmInput_TSTRB, pstrmInput_TUSER, 
  pstrmInput_TLAST, pstrmInput_TID, pstrmOutput_TVALID, pstrmOutput_TREADY, 
  pstrmOutput_TDATA, pstrmOutput_TDEST, pstrmOutput_TKEEP, pstrmOutput_TSTRB, 
  pstrmOutput_TUSER, pstrmOutput_TLAST, pstrmOutput_TID)
/* synthesis syn_black_box black_box_pad_pin="s_axi_AXILiteS_AWADDR[7:0],s_axi_AXILiteS_AWVALID,s_axi_AXILiteS_AWREADY,s_axi_AXILiteS_WDATA[31:0],s_axi_AXILiteS_WSTRB[3:0],s_axi_AXILiteS_WVALID,s_axi_AXILiteS_WREADY,s_axi_AXILiteS_BRESP[1:0],s_axi_AXILiteS_BVALID,s_axi_AXILiteS_BREADY,s_axi_AXILiteS_ARADDR[7:0],s_axi_AXILiteS_ARVALID,s_axi_AXILiteS_ARREADY,s_axi_AXILiteS_RDATA[31:0],s_axi_AXILiteS_RRESP[1:0],s_axi_AXILiteS_RVALID,s_axi_AXILiteS_RREADY,ap_clk,ap_rst_n,interrupt,pstrmInput_TVALID,pstrmInput_TREADY,pstrmInput_TDATA[31:0],pstrmInput_TDEST[0:0],pstrmInput_TKEEP[3:0],pstrmInput_TSTRB[3:0],pstrmInput_TUSER[0:0],pstrmInput_TLAST[0:0],pstrmInput_TID[0:0],pstrmOutput_TVALID,pstrmOutput_TREADY,pstrmOutput_TDATA[31:0],pstrmOutput_TDEST[0:0],pstrmOutput_TKEEP[3:0],pstrmOutput_TSTRB[3:0],pstrmOutput_TUSER[0:0],pstrmOutput_TLAST[0:0],pstrmOutput_TID[0:0]" */;
  input [7:0]s_axi_AXILiteS_AWADDR;
  input s_axi_AXILiteS_AWVALID;
  output s_axi_AXILiteS_AWREADY;
  input [31:0]s_axi_AXILiteS_WDATA;
  input [3:0]s_axi_AXILiteS_WSTRB;
  input s_axi_AXILiteS_WVALID;
  output s_axi_AXILiteS_WREADY;
  output [1:0]s_axi_AXILiteS_BRESP;
  output s_axi_AXILiteS_BVALID;
  input s_axi_AXILiteS_BREADY;
  input [7:0]s_axi_AXILiteS_ARADDR;
  input s_axi_AXILiteS_ARVALID;
  output s_axi_AXILiteS_ARREADY;
  output [31:0]s_axi_AXILiteS_RDATA;
  output [1:0]s_axi_AXILiteS_RRESP;
  output s_axi_AXILiteS_RVALID;
  input s_axi_AXILiteS_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  input pstrmInput_TVALID;
  output pstrmInput_TREADY;
  input [31:0]pstrmInput_TDATA;
  input [0:0]pstrmInput_TDEST;
  input [3:0]pstrmInput_TKEEP;
  input [3:0]pstrmInput_TSTRB;
  input [0:0]pstrmInput_TUSER;
  input [0:0]pstrmInput_TLAST;
  input [0:0]pstrmInput_TID;
  output pstrmOutput_TVALID;
  input pstrmOutput_TREADY;
  output [31:0]pstrmOutput_TDATA;
  output [0:0]pstrmOutput_TDEST;
  output [3:0]pstrmOutput_TKEEP;
  output [3:0]pstrmOutput_TSTRB;
  output [0:0]pstrmOutput_TUSER;
  output [0:0]pstrmOutput_TLAST;
  output [0:0]pstrmOutput_TID;
endmodule
