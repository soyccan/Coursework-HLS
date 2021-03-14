############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lab1_hls
set_top multip_2num
add_files lab1_hls/Multiplication.cpp
add_files lab1_hls/Multiplication.h
add_files -tb lab1_hls/MultipTester.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg400-1}
create_clock -period 5 -name default
config_export -format ip_catalog -rtl verilog
#source "./lab1_hls/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design -trace_level all -tool xsim
export_design -rtl verilog -format ip_catalog
