// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "D:/Vivado/hls_lab1/Multiplication.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "D:/Vivado/hls_lab1/Multiplication.cpp"

# 1 "D:/Vivado/hls_lab1/multiplication.h" 1




typedef signed int int32_t;

void multip_2num(int32_t n32In1, int32_t n32In2, int32_t* pn32ResOut);
# 3 "D:/Vivado/hls_lab1/Multiplication.cpp" 2

void multip_2num(int32_t n32In1, int32_t n32In2, int32_t* pn32ResOut)
{


#pragma HLS INTERFACE port=pn32ResOut
#pragma HLS INTERFACE port=n32In2
#pragma HLS INTERFACE port=n32In1







 *pn32ResOut = n32In1 * n32In2;

 return;
}
