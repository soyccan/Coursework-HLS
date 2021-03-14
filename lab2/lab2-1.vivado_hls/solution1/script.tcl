############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lab2-1_hls
set_top fir_n11_strm
add_files lab2-1_hls/FIR.cpp
add_files lab2-1_hls/FIR.h
add_files -tb lab2-1_hls/FIRTester.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 5 -name default
config_export -format ip_catalog -rtl verilog
source "./lab2-1_hls/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -rtl verilog -format ip_catalog
