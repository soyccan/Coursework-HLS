############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fir_prj
set_top fir
add_files fir.c
add_files -tb out.gold.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb fir_test.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcu200-fsgd2104-2-e} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./fir_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -tool xsim
export_design -rtl verilog -format ip_catalog
