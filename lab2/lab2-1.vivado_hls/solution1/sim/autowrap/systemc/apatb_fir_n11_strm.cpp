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
    template< int D ,int U ,int TI ,int TD > struct ap_axiu;
    template<> struct ap_axiu<32, 1, 1, 1> {
        ap_uint<32> data;
        ap_uint<4> keep;
        ap_uint<4> strb;
        ap_uint<1> user;
        ap_uint<1> last;
        ap_uint<1> id;
        ap_uint<1> dest;
       } ;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "pstrmInput_V_data_V"
#define AUTOTB_TVIN_pstrmInput_V_data_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_data_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V  "../tv/stream_size/stream_size_in_pstrmInput_V_data_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_data_V.dat"
// wrapc file define: "pstrmInput_V_keep_V"
#define AUTOTB_TVIN_pstrmInput_V_keep_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_keep_V  "../tv/stream_size/stream_size_in_pstrmInput_V_keep_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_keep_V.dat"
// wrapc file define: "pstrmInput_V_strb_V"
#define AUTOTB_TVIN_pstrmInput_V_strb_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_strb_V  "../tv/stream_size/stream_size_in_pstrmInput_V_strb_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_strb_V.dat"
// wrapc file define: "pstrmInput_V_user_V"
#define AUTOTB_TVIN_pstrmInput_V_user_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_user_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_user_V  "../tv/stream_size/stream_size_in_pstrmInput_V_user_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_user_V.dat"
// wrapc file define: "pstrmInput_V_last_V"
#define AUTOTB_TVIN_pstrmInput_V_last_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_last_V  "../tv/stream_size/stream_size_in_pstrmInput_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_last_V.dat"
// wrapc file define: "pstrmInput_V_id_V"
#define AUTOTB_TVIN_pstrmInput_V_id_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_id_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_id_V  "../tv/stream_size/stream_size_in_pstrmInput_V_id_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_id_V.dat"
// wrapc file define: "pstrmInput_V_dest_V"
#define AUTOTB_TVIN_pstrmInput_V_dest_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmInput_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_IN_pstrmInput_V_dest_V  "../tv/stream_size/stream_size_in_pstrmInput_V_dest_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V  "../tv/stream_size/stream_ingress_status_pstrmInput_V_dest_V.dat"
// wrapc file define: "pstrmOutput_V_data_V"
#define AUTOTB_TVOUT_pstrmOutput_V_data_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_data_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_data_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_data_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_data_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_data_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_data_V.dat"
// wrapc file define: "pstrmOutput_V_keep_V"
#define AUTOTB_TVOUT_pstrmOutput_V_keep_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_keep_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_keep_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_keep_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_keep_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_keep_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_keep_V.dat"
// wrapc file define: "pstrmOutput_V_strb_V"
#define AUTOTB_TVOUT_pstrmOutput_V_strb_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_strb_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_strb_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_strb_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_strb_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_strb_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_strb_V.dat"
// wrapc file define: "pstrmOutput_V_user_V"
#define AUTOTB_TVOUT_pstrmOutput_V_user_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_user_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_user_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_user_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_user_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_user_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_user_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_user_V.dat"
// wrapc file define: "pstrmOutput_V_last_V"
#define AUTOTB_TVOUT_pstrmOutput_V_last_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_last_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_last_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_last_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_last_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_last_V.dat"
// wrapc file define: "pstrmOutput_V_id_V"
#define AUTOTB_TVOUT_pstrmOutput_V_id_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_id_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_id_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_id_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_id_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_id_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_id_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_id_V.dat"
// wrapc file define: "pstrmOutput_V_dest_V"
#define AUTOTB_TVOUT_pstrmOutput_V_dest_V  "../tv/cdatafile/c.fir_n11_strm.autotvout_pstrmOutput_V_dest_V.dat"
#define AUTOTB_TVIN_pstrmOutput_V_dest_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_pstrmOutput_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_dest_V  "../tv/stream_size/stream_size_out_pstrmOutput_V_dest_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_dest_V  "../tv/stream_size/stream_egress_status_pstrmOutput_V_dest_V.dat"
// wrapc file define: "an32Coef"
#define AUTOTB_TVIN_an32Coef  "../tv/cdatafile/c.fir_n11_strm.autotvin_an32Coef.dat"
// wrapc file define: "regXferLeng_V"
#define AUTOTB_TVIN_regXferLeng_V  "../tv/cdatafile/c.fir_n11_strm.autotvin_regXferLeng_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "pstrmOutput_V_data_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_data_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_data_V.dat"
// tvout file define: "pstrmOutput_V_keep_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_keep_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_keep_V.dat"
// tvout file define: "pstrmOutput_V_strb_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_strb_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_strb_V.dat"
// tvout file define: "pstrmOutput_V_user_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_user_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_user_V.dat"
// tvout file define: "pstrmOutput_V_last_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_last_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_last_V.dat"
// tvout file define: "pstrmOutput_V_id_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_id_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_id_V.dat"
// tvout file define: "pstrmOutput_V_dest_V"
#define AUTOTB_TVOUT_PC_pstrmOutput_V_dest_V  "../tv/rtldatafile/rtl.fir_n11_strm.autotvout_pstrmOutput_V_dest_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			pstrmInput_V_data_V_depth = 0;
			pstrmInput_V_keep_V_depth = 0;
			pstrmInput_V_strb_V_depth = 0;
			pstrmInput_V_user_V_depth = 0;
			pstrmInput_V_last_V_depth = 0;
			pstrmInput_V_id_V_depth = 0;
			pstrmInput_V_dest_V_depth = 0;
			pstrmOutput_V_data_V_depth = 0;
			pstrmOutput_V_keep_V_depth = 0;
			pstrmOutput_V_strb_V_depth = 0;
			pstrmOutput_V_user_V_depth = 0;
			pstrmOutput_V_last_V_depth = 0;
			pstrmOutput_V_id_V_depth = 0;
			pstrmOutput_V_dest_V_depth = 0;
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
			total_list << "{pstrmInput_V_data_V " << pstrmInput_V_data_V_depth << "}\n";
			total_list << "{pstrmInput_V_keep_V " << pstrmInput_V_keep_V_depth << "}\n";
			total_list << "{pstrmInput_V_strb_V " << pstrmInput_V_strb_V_depth << "}\n";
			total_list << "{pstrmInput_V_user_V " << pstrmInput_V_user_V_depth << "}\n";
			total_list << "{pstrmInput_V_last_V " << pstrmInput_V_last_V_depth << "}\n";
			total_list << "{pstrmInput_V_id_V " << pstrmInput_V_id_V_depth << "}\n";
			total_list << "{pstrmInput_V_dest_V " << pstrmInput_V_dest_V_depth << "}\n";
			total_list << "{pstrmOutput_V_data_V " << pstrmOutput_V_data_V_depth << "}\n";
			total_list << "{pstrmOutput_V_keep_V " << pstrmOutput_V_keep_V_depth << "}\n";
			total_list << "{pstrmOutput_V_strb_V " << pstrmOutput_V_strb_V_depth << "}\n";
			total_list << "{pstrmOutput_V_user_V " << pstrmOutput_V_user_V_depth << "}\n";
			total_list << "{pstrmOutput_V_last_V " << pstrmOutput_V_last_V_depth << "}\n";
			total_list << "{pstrmOutput_V_id_V " << pstrmOutput_V_id_V_depth << "}\n";
			total_list << "{pstrmOutput_V_dest_V " << pstrmOutput_V_dest_V_depth << "}\n";
			total_list << "{an32Coef " << an32Coef_depth << "}\n";
			total_list << "{regXferLeng_V " << regXferLeng_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int pstrmInput_V_data_V_depth;
		int pstrmInput_V_keep_V_depth;
		int pstrmInput_V_strb_V_depth;
		int pstrmInput_V_user_V_depth;
		int pstrmInput_V_last_V_depth;
		int pstrmInput_V_id_V_depth;
		int pstrmInput_V_dest_V_depth;
		int pstrmOutput_V_data_V_depth;
		int pstrmOutput_V_keep_V_depth;
		int pstrmOutput_V_strb_V_depth;
		int pstrmOutput_V_user_V_depth;
		int pstrmOutput_V_last_V_depth;
		int pstrmOutput_V_id_V_depth;
		int pstrmOutput_V_dest_V_depth;
		int an32Coef_depth;
		int regXferLeng_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void fir_n11_strm (
hls::stream<ap_axiu<32, 1, 1, 1 > >* pstrmInput,
hls::stream<ap_axiu<32, 1, 1, 1 > >* pstrmOutput,
int an32Coef[12],
ap_uint<32> regXferLeng);

void AESL_WRAP_fir_n11_strm (
hls::stream<ap_axiu<32, 1, 1, 1 > >* pstrmInput,
hls::stream<ap_axiu<32, 1, 1, 1 > >* pstrmOutput,
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

		// pop stream input: "pstrmInput[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, AESL_token); // pop_size
			int aesl_tmp_1 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_1; i++)
			{
				pstrmInput[0].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "pstrmOutput[0]"
		std::vector<ap_axiu<32, 1, 1, 1 > > aesl_tmp_3;
		int aesl_tmp_4;
		int aesl_tmp_5 = 0;

		// read output stream size: "pstrmOutput[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, AESL_token); // pop_size
			aesl_tmp_4 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "pstrmOutput_V_data_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_data_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_data_V, AESL_token); // data

			std::vector<sc_bv<32> > pstrmOutput_V_data_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_data_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_data_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_data_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_data_V
				{
					// bitslice(31, 0)
					// {
						// celement: pstrmOutput.V.data.V(31, 0)
						// {
							sc_lv<32>* pstrmOutput_V_data_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<32>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.data.V(31, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(pstrmOutput_V_data_V_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.data.V(31, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data
									// output_left_conversion : aesl_tmp_3[i_0].data
									// output_type_conversion : (pstrmOutput_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].data = (pstrmOutput_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "pstrmOutput_V_keep_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_keep_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_keep_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_keep_V, AESL_token); // data

			std::vector<sc_bv<4> > pstrmOutput_V_keep_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_keep_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_keep_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_keep_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_keep_V
				{
					// bitslice(3, 0)
					// {
						// celement: pstrmOutput.V.keep.V(3, 0)
						// {
							sc_lv<4>* pstrmOutput_V_keep_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<4>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.keep.V(3, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(3, 0) = sc_bv<4>(pstrmOutput_V_keep_V_pc_buffer[hls_map_index].range(3, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.keep.V(3, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].keep
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].keep
									// output_left_conversion : aesl_tmp_3[i_0].keep
									// output_type_conversion : (pstrmOutput_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].keep = (pstrmOutput_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "pstrmOutput_V_strb_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_strb_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_strb_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_strb_V, AESL_token); // data

			std::vector<sc_bv<4> > pstrmOutput_V_strb_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_strb_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_strb_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_strb_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_strb_V
				{
					// bitslice(3, 0)
					// {
						// celement: pstrmOutput.V.strb.V(3, 0)
						// {
							sc_lv<4>* pstrmOutput_V_strb_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<4>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.strb.V(3, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(3, 0) = sc_bv<4>(pstrmOutput_V_strb_V_pc_buffer[hls_map_index].range(3, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(3, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.strb.V(3, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].strb
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].strb
									// output_left_conversion : aesl_tmp_3[i_0].strb
									// output_type_conversion : (pstrmOutput_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].strb = (pstrmOutput_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "pstrmOutput_V_user_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_user_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_user_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_user_V, AESL_token); // data

			std::vector<sc_bv<1> > pstrmOutput_V_user_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_user_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_user_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_user_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_user_V
				{
					// bitslice(0, 0)
					// {
						// celement: pstrmOutput.V.user.V(0, 0)
						// {
							sc_lv<1>* pstrmOutput_V_user_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.user.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(pstrmOutput_V_user_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.user.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].user
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].user
									// output_left_conversion : aesl_tmp_3[i_0].user
									// output_type_conversion : (pstrmOutput_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].user = (pstrmOutput_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "pstrmOutput_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > pstrmOutput_V_last_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: pstrmOutput.V.last.V(0, 0)
						// {
							sc_lv<1>* pstrmOutput_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(pstrmOutput_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].last
									// output_left_conversion : aesl_tmp_3[i_0].last
									// output_type_conversion : (pstrmOutput_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].last = (pstrmOutput_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "pstrmOutput_V_id_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_id_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_id_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_id_V, AESL_token); // data

			std::vector<sc_bv<1> > pstrmOutput_V_id_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_id_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_id_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_id_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_id_V
				{
					// bitslice(0, 0)
					// {
						// celement: pstrmOutput.V.id.V(0, 0)
						// {
							sc_lv<1>* pstrmOutput_V_id_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.id.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(pstrmOutput_V_id_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.id.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].id
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].id
									// output_left_conversion : aesl_tmp_3[i_0].id
									// output_type_conversion : (pstrmOutput_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].id = (pstrmOutput_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "pstrmOutput_V_dest_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_dest_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_dest_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_dest_V, AESL_token); // data

			std::vector<sc_bv<1> > pstrmOutput_V_dest_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pstrmOutput_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					pstrmOutput_V_dest_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pstrmOutput_V_dest_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pstrmOutput_V_dest_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<32, 1, 1, 1 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pstrmOutput_V_dest_V
				{
					// bitslice(0, 0)
					// {
						// celement: pstrmOutput.V.dest.V(0, 0)
						// {
							sc_lv<1>* pstrmOutput_V_dest_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.dest.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										pstrmOutput_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(pstrmOutput_V_dest_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: pstrmOutput.V.dest.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].dest
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].dest
									// output_left_conversion : aesl_tmp_3[i_0].dest
									// output_type_conversion : (pstrmOutput_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].dest = (pstrmOutput_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "pstrmOutput[0]"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			pstrmOutput[0].write(aesl_tmp_3[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "pstrmInput_V_data_V"
		char* tvin_pstrmInput_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_data_V);
		char* wrapc_stream_size_in_pstrmInput_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V);

		// "pstrmInput_V_keep_V"
		char* tvin_pstrmInput_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_keep_V);
		char* wrapc_stream_size_in_pstrmInput_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_keep_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V);

		// "pstrmInput_V_strb_V"
		char* tvin_pstrmInput_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_strb_V);
		char* wrapc_stream_size_in_pstrmInput_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_strb_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V);

		// "pstrmInput_V_user_V"
		char* tvin_pstrmInput_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_user_V);
		char* wrapc_stream_size_in_pstrmInput_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_user_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V);

		// "pstrmInput_V_last_V"
		char* tvin_pstrmInput_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_last_V);
		char* wrapc_stream_size_in_pstrmInput_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_last_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V);

		// "pstrmInput_V_id_V"
		char* tvin_pstrmInput_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_id_V);
		char* wrapc_stream_size_in_pstrmInput_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_id_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V);

		// "pstrmInput_V_dest_V"
		char* tvin_pstrmInput_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmInput_V_dest_V);
		char* wrapc_stream_size_in_pstrmInput_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_pstrmInput_V_dest_V);
		char* wrapc_stream_ingress_status_pstrmInput_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V);

		// "pstrmOutput_V_data_V"
		char* tvin_pstrmOutput_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_data_V);
		char* tvout_pstrmOutput_V_data_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_data_V);
		char* wrapc_stream_size_out_pstrmOutput_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_data_V);

		// "pstrmOutput_V_keep_V"
		char* tvin_pstrmOutput_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_keep_V);
		char* tvout_pstrmOutput_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_keep_V);
		char* wrapc_stream_size_out_pstrmOutput_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_keep_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_keep_V);

		// "pstrmOutput_V_strb_V"
		char* tvin_pstrmOutput_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_strb_V);
		char* tvout_pstrmOutput_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_strb_V);
		char* wrapc_stream_size_out_pstrmOutput_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_strb_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_strb_V);

		// "pstrmOutput_V_user_V"
		char* tvin_pstrmOutput_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_user_V);
		char* tvout_pstrmOutput_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_user_V);
		char* wrapc_stream_size_out_pstrmOutput_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_user_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_user_V);

		// "pstrmOutput_V_last_V"
		char* tvin_pstrmOutput_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_last_V);
		char* tvout_pstrmOutput_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_last_V);
		char* wrapc_stream_size_out_pstrmOutput_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_last_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_last_V);

		// "pstrmOutput_V_id_V"
		char* tvin_pstrmOutput_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_id_V);
		char* tvout_pstrmOutput_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_id_V);
		char* wrapc_stream_size_out_pstrmOutput_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_id_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_id_V);

		// "pstrmOutput_V_dest_V"
		char* tvin_pstrmOutput_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pstrmOutput_V_dest_V);
		char* tvout_pstrmOutput_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pstrmOutput_V_dest_V);
		char* wrapc_stream_size_out_pstrmOutput_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_dest_V);
		char* wrapc_stream_egress_status_pstrmOutput_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_pstrmOutput_V_dest_V);

		// "an32Coef"
		char* tvin_an32Coef = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_an32Coef);

		// "regXferLeng_V"
		char* tvin_regXferLeng_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_regXferLeng_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "pstrmInput[0]"
		std::vector<ap_axiu<32, 1, 1, 1 > > aesl_tmp_0;
		int aesl_tmp_1 = 0;
		while (!pstrmInput[0].empty())
		{
			aesl_tmp_0.push_back(pstrmInput[0].read());
			aesl_tmp_1++;
		}

		// dump stream tvin: "pstrmOutput[0]"
		std::vector<ap_axiu<32, 1, 1, 1 > > aesl_tmp_3;
		int aesl_tmp_4 = 0;
		while (!pstrmOutput[0].empty())
		{
			aesl_tmp_3.push_back(pstrmOutput[0].read());
			aesl_tmp_4++;
		}

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

		// push back input stream: "pstrmInput[0]"
		for (int i = 0; i < aesl_tmp_1; i++)
		{
			pstrmInput[0].write(aesl_tmp_0[i]);
		}

		// push back input stream: "pstrmOutput[0]"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			pstrmOutput[0].write(aesl_tmp_3[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		fir_n11_strm(pstrmInput, pstrmOutput, an32Coef, regXferLeng);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "pstrmInput[0]"
		int aesl_tmp_2 = pstrmInput[0].size();

		// pop output stream: "pstrmOutput[0]"
		int aesl_tmp_5 = aesl_tmp_4;
		aesl_tmp_4 = 0;
     aesl_tmp_3.clear();
		while (!pstrmOutput[0].empty())
		{
			aesl_tmp_3.push_back(pstrmOutput[0].read());
			aesl_tmp_4++;
		}

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_data_V, tvin_pstrmInput_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, tvin_pstrmInput_V_data_V);

		sc_bv<32>* pstrmInput_V_data_V_tvin_wrapc_buffer = new sc_bv<32>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_data_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.data.V(31, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data
							// regulate_c_name       : pstrmInput_V_data_V
							// input_type_conversion : (aesl_tmp_0[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_0[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> pstrmInput_V_data_V_tmp_mem;
								pstrmInput_V_data_V_tmp_mem = (aesl_tmp_0[i_0].data).to_string(2).c_str();
								pstrmInput_V_data_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = pstrmInput_V_data_V_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_data_V, "%s\n", (pstrmInput_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_data_V, tvin_pstrmInput_V_data_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_data_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, stream_ingress_size_pstrmInput_V_data_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_data_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, stream_ingress_size_pstrmInput_V_data_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_data_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, stream_ingress_size_pstrmInput_V_data_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_data_V_depth);
		sprintf(tvin_pstrmInput_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_data_V, tvin_pstrmInput_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_data_V, tvin_pstrmInput_V_data_V);

		// release memory allocation
		delete [] pstrmInput_V_data_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, wrapc_stream_size_in_pstrmInput_V_data_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_data_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, wrapc_stream_size_in_pstrmInput_V_data_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_data_V, wrapc_stream_size_in_pstrmInput_V_data_V);

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_keep_V, tvin_pstrmInput_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, tvin_pstrmInput_V_keep_V);

		sc_bv<4>* pstrmInput_V_keep_V_tvin_wrapc_buffer = new sc_bv<4>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_keep_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.keep.V(3, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].keep
							// regulate_c_name       : pstrmInput_V_keep_V
							// input_type_conversion : (aesl_tmp_0[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_0[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> pstrmInput_V_keep_V_tmp_mem;
								pstrmInput_V_keep_V_tmp_mem = (aesl_tmp_0[i_0].keep).to_string(2).c_str();
								pstrmInput_V_keep_V_tvin_wrapc_buffer[hls_map_index].range(3, 0) = pstrmInput_V_keep_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_keep_V, "%s\n", (pstrmInput_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_keep_V, tvin_pstrmInput_V_keep_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_keep_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, stream_ingress_size_pstrmInput_V_keep_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_keep_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, stream_ingress_size_pstrmInput_V_keep_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_keep_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, stream_ingress_size_pstrmInput_V_keep_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_keep_V_depth);
		sprintf(tvin_pstrmInput_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_keep_V, tvin_pstrmInput_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_keep_V, tvin_pstrmInput_V_keep_V);

		// release memory allocation
		delete [] pstrmInput_V_keep_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_keep_V, wrapc_stream_size_in_pstrmInput_V_keep_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_keep_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_keep_V, wrapc_stream_size_in_pstrmInput_V_keep_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_keep_V, wrapc_stream_size_in_pstrmInput_V_keep_V);

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_strb_V, tvin_pstrmInput_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, tvin_pstrmInput_V_strb_V);

		sc_bv<4>* pstrmInput_V_strb_V_tvin_wrapc_buffer = new sc_bv<4>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_strb_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.strb.V(3, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].strb
							// regulate_c_name       : pstrmInput_V_strb_V
							// input_type_conversion : (aesl_tmp_0[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_0[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> pstrmInput_V_strb_V_tmp_mem;
								pstrmInput_V_strb_V_tmp_mem = (aesl_tmp_0[i_0].strb).to_string(2).c_str();
								pstrmInput_V_strb_V_tvin_wrapc_buffer[hls_map_index].range(3, 0) = pstrmInput_V_strb_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_strb_V, "%s\n", (pstrmInput_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_strb_V, tvin_pstrmInput_V_strb_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_strb_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, stream_ingress_size_pstrmInput_V_strb_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_strb_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, stream_ingress_size_pstrmInput_V_strb_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_strb_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, stream_ingress_size_pstrmInput_V_strb_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_strb_V_depth);
		sprintf(tvin_pstrmInput_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_strb_V, tvin_pstrmInput_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_strb_V, tvin_pstrmInput_V_strb_V);

		// release memory allocation
		delete [] pstrmInput_V_strb_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_strb_V, wrapc_stream_size_in_pstrmInput_V_strb_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_strb_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_strb_V, wrapc_stream_size_in_pstrmInput_V_strb_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_strb_V, wrapc_stream_size_in_pstrmInput_V_strb_V);

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_user_V, tvin_pstrmInput_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, tvin_pstrmInput_V_user_V);

		sc_bv<1>* pstrmInput_V_user_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_user_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.user.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].user
							// regulate_c_name       : pstrmInput_V_user_V
							// input_type_conversion : (aesl_tmp_0[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_0[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmInput_V_user_V_tmp_mem;
								pstrmInput_V_user_V_tmp_mem = (aesl_tmp_0[i_0].user).to_string(2).c_str();
								pstrmInput_V_user_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = pstrmInput_V_user_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_user_V, "%s\n", (pstrmInput_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_user_V, tvin_pstrmInput_V_user_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_user_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, stream_ingress_size_pstrmInput_V_user_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_user_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, stream_ingress_size_pstrmInput_V_user_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_user_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, stream_ingress_size_pstrmInput_V_user_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_user_V_depth);
		sprintf(tvin_pstrmInput_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_user_V, tvin_pstrmInput_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_user_V, tvin_pstrmInput_V_user_V);

		// release memory allocation
		delete [] pstrmInput_V_user_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_user_V, wrapc_stream_size_in_pstrmInput_V_user_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_user_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_user_V, wrapc_stream_size_in_pstrmInput_V_user_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_user_V, wrapc_stream_size_in_pstrmInput_V_user_V);

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_last_V, tvin_pstrmInput_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, tvin_pstrmInput_V_last_V);

		sc_bv<1>* pstrmInput_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].last
							// regulate_c_name       : pstrmInput_V_last_V
							// input_type_conversion : (aesl_tmp_0[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_0[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmInput_V_last_V_tmp_mem;
								pstrmInput_V_last_V_tmp_mem = (aesl_tmp_0[i_0].last).to_string(2).c_str();
								pstrmInput_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = pstrmInput_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_last_V, "%s\n", (pstrmInput_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_last_V, tvin_pstrmInput_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_last_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, stream_ingress_size_pstrmInput_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, stream_ingress_size_pstrmInput_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, stream_ingress_size_pstrmInput_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_last_V_depth);
		sprintf(tvin_pstrmInput_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_last_V, tvin_pstrmInput_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_last_V, tvin_pstrmInput_V_last_V);

		// release memory allocation
		delete [] pstrmInput_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_last_V, wrapc_stream_size_in_pstrmInput_V_last_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_last_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_last_V, wrapc_stream_size_in_pstrmInput_V_last_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_last_V, wrapc_stream_size_in_pstrmInput_V_last_V);

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_id_V, tvin_pstrmInput_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, tvin_pstrmInput_V_id_V);

		sc_bv<1>* pstrmInput_V_id_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_id_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.id.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].id
							// regulate_c_name       : pstrmInput_V_id_V
							// input_type_conversion : (aesl_tmp_0[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_0[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmInput_V_id_V_tmp_mem;
								pstrmInput_V_id_V_tmp_mem = (aesl_tmp_0[i_0].id).to_string(2).c_str();
								pstrmInput_V_id_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = pstrmInput_V_id_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_id_V, "%s\n", (pstrmInput_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_id_V, tvin_pstrmInput_V_id_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_id_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, stream_ingress_size_pstrmInput_V_id_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_id_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, stream_ingress_size_pstrmInput_V_id_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_id_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, stream_ingress_size_pstrmInput_V_id_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_id_V_depth);
		sprintf(tvin_pstrmInput_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_id_V, tvin_pstrmInput_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_id_V, tvin_pstrmInput_V_id_V);

		// release memory allocation
		delete [] pstrmInput_V_id_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_id_V, wrapc_stream_size_in_pstrmInput_V_id_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_id_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_id_V, wrapc_stream_size_in_pstrmInput_V_id_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_id_V, wrapc_stream_size_in_pstrmInput_V_id_V);

		// [[transaction]]
		sprintf(tvin_pstrmInput_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_dest_V, tvin_pstrmInput_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, tvin_pstrmInput_V_dest_V);

		sc_bv<1>* pstrmInput_V_dest_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: pstrmInput_V_dest_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmInput.V.dest.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].dest
							// regulate_c_name       : pstrmInput_V_dest_V
							// input_type_conversion : (aesl_tmp_0[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_0[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmInput_V_dest_V_tmp_mem;
								pstrmInput_V_dest_V_tmp_mem = (aesl_tmp_0[i_0].dest).to_string(2).c_str();
								pstrmInput_V_dest_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = pstrmInput_V_dest_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_pstrmInput_V_dest_V, "%s\n", (pstrmInput_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_dest_V, tvin_pstrmInput_V_dest_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_pstrmInput_V_dest_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, stream_ingress_size_pstrmInput_V_dest_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_pstrmInput_V_dest_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, stream_ingress_size_pstrmInput_V_dest_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_pstrmInput_V_dest_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, stream_ingress_size_pstrmInput_V_dest_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.pstrmInput_V_dest_V_depth);
		sprintf(tvin_pstrmInput_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pstrmInput_V_dest_V, tvin_pstrmInput_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_pstrmInput_V_dest_V, tvin_pstrmInput_V_dest_V);

		// release memory allocation
		delete [] pstrmInput_V_dest_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_pstrmInput_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_dest_V, wrapc_stream_size_in_pstrmInput_V_dest_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_dest_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_dest_V, wrapc_stream_size_in_pstrmInput_V_dest_V);
		sprintf(wrapc_stream_size_in_pstrmInput_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_pstrmInput_V_dest_V, wrapc_stream_size_in_pstrmInput_V_dest_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_data_V, tvout_pstrmOutput_V_data_V);

		sc_bv<32>* pstrmOutput_V_data_V_tvout_wrapc_buffer = new sc_bv<32>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_data_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.data.V(31, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data
							// regulate_c_name       : pstrmOutput_V_data_V
							// input_type_conversion : (aesl_tmp_3[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> pstrmOutput_V_data_V_tmp_mem;
								pstrmOutput_V_data_V_tmp_mem = (aesl_tmp_3[i_0].data).to_string(2).c_str();
								pstrmOutput_V_data_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = pstrmOutput_V_data_V_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_data_V, "%s\n", (pstrmOutput_V_data_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_data_V, tvout_pstrmOutput_V_data_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_data_V_depth);
		sprintf(tvout_pstrmOutput_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_data_V, tvout_pstrmOutput_V_data_V);

		// release memory allocation
		delete [] pstrmOutput_V_data_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, wrapc_stream_size_out_pstrmOutput_V_data_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_data_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, wrapc_stream_size_out_pstrmOutput_V_data_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_data_V, wrapc_stream_size_out_pstrmOutput_V_data_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_keep_V, tvout_pstrmOutput_V_keep_V);

		sc_bv<4>* pstrmOutput_V_keep_V_tvout_wrapc_buffer = new sc_bv<4>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_keep_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.keep.V(3, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].keep
							// regulate_c_name       : pstrmOutput_V_keep_V
							// input_type_conversion : (aesl_tmp_3[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> pstrmOutput_V_keep_V_tmp_mem;
								pstrmOutput_V_keep_V_tmp_mem = (aesl_tmp_3[i_0].keep).to_string(2).c_str();
								pstrmOutput_V_keep_V_tvout_wrapc_buffer[hls_map_index].range(3, 0) = pstrmOutput_V_keep_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_keep_V, "%s\n", (pstrmOutput_V_keep_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_keep_V, tvout_pstrmOutput_V_keep_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_keep_V_depth);
		sprintf(tvout_pstrmOutput_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_keep_V, tvout_pstrmOutput_V_keep_V);

		// release memory allocation
		delete [] pstrmOutput_V_keep_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_keep_V, wrapc_stream_size_out_pstrmOutput_V_keep_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_keep_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_keep_V, wrapc_stream_size_out_pstrmOutput_V_keep_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_keep_V, wrapc_stream_size_out_pstrmOutput_V_keep_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_strb_V, tvout_pstrmOutput_V_strb_V);

		sc_bv<4>* pstrmOutput_V_strb_V_tvout_wrapc_buffer = new sc_bv<4>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_strb_V
		{
			// bitslice(3, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.strb.V(3, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].strb
							// regulate_c_name       : pstrmOutput_V_strb_V
							// input_type_conversion : (aesl_tmp_3[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<4> pstrmOutput_V_strb_V_tmp_mem;
								pstrmOutput_V_strb_V_tmp_mem = (aesl_tmp_3[i_0].strb).to_string(2).c_str();
								pstrmOutput_V_strb_V_tvout_wrapc_buffer[hls_map_index].range(3, 0) = pstrmOutput_V_strb_V_tmp_mem.range(3, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_strb_V, "%s\n", (pstrmOutput_V_strb_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_strb_V, tvout_pstrmOutput_V_strb_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_strb_V_depth);
		sprintf(tvout_pstrmOutput_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_strb_V, tvout_pstrmOutput_V_strb_V);

		// release memory allocation
		delete [] pstrmOutput_V_strb_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_strb_V, wrapc_stream_size_out_pstrmOutput_V_strb_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_strb_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_strb_V, wrapc_stream_size_out_pstrmOutput_V_strb_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_strb_V, wrapc_stream_size_out_pstrmOutput_V_strb_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_user_V, tvout_pstrmOutput_V_user_V);

		sc_bv<1>* pstrmOutput_V_user_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_user_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.user.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].user
							// regulate_c_name       : pstrmOutput_V_user_V
							// input_type_conversion : (aesl_tmp_3[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmOutput_V_user_V_tmp_mem;
								pstrmOutput_V_user_V_tmp_mem = (aesl_tmp_3[i_0].user).to_string(2).c_str();
								pstrmOutput_V_user_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = pstrmOutput_V_user_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_user_V, "%s\n", (pstrmOutput_V_user_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_user_V, tvout_pstrmOutput_V_user_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_user_V_depth);
		sprintf(tvout_pstrmOutput_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_user_V, tvout_pstrmOutput_V_user_V);

		// release memory allocation
		delete [] pstrmOutput_V_user_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_user_V, wrapc_stream_size_out_pstrmOutput_V_user_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_user_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_user_V, wrapc_stream_size_out_pstrmOutput_V_user_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_user_V, wrapc_stream_size_out_pstrmOutput_V_user_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_last_V, tvout_pstrmOutput_V_last_V);

		sc_bv<1>* pstrmOutput_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].last
							// regulate_c_name       : pstrmOutput_V_last_V
							// input_type_conversion : (aesl_tmp_3[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmOutput_V_last_V_tmp_mem;
								pstrmOutput_V_last_V_tmp_mem = (aesl_tmp_3[i_0].last).to_string(2).c_str();
								pstrmOutput_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = pstrmOutput_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_last_V, "%s\n", (pstrmOutput_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_last_V, tvout_pstrmOutput_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_last_V_depth);
		sprintf(tvout_pstrmOutput_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_last_V, tvout_pstrmOutput_V_last_V);

		// release memory allocation
		delete [] pstrmOutput_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_last_V, wrapc_stream_size_out_pstrmOutput_V_last_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_last_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_last_V, wrapc_stream_size_out_pstrmOutput_V_last_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_last_V, wrapc_stream_size_out_pstrmOutput_V_last_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_id_V, tvout_pstrmOutput_V_id_V);

		sc_bv<1>* pstrmOutput_V_id_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_id_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.id.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].id
							// regulate_c_name       : pstrmOutput_V_id_V
							// input_type_conversion : (aesl_tmp_3[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmOutput_V_id_V_tmp_mem;
								pstrmOutput_V_id_V_tmp_mem = (aesl_tmp_3[i_0].id).to_string(2).c_str();
								pstrmOutput_V_id_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = pstrmOutput_V_id_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_id_V, "%s\n", (pstrmOutput_V_id_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_id_V, tvout_pstrmOutput_V_id_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_id_V_depth);
		sprintf(tvout_pstrmOutput_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_id_V, tvout_pstrmOutput_V_id_V);

		// release memory allocation
		delete [] pstrmOutput_V_id_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_id_V, wrapc_stream_size_out_pstrmOutput_V_id_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_id_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_id_V, wrapc_stream_size_out_pstrmOutput_V_id_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_id_V, wrapc_stream_size_out_pstrmOutput_V_id_V);

		// [[transaction]]
		sprintf(tvout_pstrmOutput_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_dest_V, tvout_pstrmOutput_V_dest_V);

		sc_bv<1>* pstrmOutput_V_dest_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: pstrmOutput_V_dest_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: pstrmOutput.V.dest.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].dest
							// regulate_c_name       : pstrmOutput_V_dest_V
							// input_type_conversion : (aesl_tmp_3[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> pstrmOutput_V_dest_V_tmp_mem;
								pstrmOutput_V_dest_V_tmp_mem = (aesl_tmp_3[i_0].dest).to_string(2).c_str();
								pstrmOutput_V_dest_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = pstrmOutput_V_dest_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_pstrmOutput_V_dest_V, "%s\n", (pstrmOutput_V_dest_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_dest_V, tvout_pstrmOutput_V_dest_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.pstrmOutput_V_dest_V_depth);
		sprintf(tvout_pstrmOutput_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pstrmOutput_V_dest_V, tvout_pstrmOutput_V_dest_V);

		// release memory allocation
		delete [] pstrmOutput_V_dest_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_pstrmOutput_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_dest_V, wrapc_stream_size_out_pstrmOutput_V_dest_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_dest_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_dest_V, wrapc_stream_size_out_pstrmOutput_V_dest_V);
		sprintf(wrapc_stream_size_out_pstrmOutput_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_pstrmOutput_V_dest_V, wrapc_stream_size_out_pstrmOutput_V_dest_V);

		// push back output stream: "pstrmOutput[0]"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			pstrmOutput[0].write(aesl_tmp_3[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "pstrmInput_V_data_V"
		delete [] tvin_pstrmInput_V_data_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_data_V;
		// release memory allocation: "pstrmInput_V_keep_V"
		delete [] tvin_pstrmInput_V_keep_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_keep_V;
		// release memory allocation: "pstrmInput_V_strb_V"
		delete [] tvin_pstrmInput_V_strb_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_strb_V;
		// release memory allocation: "pstrmInput_V_user_V"
		delete [] tvin_pstrmInput_V_user_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_user_V;
		// release memory allocation: "pstrmInput_V_last_V"
		delete [] tvin_pstrmInput_V_last_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_last_V;
		// release memory allocation: "pstrmInput_V_id_V"
		delete [] tvin_pstrmInput_V_id_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_id_V;
		// release memory allocation: "pstrmInput_V_dest_V"
		delete [] tvin_pstrmInput_V_dest_V;
		delete [] wrapc_stream_size_in_pstrmInput_V_dest_V;
		// release memory allocation: "pstrmOutput_V_data_V"
		delete [] tvout_pstrmOutput_V_data_V;
		delete [] tvin_pstrmOutput_V_data_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_data_V;
		// release memory allocation: "pstrmOutput_V_keep_V"
		delete [] tvout_pstrmOutput_V_keep_V;
		delete [] tvin_pstrmOutput_V_keep_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_keep_V;
		// release memory allocation: "pstrmOutput_V_strb_V"
		delete [] tvout_pstrmOutput_V_strb_V;
		delete [] tvin_pstrmOutput_V_strb_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_strb_V;
		// release memory allocation: "pstrmOutput_V_user_V"
		delete [] tvout_pstrmOutput_V_user_V;
		delete [] tvin_pstrmOutput_V_user_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_user_V;
		// release memory allocation: "pstrmOutput_V_last_V"
		delete [] tvout_pstrmOutput_V_last_V;
		delete [] tvin_pstrmOutput_V_last_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_last_V;
		// release memory allocation: "pstrmOutput_V_id_V"
		delete [] tvout_pstrmOutput_V_id_V;
		delete [] tvin_pstrmOutput_V_id_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_id_V;
		// release memory allocation: "pstrmOutput_V_dest_V"
		delete [] tvout_pstrmOutput_V_dest_V;
		delete [] tvin_pstrmOutput_V_dest_V;
		delete [] wrapc_stream_size_out_pstrmOutput_V_dest_V;
		// release memory allocation: "an32Coef"
		delete [] tvin_an32Coef;
		// release memory allocation: "regXferLeng_V"
		delete [] tvin_regXferLeng_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

