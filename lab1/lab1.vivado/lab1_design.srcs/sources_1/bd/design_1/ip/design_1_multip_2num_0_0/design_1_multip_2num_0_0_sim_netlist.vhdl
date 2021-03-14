-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Wed Mar  3 12:29:41 2021
-- Host        : EMPEROR running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim
--               d:/Vivado/lab1_design/lab1_design.srcs/sources_1/bd/design_1/ip/design_1_multip_2num_0_0/design_1_multip_2num_0_0_sim_netlist.vhdl
-- Design      : design_1_multip_2num_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_multip_2num_0_0_multip_2num_AXILiteS_s_axi is
  port (
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    s_axi_AXILiteS_RVALID : out STD_LOGIC;
    \FSM_onehot_rstate_reg[1]_0\ : out STD_LOGIC;
    Q : out STD_LOGIC_VECTOR ( 31 downto 0 );
    \int_n32In2_reg[31]_0\ : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_BVALID : out STD_LOGIC;
    \FSM_onehot_wstate_reg[2]_0\ : out STD_LOGIC;
    \FSM_onehot_wstate_reg[1]_0\ : out STD_LOGIC;
    s_axi_AXILiteS_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    ap_clk : in STD_LOGIC;
    s_axi_AXILiteS_ARADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_AXILiteS_RREADY : in STD_LOGIC;
    s_axi_AXILiteS_ARVALID : in STD_LOGIC;
    s_axi_AXILiteS_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ap_rst_n : in STD_LOGIC;
    \int_pn32ResOut_reg[0]_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s_axi_AXILiteS_AWADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    \int_pn32ResOut_reg[31]_0\ : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_AWVALID : in STD_LOGIC;
    s_axi_AXILiteS_BREADY : in STD_LOGIC;
    s_axi_AXILiteS_WVALID : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_multip_2num_0_0_multip_2num_AXILiteS_s_axi : entity is "multip_2num_AXILiteS_s_axi";
end design_1_multip_2num_0_0_multip_2num_AXILiteS_s_axi;

architecture STRUCTURE of design_1_multip_2num_0_0_multip_2num_AXILiteS_s_axi is
  signal \FSM_onehot_rstate[1]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_rstate[2]_i_1_n_0\ : STD_LOGIC;
  signal \^fsm_onehot_rstate_reg[1]_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[1]_i_2_n_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[2]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[3]_i_1_n_0\ : STD_LOGIC;
  signal \^fsm_onehot_wstate_reg[1]_0\ : STD_LOGIC;
  signal \^fsm_onehot_wstate_reg[2]_0\ : STD_LOGIC;
  signal \^q\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^sr\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal int_n32In10 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \int_n32In1[31]_i_3_n_0\ : STD_LOGIC;
  signal int_n32In20 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^int_n32in2_reg[31]_0\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal int_pn32ResOut : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal int_pn32ResOut_ap_vld : STD_LOGIC;
  signal int_pn32ResOut_ap_vld_i_1_n_0 : STD_LOGIC;
  signal int_pn32ResOut_ap_vld_i_2_n_0 : STD_LOGIC;
  signal p_0_in : STD_LOGIC;
  signal p_0_in4_out : STD_LOGIC;
  signal rdata : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rdata[0]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[10]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[11]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[12]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[13]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[14]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[15]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[16]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[17]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[18]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[19]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[1]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[20]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[21]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[22]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[23]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[24]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[25]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[26]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[27]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[28]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[29]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[2]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[30]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[31]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[31]_i_3_n_0\ : STD_LOGIC;
  signal \rdata[31]_i_4_n_0\ : STD_LOGIC;
  signal \rdata[3]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[4]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[5]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[6]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[7]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[8]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[9]_i_2_n_0\ : STD_LOGIC;
  signal \^s_axi_axilites_bvalid\ : STD_LOGIC;
  signal \^s_axi_axilites_rvalid\ : STD_LOGIC;
  signal waddr : STD_LOGIC;
  signal \waddr_reg_n_0_[0]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[1]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[2]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[3]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[4]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[5]\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \FSM_onehot_rstate[1]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \FSM_onehot_rstate[2]_i_1\ : label is "soft_lutpair0";
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_onehot_rstate_reg[1]\ : label is "RDIDLE:010,RDDATA:100,iSTATE:001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_rstate_reg[2]\ : label is "RDIDLE:010,RDDATA:100,iSTATE:001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[1]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[2]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[3]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute SOFT_HLUTNM of \int_n32In1[0]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \int_n32In1[10]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \int_n32In1[11]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \int_n32In1[12]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \int_n32In1[13]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \int_n32In1[14]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \int_n32In1[15]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \int_n32In1[16]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \int_n32In1[17]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \int_n32In1[18]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \int_n32In1[19]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \int_n32In1[1]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \int_n32In1[20]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \int_n32In1[21]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \int_n32In1[22]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \int_n32In1[23]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \int_n32In1[24]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \int_n32In1[25]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \int_n32In1[26]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \int_n32In1[27]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \int_n32In1[28]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \int_n32In1[29]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \int_n32In1[2]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \int_n32In1[30]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \int_n32In1[31]_i_2\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \int_n32In1[3]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \int_n32In1[4]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \int_n32In1[5]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \int_n32In1[6]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \int_n32In1[7]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \int_n32In1[8]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \int_n32In1[9]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \int_n32In2[0]_i_1\ : label is "soft_lutpair32";
  attribute SOFT_HLUTNM of \int_n32In2[10]_i_1\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \int_n32In2[11]_i_1\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \int_n32In2[12]_i_1\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \int_n32In2[13]_i_1\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \int_n32In2[14]_i_1\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \int_n32In2[15]_i_1\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \int_n32In2[16]_i_1\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \int_n32In2[17]_i_1\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \int_n32In2[18]_i_1\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \int_n32In2[19]_i_1\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \int_n32In2[1]_i_1\ : label is "soft_lutpair32";
  attribute SOFT_HLUTNM of \int_n32In2[20]_i_1\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \int_n32In2[21]_i_1\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \int_n32In2[22]_i_1\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \int_n32In2[23]_i_1\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \int_n32In2[24]_i_1\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \int_n32In2[25]_i_1\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \int_n32In2[26]_i_1\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \int_n32In2[27]_i_1\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \int_n32In2[28]_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \int_n32In2[29]_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \int_n32In2[2]_i_1\ : label is "soft_lutpair31";
  attribute SOFT_HLUTNM of \int_n32In2[30]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \int_n32In2[31]_i_2\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \int_n32In2[3]_i_1\ : label is "soft_lutpair31";
  attribute SOFT_HLUTNM of \int_n32In2[4]_i_1\ : label is "soft_lutpair30";
  attribute SOFT_HLUTNM of \int_n32In2[5]_i_1\ : label is "soft_lutpair30";
  attribute SOFT_HLUTNM of \int_n32In2[6]_i_1\ : label is "soft_lutpair29";
  attribute SOFT_HLUTNM of \int_n32In2[7]_i_1\ : label is "soft_lutpair29";
  attribute SOFT_HLUTNM of \int_n32In2[8]_i_1\ : label is "soft_lutpair28";
  attribute SOFT_HLUTNM of \int_n32In2[9]_i_1\ : label is "soft_lutpair28";
begin
  \FSM_onehot_rstate_reg[1]_0\ <= \^fsm_onehot_rstate_reg[1]_0\;
  \FSM_onehot_wstate_reg[1]_0\ <= \^fsm_onehot_wstate_reg[1]_0\;
  \FSM_onehot_wstate_reg[2]_0\ <= \^fsm_onehot_wstate_reg[2]_0\;
  Q(31 downto 0) <= \^q\(31 downto 0);
  SR(0) <= \^sr\(0);
  \int_n32In2_reg[31]_0\(31 downto 0) <= \^int_n32in2_reg[31]_0\(31 downto 0);
  s_axi_AXILiteS_BVALID <= \^s_axi_axilites_bvalid\;
  s_axi_AXILiteS_RVALID <= \^s_axi_axilites_rvalid\;
\FSM_onehot_rstate[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8FBB"
    )
        port map (
      I0 => s_axi_AXILiteS_RREADY,
      I1 => \^s_axi_axilites_rvalid\,
      I2 => s_axi_AXILiteS_ARVALID,
      I3 => \^fsm_onehot_rstate_reg[1]_0\,
      O => \FSM_onehot_rstate[1]_i_1_n_0\
    );
\FSM_onehot_rstate[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F444"
    )
        port map (
      I0 => s_axi_AXILiteS_RREADY,
      I1 => \^s_axi_axilites_rvalid\,
      I2 => \^fsm_onehot_rstate_reg[1]_0\,
      I3 => s_axi_AXILiteS_ARVALID,
      O => \FSM_onehot_rstate[2]_i_1_n_0\
    );
\FSM_onehot_rstate_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_rstate[1]_i_1_n_0\,
      Q => \^fsm_onehot_rstate_reg[1]_0\,
      R => \^sr\(0)
    );
\FSM_onehot_rstate_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_rstate[2]_i_1_n_0\,
      Q => \^s_axi_axilites_rvalid\,
      R => \^sr\(0)
    );
\FSM_onehot_wstate[1]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ap_rst_n,
      O => \^sr\(0)
    );
\FSM_onehot_wstate[1]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F444F477"
    )
        port map (
      I0 => s_axi_AXILiteS_AWVALID,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      I2 => s_axi_AXILiteS_BREADY,
      I3 => \^s_axi_axilites_bvalid\,
      I4 => \^fsm_onehot_wstate_reg[2]_0\,
      O => \FSM_onehot_wstate[1]_i_2_n_0\
    );
\FSM_onehot_wstate[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"88F8"
    )
        port map (
      I0 => s_axi_AXILiteS_AWVALID,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      I2 => \^fsm_onehot_wstate_reg[2]_0\,
      I3 => s_axi_AXILiteS_WVALID,
      O => \FSM_onehot_wstate[2]_i_1_n_0\
    );
\FSM_onehot_wstate[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F444"
    )
        port map (
      I0 => s_axi_AXILiteS_BREADY,
      I1 => \^s_axi_axilites_bvalid\,
      I2 => s_axi_AXILiteS_WVALID,
      I3 => \^fsm_onehot_wstate_reg[2]_0\,
      O => \FSM_onehot_wstate[3]_i_1_n_0\
    );
\FSM_onehot_wstate_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[1]_i_2_n_0\,
      Q => \^fsm_onehot_wstate_reg[1]_0\,
      R => \^sr\(0)
    );
\FSM_onehot_wstate_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[2]_i_1_n_0\,
      Q => \^fsm_onehot_wstate_reg[2]_0\,
      R => \^sr\(0)
    );
\FSM_onehot_wstate_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[3]_i_1_n_0\,
      Q => \^s_axi_axilites_bvalid\,
      R => \^sr\(0)
    );
\int_n32In1[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(0),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(0),
      O => int_n32In10(0)
    );
\int_n32In1[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(10),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(10),
      O => int_n32In10(10)
    );
\int_n32In1[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(11),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(11),
      O => int_n32In10(11)
    );
\int_n32In1[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(12),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(12),
      O => int_n32In10(12)
    );
\int_n32In1[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(13),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(13),
      O => int_n32In10(13)
    );
\int_n32In1[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(14),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(14),
      O => int_n32In10(14)
    );
\int_n32In1[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(15),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(15),
      O => int_n32In10(15)
    );
\int_n32In1[16]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(16),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(16),
      O => int_n32In10(16)
    );
\int_n32In1[17]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(17),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(17),
      O => int_n32In10(17)
    );
\int_n32In1[18]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(18),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(18),
      O => int_n32In10(18)
    );
\int_n32In1[19]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(19),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(19),
      O => int_n32In10(19)
    );
\int_n32In1[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(1),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(1),
      O => int_n32In10(1)
    );
\int_n32In1[20]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(20),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(20),
      O => int_n32In10(20)
    );
\int_n32In1[21]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(21),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(21),
      O => int_n32In10(21)
    );
\int_n32In1[22]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(22),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(22),
      O => int_n32In10(22)
    );
\int_n32In1[23]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(23),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^q\(23),
      O => int_n32In10(23)
    );
\int_n32In1[24]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(24),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(24),
      O => int_n32In10(24)
    );
\int_n32In1[25]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(25),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(25),
      O => int_n32In10(25)
    );
\int_n32In1[26]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(26),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(26),
      O => int_n32In10(26)
    );
\int_n32In1[27]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(27),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(27),
      O => int_n32In10(27)
    );
\int_n32In1[28]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(28),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(28),
      O => int_n32In10(28)
    );
\int_n32In1[29]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(29),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(29),
      O => int_n32In10(29)
    );
\int_n32In1[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(2),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(2),
      O => int_n32In10(2)
    );
\int_n32In1[30]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(30),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(30),
      O => int_n32In10(30)
    );
\int_n32In1[31]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"08"
    )
        port map (
      I0 => \^fsm_onehot_wstate_reg[2]_0\,
      I1 => \int_n32In1[31]_i_3_n_0\,
      I2 => \waddr_reg_n_0_[3]\,
      O => p_0_in4_out
    );
\int_n32In1[31]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(31),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^q\(31),
      O => int_n32In10(31)
    );
\int_n32In1[31]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001000000000"
    )
        port map (
      I0 => \waddr_reg_n_0_[1]\,
      I1 => \waddr_reg_n_0_[0]\,
      I2 => \waddr_reg_n_0_[4]\,
      I3 => \waddr_reg_n_0_[2]\,
      I4 => \waddr_reg_n_0_[5]\,
      I5 => s_axi_AXILiteS_WVALID,
      O => \int_n32In1[31]_i_3_n_0\
    );
\int_n32In1[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(3),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(3),
      O => int_n32In10(3)
    );
\int_n32In1[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(4),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(4),
      O => int_n32In10(4)
    );
\int_n32In1[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(5),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(5),
      O => int_n32In10(5)
    );
\int_n32In1[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(6),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(6),
      O => int_n32In10(6)
    );
\int_n32In1[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(7),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^q\(7),
      O => int_n32In10(7)
    );
\int_n32In1[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(8),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(8),
      O => int_n32In10(8)
    );
\int_n32In1[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(9),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^q\(9),
      O => int_n32In10(9)
    );
\int_n32In1_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(0),
      Q => \^q\(0),
      R => \^sr\(0)
    );
\int_n32In1_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(10),
      Q => \^q\(10),
      R => \^sr\(0)
    );
\int_n32In1_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(11),
      Q => \^q\(11),
      R => \^sr\(0)
    );
\int_n32In1_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(12),
      Q => \^q\(12),
      R => \^sr\(0)
    );
\int_n32In1_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(13),
      Q => \^q\(13),
      R => \^sr\(0)
    );
\int_n32In1_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(14),
      Q => \^q\(14),
      R => \^sr\(0)
    );
\int_n32In1_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(15),
      Q => \^q\(15),
      R => \^sr\(0)
    );
\int_n32In1_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(16),
      Q => \^q\(16),
      R => \^sr\(0)
    );
\int_n32In1_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(17),
      Q => \^q\(17),
      R => \^sr\(0)
    );
\int_n32In1_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(18),
      Q => \^q\(18),
      R => \^sr\(0)
    );
\int_n32In1_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(19),
      Q => \^q\(19),
      R => \^sr\(0)
    );
\int_n32In1_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(1),
      Q => \^q\(1),
      R => \^sr\(0)
    );
\int_n32In1_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(20),
      Q => \^q\(20),
      R => \^sr\(0)
    );
\int_n32In1_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(21),
      Q => \^q\(21),
      R => \^sr\(0)
    );
\int_n32In1_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(22),
      Q => \^q\(22),
      R => \^sr\(0)
    );
\int_n32In1_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(23),
      Q => \^q\(23),
      R => \^sr\(0)
    );
\int_n32In1_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(24),
      Q => \^q\(24),
      R => \^sr\(0)
    );
\int_n32In1_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(25),
      Q => \^q\(25),
      R => \^sr\(0)
    );
\int_n32In1_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(26),
      Q => \^q\(26),
      R => \^sr\(0)
    );
\int_n32In1_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(27),
      Q => \^q\(27),
      R => \^sr\(0)
    );
\int_n32In1_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(28),
      Q => \^q\(28),
      R => \^sr\(0)
    );
\int_n32In1_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(29),
      Q => \^q\(29),
      R => \^sr\(0)
    );
\int_n32In1_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(2),
      Q => \^q\(2),
      R => \^sr\(0)
    );
\int_n32In1_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(30),
      Q => \^q\(30),
      R => \^sr\(0)
    );
\int_n32In1_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(31),
      Q => \^q\(31),
      R => \^sr\(0)
    );
\int_n32In1_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(3),
      Q => \^q\(3),
      R => \^sr\(0)
    );
\int_n32In1_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(4),
      Q => \^q\(4),
      R => \^sr\(0)
    );
\int_n32In1_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(5),
      Q => \^q\(5),
      R => \^sr\(0)
    );
\int_n32In1_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(6),
      Q => \^q\(6),
      R => \^sr\(0)
    );
\int_n32In1_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(7),
      Q => \^q\(7),
      R => \^sr\(0)
    );
\int_n32In1_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(8),
      Q => \^q\(8),
      R => \^sr\(0)
    );
\int_n32In1_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in4_out,
      D => int_n32In10(9),
      Q => \^q\(9),
      R => \^sr\(0)
    );
\int_n32In2[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(0),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(0),
      O => int_n32In20(0)
    );
\int_n32In2[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(10),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(10),
      O => int_n32In20(10)
    );
\int_n32In2[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(11),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(11),
      O => int_n32In20(11)
    );
\int_n32In2[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(12),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(12),
      O => int_n32In20(12)
    );
\int_n32In2[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(13),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(13),
      O => int_n32In20(13)
    );
\int_n32In2[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(14),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(14),
      O => int_n32In20(14)
    );
\int_n32In2[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(15),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(15),
      O => int_n32In20(15)
    );
\int_n32In2[16]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(16),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(16),
      O => int_n32In20(16)
    );
\int_n32In2[17]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(17),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(17),
      O => int_n32In20(17)
    );
\int_n32In2[18]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(18),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(18),
      O => int_n32In20(18)
    );
\int_n32In2[19]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(19),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(19),
      O => int_n32In20(19)
    );
\int_n32In2[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(1),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(1),
      O => int_n32In20(1)
    );
\int_n32In2[20]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(20),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(20),
      O => int_n32In20(20)
    );
\int_n32In2[21]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(21),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(21),
      O => int_n32In20(21)
    );
\int_n32In2[22]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(22),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(22),
      O => int_n32In20(22)
    );
\int_n32In2[23]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(23),
      I1 => s_axi_AXILiteS_WSTRB(2),
      I2 => \^int_n32in2_reg[31]_0\(23),
      O => int_n32In20(23)
    );
\int_n32In2[24]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(24),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(24),
      O => int_n32In20(24)
    );
\int_n32In2[25]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(25),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(25),
      O => int_n32In20(25)
    );
\int_n32In2[26]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(26),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(26),
      O => int_n32In20(26)
    );
\int_n32In2[27]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(27),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(27),
      O => int_n32In20(27)
    );
\int_n32In2[28]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(28),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(28),
      O => int_n32In20(28)
    );
\int_n32In2[29]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(29),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(29),
      O => int_n32In20(29)
    );
\int_n32In2[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(2),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(2),
      O => int_n32In20(2)
    );
\int_n32In2[30]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(30),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(30),
      O => int_n32In20(30)
    );
\int_n32In2[31]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => \^fsm_onehot_wstate_reg[2]_0\,
      I1 => \int_n32In1[31]_i_3_n_0\,
      I2 => \waddr_reg_n_0_[3]\,
      O => p_0_in
    );
\int_n32In2[31]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(31),
      I1 => s_axi_AXILiteS_WSTRB(3),
      I2 => \^int_n32in2_reg[31]_0\(31),
      O => int_n32In20(31)
    );
\int_n32In2[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(3),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(3),
      O => int_n32In20(3)
    );
\int_n32In2[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(4),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(4),
      O => int_n32In20(4)
    );
\int_n32In2[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(5),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(5),
      O => int_n32In20(5)
    );
\int_n32In2[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(6),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(6),
      O => int_n32In20(6)
    );
\int_n32In2[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(7),
      I1 => s_axi_AXILiteS_WSTRB(0),
      I2 => \^int_n32in2_reg[31]_0\(7),
      O => int_n32In20(7)
    );
\int_n32In2[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(8),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(8),
      O => int_n32In20(8)
    );
\int_n32In2[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_AXILiteS_WDATA(9),
      I1 => s_axi_AXILiteS_WSTRB(1),
      I2 => \^int_n32in2_reg[31]_0\(9),
      O => int_n32In20(9)
    );
\int_n32In2_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(0),
      Q => \^int_n32in2_reg[31]_0\(0),
      R => \^sr\(0)
    );
\int_n32In2_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(10),
      Q => \^int_n32in2_reg[31]_0\(10),
      R => \^sr\(0)
    );
\int_n32In2_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(11),
      Q => \^int_n32in2_reg[31]_0\(11),
      R => \^sr\(0)
    );
\int_n32In2_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(12),
      Q => \^int_n32in2_reg[31]_0\(12),
      R => \^sr\(0)
    );
\int_n32In2_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(13),
      Q => \^int_n32in2_reg[31]_0\(13),
      R => \^sr\(0)
    );
\int_n32In2_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(14),
      Q => \^int_n32in2_reg[31]_0\(14),
      R => \^sr\(0)
    );
\int_n32In2_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(15),
      Q => \^int_n32in2_reg[31]_0\(15),
      R => \^sr\(0)
    );
\int_n32In2_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(16),
      Q => \^int_n32in2_reg[31]_0\(16),
      R => \^sr\(0)
    );
\int_n32In2_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(17),
      Q => \^int_n32in2_reg[31]_0\(17),
      R => \^sr\(0)
    );
\int_n32In2_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(18),
      Q => \^int_n32in2_reg[31]_0\(18),
      R => \^sr\(0)
    );
\int_n32In2_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(19),
      Q => \^int_n32in2_reg[31]_0\(19),
      R => \^sr\(0)
    );
\int_n32In2_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(1),
      Q => \^int_n32in2_reg[31]_0\(1),
      R => \^sr\(0)
    );
\int_n32In2_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(20),
      Q => \^int_n32in2_reg[31]_0\(20),
      R => \^sr\(0)
    );
\int_n32In2_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(21),
      Q => \^int_n32in2_reg[31]_0\(21),
      R => \^sr\(0)
    );
\int_n32In2_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(22),
      Q => \^int_n32in2_reg[31]_0\(22),
      R => \^sr\(0)
    );
\int_n32In2_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(23),
      Q => \^int_n32in2_reg[31]_0\(23),
      R => \^sr\(0)
    );
\int_n32In2_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(24),
      Q => \^int_n32in2_reg[31]_0\(24),
      R => \^sr\(0)
    );
\int_n32In2_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(25),
      Q => \^int_n32in2_reg[31]_0\(25),
      R => \^sr\(0)
    );
\int_n32In2_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(26),
      Q => \^int_n32in2_reg[31]_0\(26),
      R => \^sr\(0)
    );
\int_n32In2_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(27),
      Q => \^int_n32in2_reg[31]_0\(27),
      R => \^sr\(0)
    );
\int_n32In2_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(28),
      Q => \^int_n32in2_reg[31]_0\(28),
      R => \^sr\(0)
    );
\int_n32In2_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(29),
      Q => \^int_n32in2_reg[31]_0\(29),
      R => \^sr\(0)
    );
\int_n32In2_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(2),
      Q => \^int_n32in2_reg[31]_0\(2),
      R => \^sr\(0)
    );
\int_n32In2_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(30),
      Q => \^int_n32in2_reg[31]_0\(30),
      R => \^sr\(0)
    );
\int_n32In2_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(31),
      Q => \^int_n32in2_reg[31]_0\(31),
      R => \^sr\(0)
    );
\int_n32In2_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(3),
      Q => \^int_n32in2_reg[31]_0\(3),
      R => \^sr\(0)
    );
\int_n32In2_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(4),
      Q => \^int_n32in2_reg[31]_0\(4),
      R => \^sr\(0)
    );
\int_n32In2_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(5),
      Q => \^int_n32in2_reg[31]_0\(5),
      R => \^sr\(0)
    );
\int_n32In2_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(6),
      Q => \^int_n32in2_reg[31]_0\(6),
      R => \^sr\(0)
    );
\int_n32In2_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(7),
      Q => \^int_n32in2_reg[31]_0\(7),
      R => \^sr\(0)
    );
\int_n32In2_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(8),
      Q => \^int_n32in2_reg[31]_0\(8),
      R => \^sr\(0)
    );
\int_n32In2_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => int_n32In20(9),
      Q => \^int_n32in2_reg[31]_0\(9),
      R => \^sr\(0)
    );
int_pn32ResOut_ap_vld_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FF7FFF00"
    )
        port map (
      I0 => \^fsm_onehot_rstate_reg[1]_0\,
      I1 => int_pn32ResOut_ap_vld_i_2_n_0,
      I2 => s_axi_AXILiteS_ARVALID,
      I3 => \int_pn32ResOut_reg[0]_0\(0),
      I4 => int_pn32ResOut_ap_vld,
      O => int_pn32ResOut_ap_vld_i_1_n_0
    );
int_pn32ResOut_ap_vld_i_2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001000000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => s_axi_AXILiteS_ARADDR(5),
      O => int_pn32ResOut_ap_vld_i_2_n_0
    );
int_pn32ResOut_ap_vld_reg: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => int_pn32ResOut_ap_vld_i_1_n_0,
      Q => int_pn32ResOut_ap_vld,
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(0),
      Q => int_pn32ResOut(0),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(10),
      Q => int_pn32ResOut(10),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(11),
      Q => int_pn32ResOut(11),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(12),
      Q => int_pn32ResOut(12),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(13),
      Q => int_pn32ResOut(13),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(14),
      Q => int_pn32ResOut(14),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(15),
      Q => int_pn32ResOut(15),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(16),
      Q => int_pn32ResOut(16),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(17),
      Q => int_pn32ResOut(17),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(18),
      Q => int_pn32ResOut(18),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(19),
      Q => int_pn32ResOut(19),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(1),
      Q => int_pn32ResOut(1),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(20),
      Q => int_pn32ResOut(20),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(21),
      Q => int_pn32ResOut(21),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(22),
      Q => int_pn32ResOut(22),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(23),
      Q => int_pn32ResOut(23),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(24),
      Q => int_pn32ResOut(24),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(25),
      Q => int_pn32ResOut(25),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(26),
      Q => int_pn32ResOut(26),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(27),
      Q => int_pn32ResOut(27),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(28),
      Q => int_pn32ResOut(28),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(29),
      Q => int_pn32ResOut(29),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(2),
      Q => int_pn32ResOut(2),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(30),
      Q => int_pn32ResOut(30),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(31),
      Q => int_pn32ResOut(31),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(3),
      Q => int_pn32ResOut(3),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(4),
      Q => int_pn32ResOut(4),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(5),
      Q => int_pn32ResOut(5),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(6),
      Q => int_pn32ResOut(6),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(7),
      Q => int_pn32ResOut(7),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(8),
      Q => int_pn32ResOut(8),
      R => \^sr\(0)
    );
\int_pn32ResOut_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => \int_pn32ResOut_reg[0]_0\(0),
      D => \int_pn32ResOut_reg[31]_0\(9),
      Q => int_pn32ResOut(9),
      R => \^sr\(0)
    );
\rdata[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"33B8008800B80088"
    )
        port map (
      I0 => \rdata[0]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(0),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(0),
      O => rdata(0)
    );
\rdata[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000005404"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(1),
      I1 => int_pn32ResOut(0),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => int_pn32ResOut_ap_vld,
      I4 => s_axi_AXILiteS_ARADDR(0),
      I5 => s_axi_AXILiteS_ARADDR(4),
      O => \rdata[0]_i_2_n_0\
    );
\rdata[10]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[10]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(10),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(10),
      O => rdata(10)
    );
\rdata[10]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(10),
      O => \rdata[10]_i_2_n_0\
    );
\rdata[11]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[11]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(11),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(11),
      O => rdata(11)
    );
\rdata[11]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(11),
      O => \rdata[11]_i_2_n_0\
    );
\rdata[12]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[12]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(12),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(12),
      O => rdata(12)
    );
\rdata[12]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(12),
      O => \rdata[12]_i_2_n_0\
    );
\rdata[13]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[13]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(13),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(13),
      O => rdata(13)
    );
\rdata[13]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(13),
      O => \rdata[13]_i_2_n_0\
    );
\rdata[14]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[14]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(14),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(14),
      O => rdata(14)
    );
\rdata[14]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(14),
      O => \rdata[14]_i_2_n_0\
    );
\rdata[15]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[15]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(15),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(15),
      O => rdata(15)
    );
\rdata[15]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(15),
      O => \rdata[15]_i_2_n_0\
    );
\rdata[16]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[16]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(16),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(16),
      O => rdata(16)
    );
\rdata[16]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(16),
      O => \rdata[16]_i_2_n_0\
    );
\rdata[17]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[17]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(17),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(17),
      O => rdata(17)
    );
\rdata[17]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(17),
      O => \rdata[17]_i_2_n_0\
    );
\rdata[18]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[18]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(18),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(18),
      O => rdata(18)
    );
\rdata[18]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(18),
      O => \rdata[18]_i_2_n_0\
    );
\rdata[19]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[19]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(19),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(19),
      O => rdata(19)
    );
\rdata[19]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(19),
      O => \rdata[19]_i_2_n_0\
    );
\rdata[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[1]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(1),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(1),
      O => rdata(1)
    );
\rdata[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(1),
      O => \rdata[1]_i_2_n_0\
    );
\rdata[20]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[20]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(20),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(20),
      O => rdata(20)
    );
\rdata[20]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(20),
      O => \rdata[20]_i_2_n_0\
    );
\rdata[21]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[21]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(21),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(21),
      O => rdata(21)
    );
\rdata[21]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(21),
      O => \rdata[21]_i_2_n_0\
    );
\rdata[22]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[22]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(22),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(22),
      O => rdata(22)
    );
\rdata[22]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(22),
      O => \rdata[22]_i_2_n_0\
    );
\rdata[23]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[23]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(23),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(23),
      O => rdata(23)
    );
\rdata[23]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(23),
      O => \rdata[23]_i_2_n_0\
    );
\rdata[24]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[24]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(24),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(24),
      O => rdata(24)
    );
\rdata[24]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(24),
      O => \rdata[24]_i_2_n_0\
    );
\rdata[25]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[25]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(25),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(25),
      O => rdata(25)
    );
\rdata[25]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(25),
      O => \rdata[25]_i_2_n_0\
    );
\rdata[26]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[26]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(26),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(26),
      O => rdata(26)
    );
\rdata[26]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(26),
      O => \rdata[26]_i_2_n_0\
    );
\rdata[27]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[27]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(27),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(27),
      O => rdata(27)
    );
\rdata[27]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(27),
      O => \rdata[27]_i_2_n_0\
    );
\rdata[28]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[28]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(28),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(28),
      O => rdata(28)
    );
\rdata[28]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(28),
      O => \rdata[28]_i_2_n_0\
    );
\rdata[29]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[29]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(29),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(29),
      O => rdata(29)
    );
\rdata[29]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(29),
      O => \rdata[29]_i_2_n_0\
    );
\rdata[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[2]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(2),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(2),
      O => rdata(2)
    );
\rdata[2]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(2),
      O => \rdata[2]_i_2_n_0\
    );
\rdata[30]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[30]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(30),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(30),
      O => rdata(30)
    );
\rdata[30]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(30),
      O => \rdata[30]_i_2_n_0\
    );
\rdata[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \^fsm_onehot_rstate_reg[1]_0\,
      I1 => s_axi_AXILiteS_ARVALID,
      O => \rdata[31]_i_1_n_0\
    );
\rdata[31]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[31]_i_3_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(31),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(31),
      O => rdata(31)
    );
\rdata[31]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(31),
      O => \rdata[31]_i_3_n_0\
    );
\rdata[31]_i_4\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0100"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(1),
      I1 => s_axi_AXILiteS_ARADDR(2),
      I2 => s_axi_AXILiteS_ARADDR(0),
      I3 => s_axi_AXILiteS_ARADDR(4),
      O => \rdata[31]_i_4_n_0\
    );
\rdata[3]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[3]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(3),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(3),
      O => rdata(3)
    );
\rdata[3]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(3),
      O => \rdata[3]_i_2_n_0\
    );
\rdata[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[4]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(4),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(4),
      O => rdata(4)
    );
\rdata[4]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(4),
      O => \rdata[4]_i_2_n_0\
    );
\rdata[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[5]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(5),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(5),
      O => rdata(5)
    );
\rdata[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(5),
      O => \rdata[5]_i_2_n_0\
    );
\rdata[6]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[6]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(6),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(6),
      O => rdata(6)
    );
\rdata[6]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(6),
      O => \rdata[6]_i_2_n_0\
    );
\rdata[7]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[7]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(7),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(7),
      O => rdata(7)
    );
\rdata[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(7),
      O => \rdata[7]_i_2_n_0\
    );
\rdata[8]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[8]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(8),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(8),
      O => rdata(8)
    );
\rdata[8]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(8),
      O => \rdata[8]_i_2_n_0\
    );
\rdata[9]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BBB8888888B88888"
    )
        port map (
      I0 => \rdata[9]_i_2_n_0\,
      I1 => s_axi_AXILiteS_ARADDR(5),
      I2 => \^q\(9),
      I3 => s_axi_AXILiteS_ARADDR(3),
      I4 => \rdata[31]_i_4_n_0\,
      I5 => \^int_n32in2_reg[31]_0\(9),
      O => rdata(9)
    );
\rdata[9]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000100000000"
    )
        port map (
      I0 => s_axi_AXILiteS_ARADDR(3),
      I1 => s_axi_AXILiteS_ARADDR(1),
      I2 => s_axi_AXILiteS_ARADDR(2),
      I3 => s_axi_AXILiteS_ARADDR(0),
      I4 => s_axi_AXILiteS_ARADDR(4),
      I5 => int_pn32ResOut(9),
      O => \rdata[9]_i_2_n_0\
    );
\rdata_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(0),
      Q => s_axi_AXILiteS_RDATA(0),
      R => '0'
    );
\rdata_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(10),
      Q => s_axi_AXILiteS_RDATA(10),
      R => '0'
    );
\rdata_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(11),
      Q => s_axi_AXILiteS_RDATA(11),
      R => '0'
    );
\rdata_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(12),
      Q => s_axi_AXILiteS_RDATA(12),
      R => '0'
    );
\rdata_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(13),
      Q => s_axi_AXILiteS_RDATA(13),
      R => '0'
    );
\rdata_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(14),
      Q => s_axi_AXILiteS_RDATA(14),
      R => '0'
    );
\rdata_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(15),
      Q => s_axi_AXILiteS_RDATA(15),
      R => '0'
    );
\rdata_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(16),
      Q => s_axi_AXILiteS_RDATA(16),
      R => '0'
    );
\rdata_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(17),
      Q => s_axi_AXILiteS_RDATA(17),
      R => '0'
    );
\rdata_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(18),
      Q => s_axi_AXILiteS_RDATA(18),
      R => '0'
    );
\rdata_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(19),
      Q => s_axi_AXILiteS_RDATA(19),
      R => '0'
    );
\rdata_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(1),
      Q => s_axi_AXILiteS_RDATA(1),
      R => '0'
    );
\rdata_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(20),
      Q => s_axi_AXILiteS_RDATA(20),
      R => '0'
    );
\rdata_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(21),
      Q => s_axi_AXILiteS_RDATA(21),
      R => '0'
    );
\rdata_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(22),
      Q => s_axi_AXILiteS_RDATA(22),
      R => '0'
    );
\rdata_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(23),
      Q => s_axi_AXILiteS_RDATA(23),
      R => '0'
    );
\rdata_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(24),
      Q => s_axi_AXILiteS_RDATA(24),
      R => '0'
    );
\rdata_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(25),
      Q => s_axi_AXILiteS_RDATA(25),
      R => '0'
    );
\rdata_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(26),
      Q => s_axi_AXILiteS_RDATA(26),
      R => '0'
    );
\rdata_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(27),
      Q => s_axi_AXILiteS_RDATA(27),
      R => '0'
    );
\rdata_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(28),
      Q => s_axi_AXILiteS_RDATA(28),
      R => '0'
    );
\rdata_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(29),
      Q => s_axi_AXILiteS_RDATA(29),
      R => '0'
    );
\rdata_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(2),
      Q => s_axi_AXILiteS_RDATA(2),
      R => '0'
    );
\rdata_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(30),
      Q => s_axi_AXILiteS_RDATA(30),
      R => '0'
    );
\rdata_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(31),
      Q => s_axi_AXILiteS_RDATA(31),
      R => '0'
    );
\rdata_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(3),
      Q => s_axi_AXILiteS_RDATA(3),
      R => '0'
    );
\rdata_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(4),
      Q => s_axi_AXILiteS_RDATA(4),
      R => '0'
    );
\rdata_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(5),
      Q => s_axi_AXILiteS_RDATA(5),
      R => '0'
    );
\rdata_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(6),
      Q => s_axi_AXILiteS_RDATA(6),
      R => '0'
    );
\rdata_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(7),
      Q => s_axi_AXILiteS_RDATA(7),
      R => '0'
    );
\rdata_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(8),
      Q => s_axi_AXILiteS_RDATA(8),
      R => '0'
    );
\rdata_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \rdata[31]_i_1_n_0\,
      D => rdata(9),
      Q => s_axi_AXILiteS_RDATA(9),
      R => '0'
    );
\waddr[5]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => s_axi_AXILiteS_AWVALID,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      O => waddr
    );
\waddr_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_AXILiteS_AWADDR(0),
      Q => \waddr_reg_n_0_[0]\,
      R => '0'
    );
\waddr_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_AXILiteS_AWADDR(1),
      Q => \waddr_reg_n_0_[1]\,
      R => '0'
    );
\waddr_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_AXILiteS_AWADDR(2),
      Q => \waddr_reg_n_0_[2]\,
      R => '0'
    );
\waddr_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_AXILiteS_AWADDR(3),
      Q => \waddr_reg_n_0_[3]\,
      R => '0'
    );
\waddr_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_AXILiteS_AWADDR(4),
      Q => \waddr_reg_n_0_[4]\,
      R => '0'
    );
\waddr_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_AXILiteS_AWADDR(5),
      Q => \waddr_reg_n_0_[5]\,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_multip_2num_0_0_multip_2num_mul_3bkb_MulnS_0 is
  port (
    D : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    buff1_reg_0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    buff1_reg_1 : in STD_LOGIC_VECTOR ( 16 downto 0 );
    buff2_reg_0 : in STD_LOGIC_VECTOR ( 14 downto 0 );
    buff2_reg_1 : in STD_LOGIC_VECTOR ( 16 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_multip_2num_0_0_multip_2num_mul_3bkb_MulnS_0 : entity is "multip_2num_mul_3bkb_MulnS_0";
end design_1_multip_2num_0_0_multip_2num_mul_3bkb_MulnS_0;

architecture STRUCTURE of design_1_multip_2num_0_0_multip_2num_mul_3bkb_MulnS_0 is
  signal buff0_reg_n_100 : STD_LOGIC;
  signal buff0_reg_n_101 : STD_LOGIC;
  signal buff0_reg_n_102 : STD_LOGIC;
  signal buff0_reg_n_103 : STD_LOGIC;
  signal buff0_reg_n_104 : STD_LOGIC;
  signal buff0_reg_n_105 : STD_LOGIC;
  signal buff0_reg_n_106 : STD_LOGIC;
  signal buff0_reg_n_107 : STD_LOGIC;
  signal buff0_reg_n_108 : STD_LOGIC;
  signal buff0_reg_n_109 : STD_LOGIC;
  signal buff0_reg_n_110 : STD_LOGIC;
  signal buff0_reg_n_111 : STD_LOGIC;
  signal buff0_reg_n_112 : STD_LOGIC;
  signal buff0_reg_n_113 : STD_LOGIC;
  signal buff0_reg_n_114 : STD_LOGIC;
  signal buff0_reg_n_115 : STD_LOGIC;
  signal buff0_reg_n_116 : STD_LOGIC;
  signal buff0_reg_n_117 : STD_LOGIC;
  signal buff0_reg_n_118 : STD_LOGIC;
  signal buff0_reg_n_119 : STD_LOGIC;
  signal buff0_reg_n_120 : STD_LOGIC;
  signal buff0_reg_n_121 : STD_LOGIC;
  signal buff0_reg_n_122 : STD_LOGIC;
  signal buff0_reg_n_123 : STD_LOGIC;
  signal buff0_reg_n_124 : STD_LOGIC;
  signal buff0_reg_n_125 : STD_LOGIC;
  signal buff0_reg_n_126 : STD_LOGIC;
  signal buff0_reg_n_127 : STD_LOGIC;
  signal buff0_reg_n_128 : STD_LOGIC;
  signal buff0_reg_n_129 : STD_LOGIC;
  signal buff0_reg_n_130 : STD_LOGIC;
  signal buff0_reg_n_131 : STD_LOGIC;
  signal buff0_reg_n_132 : STD_LOGIC;
  signal buff0_reg_n_133 : STD_LOGIC;
  signal buff0_reg_n_134 : STD_LOGIC;
  signal buff0_reg_n_135 : STD_LOGIC;
  signal buff0_reg_n_136 : STD_LOGIC;
  signal buff0_reg_n_137 : STD_LOGIC;
  signal buff0_reg_n_138 : STD_LOGIC;
  signal buff0_reg_n_139 : STD_LOGIC;
  signal buff0_reg_n_140 : STD_LOGIC;
  signal buff0_reg_n_141 : STD_LOGIC;
  signal buff0_reg_n_142 : STD_LOGIC;
  signal buff0_reg_n_143 : STD_LOGIC;
  signal buff0_reg_n_144 : STD_LOGIC;
  signal buff0_reg_n_145 : STD_LOGIC;
  signal buff0_reg_n_146 : STD_LOGIC;
  signal buff0_reg_n_147 : STD_LOGIC;
  signal buff0_reg_n_148 : STD_LOGIC;
  signal buff0_reg_n_149 : STD_LOGIC;
  signal buff0_reg_n_150 : STD_LOGIC;
  signal buff0_reg_n_151 : STD_LOGIC;
  signal buff0_reg_n_152 : STD_LOGIC;
  signal buff0_reg_n_153 : STD_LOGIC;
  signal buff0_reg_n_58 : STD_LOGIC;
  signal buff0_reg_n_59 : STD_LOGIC;
  signal buff0_reg_n_60 : STD_LOGIC;
  signal buff0_reg_n_61 : STD_LOGIC;
  signal buff0_reg_n_62 : STD_LOGIC;
  signal buff0_reg_n_63 : STD_LOGIC;
  signal buff0_reg_n_64 : STD_LOGIC;
  signal buff0_reg_n_65 : STD_LOGIC;
  signal buff0_reg_n_66 : STD_LOGIC;
  signal buff0_reg_n_67 : STD_LOGIC;
  signal buff0_reg_n_68 : STD_LOGIC;
  signal buff0_reg_n_69 : STD_LOGIC;
  signal buff0_reg_n_70 : STD_LOGIC;
  signal buff0_reg_n_71 : STD_LOGIC;
  signal buff0_reg_n_72 : STD_LOGIC;
  signal buff0_reg_n_73 : STD_LOGIC;
  signal buff0_reg_n_74 : STD_LOGIC;
  signal buff0_reg_n_75 : STD_LOGIC;
  signal buff0_reg_n_76 : STD_LOGIC;
  signal buff0_reg_n_77 : STD_LOGIC;
  signal buff0_reg_n_78 : STD_LOGIC;
  signal buff0_reg_n_79 : STD_LOGIC;
  signal buff0_reg_n_80 : STD_LOGIC;
  signal buff0_reg_n_81 : STD_LOGIC;
  signal buff0_reg_n_82 : STD_LOGIC;
  signal buff0_reg_n_83 : STD_LOGIC;
  signal buff0_reg_n_84 : STD_LOGIC;
  signal buff0_reg_n_85 : STD_LOGIC;
  signal buff0_reg_n_86 : STD_LOGIC;
  signal buff0_reg_n_87 : STD_LOGIC;
  signal buff0_reg_n_88 : STD_LOGIC;
  signal buff0_reg_n_89 : STD_LOGIC;
  signal buff0_reg_n_90 : STD_LOGIC;
  signal buff0_reg_n_91 : STD_LOGIC;
  signal buff0_reg_n_92 : STD_LOGIC;
  signal buff0_reg_n_93 : STD_LOGIC;
  signal buff0_reg_n_94 : STD_LOGIC;
  signal buff0_reg_n_95 : STD_LOGIC;
  signal buff0_reg_n_96 : STD_LOGIC;
  signal buff0_reg_n_97 : STD_LOGIC;
  signal buff0_reg_n_98 : STD_LOGIC;
  signal buff0_reg_n_99 : STD_LOGIC;
  signal \buff1_reg_n_0_[0]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[10]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[11]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[12]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[13]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[14]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[15]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[16]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[1]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[2]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[3]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[4]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[5]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[6]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[7]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[8]\ : STD_LOGIC;
  signal \buff1_reg_n_0_[9]\ : STD_LOGIC;
  signal buff1_reg_n_106 : STD_LOGIC;
  signal buff1_reg_n_107 : STD_LOGIC;
  signal buff1_reg_n_108 : STD_LOGIC;
  signal buff1_reg_n_109 : STD_LOGIC;
  signal buff1_reg_n_110 : STD_LOGIC;
  signal buff1_reg_n_111 : STD_LOGIC;
  signal buff1_reg_n_112 : STD_LOGIC;
  signal buff1_reg_n_113 : STD_LOGIC;
  signal buff1_reg_n_114 : STD_LOGIC;
  signal buff1_reg_n_115 : STD_LOGIC;
  signal buff1_reg_n_116 : STD_LOGIC;
  signal buff1_reg_n_117 : STD_LOGIC;
  signal buff1_reg_n_118 : STD_LOGIC;
  signal buff1_reg_n_119 : STD_LOGIC;
  signal buff1_reg_n_120 : STD_LOGIC;
  signal buff1_reg_n_121 : STD_LOGIC;
  signal buff1_reg_n_122 : STD_LOGIC;
  signal buff1_reg_n_123 : STD_LOGIC;
  signal buff1_reg_n_124 : STD_LOGIC;
  signal buff1_reg_n_125 : STD_LOGIC;
  signal buff1_reg_n_126 : STD_LOGIC;
  signal buff1_reg_n_127 : STD_LOGIC;
  signal buff1_reg_n_128 : STD_LOGIC;
  signal buff1_reg_n_129 : STD_LOGIC;
  signal buff1_reg_n_130 : STD_LOGIC;
  signal buff1_reg_n_131 : STD_LOGIC;
  signal buff1_reg_n_132 : STD_LOGIC;
  signal buff1_reg_n_133 : STD_LOGIC;
  signal buff1_reg_n_134 : STD_LOGIC;
  signal buff1_reg_n_135 : STD_LOGIC;
  signal buff1_reg_n_136 : STD_LOGIC;
  signal buff1_reg_n_137 : STD_LOGIC;
  signal buff1_reg_n_138 : STD_LOGIC;
  signal buff1_reg_n_139 : STD_LOGIC;
  signal buff1_reg_n_140 : STD_LOGIC;
  signal buff1_reg_n_141 : STD_LOGIC;
  signal buff1_reg_n_142 : STD_LOGIC;
  signal buff1_reg_n_143 : STD_LOGIC;
  signal buff1_reg_n_144 : STD_LOGIC;
  signal buff1_reg_n_145 : STD_LOGIC;
  signal buff1_reg_n_146 : STD_LOGIC;
  signal buff1_reg_n_147 : STD_LOGIC;
  signal buff1_reg_n_148 : STD_LOGIC;
  signal buff1_reg_n_149 : STD_LOGIC;
  signal buff1_reg_n_150 : STD_LOGIC;
  signal buff1_reg_n_151 : STD_LOGIC;
  signal buff1_reg_n_152 : STD_LOGIC;
  signal buff1_reg_n_153 : STD_LOGIC;
  signal buff2_reg_n_58 : STD_LOGIC;
  signal buff2_reg_n_59 : STD_LOGIC;
  signal buff2_reg_n_60 : STD_LOGIC;
  signal buff2_reg_n_61 : STD_LOGIC;
  signal buff2_reg_n_62 : STD_LOGIC;
  signal buff2_reg_n_63 : STD_LOGIC;
  signal buff2_reg_n_64 : STD_LOGIC;
  signal buff2_reg_n_65 : STD_LOGIC;
  signal buff2_reg_n_66 : STD_LOGIC;
  signal buff2_reg_n_67 : STD_LOGIC;
  signal buff2_reg_n_68 : STD_LOGIC;
  signal buff2_reg_n_69 : STD_LOGIC;
  signal buff2_reg_n_70 : STD_LOGIC;
  signal buff2_reg_n_71 : STD_LOGIC;
  signal buff2_reg_n_72 : STD_LOGIC;
  signal buff2_reg_n_73 : STD_LOGIC;
  signal buff2_reg_n_74 : STD_LOGIC;
  signal buff2_reg_n_75 : STD_LOGIC;
  signal buff2_reg_n_76 : STD_LOGIC;
  signal buff2_reg_n_77 : STD_LOGIC;
  signal buff2_reg_n_78 : STD_LOGIC;
  signal buff2_reg_n_79 : STD_LOGIC;
  signal buff2_reg_n_80 : STD_LOGIC;
  signal buff2_reg_n_81 : STD_LOGIC;
  signal buff2_reg_n_82 : STD_LOGIC;
  signal buff2_reg_n_83 : STD_LOGIC;
  signal buff2_reg_n_84 : STD_LOGIC;
  signal buff2_reg_n_85 : STD_LOGIC;
  signal buff2_reg_n_86 : STD_LOGIC;
  signal buff2_reg_n_87 : STD_LOGIC;
  signal buff2_reg_n_88 : STD_LOGIC;
  signal buff2_reg_n_89 : STD_LOGIC;
  signal buff2_reg_n_90 : STD_LOGIC;
  signal NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff0_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff0_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff0_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff1_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff1_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff1_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff1_reg_P_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
  signal NLW_buff2_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff2_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff2_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff2_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff2_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_buff2_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_buff2_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_buff2_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_buff2_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_buff2_reg_PCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
begin
buff0_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 0,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => buff1_reg_1(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff0_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => '0',
      B(16 downto 0) => buff1_reg_0(16 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff0_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff0_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff0_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => Q(0),
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff0_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0000101",
      OVERFLOW => NLW_buff0_reg_OVERFLOW_UNCONNECTED,
      P(47) => buff0_reg_n_58,
      P(46) => buff0_reg_n_59,
      P(45) => buff0_reg_n_60,
      P(44) => buff0_reg_n_61,
      P(43) => buff0_reg_n_62,
      P(42) => buff0_reg_n_63,
      P(41) => buff0_reg_n_64,
      P(40) => buff0_reg_n_65,
      P(39) => buff0_reg_n_66,
      P(38) => buff0_reg_n_67,
      P(37) => buff0_reg_n_68,
      P(36) => buff0_reg_n_69,
      P(35) => buff0_reg_n_70,
      P(34) => buff0_reg_n_71,
      P(33) => buff0_reg_n_72,
      P(32) => buff0_reg_n_73,
      P(31) => buff0_reg_n_74,
      P(30) => buff0_reg_n_75,
      P(29) => buff0_reg_n_76,
      P(28) => buff0_reg_n_77,
      P(27) => buff0_reg_n_78,
      P(26) => buff0_reg_n_79,
      P(25) => buff0_reg_n_80,
      P(24) => buff0_reg_n_81,
      P(23) => buff0_reg_n_82,
      P(22) => buff0_reg_n_83,
      P(21) => buff0_reg_n_84,
      P(20) => buff0_reg_n_85,
      P(19) => buff0_reg_n_86,
      P(18) => buff0_reg_n_87,
      P(17) => buff0_reg_n_88,
      P(16) => buff0_reg_n_89,
      P(15) => buff0_reg_n_90,
      P(14) => buff0_reg_n_91,
      P(13) => buff0_reg_n_92,
      P(12) => buff0_reg_n_93,
      P(11) => buff0_reg_n_94,
      P(10) => buff0_reg_n_95,
      P(9) => buff0_reg_n_96,
      P(8) => buff0_reg_n_97,
      P(7) => buff0_reg_n_98,
      P(6) => buff0_reg_n_99,
      P(5) => buff0_reg_n_100,
      P(4) => buff0_reg_n_101,
      P(3) => buff0_reg_n_102,
      P(2) => buff0_reg_n_103,
      P(1) => buff0_reg_n_104,
      P(0) => buff0_reg_n_105,
      PATTERNBDETECT => NLW_buff0_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff0_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47) => buff0_reg_n_106,
      PCOUT(46) => buff0_reg_n_107,
      PCOUT(45) => buff0_reg_n_108,
      PCOUT(44) => buff0_reg_n_109,
      PCOUT(43) => buff0_reg_n_110,
      PCOUT(42) => buff0_reg_n_111,
      PCOUT(41) => buff0_reg_n_112,
      PCOUT(40) => buff0_reg_n_113,
      PCOUT(39) => buff0_reg_n_114,
      PCOUT(38) => buff0_reg_n_115,
      PCOUT(37) => buff0_reg_n_116,
      PCOUT(36) => buff0_reg_n_117,
      PCOUT(35) => buff0_reg_n_118,
      PCOUT(34) => buff0_reg_n_119,
      PCOUT(33) => buff0_reg_n_120,
      PCOUT(32) => buff0_reg_n_121,
      PCOUT(31) => buff0_reg_n_122,
      PCOUT(30) => buff0_reg_n_123,
      PCOUT(29) => buff0_reg_n_124,
      PCOUT(28) => buff0_reg_n_125,
      PCOUT(27) => buff0_reg_n_126,
      PCOUT(26) => buff0_reg_n_127,
      PCOUT(25) => buff0_reg_n_128,
      PCOUT(24) => buff0_reg_n_129,
      PCOUT(23) => buff0_reg_n_130,
      PCOUT(22) => buff0_reg_n_131,
      PCOUT(21) => buff0_reg_n_132,
      PCOUT(20) => buff0_reg_n_133,
      PCOUT(19) => buff0_reg_n_134,
      PCOUT(18) => buff0_reg_n_135,
      PCOUT(17) => buff0_reg_n_136,
      PCOUT(16) => buff0_reg_n_137,
      PCOUT(15) => buff0_reg_n_138,
      PCOUT(14) => buff0_reg_n_139,
      PCOUT(13) => buff0_reg_n_140,
      PCOUT(12) => buff0_reg_n_141,
      PCOUT(11) => buff0_reg_n_142,
      PCOUT(10) => buff0_reg_n_143,
      PCOUT(9) => buff0_reg_n_144,
      PCOUT(8) => buff0_reg_n_145,
      PCOUT(7) => buff0_reg_n_146,
      PCOUT(6) => buff0_reg_n_147,
      PCOUT(5) => buff0_reg_n_148,
      PCOUT(4) => buff0_reg_n_149,
      PCOUT(3) => buff0_reg_n_150,
      PCOUT(2) => buff0_reg_n_151,
      PCOUT(1) => buff0_reg_n_152,
      PCOUT(0) => buff0_reg_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff0_reg_UNDERFLOW_UNCONNECTED
    );
buff1_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => buff1_reg_1(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff1_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => buff1_reg_0(31),
      B(16) => buff1_reg_0(31),
      B(15) => buff1_reg_0(31),
      B(14 downto 0) => buff1_reg_0(31 downto 17),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff1_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff1_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff1_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => Q(0),
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => Q(0),
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff1_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"1010101",
      OVERFLOW => NLW_buff1_reg_OVERFLOW_UNCONNECTED,
      P(47 downto 0) => NLW_buff1_reg_P_UNCONNECTED(47 downto 0),
      PATTERNBDETECT => NLW_buff1_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff1_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => buff0_reg_n_106,
      PCIN(46) => buff0_reg_n_107,
      PCIN(45) => buff0_reg_n_108,
      PCIN(44) => buff0_reg_n_109,
      PCIN(43) => buff0_reg_n_110,
      PCIN(42) => buff0_reg_n_111,
      PCIN(41) => buff0_reg_n_112,
      PCIN(40) => buff0_reg_n_113,
      PCIN(39) => buff0_reg_n_114,
      PCIN(38) => buff0_reg_n_115,
      PCIN(37) => buff0_reg_n_116,
      PCIN(36) => buff0_reg_n_117,
      PCIN(35) => buff0_reg_n_118,
      PCIN(34) => buff0_reg_n_119,
      PCIN(33) => buff0_reg_n_120,
      PCIN(32) => buff0_reg_n_121,
      PCIN(31) => buff0_reg_n_122,
      PCIN(30) => buff0_reg_n_123,
      PCIN(29) => buff0_reg_n_124,
      PCIN(28) => buff0_reg_n_125,
      PCIN(27) => buff0_reg_n_126,
      PCIN(26) => buff0_reg_n_127,
      PCIN(25) => buff0_reg_n_128,
      PCIN(24) => buff0_reg_n_129,
      PCIN(23) => buff0_reg_n_130,
      PCIN(22) => buff0_reg_n_131,
      PCIN(21) => buff0_reg_n_132,
      PCIN(20) => buff0_reg_n_133,
      PCIN(19) => buff0_reg_n_134,
      PCIN(18) => buff0_reg_n_135,
      PCIN(17) => buff0_reg_n_136,
      PCIN(16) => buff0_reg_n_137,
      PCIN(15) => buff0_reg_n_138,
      PCIN(14) => buff0_reg_n_139,
      PCIN(13) => buff0_reg_n_140,
      PCIN(12) => buff0_reg_n_141,
      PCIN(11) => buff0_reg_n_142,
      PCIN(10) => buff0_reg_n_143,
      PCIN(9) => buff0_reg_n_144,
      PCIN(8) => buff0_reg_n_145,
      PCIN(7) => buff0_reg_n_146,
      PCIN(6) => buff0_reg_n_147,
      PCIN(5) => buff0_reg_n_148,
      PCIN(4) => buff0_reg_n_149,
      PCIN(3) => buff0_reg_n_150,
      PCIN(2) => buff0_reg_n_151,
      PCIN(1) => buff0_reg_n_152,
      PCIN(0) => buff0_reg_n_153,
      PCOUT(47) => buff1_reg_n_106,
      PCOUT(46) => buff1_reg_n_107,
      PCOUT(45) => buff1_reg_n_108,
      PCOUT(44) => buff1_reg_n_109,
      PCOUT(43) => buff1_reg_n_110,
      PCOUT(42) => buff1_reg_n_111,
      PCOUT(41) => buff1_reg_n_112,
      PCOUT(40) => buff1_reg_n_113,
      PCOUT(39) => buff1_reg_n_114,
      PCOUT(38) => buff1_reg_n_115,
      PCOUT(37) => buff1_reg_n_116,
      PCOUT(36) => buff1_reg_n_117,
      PCOUT(35) => buff1_reg_n_118,
      PCOUT(34) => buff1_reg_n_119,
      PCOUT(33) => buff1_reg_n_120,
      PCOUT(32) => buff1_reg_n_121,
      PCOUT(31) => buff1_reg_n_122,
      PCOUT(30) => buff1_reg_n_123,
      PCOUT(29) => buff1_reg_n_124,
      PCOUT(28) => buff1_reg_n_125,
      PCOUT(27) => buff1_reg_n_126,
      PCOUT(26) => buff1_reg_n_127,
      PCOUT(25) => buff1_reg_n_128,
      PCOUT(24) => buff1_reg_n_129,
      PCOUT(23) => buff1_reg_n_130,
      PCOUT(22) => buff1_reg_n_131,
      PCOUT(21) => buff1_reg_n_132,
      PCOUT(20) => buff1_reg_n_133,
      PCOUT(19) => buff1_reg_n_134,
      PCOUT(18) => buff1_reg_n_135,
      PCOUT(17) => buff1_reg_n_136,
      PCOUT(16) => buff1_reg_n_137,
      PCOUT(15) => buff1_reg_n_138,
      PCOUT(14) => buff1_reg_n_139,
      PCOUT(13) => buff1_reg_n_140,
      PCOUT(12) => buff1_reg_n_141,
      PCOUT(11) => buff1_reg_n_142,
      PCOUT(10) => buff1_reg_n_143,
      PCOUT(9) => buff1_reg_n_144,
      PCOUT(8) => buff1_reg_n_145,
      PCOUT(7) => buff1_reg_n_146,
      PCOUT(6) => buff1_reg_n_147,
      PCOUT(5) => buff1_reg_n_148,
      PCOUT(4) => buff1_reg_n_149,
      PCOUT(3) => buff1_reg_n_150,
      PCOUT(2) => buff1_reg_n_151,
      PCOUT(1) => buff1_reg_n_152,
      PCOUT(0) => buff1_reg_n_153,
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff1_reg_UNDERFLOW_UNCONNECTED
    );
\buff1_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_105,
      Q => \buff1_reg_n_0_[0]\,
      R => '0'
    );
\buff1_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_95,
      Q => \buff1_reg_n_0_[10]\,
      R => '0'
    );
\buff1_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_94,
      Q => \buff1_reg_n_0_[11]\,
      R => '0'
    );
\buff1_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_93,
      Q => \buff1_reg_n_0_[12]\,
      R => '0'
    );
\buff1_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_92,
      Q => \buff1_reg_n_0_[13]\,
      R => '0'
    );
\buff1_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_91,
      Q => \buff1_reg_n_0_[14]\,
      R => '0'
    );
\buff1_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_90,
      Q => \buff1_reg_n_0_[15]\,
      R => '0'
    );
\buff1_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_89,
      Q => \buff1_reg_n_0_[16]\,
      R => '0'
    );
\buff1_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_104,
      Q => \buff1_reg_n_0_[1]\,
      R => '0'
    );
\buff1_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_103,
      Q => \buff1_reg_n_0_[2]\,
      R => '0'
    );
\buff1_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_102,
      Q => \buff1_reg_n_0_[3]\,
      R => '0'
    );
\buff1_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_101,
      Q => \buff1_reg_n_0_[4]\,
      R => '0'
    );
\buff1_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_100,
      Q => \buff1_reg_n_0_[5]\,
      R => '0'
    );
\buff1_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_99,
      Q => \buff1_reg_n_0_[6]\,
      R => '0'
    );
\buff1_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_98,
      Q => \buff1_reg_n_0_[7]\,
      R => '0'
    );
\buff1_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_97,
      Q => \buff1_reg_n_0_[8]\,
      R => '0'
    );
\buff1_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => buff0_reg_n_96,
      Q => \buff1_reg_n_0_[9]\,
      R => '0'
    );
buff2_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 2,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 2,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29 downto 17) => B"0000000000000",
      A(16 downto 0) => buff2_reg_1(16 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_buff2_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => buff2_reg_0(14),
      B(16) => buff2_reg_0(14),
      B(15) => buff2_reg_0(14),
      B(14 downto 0) => buff2_reg_0(14 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_buff2_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 0) => B"111111111111111111111111111111111111111111111111",
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_buff2_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_buff2_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '1',
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '1',
      CEB2 => '1',
      CEC => '0',
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_buff2_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 0) => B"0010101",
      OVERFLOW => NLW_buff2_reg_OVERFLOW_UNCONNECTED,
      P(47) => buff2_reg_n_58,
      P(46) => buff2_reg_n_59,
      P(45) => buff2_reg_n_60,
      P(44) => buff2_reg_n_61,
      P(43) => buff2_reg_n_62,
      P(42) => buff2_reg_n_63,
      P(41) => buff2_reg_n_64,
      P(40) => buff2_reg_n_65,
      P(39) => buff2_reg_n_66,
      P(38) => buff2_reg_n_67,
      P(37) => buff2_reg_n_68,
      P(36) => buff2_reg_n_69,
      P(35) => buff2_reg_n_70,
      P(34) => buff2_reg_n_71,
      P(33) => buff2_reg_n_72,
      P(32) => buff2_reg_n_73,
      P(31) => buff2_reg_n_74,
      P(30) => buff2_reg_n_75,
      P(29) => buff2_reg_n_76,
      P(28) => buff2_reg_n_77,
      P(27) => buff2_reg_n_78,
      P(26) => buff2_reg_n_79,
      P(25) => buff2_reg_n_80,
      P(24) => buff2_reg_n_81,
      P(23) => buff2_reg_n_82,
      P(22) => buff2_reg_n_83,
      P(21) => buff2_reg_n_84,
      P(20) => buff2_reg_n_85,
      P(19) => buff2_reg_n_86,
      P(18) => buff2_reg_n_87,
      P(17) => buff2_reg_n_88,
      P(16) => buff2_reg_n_89,
      P(15) => buff2_reg_n_90,
      P(14 downto 0) => D(31 downto 17),
      PATTERNBDETECT => NLW_buff2_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_buff2_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47) => buff1_reg_n_106,
      PCIN(46) => buff1_reg_n_107,
      PCIN(45) => buff1_reg_n_108,
      PCIN(44) => buff1_reg_n_109,
      PCIN(43) => buff1_reg_n_110,
      PCIN(42) => buff1_reg_n_111,
      PCIN(41) => buff1_reg_n_112,
      PCIN(40) => buff1_reg_n_113,
      PCIN(39) => buff1_reg_n_114,
      PCIN(38) => buff1_reg_n_115,
      PCIN(37) => buff1_reg_n_116,
      PCIN(36) => buff1_reg_n_117,
      PCIN(35) => buff1_reg_n_118,
      PCIN(34) => buff1_reg_n_119,
      PCIN(33) => buff1_reg_n_120,
      PCIN(32) => buff1_reg_n_121,
      PCIN(31) => buff1_reg_n_122,
      PCIN(30) => buff1_reg_n_123,
      PCIN(29) => buff1_reg_n_124,
      PCIN(28) => buff1_reg_n_125,
      PCIN(27) => buff1_reg_n_126,
      PCIN(26) => buff1_reg_n_127,
      PCIN(25) => buff1_reg_n_128,
      PCIN(24) => buff1_reg_n_129,
      PCIN(23) => buff1_reg_n_130,
      PCIN(22) => buff1_reg_n_131,
      PCIN(21) => buff1_reg_n_132,
      PCIN(20) => buff1_reg_n_133,
      PCIN(19) => buff1_reg_n_134,
      PCIN(18) => buff1_reg_n_135,
      PCIN(17) => buff1_reg_n_136,
      PCIN(16) => buff1_reg_n_137,
      PCIN(15) => buff1_reg_n_138,
      PCIN(14) => buff1_reg_n_139,
      PCIN(13) => buff1_reg_n_140,
      PCIN(12) => buff1_reg_n_141,
      PCIN(11) => buff1_reg_n_142,
      PCIN(10) => buff1_reg_n_143,
      PCIN(9) => buff1_reg_n_144,
      PCIN(8) => buff1_reg_n_145,
      PCIN(7) => buff1_reg_n_146,
      PCIN(6) => buff1_reg_n_147,
      PCIN(5) => buff1_reg_n_148,
      PCIN(4) => buff1_reg_n_149,
      PCIN(3) => buff1_reg_n_150,
      PCIN(2) => buff1_reg_n_151,
      PCIN(1) => buff1_reg_n_152,
      PCIN(0) => buff1_reg_n_153,
      PCOUT(47 downto 0) => NLW_buff2_reg_PCOUT_UNCONNECTED(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => '0',
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_buff2_reg_UNDERFLOW_UNCONNECTED
    );
\buff2_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[0]\,
      Q => D(0),
      R => '0'
    );
\buff2_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[10]\,
      Q => D(10),
      R => '0'
    );
\buff2_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[11]\,
      Q => D(11),
      R => '0'
    );
\buff2_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[12]\,
      Q => D(12),
      R => '0'
    );
\buff2_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[13]\,
      Q => D(13),
      R => '0'
    );
\buff2_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[14]\,
      Q => D(14),
      R => '0'
    );
\buff2_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[15]\,
      Q => D(15),
      R => '0'
    );
\buff2_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[16]\,
      Q => D(16),
      R => '0'
    );
\buff2_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[1]\,
      Q => D(1),
      R => '0'
    );
\buff2_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[2]\,
      Q => D(2),
      R => '0'
    );
\buff2_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[3]\,
      Q => D(3),
      R => '0'
    );
\buff2_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[4]\,
      Q => D(4),
      R => '0'
    );
\buff2_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[5]\,
      Q => D(5),
      R => '0'
    );
\buff2_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[6]\,
      Q => D(6),
      R => '0'
    );
\buff2_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[7]\,
      Q => D(7),
      R => '0'
    );
\buff2_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[8]\,
      Q => D(8),
      R => '0'
    );
\buff2_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \buff1_reg_n_0_[9]\,
      Q => D(9),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_multip_2num_0_0_multip_2num_mul_3bkb is
  port (
    D : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    buff1_reg : in STD_LOGIC_VECTOR ( 31 downto 0 );
    buff1_reg_0 : in STD_LOGIC_VECTOR ( 16 downto 0 );
    buff2_reg : in STD_LOGIC_VECTOR ( 14 downto 0 );
    buff2_reg_0 : in STD_LOGIC_VECTOR ( 16 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_multip_2num_0_0_multip_2num_mul_3bkb : entity is "multip_2num_mul_3bkb";
end design_1_multip_2num_0_0_multip_2num_mul_3bkb;

architecture STRUCTURE of design_1_multip_2num_0_0_multip_2num_mul_3bkb is
begin
multip_2num_mul_3bkb_MulnS_0_U: entity work.design_1_multip_2num_0_0_multip_2num_mul_3bkb_MulnS_0
     port map (
      D(31 downto 0) => D(31 downto 0),
      Q(0) => Q(0),
      ap_clk => ap_clk,
      buff1_reg_0(31 downto 0) => buff1_reg(31 downto 0),
      buff1_reg_1(16 downto 0) => buff1_reg_0(16 downto 0),
      buff2_reg_0(14 downto 0) => buff2_reg(14 downto 0),
      buff2_reg_1(16 downto 0) => buff2_reg_0(16 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_multip_2num_0_0_multip_2num is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    s_axi_AXILiteS_AWVALID : in STD_LOGIC;
    s_axi_AXILiteS_AWREADY : out STD_LOGIC;
    s_axi_AXILiteS_AWADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_AXILiteS_WVALID : in STD_LOGIC;
    s_axi_AXILiteS_WREADY : out STD_LOGIC;
    s_axi_AXILiteS_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_AXILiteS_ARVALID : in STD_LOGIC;
    s_axi_AXILiteS_ARREADY : out STD_LOGIC;
    s_axi_AXILiteS_ARADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_AXILiteS_RVALID : out STD_LOGIC;
    s_axi_AXILiteS_RREADY : in STD_LOGIC;
    s_axi_AXILiteS_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_BVALID : out STD_LOGIC;
    s_axi_AXILiteS_BREADY : in STD_LOGIC;
    s_axi_AXILiteS_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 )
  );
  attribute C_S_AXI_AXILITES_ADDR_WIDTH : integer;
  attribute C_S_AXI_AXILITES_ADDR_WIDTH of design_1_multip_2num_0_0_multip_2num : entity is 6;
  attribute C_S_AXI_AXILITES_DATA_WIDTH : integer;
  attribute C_S_AXI_AXILITES_DATA_WIDTH of design_1_multip_2num_0_0_multip_2num : entity is 32;
  attribute C_S_AXI_AXILITES_WSTRB_WIDTH : integer;
  attribute C_S_AXI_AXILITES_WSTRB_WIDTH of design_1_multip_2num_0_0_multip_2num : entity is 4;
  attribute C_S_AXI_DATA_WIDTH : integer;
  attribute C_S_AXI_DATA_WIDTH of design_1_multip_2num_0_0_multip_2num : entity is 32;
  attribute C_S_AXI_WSTRB_WIDTH : integer;
  attribute C_S_AXI_WSTRB_WIDTH of design_1_multip_2num_0_0_multip_2num : entity is 4;
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_multip_2num_0_0_multip_2num : entity is "multip_2num";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of design_1_multip_2num_0_0_multip_2num : entity is "7'b0000001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of design_1_multip_2num_0_0_multip_2num : entity is "7'b0000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of design_1_multip_2num_0_0_multip_2num : entity is "7'b0000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of design_1_multip_2num_0_0_multip_2num : entity is "7'b0001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of design_1_multip_2num_0_0_multip_2num : entity is "7'b0010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of design_1_multip_2num_0_0_multip_2num : entity is "7'b0100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of design_1_multip_2num_0_0_multip_2num : entity is "7'b1000000";
  attribute hls_module : string;
  attribute hls_module of design_1_multip_2num_0_0_multip_2num : entity is "yes";
end design_1_multip_2num_0_0_multip_2num;

architecture STRUCTURE of design_1_multip_2num_0_0_multip_2num is
  signal \<const0>\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[1]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[2]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[3]\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_0_[4]\ : STD_LOGIC;
  signal ap_CS_fsm_state1 : STD_LOGIC;
  signal ap_CS_fsm_state6 : STD_LOGIC;
  signal ap_CS_fsm_state7 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 1 to 1 );
  signal ap_rst_n_inv : STD_LOGIC;
  signal mul_ln18_reg_59 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal n32In1 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal n32In1_read_reg_54 : STD_LOGIC_VECTOR ( 16 downto 0 );
  signal n32In2 : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal n32In2_read_reg_49 : STD_LOGIC_VECTOR ( 31 downto 17 );
  attribute FSM_ENCODING : string;
  attribute FSM_ENCODING of \ap_CS_fsm_reg[0]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[1]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[3]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[4]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[5]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[6]\ : label is "none";
begin
  s_axi_AXILiteS_BRESP(1) <= \<const0>\;
  s_axi_AXILiteS_BRESP(0) <= \<const0>\;
  s_axi_AXILiteS_RRESP(1) <= \<const0>\;
  s_axi_AXILiteS_RRESP(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => ap_CS_fsm_state6,
      I1 => \ap_CS_fsm_reg_n_0_[3]\,
      I2 => \ap_CS_fsm_reg_n_0_[1]\,
      I3 => \ap_CS_fsm_reg_n_0_[2]\,
      I4 => \ap_CS_fsm_reg_n_0_[4]\,
      I5 => ap_CS_fsm_state7,
      O => ap_NS_fsm(1)
    );
\ap_CS_fsm_reg[0]\: unisim.vcomponents.FDSE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state7,
      Q => ap_CS_fsm_state1,
      S => ap_rst_n_inv
    );
\ap_CS_fsm_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(1),
      Q => \ap_CS_fsm_reg_n_0_[1]\,
      R => ap_rst_n_inv
    );
\ap_CS_fsm_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[1]\,
      Q => \ap_CS_fsm_reg_n_0_[2]\,
      R => ap_rst_n_inv
    );
\ap_CS_fsm_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[2]\,
      Q => \ap_CS_fsm_reg_n_0_[3]\,
      R => ap_rst_n_inv
    );
\ap_CS_fsm_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[3]\,
      Q => \ap_CS_fsm_reg_n_0_[4]\,
      R => ap_rst_n_inv
    );
\ap_CS_fsm_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm_reg_n_0_[4]\,
      Q => ap_CS_fsm_state6,
      R => ap_rst_n_inv
    );
\ap_CS_fsm_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_CS_fsm_state6,
      Q => ap_CS_fsm_state7,
      R => ap_rst_n_inv
    );
\mul_ln18_reg_59_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(0),
      Q => mul_ln18_reg_59(0),
      R => '0'
    );
\mul_ln18_reg_59_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(10),
      Q => mul_ln18_reg_59(10),
      R => '0'
    );
\mul_ln18_reg_59_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(11),
      Q => mul_ln18_reg_59(11),
      R => '0'
    );
\mul_ln18_reg_59_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(12),
      Q => mul_ln18_reg_59(12),
      R => '0'
    );
\mul_ln18_reg_59_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(13),
      Q => mul_ln18_reg_59(13),
      R => '0'
    );
\mul_ln18_reg_59_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(14),
      Q => mul_ln18_reg_59(14),
      R => '0'
    );
\mul_ln18_reg_59_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(15),
      Q => mul_ln18_reg_59(15),
      R => '0'
    );
\mul_ln18_reg_59_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(16),
      Q => mul_ln18_reg_59(16),
      R => '0'
    );
\mul_ln18_reg_59_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(17),
      Q => mul_ln18_reg_59(17),
      R => '0'
    );
\mul_ln18_reg_59_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(18),
      Q => mul_ln18_reg_59(18),
      R => '0'
    );
\mul_ln18_reg_59_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(19),
      Q => mul_ln18_reg_59(19),
      R => '0'
    );
\mul_ln18_reg_59_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(1),
      Q => mul_ln18_reg_59(1),
      R => '0'
    );
\mul_ln18_reg_59_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(20),
      Q => mul_ln18_reg_59(20),
      R => '0'
    );
\mul_ln18_reg_59_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(21),
      Q => mul_ln18_reg_59(21),
      R => '0'
    );
\mul_ln18_reg_59_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(22),
      Q => mul_ln18_reg_59(22),
      R => '0'
    );
\mul_ln18_reg_59_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(23),
      Q => mul_ln18_reg_59(23),
      R => '0'
    );
\mul_ln18_reg_59_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(24),
      Q => mul_ln18_reg_59(24),
      R => '0'
    );
\mul_ln18_reg_59_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(25),
      Q => mul_ln18_reg_59(25),
      R => '0'
    );
\mul_ln18_reg_59_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(26),
      Q => mul_ln18_reg_59(26),
      R => '0'
    );
\mul_ln18_reg_59_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(27),
      Q => mul_ln18_reg_59(27),
      R => '0'
    );
\mul_ln18_reg_59_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(28),
      Q => mul_ln18_reg_59(28),
      R => '0'
    );
\mul_ln18_reg_59_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(29),
      Q => mul_ln18_reg_59(29),
      R => '0'
    );
\mul_ln18_reg_59_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(2),
      Q => mul_ln18_reg_59(2),
      R => '0'
    );
\mul_ln18_reg_59_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(30),
      Q => mul_ln18_reg_59(30),
      R => '0'
    );
\mul_ln18_reg_59_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(31),
      Q => mul_ln18_reg_59(31),
      R => '0'
    );
\mul_ln18_reg_59_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(3),
      Q => mul_ln18_reg_59(3),
      R => '0'
    );
\mul_ln18_reg_59_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(4),
      Q => mul_ln18_reg_59(4),
      R => '0'
    );
\mul_ln18_reg_59_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(5),
      Q => mul_ln18_reg_59(5),
      R => '0'
    );
\mul_ln18_reg_59_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(6),
      Q => mul_ln18_reg_59(6),
      R => '0'
    );
\mul_ln18_reg_59_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(7),
      Q => mul_ln18_reg_59(7),
      R => '0'
    );
\mul_ln18_reg_59_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(8),
      Q => mul_ln18_reg_59(8),
      R => '0'
    );
\mul_ln18_reg_59_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state6,
      D => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(9),
      Q => mul_ln18_reg_59(9),
      R => '0'
    );
multip_2num_AXILiteS_s_axi_U: entity work.design_1_multip_2num_0_0_multip_2num_AXILiteS_s_axi
     port map (
      \FSM_onehot_rstate_reg[1]_0\ => s_axi_AXILiteS_ARREADY,
      \FSM_onehot_wstate_reg[1]_0\ => s_axi_AXILiteS_AWREADY,
      \FSM_onehot_wstate_reg[2]_0\ => s_axi_AXILiteS_WREADY,
      Q(31 downto 0) => n32In1(31 downto 0),
      SR(0) => ap_rst_n_inv,
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      \int_n32In2_reg[31]_0\(31 downto 0) => n32In2(31 downto 0),
      \int_pn32ResOut_reg[0]_0\(0) => ap_CS_fsm_state7,
      \int_pn32ResOut_reg[31]_0\(31 downto 0) => mul_ln18_reg_59(31 downto 0),
      s_axi_AXILiteS_ARADDR(5 downto 0) => s_axi_AXILiteS_ARADDR(5 downto 0),
      s_axi_AXILiteS_ARVALID => s_axi_AXILiteS_ARVALID,
      s_axi_AXILiteS_AWADDR(5 downto 0) => s_axi_AXILiteS_AWADDR(5 downto 0),
      s_axi_AXILiteS_AWVALID => s_axi_AXILiteS_AWVALID,
      s_axi_AXILiteS_BREADY => s_axi_AXILiteS_BREADY,
      s_axi_AXILiteS_BVALID => s_axi_AXILiteS_BVALID,
      s_axi_AXILiteS_RDATA(31 downto 0) => s_axi_AXILiteS_RDATA(31 downto 0),
      s_axi_AXILiteS_RREADY => s_axi_AXILiteS_RREADY,
      s_axi_AXILiteS_RVALID => s_axi_AXILiteS_RVALID,
      s_axi_AXILiteS_WDATA(31 downto 0) => s_axi_AXILiteS_WDATA(31 downto 0),
      s_axi_AXILiteS_WSTRB(3 downto 0) => s_axi_AXILiteS_WSTRB(3 downto 0),
      s_axi_AXILiteS_WVALID => s_axi_AXILiteS_WVALID
    );
multip_2num_mul_3bkb_U1: entity work.design_1_multip_2num_0_0_multip_2num_mul_3bkb
     port map (
      D(31 downto 0) => \multip_2num_mul_3bkb_MulnS_0_U/buff2_reg__0\(31 downto 0),
      Q(0) => ap_CS_fsm_state1,
      ap_clk => ap_clk,
      buff1_reg(31 downto 0) => n32In1(31 downto 0),
      buff1_reg_0(16 downto 0) => n32In2(16 downto 0),
      buff2_reg(14 downto 0) => n32In2_read_reg_49(31 downto 17),
      buff2_reg_0(16 downto 0) => n32In1_read_reg_54(16 downto 0)
    );
\n32In1_read_reg_54_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(0),
      Q => n32In1_read_reg_54(0),
      R => '0'
    );
\n32In1_read_reg_54_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(10),
      Q => n32In1_read_reg_54(10),
      R => '0'
    );
\n32In1_read_reg_54_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(11),
      Q => n32In1_read_reg_54(11),
      R => '0'
    );
\n32In1_read_reg_54_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(12),
      Q => n32In1_read_reg_54(12),
      R => '0'
    );
\n32In1_read_reg_54_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(13),
      Q => n32In1_read_reg_54(13),
      R => '0'
    );
\n32In1_read_reg_54_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(14),
      Q => n32In1_read_reg_54(14),
      R => '0'
    );
\n32In1_read_reg_54_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(15),
      Q => n32In1_read_reg_54(15),
      R => '0'
    );
\n32In1_read_reg_54_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(16),
      Q => n32In1_read_reg_54(16),
      R => '0'
    );
\n32In1_read_reg_54_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(1),
      Q => n32In1_read_reg_54(1),
      R => '0'
    );
\n32In1_read_reg_54_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(2),
      Q => n32In1_read_reg_54(2),
      R => '0'
    );
\n32In1_read_reg_54_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(3),
      Q => n32In1_read_reg_54(3),
      R => '0'
    );
\n32In1_read_reg_54_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(4),
      Q => n32In1_read_reg_54(4),
      R => '0'
    );
\n32In1_read_reg_54_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(5),
      Q => n32In1_read_reg_54(5),
      R => '0'
    );
\n32In1_read_reg_54_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(6),
      Q => n32In1_read_reg_54(6),
      R => '0'
    );
\n32In1_read_reg_54_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(7),
      Q => n32In1_read_reg_54(7),
      R => '0'
    );
\n32In1_read_reg_54_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(8),
      Q => n32In1_read_reg_54(8),
      R => '0'
    );
\n32In1_read_reg_54_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In1(9),
      Q => n32In1_read_reg_54(9),
      R => '0'
    );
\n32In2_read_reg_49_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(17),
      Q => n32In2_read_reg_49(17),
      R => '0'
    );
\n32In2_read_reg_49_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(18),
      Q => n32In2_read_reg_49(18),
      R => '0'
    );
\n32In2_read_reg_49_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(19),
      Q => n32In2_read_reg_49(19),
      R => '0'
    );
\n32In2_read_reg_49_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(20),
      Q => n32In2_read_reg_49(20),
      R => '0'
    );
\n32In2_read_reg_49_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(21),
      Q => n32In2_read_reg_49(21),
      R => '0'
    );
\n32In2_read_reg_49_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(22),
      Q => n32In2_read_reg_49(22),
      R => '0'
    );
\n32In2_read_reg_49_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(23),
      Q => n32In2_read_reg_49(23),
      R => '0'
    );
\n32In2_read_reg_49_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(24),
      Q => n32In2_read_reg_49(24),
      R => '0'
    );
\n32In2_read_reg_49_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(25),
      Q => n32In2_read_reg_49(25),
      R => '0'
    );
\n32In2_read_reg_49_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(26),
      Q => n32In2_read_reg_49(26),
      R => '0'
    );
\n32In2_read_reg_49_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(27),
      Q => n32In2_read_reg_49(27),
      R => '0'
    );
\n32In2_read_reg_49_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(28),
      Q => n32In2_read_reg_49(28),
      R => '0'
    );
\n32In2_read_reg_49_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(29),
      Q => n32In2_read_reg_49(29),
      R => '0'
    );
\n32In2_read_reg_49_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(30),
      Q => n32In2_read_reg_49(30),
      R => '0'
    );
\n32In2_read_reg_49_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state1,
      D => n32In2(31),
      Q => n32In2_read_reg_49(31),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_multip_2num_0_0 is
  port (
    s_axi_AXILiteS_AWADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_AXILiteS_AWVALID : in STD_LOGIC;
    s_axi_AXILiteS_AWREADY : out STD_LOGIC;
    s_axi_AXILiteS_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_AXILiteS_WVALID : in STD_LOGIC;
    s_axi_AXILiteS_WREADY : out STD_LOGIC;
    s_axi_AXILiteS_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_BVALID : out STD_LOGIC;
    s_axi_AXILiteS_BREADY : in STD_LOGIC;
    s_axi_AXILiteS_ARADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_AXILiteS_ARVALID : in STD_LOGIC;
    s_axi_AXILiteS_ARREADY : out STD_LOGIC;
    s_axi_AXILiteS_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_RVALID : out STD_LOGIC;
    s_axi_AXILiteS_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of design_1_multip_2num_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of design_1_multip_2num_0_0 : entity is "design_1_multip_2num_0_0,multip_2num,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of design_1_multip_2num_0_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of design_1_multip_2num_0_0 : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of design_1_multip_2num_0_0 : entity is "multip_2num,Vivado 2019.2";
  attribute hls_module : string;
  attribute hls_module of design_1_multip_2num_0_0 : entity is "yes";
end design_1_multip_2num_0_0;

architecture STRUCTURE of design_1_multip_2num_0_0 is
  attribute C_S_AXI_AXILITES_ADDR_WIDTH : integer;
  attribute C_S_AXI_AXILITES_ADDR_WIDTH of inst : label is 6;
  attribute C_S_AXI_AXILITES_DATA_WIDTH : integer;
  attribute C_S_AXI_AXILITES_DATA_WIDTH of inst : label is 32;
  attribute C_S_AXI_AXILITES_WSTRB_WIDTH : integer;
  attribute C_S_AXI_AXILITES_WSTRB_WIDTH of inst : label is 4;
  attribute C_S_AXI_DATA_WIDTH : integer;
  attribute C_S_AXI_DATA_WIDTH of inst : label is 32;
  attribute C_S_AXI_WSTRB_WIDTH : integer;
  attribute C_S_AXI_WSTRB_WIDTH of inst : label is 4;
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of inst : label is "7'b0000001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "7'b0000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "7'b0000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of inst : label is "7'b0001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of inst : label is "7'b0010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of inst : label is "7'b0100000";
  attribute ap_ST_fsm_state7 : string;
  attribute ap_ST_fsm_state7 of inst : label is "7'b1000000";
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_clk : signal is "xilinx.com:signal:clock:1.0 ap_clk CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_clk : signal is "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_AXILiteS, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 200000000, PHASE 0.000, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_rst_n : signal is "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  attribute X_INTERFACE_PARAMETER of ap_rst_n : signal is "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_ARREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARREADY";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_ARVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARVALID";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_AWREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWREADY";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_AWVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWVALID";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_BREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BREADY";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_BVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BVALID";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_RREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RREADY";
  attribute X_INTERFACE_PARAMETER of s_axi_AXILiteS_RREADY : signal is "XIL_INTERFACENAME s_axi_AXILiteS, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 200000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 4, NUM_WRITE_THREADS 4, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_RVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RVALID";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_WREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WREADY";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_WVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WVALID";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_ARADDR : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARADDR";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_AWADDR : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWADDR";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_BRESP : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BRESP";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_RDATA : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RDATA";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_RRESP : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RRESP";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_WDATA : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WDATA";
  attribute X_INTERFACE_INFO of s_axi_AXILiteS_WSTRB : signal is "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WSTRB";
begin
inst: entity work.design_1_multip_2num_0_0_multip_2num
     port map (
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      s_axi_AXILiteS_ARADDR(5 downto 0) => s_axi_AXILiteS_ARADDR(5 downto 0),
      s_axi_AXILiteS_ARREADY => s_axi_AXILiteS_ARREADY,
      s_axi_AXILiteS_ARVALID => s_axi_AXILiteS_ARVALID,
      s_axi_AXILiteS_AWADDR(5 downto 0) => s_axi_AXILiteS_AWADDR(5 downto 0),
      s_axi_AXILiteS_AWREADY => s_axi_AXILiteS_AWREADY,
      s_axi_AXILiteS_AWVALID => s_axi_AXILiteS_AWVALID,
      s_axi_AXILiteS_BREADY => s_axi_AXILiteS_BREADY,
      s_axi_AXILiteS_BRESP(1 downto 0) => s_axi_AXILiteS_BRESP(1 downto 0),
      s_axi_AXILiteS_BVALID => s_axi_AXILiteS_BVALID,
      s_axi_AXILiteS_RDATA(31 downto 0) => s_axi_AXILiteS_RDATA(31 downto 0),
      s_axi_AXILiteS_RREADY => s_axi_AXILiteS_RREADY,
      s_axi_AXILiteS_RRESP(1 downto 0) => s_axi_AXILiteS_RRESP(1 downto 0),
      s_axi_AXILiteS_RVALID => s_axi_AXILiteS_RVALID,
      s_axi_AXILiteS_WDATA(31 downto 0) => s_axi_AXILiteS_WDATA(31 downto 0),
      s_axi_AXILiteS_WREADY => s_axi_AXILiteS_WREADY,
      s_axi_AXILiteS_WSTRB(3 downto 0) => s_axi_AXILiteS_WSTRB(3 downto 0),
      s_axi_AXILiteS_WVALID => s_axi_AXILiteS_WVALID
    );
end STRUCTURE;
