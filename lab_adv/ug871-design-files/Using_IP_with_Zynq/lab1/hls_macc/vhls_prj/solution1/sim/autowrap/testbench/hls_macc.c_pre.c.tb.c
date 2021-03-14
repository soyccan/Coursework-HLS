// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "C:/wrk/ETH_ToE_Github/ug871-design-files/Using_IP_with_Zynq/lab1/hls_macc/hls_macc.c"
# 1 "C:/wrk/ETH_ToE_Github/ug871-design-files/Using_IP_with_Zynq/lab1/hls_macc/hls_macc.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/wrk/ETH_ToE_Github/ug871-design-files/Using_IP_with_Zynq/lab1/hls_macc/hls_macc.c" 2
# 1 "C:/wrk/ETH_ToE_Github/ug871-design-files/Using_IP_with_Zynq/lab1/hls_macc/hls_macc.h" 1



# 1 "C:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\stdbool.h" 1 3 4
# 5 "C:/wrk/ETH_ToE_Github/ug871-design-files/Using_IP_with_Zynq/lab1/hls_macc/hls_macc.h" 2

void hls_macc(int a, int b, int *accum, _Bool accum_clr);
# 2 "C:/wrk/ETH_ToE_Github/ug871-design-files/Using_IP_with_Zynq/lab1/hls_macc/hls_macc.c" 2

void hls_macc(int a, int b, int *accum, _Bool accum_clr)
{
#pragma HLS INTERFACE s_axilite port=return bundle=HLS_MACC_PERIPH_BUS
#pragma HLS INTERFACE s_axilite port=a bundle=HLS_MACC_PERIPH_BUS
#pragma HLS INTERFACE s_axilite port=b bundle=HLS_MACC_PERIPH_BUS
#pragma HLS INTERFACE s_axilite port=accum bundle=HLS_MACC_PERIPH_BUS
#pragma HLS INTERFACE s_axilite port=accum_clr bundle=HLS_MACC_PERIPH_BUS

 static acc_reg = 0;
   if (accum_clr)
      acc_reg = 0;
   acc_reg += a * b;
   *accum = acc_reg;
}
