-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1.3
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity fir is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    y : OUT STD_LOGIC_VECTOR (31 downto 0);
    y_ap_vld : OUT STD_LOGIC;
    c_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    c_ce0 : OUT STD_LOGIC;
    c_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    x_ap_vld : IN STD_LOGIC );
end;


architecture behav of fir is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "fir,hls_ip_2019_1_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-e,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.339000,HLS_SYN_LAT=34,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=208,HLS_SYN_LUT=234,HLS_VERSION=2019_1_3}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv5_A : STD_LOGIC_VECTOR (4 downto 0) := "01010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv5_1F : STD_LOGIC_VECTOR (4 downto 0) := "11111";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal x_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal x_in_sig : STD_LOGIC_VECTOR (31 downto 0);
    signal x_ap_vld_preg : STD_LOGIC := '0';
    signal x_ap_vld_in_sig : STD_LOGIC;
    signal shift_reg_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal shift_reg_ce0 : STD_LOGIC;
    signal shift_reg_we0 : STD_LOGIC;
    signal shift_reg_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal x_blk_n : STD_LOGIC;
    signal ap_block_state1 : BOOLEAN;
    signal sext_ln66_fu_144_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal sext_ln66_reg_193 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln67_fu_156_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln67_reg_202 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_148_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal grp_fu_137_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_reg_221 : STD_LOGIC_VECTOR (4 downto 0);
    signal acc_fu_181_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal acc_0_reg_103 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_i_0_phi_fu_120_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_0_reg_116 : STD_LOGIC_VECTOR (4 downto 0);
    signal data_0_reg_128 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln71_fu_162_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln71_1_fu_167_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln74_fu_171_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_137_p0 : STD_LOGIC_VECTOR (4 downto 0);
    signal mul_ln74_fu_175_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln74_fu_175_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);

    component fir_shift_reg IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    shift_reg_U : component fir_shift_reg
    generic map (
        DataWidth => 32,
        AddressRange => 11,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_address0,
        ce0 => shift_reg_ce0,
        we0 => shift_reg_we0,
        d0 => shift_reg_d0,
        q0 => shift_reg_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    x_ap_vld_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                x_ap_vld_preg <= ap_const_logic_0;
            else
                if (((tmp_fu_148_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    x_ap_vld_preg <= ap_const_logic_0;
                elsif ((not(((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) and (x_ap_vld = ap_const_logic_1))) then 
                    x_ap_vld_preg <= x_ap_vld;
                end if; 
            end if;
        end if;
    end process;


    x_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                x_preg <= ap_const_lv32_0;
            else
                if ((not(((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) and (x_ap_vld = ap_const_logic_1))) then 
                    x_preg <= x;
                end if; 
            end if;
        end if;
    end process;


    acc_0_reg_103_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                acc_0_reg_103 <= acc_fu_181_p2;
            elsif ((not(((ap_start = ap_const_logic_0) or (x_ap_vld_in_sig = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                acc_0_reg_103 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    data_0_reg_128_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln67_reg_202 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                data_0_reg_128 <= shift_reg_q0;
            elsif (((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                data_0_reg_128 <= x_in_sig;
            end if; 
        end if;
    end process;

    i_0_reg_116_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                i_0_reg_116 <= i_reg_221;
            elsif ((not(((ap_start = ap_const_logic_0) or (x_ap_vld_in_sig = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_116 <= ap_const_lv5_A;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                i_reg_221 <= grp_fu_137_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_148_p3 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                icmp_ln67_reg_202 <= icmp_ln67_fu_156_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                sext_ln66_reg_193 <= sext_ln66_fu_144_p1;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, x_ap_vld_in_sig, ap_CS_fsm_state2, tmp_fu_148_p3)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_start = ap_const_logic_0) or (x_ap_vld_in_sig = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((tmp_fu_148_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;
    acc_fu_181_p2 <= std_logic_vector(unsigned(mul_ln74_fu_175_p2) + unsigned(acc_0_reg_103));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);

    ap_block_state1_assign_proc : process(ap_start, x_ap_vld_in_sig)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (x_ap_vld_in_sig = ap_const_logic_0));
    end process;


    ap_done_assign_proc : process(ap_CS_fsm_state2, tmp_fu_148_p3)
    begin
        if (((tmp_fu_148_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;

    ap_phi_mux_i_0_phi_fu_120_p4 <= i_0_reg_116;

    ap_ready_assign_proc : process(ap_CS_fsm_state2, tmp_fu_148_p3)
    begin
        if (((tmp_fu_148_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_address0 <= zext_ln74_fu_171_p1(4 - 1 downto 0);

    c_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            c_ce0 <= ap_const_logic_1;
        else 
            c_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    grp_fu_137_p0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_phi_mux_i_0_phi_fu_120_p4, i_0_reg_116)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            grp_fu_137_p0 <= i_0_reg_116;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_fu_137_p0 <= ap_phi_mux_i_0_phi_fu_120_p4;
        else 
            grp_fu_137_p0 <= "XXXXX";
        end if; 
    end process;

    grp_fu_137_p2 <= std_logic_vector(signed(grp_fu_137_p0) + signed(ap_const_lv5_1F));
    icmp_ln67_fu_156_p2 <= "1" when (i_0_reg_116 = ap_const_lv5_0) else "0";
    mul_ln74_fu_175_p0 <= c_q0;
    mul_ln74_fu_175_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(mul_ln74_fu_175_p0) * signed(data_0_reg_128))), 32));
        sext_ln66_fu_144_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(i_0_reg_116),32));


    shift_reg_address0_assign_proc : process(ap_CS_fsm_state2, icmp_ln67_fu_156_p2, tmp_fu_148_p3, ap_CS_fsm_state3, zext_ln71_fu_162_p1, zext_ln71_1_fu_167_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_address0 <= zext_ln71_1_fu_167_p1(4 - 1 downto 0);
        elsif (((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_address0 <= ap_const_lv4_0;
        elsif (((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_address0 <= zext_ln71_fu_162_p1(4 - 1 downto 0);
        else 
            shift_reg_address0 <= "XXXX";
        end if; 
    end process;


    shift_reg_ce0_assign_proc : process(ap_CS_fsm_state2, icmp_ln67_fu_156_p2, tmp_fu_148_p3, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or ((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            shift_reg_ce0 <= ap_const_logic_1;
        else 
            shift_reg_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_d0_assign_proc : process(x_in_sig, shift_reg_q0, ap_CS_fsm_state2, icmp_ln67_fu_156_p2, tmp_fu_148_p3, ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_d0 <= shift_reg_q0;
        elsif (((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_d0 <= x_in_sig;
        else 
            shift_reg_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    shift_reg_we0_assign_proc : process(ap_CS_fsm_state2, icmp_ln67_fu_156_p2, icmp_ln67_reg_202, tmp_fu_148_p3, ap_CS_fsm_state3)
    begin
        if ((((icmp_ln67_reg_202 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3)) or ((tmp_fu_148_p3 = ap_const_lv1_0) and (icmp_ln67_fu_156_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            shift_reg_we0 <= ap_const_logic_1;
        else 
            shift_reg_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_fu_148_p3 <= i_0_reg_116(4 downto 4);

    x_ap_vld_in_sig_assign_proc : process(x_ap_vld, x_ap_vld_preg)
    begin
        if ((x_ap_vld = ap_const_logic_1)) then 
            x_ap_vld_in_sig <= x_ap_vld;
        else 
            x_ap_vld_in_sig <= x_ap_vld_preg;
        end if; 
    end process;


    x_blk_n_assign_proc : process(ap_start, ap_CS_fsm_state1, x_ap_vld)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            x_blk_n <= x_ap_vld;
        else 
            x_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    x_in_sig_assign_proc : process(x, x_preg, x_ap_vld)
    begin
        if ((x_ap_vld = ap_const_logic_1)) then 
            x_in_sig <= x;
        else 
            x_in_sig <= x_preg;
        end if; 
    end process;

    y <= acc_0_reg_103;

    y_ap_vld_assign_proc : process(ap_CS_fsm_state2, tmp_fu_148_p3)
    begin
        if (((tmp_fu_148_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            y_ap_vld <= ap_const_logic_1;
        else 
            y_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    zext_ln71_1_fu_167_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sext_ln66_reg_193),64));
    zext_ln71_fu_162_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(grp_fu_137_p2),64));
    zext_ln74_fu_171_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sext_ln66_reg_193),64));
end behav;
