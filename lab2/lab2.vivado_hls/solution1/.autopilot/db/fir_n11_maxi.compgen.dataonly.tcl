# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
pn32HPInput { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
pn32HPOutput { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
an32Coef { 
	dir I
	width 32
	depth 12
	mode ap_memory
	offset 64
	offset_end 127
}
regXferLeng_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 128
	offset_end 135
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


