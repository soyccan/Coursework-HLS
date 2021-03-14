
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set pn32ResOut_group [add_wave_group pn32ResOut(wire) -into $coutputgroup]
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/pn32ResOut_ap_vld -into $pn32ResOut_group -color #ffff00 -radix hex
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/pn32ResOut -into $pn32ResOut_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set n32In2_group [add_wave_group n32In2(wire) -into $cinputgroup]
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/n32In2 -into $n32In2_group -radix hex
set n32In1_group [add_wave_group n32In1(wire) -into $cinputgroup]
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/n32In1 -into $n32In1_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/ap_start -into $blocksiggroup
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/ap_done -into $blocksiggroup
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/ap_idle -into $blocksiggroup
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_multip_2num_top/AESL_inst_multip_2num/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_multip_2num_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_multip_2num_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_multip_2num_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_multip_2num_top/LENGTH_n32In1 -into $tb_portdepth_group -radix hex
add_wave /apatb_multip_2num_top/LENGTH_n32In2 -into $tb_portdepth_group -radix hex
add_wave /apatb_multip_2num_top/LENGTH_pn32ResOut -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_pn32ResOut_group [add_wave_group pn32ResOut(wire) -into $tbcoutputgroup]
add_wave /apatb_multip_2num_top/pn32ResOut_ap_vld -into $tb_pn32ResOut_group -color #ffff00 -radix hex
add_wave /apatb_multip_2num_top/pn32ResOut -into $tb_pn32ResOut_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_n32In2_group [add_wave_group n32In2(wire) -into $tbcinputgroup]
add_wave /apatb_multip_2num_top/n32In2 -into $tb_n32In2_group -radix hex
set tb_n32In1_group [add_wave_group n32In1(wire) -into $tbcinputgroup]
add_wave /apatb_multip_2num_top/n32In1 -into $tb_n32In1_group -radix hex
save_wave_config multip_2num.wcfg
run all
quit

