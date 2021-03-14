set moduleName duc
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {duc}
set C_modelType { void 0 }
set C_modelArgList {
	{ din_i int 18 regular  }
	{ freq uint 16 regular  }
	{ dout_i int 18 regular {pointer 1}  }
	{ dout_q int 18 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "din_i", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "din_i","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "freq", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "freq","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "dout_i", "interface" : "wire", "bitwidth" : 18, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "dout_i","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dout_q", "interface" : "wire", "bitwidth" : 18, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "dout_q","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ din_i sc_in sc_lv 18 signal 0 } 
	{ freq sc_in sc_lv 16 signal 1 } 
	{ dout_i sc_out sc_lv 18 signal 2 } 
	{ dout_i_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ dout_q sc_out sc_lv 18 signal 3 } 
	{ dout_q_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "din_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "din_i", "role": "default" }} , 
 	{ "name": "freq", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "freq", "role": "default" }} , 
 	{ "name": "dout_i", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "dout_i", "role": "default" }} , 
 	{ "name": "dout_i_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout_i", "role": "ap_vld" }} , 
 	{ "name": "dout_q", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "dout_q", "role": "default" }} , 
 	{ "name": "dout_q_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout_q", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "11", "15", "21", "22"],
		"CDFG" : "duc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_imf3_fu_208"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_imf2_fu_229"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_mixer_fu_249"}],
		"Port" : [
			{"Name" : "din_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "freq", "Type" : "None", "Direction" : "I"},
			{"Name" : "dout_i", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "Dout_I"}]},
			{"Name" : "dout_q", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "Dout_Q"}]},
			{"Name" : "i", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "in_r", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "c", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "init", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ch", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "i_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "in_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "c_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "init_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ch_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_p_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cnt_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "i_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "i_3"}]},
			{"Name" : "in_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "in_2"}]},
			{"Name" : "c_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "c_1"}]},
			{"Name" : "init_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "init_3"}]},
			{"Name" : "ch_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "ch_2"}]},
			{"Name" : "shift_reg_p_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "shift_reg_p_1"}]},
			{"Name" : "cnt", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_imf2_fu_229", "Port" : "cnt"}]},
			{"Name" : "i_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "i_2"}]},
			{"Name" : "in_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "in_1"}]},
			{"Name" : "j", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "j"}]},
			{"Name" : "c_5_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "c_5_0"}]},
			{"Name" : "init_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "init_2"}]},
			{"Name" : "shift_reg_p0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "shift_reg_p0"}]},
			{"Name" : "c_5_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "c_5_1"}]},
			{"Name" : "shift_reg_p1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_imf3_fu_208", "Port" : "shift_reg_p1"}]},
			{"Name" : "i_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "i_1"}]},
			{"Name" : "init_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "init_1"}]},
			{"Name" : "ch_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "ch_1"}]},
			{"Name" : "index", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "index"}]},
			{"Name" : "DI_cache", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "DI_cache"}]},
			{"Name" : "acc", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "acc"}]},
			{"Name" : "dds_table", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_mixer_fu_249", "Port" : "dds_table"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_p_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_p_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_imf3_fu_208", "Parent" : "0", "Child" : ["6", "7", "8", "9", "10"],
		"CDFG" : "imf3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "i_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "in_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "j", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "c_5_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "init_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_p0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "c_5_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_p1", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf3_fu_208.c_5_0_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf3_fu_208.shift_reg_p0_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf3_fu_208.c_5_1_U", "Parent" : "5"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf3_fu_208.shift_reg_p1_U", "Parent" : "5"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf3_fu_208.duc_mul_mul_18s_1bkb_U6", "Parent" : "5"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_imf2_fu_229", "Parent" : "0", "Child" : ["12", "13", "14"],
		"CDFG" : "imf2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "i_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "in_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "c_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "init_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ch_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_p_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cnt", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf2_fu_229.c_1_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf2_fu_229.shift_reg_p_1_U", "Parent" : "11"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_imf2_fu_229.duc_mul_mul_18s_1bkb_U1", "Parent" : "11"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mixer_fu_249", "Parent" : "0", "Child" : ["16", "17", "18", "19", "20"],
		"CDFG" : "mixer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "freq", "Type" : "None", "Direction" : "I"},
			{"Name" : "Din", "Type" : "None", "Direction" : "I"},
			{"Name" : "Dout_I", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "Dout_Q", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "i_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "init_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ch_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "index", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "DI_cache", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "acc", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dds_table", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mixer_fu_249.DI_cache_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mixer_fu_249.dds_table_U", "Parent" : "15"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mixer_fu_249.duc_am_submul_16scud_U11", "Parent" : "15"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mixer_fu_249.duc_ama_submuladddEe_U12", "Parent" : "15"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mixer_fu_249.duc_ama_addmuladdeOg_U13", "Parent" : "15"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.duc_mul_mul_18s_1bkb_U23", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.duc_mul_mul_18s_1bkb_U24", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	duc {
		din_i {Type I LastRead 0 FirstWrite -1}
		freq {Type I LastRead 0 FirstWrite -1}
		dout_i {Type O LastRead -1 FirstWrite 9}
		dout_q {Type O LastRead -1 FirstWrite 9}
		i {Type IO LastRead -1 FirstWrite -1}
		in_r {Type IO LastRead -1 FirstWrite -1}
		c {Type I LastRead -1 FirstWrite -1}
		init {Type IO LastRead -1 FirstWrite -1}
		ch {Type IO LastRead -1 FirstWrite -1}
		shift_reg_p {Type IO LastRead -1 FirstWrite -1}
		i_4 {Type IO LastRead -1 FirstWrite -1}
		in_3 {Type IO LastRead -1 FirstWrite -1}
		c_2 {Type I LastRead -1 FirstWrite -1}
		init_4 {Type IO LastRead -1 FirstWrite -1}
		ch_3 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_p_2 {Type IO LastRead -1 FirstWrite -1}
		cnt_1 {Type IO LastRead -1 FirstWrite -1}
		i_3 {Type IO LastRead -1 FirstWrite -1}
		in_2 {Type IO LastRead -1 FirstWrite -1}
		c_1 {Type I LastRead -1 FirstWrite -1}
		init_3 {Type IO LastRead -1 FirstWrite -1}
		ch_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_p_1 {Type IO LastRead -1 FirstWrite -1}
		cnt {Type IO LastRead -1 FirstWrite -1}
		i_2 {Type IO LastRead -1 FirstWrite -1}
		in_1 {Type IO LastRead -1 FirstWrite -1}
		j {Type IO LastRead -1 FirstWrite -1}
		c_5_0 {Type I LastRead -1 FirstWrite -1}
		init_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_p0 {Type IO LastRead -1 FirstWrite -1}
		c_5_1 {Type I LastRead -1 FirstWrite -1}
		shift_reg_p1 {Type IO LastRead -1 FirstWrite -1}
		i_1 {Type IO LastRead -1 FirstWrite -1}
		init_1 {Type IO LastRead -1 FirstWrite -1}
		ch_1 {Type IO LastRead -1 FirstWrite -1}
		index {Type IO LastRead -1 FirstWrite -1}
		DI_cache {Type IO LastRead -1 FirstWrite -1}
		acc {Type IO LastRead -1 FirstWrite -1}
		dds_table {Type I LastRead -1 FirstWrite -1}}
	imf3 {
		x {Type I LastRead 0 FirstWrite -1}
		i_2 {Type IO LastRead -1 FirstWrite -1}
		in_1 {Type IO LastRead -1 FirstWrite -1}
		j {Type IO LastRead -1 FirstWrite -1}
		c_5_0 {Type I LastRead -1 FirstWrite -1}
		init_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_p0 {Type IO LastRead -1 FirstWrite -1}
		c_5_1 {Type I LastRead -1 FirstWrite -1}
		shift_reg_p1 {Type IO LastRead -1 FirstWrite -1}}
	imf2 {
		x {Type I LastRead 0 FirstWrite -1}
		i_3 {Type IO LastRead -1 FirstWrite -1}
		in_2 {Type IO LastRead -1 FirstWrite -1}
		c_1 {Type I LastRead -1 FirstWrite -1}
		init_3 {Type IO LastRead -1 FirstWrite -1}
		ch_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_p_1 {Type IO LastRead -1 FirstWrite -1}
		cnt {Type IO LastRead -1 FirstWrite -1}}
	mixer {
		freq {Type I LastRead 0 FirstWrite -1}
		Din {Type I LastRead 0 FirstWrite -1}
		Dout_I {Type O LastRead -1 FirstWrite 9}
		Dout_Q {Type O LastRead -1 FirstWrite 9}
		i_1 {Type IO LastRead -1 FirstWrite -1}
		init_1 {Type IO LastRead -1 FirstWrite -1}
		ch_1 {Type IO LastRead -1 FirstWrite -1}
		index {Type IO LastRead -1 FirstWrite -1}
		DI_cache {Type IO LastRead -1 FirstWrite -1}
		acc {Type IO LastRead -1 FirstWrite -1}
		dds_table {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "33", "Max" : "41"}
	, {"Name" : "Interval", "Min" : "34", "Max" : "42"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	din_i { ap_none {  { din_i in_data 0 18 } } }
	freq { ap_none {  { freq in_data 0 16 } } }
	dout_i { ap_vld {  { dout_i out_data 1 18 }  { dout_i_ap_vld out_vld 1 1 } } }
	dout_q { ap_vld {  { dout_q out_data 1 18 }  { dout_q_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
