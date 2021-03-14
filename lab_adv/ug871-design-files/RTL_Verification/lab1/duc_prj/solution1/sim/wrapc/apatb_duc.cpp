// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

// apint = int18
#define int18 int
// apint = uint16
#define uint16 short

// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "din_i"
#define AUTOTB_TVIN_din_i  "../tv/cdatafile/c.duc.autotvin_din_i.dat"
// wrapc file define: "freq"
#define AUTOTB_TVIN_freq  "../tv/cdatafile/c.duc.autotvin_freq.dat"
// wrapc file define: "dout_i"
#define AUTOTB_TVOUT_dout_i  "../tv/cdatafile/c.duc.autotvout_dout_i.dat"
// wrapc file define: "dout_q"
#define AUTOTB_TVOUT_dout_q  "../tv/cdatafile/c.duc.autotvout_dout_q.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "dout_i"
#define AUTOTB_TVOUT_PC_dout_i  "../tv/rtldatafile/rtl.duc.autotvout_dout_i.dat"
// tvout file define: "dout_q"
#define AUTOTB_TVOUT_PC_dout_q  "../tv/rtldatafile/rtl.duc.autotvout_dout_q.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			din_i_depth = 0;
			freq_depth = 0;
			dout_i_depth = 0;
			dout_q_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{din_i " << din_i_depth << "}\n";
			total_list << "{freq " << freq_depth << "}\n";
			total_list << "{dout_i " << dout_i_depth << "}\n";
			total_list << "{dout_q " << dout_q_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int din_i_depth;
		int freq_depth;
		int dout_i_depth;
		int dout_q_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void duc (
int18 din_i,
uint16 freq,
int18* dout_i,
int18* dout_q);

extern "C" void AESL_WRAP_duc (
int18 din_i,
uint16 freq,
int18* dout_i,
int18* dout_q)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "dout_i"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout_i, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout_i, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout_i, AESL_token); // data

			sc_bv<18> *dout_i_pc_buffer = new sc_bv<18>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout_i', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout_i', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout_i_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout_i, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout_i))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout_i
				{
					// bitslice(17, 0)
					// {
						// celement: dout_i(17, 0)
						// {
							sc_lv<18>* dout_i_lv0_0_0_1 = new sc_lv<18>[1];
						// }
					// }

					// bitslice(17, 0)
					{
						int hls_map_index = 0;
						// celement: dout_i(17, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(dout_i[0]) != NULL) // check the null address if the c port is array or others
								{
									dout_i_lv0_0_0_1[hls_map_index].range(17, 0) = sc_bv<18>(dout_i_pc_buffer[hls_map_index].range(17, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(17, 0)
					{
						int hls_map_index = 0;
						// celement: dout_i(17, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : dout_i[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout_i[0]
								// output_left_conversion : dout_i[i_0]
								// output_type_conversion : (dout_i_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(dout_i[0]) != NULL) // check the null address if the c port is array or others
								{
									dout_i[i_0] = (dout_i_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout_i_pc_buffer;
		}

		// output port post check: "dout_q"
		aesl_fh.read(AUTOTB_TVOUT_PC_dout_q, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dout_q, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dout_q, AESL_token); // data

			sc_bv<18> *dout_q_pc_buffer = new sc_bv<18>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout_q', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dout_q', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dout_q_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dout_q, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dout_q))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dout_q
				{
					// bitslice(17, 0)
					// {
						// celement: dout_q(17, 0)
						// {
							sc_lv<18>* dout_q_lv0_0_0_1 = new sc_lv<18>[1];
						// }
					// }

					// bitslice(17, 0)
					{
						int hls_map_index = 0;
						// celement: dout_q(17, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(dout_q[0]) != NULL) // check the null address if the c port is array or others
								{
									dout_q_lv0_0_0_1[hls_map_index].range(17, 0) = sc_bv<18>(dout_q_pc_buffer[hls_map_index].range(17, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(17, 0)
					{
						int hls_map_index = 0;
						// celement: dout_q(17, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : dout_q[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dout_q[0]
								// output_left_conversion : dout_q[i_0]
								// output_type_conversion : (dout_q_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(dout_q[0]) != NULL) // check the null address if the c port is array or others
								{
									dout_q[i_0] = (dout_q_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dout_q_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "din_i"
		char* tvin_din_i = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_din_i);

		// "freq"
		char* tvin_freq = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_freq);

		// "dout_i"
		char* tvout_dout_i = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout_i);

		// "dout_q"
		char* tvout_dout_q = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dout_q);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_din_i, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_din_i, tvin_din_i);

		sc_bv<18> din_i_tvin_wrapc_buffer;

		// RTL Name: din_i
		{
			// bitslice(17, 0)
			{
				// celement: din_i(17, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : din_i
						// sub_1st_elem          : 
						// ori_name_1st_elem     : din_i
						// regulate_c_name       : din_i
						// input_type_conversion : din_i
						if (&(din_i) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<18> din_i_tmp_mem;
							din_i_tmp_mem = din_i;
							din_i_tvin_wrapc_buffer.range(17, 0) = din_i_tmp_mem.range(17, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_din_i, "%s\n", (din_i_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_din_i, tvin_din_i);
		}

		tcl_file.set_num(1, &tcl_file.din_i_depth);
		sprintf(tvin_din_i, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_din_i, tvin_din_i);

		// [[transaction]]
		sprintf(tvin_freq, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_freq, tvin_freq);

		sc_bv<16> freq_tvin_wrapc_buffer;

		// RTL Name: freq
		{
			// bitslice(15, 0)
			{
				// celement: freq(15, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : freq
						// sub_1st_elem          : 
						// ori_name_1st_elem     : freq
						// regulate_c_name       : freq
						// input_type_conversion : freq
						if (&(freq) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> freq_tmp_mem;
							freq_tmp_mem = freq;
							freq_tvin_wrapc_buffer.range(15, 0) = freq_tmp_mem.range(15, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_freq, "%s\n", (freq_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_freq, tvin_freq);
		}

		tcl_file.set_num(1, &tcl_file.freq_depth);
		sprintf(tvin_freq, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_freq, tvin_freq);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		duc(din_i, freq, dout_i, dout_q);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_dout_i, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout_i, tvout_dout_i);

		sc_bv<18>* dout_i_tvout_wrapc_buffer = new sc_bv<18>[1];

		// RTL Name: dout_i
		{
			// bitslice(17, 0)
			{
				int hls_map_index = 0;
				// celement: dout_i(17, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dout_i[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout_i[0]
						// regulate_c_name       : dout_i
						// input_type_conversion : dout_i[i_0]
						if (&(dout_i[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<18> dout_i_tmp_mem;
							dout_i_tmp_mem = dout_i[i_0];
							dout_i_tvout_wrapc_buffer[hls_map_index].range(17, 0) = dout_i_tmp_mem.range(17, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout_i, "%s\n", (dout_i_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout_i, tvout_dout_i);
		}

		tcl_file.set_num(1, &tcl_file.dout_i_depth);
		sprintf(tvout_dout_i, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout_i, tvout_dout_i);

		// release memory allocation
		delete [] dout_i_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_dout_q, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dout_q, tvout_dout_q);

		sc_bv<18>* dout_q_tvout_wrapc_buffer = new sc_bv<18>[1];

		// RTL Name: dout_q
		{
			// bitslice(17, 0)
			{
				int hls_map_index = 0;
				// celement: dout_q(17, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dout_q[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dout_q[0]
						// regulate_c_name       : dout_q
						// input_type_conversion : dout_q[i_0]
						if (&(dout_q[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<18> dout_q_tmp_mem;
							dout_q_tmp_mem = dout_q[i_0];
							dout_q_tvout_wrapc_buffer[hls_map_index].range(17, 0) = dout_q_tmp_mem.range(17, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dout_q, "%s\n", (dout_q_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dout_q, tvout_dout_q);
		}

		tcl_file.set_num(1, &tcl_file.dout_q_depth);
		sprintf(tvout_dout_q, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dout_q, tvout_dout_q);

		// release memory allocation
		delete [] dout_q_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "din_i"
		delete [] tvin_din_i;
		// release memory allocation: "freq"
		delete [] tvin_freq;
		// release memory allocation: "dout_i"
		delete [] tvout_dout_i;
		// release memory allocation: "dout_q"
		delete [] tvout_dout_q;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}


// apint = int18
#undef int18

// apint = uint16
#undef uint16
