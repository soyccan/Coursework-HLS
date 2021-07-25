# High-Level Systhesis, 2021 Spring, NTU CSIE

Assignments of the course
Advanced Computer Architecture (CSIE5059), and its High-Level Synthesis Lab, 
instructed by Pr. CL Yang (楊佳玲) and Pr. Jiin Lai (賴瑾), 2021 Spring,
National Taiwan University

- IDE: Xilinx Vivado/Vivado HLS 2019.2 Webpack (free)
- Board: [PYNQ-Z2](https://www.tul.com.tw/ProductsPYNQ-Z2.html)
    - SoC: ZYNQ XC7Z020-1CLG400C
    - FPGA: Artix-7
- [PYNQ Documentation](https://pynq.readthedocs.io)

## Lab 1
Task: 32-bit Multiplier on PYNQ-Z2

Topics:
- Environment setup
    - Vivado and Vivado HLS
    - [PYNQ-Z2 board file for Vivado](https://dpoauwgwqsy2x.cloudfront.net/Download/pynq-z2.zip)
- High-level synthesis with Vivado HLS
- Kernel IO Interface
    - Block-level protocol
    - AXI and AXI Lite
    - Handshake protocol
    - Memory interface: RAM and FIFO
    - Bus protocol

## Lab 2
Task: FIR (Finite impulse response) on PYNQ-Z2

Topics:
- Stream interface (AXI-Stream)
- Memory-mapped interface (AXI, HP port)
    - DMA
- Transfers between stream and memory-mapped locations
    - MM2S/S2MM

## Advaced Lab
Reading material: Chapter 4 Interface Synthesis,
Vivado Design Suite Tutorial: High-Level Synthesis (UG871)

Topics:
- Interfaces for HLS

## Lab A

Reading material: Chapter 6.1-6.4 Sequential and Combinational Hardware,
HLS Bluebook Software Version v10.5b

Topics:
- Coding styles for sequential and combinational hardware in HLS

## Lab 3

Task: OpenCL application running on Xilinx Alveo U50

Topics:
- Interacting host and FPGA acceleration card with OpenCL API
- Profiling and analysis for performance with Xilinx Vitis Analyzer

## Final Project

[Burrows-Wheeler Aligner](https://github.com/soyccan/bwa_hls)

A DNA short read aligner.


