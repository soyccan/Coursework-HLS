
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set dout_q_group [add_wave_group dout_q(wire) -into $coutputgroup]
add_wave /apatb_duc_top/AESL_inst_duc/dout_q_ap_vld -into $dout_q_group -color #ffff00 -radix hex
add_wave /apatb_duc_top/AESL_inst_duc/dout_q -into $dout_q_group -radix hex
set dout_i_group [add_wave_group dout_i(wire) -into $coutputgroup]
add_wave /apatb_duc_top/AESL_inst_duc/dout_i_ap_vld -into $dout_i_group -color #ffff00 -radix hex
add_wave /apatb_duc_top/AESL_inst_duc/dout_i -into $dout_i_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set freq_group [add_wave_group freq(wire) -into $cinputgroup]
add_wave /apatb_duc_top/AESL_inst_duc/freq -into $freq_group -radix hex
set din_i_group [add_wave_group din_i(wire) -into $cinputgroup]
add_wave /apatb_duc_top/AESL_inst_duc/din_i -into $din_i_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_duc_top/AESL_inst_duc/ap_start -into $blocksiggroup
add_wave /apatb_duc_top/AESL_inst_duc/ap_done -into $blocksiggroup
add_wave /apatb_duc_top/AESL_inst_duc/ap_idle -into $blocksiggroup
add_wave /apatb_duc_top/AESL_inst_duc/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_duc_top/AESL_inst_duc/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_duc_top/AESL_inst_duc/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_duc_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_duc_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_duc_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_duc_top/LENGTH_din_i -into $tb_portdepth_group -radix hex
add_wave /apatb_duc_top/LENGTH_freq -into $tb_portdepth_group -radix hex
add_wave /apatb_duc_top/LENGTH_dout_i -into $tb_portdepth_group -radix hex
add_wave /apatb_duc_top/LENGTH_dout_q -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_dout_q_group [add_wave_group dout_q(wire) -into $tbcoutputgroup]
add_wave /apatb_duc_top/dout_q_ap_vld -into $tb_dout_q_group -color #ffff00 -radix hex
add_wave /apatb_duc_top/dout_q -into $tb_dout_q_group -radix hex
set tb_dout_i_group [add_wave_group dout_i(wire) -into $tbcoutputgroup]
add_wave /apatb_duc_top/dout_i_ap_vld -into $tb_dout_i_group -color #ffff00 -radix hex
add_wave /apatb_duc_top/dout_i -into $tb_dout_i_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_freq_group [add_wave_group freq(wire) -into $tbcinputgroup]
add_wave /apatb_duc_top/freq -into $tb_freq_group -radix hex
set tb_din_i_group [add_wave_group din_i(wire) -into $tbcinputgroup]
add_wave /apatb_duc_top/din_i -into $tb_din_i_group -radix hex
save_wave_config duc.wcfg
run all
quit

