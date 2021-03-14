############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fir_prj
set_top fir
add_files fir.c
add_files -tb fir_test.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb out.gold.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution3"
set_part {xcvu9p-flgb2104-1-e}
create_clock -period 10 -name default
source "./fir_prj/solution3/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
