set moduleName mixer
set isTopModule 0
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
set C_modelName {mixer}
set C_modelType { void 0 }
set C_modelArgList {
	{ freq uint 16 regular  }
	{ Din int 18 regular  }
	{ Dout_I int 18 regular {pointer 1}  }
	{ Dout_Q int 18 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "freq", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Din", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "Dout_I", "interface" : "wire", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Dout_Q", "interface" : "wire", "bitwidth" : 18, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ freq sc_in sc_lv 16 signal 0 } 
	{ Din sc_in sc_lv 18 signal 1 } 
	{ Dout_I sc_out sc_lv 18 signal 2 } 
	{ Dout_I_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ Dout_Q sc_out sc_lv 18 signal 3 } 
	{ Dout_Q_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "freq", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "freq", "role": "default" }} , 
 	{ "name": "Din", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "Din", "role": "default" }} , 
 	{ "name": "Dout_I", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "Dout_I", "role": "default" }} , 
 	{ "name": "Dout_I_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "Dout_I", "role": "ap_vld" }} , 
 	{ "name": "Dout_Q", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "Dout_Q", "role": "default" }} , 
 	{ "name": "Dout_Q_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "Dout_Q", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5"],
		"CDFG" : "mixer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "6",
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.DI_cache_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dds_table_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.duc_am_submul_16scud_U11", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.duc_ama_submuladddEe_U12", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.duc_ama_addmuladdeOg_U13", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mixer {
		freq {Type I LastRead 0 FirstWrite -1}
		Din {Type I LastRead 0 FirstWrite -1}
		Dout_I {Type O LastRead -1 FirstWrite 6}
		Dout_Q {Type O LastRead -1 FirstWrite 6}
		i_1 {Type IO LastRead -1 FirstWrite -1}
		init_1 {Type IO LastRead -1 FirstWrite -1}
		ch_1 {Type IO LastRead -1 FirstWrite -1}
		index {Type IO LastRead -1 FirstWrite -1}
		DI_cache {Type IO LastRead -1 FirstWrite -1}
		acc {Type IO LastRead -1 FirstWrite -1}
		dds_table {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "6"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	freq { ap_none {  { freq in_data 0 16 } } }
	Din { ap_none {  { Din in_data 0 18 } } }
	Dout_I { ap_vld {  { Dout_I out_data 1 18 }  { Dout_I_ap_vld out_vld 1 1 } } }
	Dout_Q { ap_vld {  { Dout_Q out_data 1 18 }  { Dout_Q_ap_vld out_vld 1 1 } } }
}
