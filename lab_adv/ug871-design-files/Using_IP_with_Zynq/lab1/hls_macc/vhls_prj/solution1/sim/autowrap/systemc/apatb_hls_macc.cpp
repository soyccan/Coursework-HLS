// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
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


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "a"
#define AUTOTB_TVIN_a  "../tv/cdatafile/c.hls_macc.autotvin_a.dat"
// wrapc file define: "b"
#define AUTOTB_TVIN_b  "../tv/cdatafile/c.hls_macc.autotvin_b.dat"
// wrapc file define: "accum"
#define AUTOTB_TVOUT_accum  "../tv/cdatafile/c.hls_macc.autotvout_accum.dat"
// wrapc file define: "accum_clr"
#define AUTOTB_TVIN_accum_clr  "../tv/cdatafile/c.hls_macc.autotvin_accum_clr.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "accum"
#define AUTOTB_TVOUT_PC_accum  "../tv/rtldatafile/rtl.hls_macc.autotvout_accum.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			a_depth = 0;
			b_depth = 0;
			accum_depth = 0;
			accum_clr_depth = 0;
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
			total_list << "{a " << a_depth << "}\n";
			total_list << "{b " << b_depth << "}\n";
			total_list << "{accum " << accum_depth << "}\n";
			total_list << "{accum_clr " << accum_clr_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int a_depth;
		int b_depth;
		int accum_depth;
		int accum_clr_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void hls_macc (
int a,
int b,
int* accum,
_Bool accum_clr);

extern "C" void AESL_WRAP_hls_macc (
int a,
int b,
int* accum,
_Bool accum_clr)
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


		// output port post check: "accum"
		aesl_fh.read(AUTOTB_TVOUT_PC_accum, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_accum, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_accum, AESL_token); // data

			sc_bv<32> *accum_pc_buffer = new sc_bv<32>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'accum', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'accum', possible cause: There are uninitialized variables in the C design." << endl;
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
					accum_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_accum, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_accum))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: accum
				{
					// bitslice(31, 0)
					// {
						// celement: accum(31, 0)
						// {
							sc_lv<32>* accum_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: accum(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(accum[0]) != NULL) // check the null address if the c port is array or others
								{
									accum_lv0_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(accum_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: accum(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : accum[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : accum[0]
								// output_left_conversion : accum[i_0]
								// output_type_conversion : (accum_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(accum[0]) != NULL) // check the null address if the c port is array or others
								{
									accum[i_0] = (accum_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] accum_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "a"
		char* tvin_a = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a);

		// "b"
		char* tvin_b = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_b);

		// "accum"
		char* tvout_accum = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_accum);

		// "accum_clr"
		char* tvin_accum_clr = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_accum_clr);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_a, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a, tvin_a);

		sc_bv<32> a_tvin_wrapc_buffer;

		// RTL Name: a
		{
			// bitslice(31, 0)
			{
				// celement: a(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : a
						// sub_1st_elem          : 
						// ori_name_1st_elem     : a
						// regulate_c_name       : a
						// input_type_conversion : a
						if (&(a) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> a_tmp_mem;
							a_tmp_mem = a;
							a_tvin_wrapc_buffer.range(31, 0) = a_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_a, "%s\n", (a_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a, tvin_a);
		}

		tcl_file.set_num(1, &tcl_file.a_depth);
		sprintf(tvin_a, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a, tvin_a);

		// [[transaction]]
		sprintf(tvin_b, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_b, tvin_b);

		sc_bv<32> b_tvin_wrapc_buffer;

		// RTL Name: b
		{
			// bitslice(31, 0)
			{
				// celement: b(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : b
						// sub_1st_elem          : 
						// ori_name_1st_elem     : b
						// regulate_c_name       : b
						// input_type_conversion : b
						if (&(b) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> b_tmp_mem;
							b_tmp_mem = b;
							b_tvin_wrapc_buffer.range(31, 0) = b_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_b, "%s\n", (b_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_b, tvin_b);
		}

		tcl_file.set_num(1, &tcl_file.b_depth);
		sprintf(tvin_b, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_b, tvin_b);

		// [[transaction]]
		sprintf(tvin_accum_clr, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_accum_clr, tvin_accum_clr);

		sc_bv<1> accum_clr_tvin_wrapc_buffer;

		// RTL Name: accum_clr
		{
			// bitslice(0, 0)
			{
				// celement: accum_clr(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : accum_clr
						// sub_1st_elem          : 
						// ori_name_1st_elem     : accum_clr
						// regulate_c_name       : accum_clr
						// input_type_conversion : accum_clr
						if (&(accum_clr) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> accum_clr_tmp_mem;
							accum_clr_tmp_mem = accum_clr;
							accum_clr_tvin_wrapc_buffer.range(0, 0) = accum_clr_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_accum_clr, "%s\n", (accum_clr_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_accum_clr, tvin_accum_clr);
		}

		tcl_file.set_num(1, &tcl_file.accum_clr_depth);
		sprintf(tvin_accum_clr, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_accum_clr, tvin_accum_clr);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		hls_macc(a, b, accum, accum_clr);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_accum, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_accum, tvout_accum);

		sc_bv<32>* accum_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: accum
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: accum(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : accum[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : accum[0]
						// regulate_c_name       : accum
						// input_type_conversion : accum[i_0]
						if (&(accum[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> accum_tmp_mem;
							accum_tmp_mem = accum[i_0];
							accum_tvout_wrapc_buffer[hls_map_index].range(31, 0) = accum_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_accum, "%s\n", (accum_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_accum, tvout_accum);
		}

		tcl_file.set_num(1, &tcl_file.accum_depth);
		sprintf(tvout_accum, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_accum, tvout_accum);

		// release memory allocation
		delete [] accum_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "a"
		delete [] tvin_a;
		// release memory allocation: "b"
		delete [] tvin_b;
		// release memory allocation: "accum"
		delete [] tvout_accum;
		// release memory allocation: "accum_clr"
		delete [] tvin_accum_clr;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

