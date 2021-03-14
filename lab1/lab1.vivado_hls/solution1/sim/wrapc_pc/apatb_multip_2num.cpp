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


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "n32In1"
#define AUTOTB_TVIN_n32In1  "../tv/cdatafile/c.multip_2num.autotvin_n32In1.dat"
// wrapc file define: "n32In2"
#define AUTOTB_TVIN_n32In2  "../tv/cdatafile/c.multip_2num.autotvin_n32In2.dat"
// wrapc file define: "pn32ResOut"
#define AUTOTB_TVOUT_pn32ResOut  "../tv/cdatafile/c.multip_2num.autotvout_pn32ResOut.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "pn32ResOut"
#define AUTOTB_TVOUT_PC_pn32ResOut  "../tv/rtldatafile/rtl.multip_2num.autotvout_pn32ResOut.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			n32In1_depth = 0;
			n32In2_depth = 0;
			pn32ResOut_depth = 0;
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
			total_list << "{n32In1 " << n32In1_depth << "}\n";
			total_list << "{n32In2 " << n32In2_depth << "}\n";
			total_list << "{pn32ResOut " << pn32ResOut_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int n32In1_depth;
		int n32In2_depth;
		int pn32ResOut_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void multip_2num (
int n32In1,
int n32In2,
int* pn32ResOut);

void AESL_WRAP_multip_2num (
int n32In1,
int n32In2,
int* pn32ResOut)
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


		// output port post check: "pn32ResOut"
		aesl_fh.read(AUTOTB_TVOUT_PC_pn32ResOut, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pn32ResOut, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pn32ResOut, AESL_token); // data

			sc_bv<32> *pn32ResOut_pc_buffer = new sc_bv<32>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pn32ResOut', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pn32ResOut', possible cause: There are uninitialized variables in the C design." << endl;
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
					pn32ResOut_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pn32ResOut, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pn32ResOut))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pn32ResOut
				{
					// bitslice(31, 0)
					// {
						// celement: pn32ResOut(31, 0)
						// {
							sc_lv<32>* pn32ResOut_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: pn32ResOut(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(pn32ResOut[0]) != NULL) // check the null address if the c port is array or others
								{
									pn32ResOut_lv0_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(pn32ResOut_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: pn32ResOut(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : pn32ResOut[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : pn32ResOut[0]
								// output_left_conversion : pn32ResOut[i_0]
								// output_type_conversion : (pn32ResOut_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(pn32ResOut[0]) != NULL) // check the null address if the c port is array or others
								{
									pn32ResOut[i_0] = (pn32ResOut_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] pn32ResOut_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "n32In1"
		char* tvin_n32In1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_n32In1);

		// "n32In2"
		char* tvin_n32In2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_n32In2);

		// "pn32ResOut"
		char* tvout_pn32ResOut = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pn32ResOut);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_n32In1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_n32In1, tvin_n32In1);

		sc_bv<32> n32In1_tvin_wrapc_buffer;

		// RTL Name: n32In1
		{
			// bitslice(31, 0)
			{
				// celement: n32In1(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : n32In1
						// sub_1st_elem          : 
						// ori_name_1st_elem     : n32In1
						// regulate_c_name       : n32In1
						// input_type_conversion : n32In1
						if (&(n32In1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> n32In1_tmp_mem;
							n32In1_tmp_mem = n32In1;
							n32In1_tvin_wrapc_buffer.range(31, 0) = n32In1_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_n32In1, "%s\n", (n32In1_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_n32In1, tvin_n32In1);
		}

		tcl_file.set_num(1, &tcl_file.n32In1_depth);
		sprintf(tvin_n32In1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_n32In1, tvin_n32In1);

		// [[transaction]]
		sprintf(tvin_n32In2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_n32In2, tvin_n32In2);

		sc_bv<32> n32In2_tvin_wrapc_buffer;

		// RTL Name: n32In2
		{
			// bitslice(31, 0)
			{
				// celement: n32In2(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : n32In2
						// sub_1st_elem          : 
						// ori_name_1st_elem     : n32In2
						// regulate_c_name       : n32In2
						// input_type_conversion : n32In2
						if (&(n32In2) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> n32In2_tmp_mem;
							n32In2_tmp_mem = n32In2;
							n32In2_tvin_wrapc_buffer.range(31, 0) = n32In2_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_n32In2, "%s\n", (n32In2_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_n32In2, tvin_n32In2);
		}

		tcl_file.set_num(1, &tcl_file.n32In2_depth);
		sprintf(tvin_n32In2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_n32In2, tvin_n32In2);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		multip_2num(n32In1, n32In2, pn32ResOut);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_pn32ResOut, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pn32ResOut, tvout_pn32ResOut);

		sc_bv<32>* pn32ResOut_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: pn32ResOut
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: pn32ResOut(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pn32ResOut[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pn32ResOut[0]
						// regulate_c_name       : pn32ResOut
						// input_type_conversion : pn32ResOut[i_0]
						if (&(pn32ResOut[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> pn32ResOut_tmp_mem;
							pn32ResOut_tmp_mem = pn32ResOut[i_0];
							pn32ResOut_tvout_wrapc_buffer[hls_map_index].range(31, 0) = pn32ResOut_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_pn32ResOut, "%s\n", (pn32ResOut_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pn32ResOut, tvout_pn32ResOut);
		}

		tcl_file.set_num(1, &tcl_file.pn32ResOut_depth);
		sprintf(tvout_pn32ResOut, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pn32ResOut, tvout_pn32ResOut);

		// release memory allocation
		delete [] pn32ResOut_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "n32In1"
		delete [] tvin_n32In1;
		// release memory allocation: "n32In2"
		delete [] tvin_n32In2;
		// release memory allocation: "pn32ResOut"
		delete [] tvout_pn32ResOut;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

