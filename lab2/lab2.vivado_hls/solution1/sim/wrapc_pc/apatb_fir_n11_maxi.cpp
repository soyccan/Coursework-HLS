// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

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


// wrapc file define: "gmem"
#define AUTOTB_TVIN_gmem  "../tv/cdatafile/c.fir_n11_maxi.autotvin_gmem.dat"
#define AUTOTB_TVOUT_gmem  "../tv/cdatafile/c.fir_n11_maxi.autotvout_gmem.dat"
// wrapc file define: "pn32HPInput"
#define AUTOTB_TVIN_pn32HPInput  "../tv/cdatafile/c.fir_n11_maxi.autotvin_pn32HPInput.dat"
// wrapc file define: "pn32HPOutput"
#define AUTOTB_TVIN_pn32HPOutput  "../tv/cdatafile/c.fir_n11_maxi.autotvin_pn32HPOutput.dat"
// wrapc file define: "an32Coef"
#define AUTOTB_TVIN_an32Coef  "../tv/cdatafile/c.fir_n11_maxi.autotvin_an32Coef.dat"
// wrapc file define: "regXferLeng_V"
#define AUTOTB_TVIN_regXferLeng_V  "../tv/cdatafile/c.fir_n11_maxi.autotvin_regXferLeng_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "gmem"
#define AUTOTB_TVOUT_PC_gmem  "../tv/rtldatafile/rtl.fir_n11_maxi.autotvout_gmem.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			gmem_depth = 0;
			pn32HPInput_depth = 0;
			pn32HPOutput_depth = 0;
			an32Coef_depth = 0;
			regXferLeng_V_depth = 0;
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
			total_list << "{gmem " << gmem_depth << "}\n";
			total_list << "{pn32HPInput " << pn32HPInput_depth << "}\n";
			total_list << "{pn32HPOutput " << pn32HPOutput_depth << "}\n";
			total_list << "{an32Coef " << an32Coef_depth << "}\n";
			total_list << "{regXferLeng_V " << regXferLeng_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int gmem_depth;
		int pn32HPInput_depth;
		int pn32HPOutput_depth;
		int an32Coef_depth;
		int regXferLeng_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void fir_n11_maxi (
volatile int* pn32HPInput,
volatile int* pn32HPOutput,
int an32Coef[12],
ap_uint<32> regXferLeng);

void AESL_WRAP_fir_n11_maxi (
volatile int* pn32HPInput,
volatile int* pn32HPOutput,
int an32Coef[12],
ap_uint<32> regXferLeng)
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


		// output port post check: "gmem"
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data

			sc_bv<32> *gmem_pc_buffer = new sc_bv<32>[1200];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
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
					gmem_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_gmem))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: gmem
				{
					// bitslice(31, 0)
					// {
						// celement: pn32HPInput(31, 0)
						// {
							sc_lv<32>* pn32HPInput_lv0_0_599_1 = new sc_lv<32>[1200];
						// }
						// celement: pn32HPOutput(31, 0)
						// {
							sc_lv<32>* pn32HPOutput_lv0_0_599_1 = new sc_lv<32>[1200];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: pn32HPInput(31, 0)
						{
							// carray: (0) => (599) @ (1)
							for (int i_0 = 0; i_0 <= 599; i_0 += 1)
							{
								hls_map_index++;
							}
						}
						// celement: pn32HPOutput(31, 0)
						{
							// carray: (0) => (599) @ (1)
							for (int i_0 = 0; i_0 <= 599; i_0 += 1)
							{
								if (&(pn32HPOutput[0]) != NULL) // check the null address if the c port is array or others
								{
									pn32HPOutput_lv0_0_599_1[hls_map_index].range(31, 0) = sc_bv<32>(gmem_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: pn32HPInput(31, 0)
						{
							// carray: (0) => (599) @ (1)
							for (int i_0 = 0; i_0 <= 599; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : pn32HPInput[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : pn32HPInput[0]
								// output_left_conversion : pn32HPInput[i_0]
								// output_type_conversion : (pn32HPInput_lv0_0_599_1[hls_map_index]).to_uint64()
								hls_map_index++;
							}
						}
						// celement: pn32HPOutput(31, 0)
						{
							// carray: (0) => (599) @ (1)
							for (int i_0 = 0; i_0 <= 599; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : pn32HPOutput[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : pn32HPOutput[0]
								// output_left_conversion : pn32HPOutput[i_0]
								// output_type_conversion : (pn32HPOutput_lv0_0_599_1[hls_map_index]).to_uint64()
								if (&(pn32HPOutput[0]) != NULL) // check the null address if the c port is array or others
								{
									pn32HPOutput[i_0] = (pn32HPOutput_lv0_0_599_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] gmem_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "gmem"
		char* tvin_gmem = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_gmem);
		char* tvout_gmem = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_gmem);

		// "pn32HPInput"
		char* tvin_pn32HPInput = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pn32HPInput);

		// "pn32HPOutput"
		char* tvin_pn32HPOutput = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pn32HPOutput);

		// "an32Coef"
		char* tvin_an32Coef = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_an32Coef);

		// "regXferLeng_V"
		char* tvin_regXferLeng_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_regXferLeng_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		sc_bv<32>* gmem_tvin_wrapc_buffer = new sc_bv<32>[1200];

		// RTL Name: gmem
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: pn32HPInput(31, 0)
				{
					// carray: (0) => (599) @ (1)
					for (int i_0 = 0; i_0 <= 599; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pn32HPInput[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pn32HPInput[0]
						// regulate_c_name       : pn32HPInput
						// input_type_conversion : pn32HPInput[i_0]
						if (&(pn32HPInput[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> pn32HPInput_tmp_mem;
							pn32HPInput_tmp_mem = pn32HPInput[i_0];
							gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = pn32HPInput_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: pn32HPOutput(31, 0)
				{
					// carray: (0) => (599) @ (1)
					for (int i_0 = 0; i_0 <= 599; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pn32HPOutput[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pn32HPOutput[0]
						// regulate_c_name       : pn32HPOutput
						// input_type_conversion : pn32HPOutput[i_0]
						if (&(pn32HPOutput[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> pn32HPOutput_tmp_mem;
							pn32HPOutput_tmp_mem = pn32HPOutput[i_0];
							gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = pn32HPOutput_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1200; i++)
		{
			sprintf(tvin_gmem, "%s\n", (gmem_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);
		}

		tcl_file.set_num(1200, &tcl_file.gmem_depth);
		sprintf(tvin_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		// release memory allocation
		delete [] gmem_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_pn32HPInput, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pn32HPInput, tvin_pn32HPInput);

		sc_bv<32> pn32HPInput_tvin_wrapc_buffer;

		// RTL Name: pn32HPInput
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_pn32HPInput, "%s\n", (pn32HPInput_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pn32HPInput, tvin_pn32HPInput);
		}

		tcl_file.set_num(1, &tcl_file.pn32HPInput_depth);
		sprintf(tvin_pn32HPInput, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pn32HPInput, tvin_pn32HPInput);

		// [[transaction]]
		sprintf(tvin_pn32HPOutput, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pn32HPOutput, tvin_pn32HPOutput);

		sc_bv<32> pn32HPOutput_tvin_wrapc_buffer;

		// RTL Name: pn32HPOutput
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_pn32HPOutput, "%s\n", (pn32HPOutput_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pn32HPOutput, tvin_pn32HPOutput);
		}

		tcl_file.set_num(1, &tcl_file.pn32HPOutput_depth);
		sprintf(tvin_pn32HPOutput, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pn32HPOutput, tvin_pn32HPOutput);

		// [[transaction]]
		sprintf(tvin_an32Coef, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_an32Coef, tvin_an32Coef);

		sc_bv<32>* an32Coef_tvin_wrapc_buffer = new sc_bv<32>[12];

		// RTL Name: an32Coef
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: an32Coef(31, 0)
				{
					// carray: (0) => (11) @ (1)
					for (int i_0 = 0; i_0 <= 11; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : an32Coef[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : an32Coef[0]
						// regulate_c_name       : an32Coef
						// input_type_conversion : an32Coef[i_0]
						if (&(an32Coef[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> an32Coef_tmp_mem;
							an32Coef_tmp_mem = an32Coef[i_0];
							an32Coef_tvin_wrapc_buffer[hls_map_index].range(31, 0) = an32Coef_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12; i++)
		{
			sprintf(tvin_an32Coef, "%s\n", (an32Coef_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_an32Coef, tvin_an32Coef);
		}

		tcl_file.set_num(12, &tcl_file.an32Coef_depth);
		sprintf(tvin_an32Coef, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_an32Coef, tvin_an32Coef);

		// release memory allocation
		delete [] an32Coef_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_regXferLeng_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_regXferLeng_V, tvin_regXferLeng_V);

		sc_bv<32> regXferLeng_V_tvin_wrapc_buffer;

		// RTL Name: regXferLeng_V
		{
			// bitslice(31, 0)
			{
				// celement: regXferLeng.V(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : regXferLeng
						// sub_1st_elem          : 
						// ori_name_1st_elem     : regXferLeng
						// regulate_c_name       : regXferLeng_V
						// input_type_conversion : (regXferLeng).to_string(2).c_str()
						if (&(regXferLeng) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> regXferLeng_V_tmp_mem;
							regXferLeng_V_tmp_mem = (regXferLeng).to_string(2).c_str();
							regXferLeng_V_tvin_wrapc_buffer.range(31, 0) = regXferLeng_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_regXferLeng_V, "%s\n", (regXferLeng_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_regXferLeng_V, tvin_regXferLeng_V);
		}

		tcl_file.set_num(1, &tcl_file.regXferLeng_V_depth);
		sprintf(tvin_regXferLeng_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_regXferLeng_V, tvin_regXferLeng_V);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		fir_n11_maxi(pn32HPInput, pn32HPOutput, an32Coef, regXferLeng);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		sc_bv<32>* gmem_tvout_wrapc_buffer = new sc_bv<32>[1200];

		// RTL Name: gmem
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: pn32HPInput(31, 0)
				{
					// carray: (0) => (599) @ (1)
					for (int i_0 = 0; i_0 <= 599; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pn32HPInput[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pn32HPInput[0]
						// regulate_c_name       : pn32HPInput
						// input_type_conversion : pn32HPInput[i_0]
						if (&(pn32HPInput[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> pn32HPInput_tmp_mem;
							pn32HPInput_tmp_mem = pn32HPInput[i_0];
							gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = pn32HPInput_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: pn32HPOutput(31, 0)
				{
					// carray: (0) => (599) @ (1)
					for (int i_0 = 0; i_0 <= 599; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pn32HPOutput[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pn32HPOutput[0]
						// regulate_c_name       : pn32HPOutput
						// input_type_conversion : pn32HPOutput[i_0]
						if (&(pn32HPOutput[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> pn32HPOutput_tmp_mem;
							pn32HPOutput_tmp_mem = pn32HPOutput[i_0];
							gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = pn32HPOutput_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1200; i++)
		{
			sprintf(tvout_gmem, "%s\n", (gmem_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);
		}

		tcl_file.set_num(1200, &tcl_file.gmem_depth);
		sprintf(tvout_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		// release memory allocation
		delete [] gmem_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "gmem"
		delete [] tvin_gmem;
		delete [] tvout_gmem;
		// release memory allocation: "pn32HPInput"
		delete [] tvin_pn32HPInput;
		// release memory allocation: "pn32HPOutput"
		delete [] tvin_pn32HPOutput;
		// release memory allocation: "an32Coef"
		delete [] tvin_an32Coef;
		// release memory allocation: "regXferLeng_V"
		delete [] tvin_regXferLeng_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

