############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project duc_prj
set_top duc
add_files mac.c
add_files dds.c
add_files mixer.c
add_files imf3.c
add_files imf2.c
add_files imf1.c
add_files srrc.c
add_files duc.c
add_files -tb golden -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb duc_test.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7k160t-fbg484-1}
create_clock -period 2.71 -name default
#source "./duc_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
