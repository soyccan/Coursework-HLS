-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1.3
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity imf2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (17 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (17 downto 0) );
end;


architecture behav of imf2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv18_0 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv4_B : STD_LOGIC_VECTOR (3 downto 0) := "1011";
    constant ap_const_lv4_5 : STD_LOGIC_VECTOR (3 downto 0) := "0101";
    constant ap_const_lv38_0 : STD_LOGIC_VECTOR (37 downto 0) := "00000000000000000000000000000000000000";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv32_22 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100010";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_3 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal in_2 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal c_1_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal c_1_ce0 : STD_LOGIC;
    signal c_1_q0 : STD_LOGIC_VECTOR (17 downto 0);
    signal init_3 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    signal ch_2 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    signal shift_reg_p_1_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_p_1_ce0 : STD_LOGIC;
    signal shift_reg_p_1_we0 : STD_LOGIC;
    signal shift_reg_p_1_d0 : STD_LOGIC_VECTOR (37 downto 0);
    signal shift_reg_p_1_q0 : STD_LOGIC_VECTOR (37 downto 0);
    signal cnt : STD_LOGIC_VECTOR (1 downto 0) := "00";
    signal i_3_load_reg_284 : STD_LOGIC_VECTOR (3 downto 0);
    signal c_1_load_reg_300 : STD_LOGIC_VECTOR (17 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal inc_fu_107_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal inc_reg_305 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ch_2_load_reg_310 : STD_LOGIC_VECTOR (0 downto 0);
    signal shift_reg_p_1_load_reg_331 : STD_LOGIC_VECTOR (37 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln27_fu_140_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln27_reg_336 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln27_1_fu_145_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln27_1_reg_342 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_277_p2 : STD_LOGIC_VECTOR (35 downto 0);
    signal m_reg_347 : STD_LOGIC_VECTOR (35 downto 0);
    signal trunc_ln37_fu_150_p1 : STD_LOGIC_VECTOR (34 downto 0);
    signal trunc_ln37_reg_352 : STD_LOGIC_VECTOR (34 downto 0);
    signal zext_ln27_fu_102_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln27_1_fu_128_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln29_fu_163_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal inc_3_fu_265_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal icmp_ln22_fu_90_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln31_fu_220_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln33_fu_232_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln35_fu_243_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_6_fu_120_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_fu_157_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal or_ln27_fu_174_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln27_fu_168_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln27_fu_178_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln27_1_fu_184_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln27_fu_190_p3 : STD_LOGIC_VECTOR (37 downto 0);
    signal sext_ln37_fu_197_p1 : STD_LOGIC_VECTOR (37 downto 0);
    signal trunc_ln37_1_fu_200_p1 : STD_LOGIC_VECTOR (34 downto 0);
    signal add_ln37_1_fu_211_p2 : STD_LOGIC_VECTOR (34 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);

    component duc_mul_mul_18s_1bkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (17 downto 0);
        din1 : IN STD_LOGIC_VECTOR (17 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (35 downto 0) );
    end component;


    component imf2_c_1 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (17 downto 0) );
    end component;


    component imf2_shift_reg_p_1 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (37 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (37 downto 0) );
    end component;



begin
    c_1_U : component imf2_c_1
    generic map (
        DataWidth => 18,
        AddressRange => 12,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => c_1_address0,
        ce0 => c_1_ce0,
        q0 => c_1_q0);

    shift_reg_p_1_U : component imf2_shift_reg_p_1
    generic map (
        DataWidth => 38,
        AddressRange => 26,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_p_1_address0,
        ce0 => shift_reg_p_1_ce0,
        we0 => shift_reg_p_1_we0,
        d0 => shift_reg_p_1_d0,
        q0 => shift_reg_p_1_q0);

    duc_mul_mul_18s_1bkb_U1 : component duc_mul_mul_18s_1bkb
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 18,
        din1_WIDTH => 18,
        dout_WIDTH => 36)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => c_1_load_reg_300,
        din1 => in_2,
        ce => ap_const_logic_1,
        dout => grp_fu_277_p2);





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


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv18_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                    ap_return_preg <= add_ln37_1_fu_211_p2(34 downto 17);
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                c_1_load_reg_300 <= c_1_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln27_reg_336 = ap_const_lv1_1) and (icmp_ln31_fu_220_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                ch_2 <= xor_ln33_fu_232_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                ch_2_load_reg_310 <= ch_2;
                inc_reg_305 <= inc_fu_107_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln27_reg_336 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                cnt <= add_ln35_fu_243_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                i_3 <= inc_3_fu_265_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                i_3_load_reg_284 <= i_3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                icmp_ln27_1_reg_342 <= icmp_ln27_1_fu_145_p2;
                icmp_ln27_reg_336 <= icmp_ln27_fu_140_p2;
                m_reg_347 <= grp_fu_277_p2;
                shift_reg_p_1_load_reg_331 <= shift_reg_p_1_q0;
                trunc_ln37_reg_352 <= trunc_ln37_fu_150_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln22_fu_90_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                in_2 <= x;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln27_reg_336 = ap_const_lv1_1) and (ch_2_load_reg_310 = ap_const_lv1_1) and (icmp_ln31_fu_220_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                init_3 <= ap_const_lv1_0;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    add_ln35_fu_243_p2 <= std_logic_vector(unsigned(cnt) + unsigned(ap_const_lv2_1));
    add_ln37_1_fu_211_p2 <= std_logic_vector(unsigned(trunc_ln37_1_fu_200_p1) + unsigned(trunc_ln37_reg_352));
    and_ln27_fu_178_p2 <= (xor_ln27_fu_168_p2 and or_ln27_fu_174_p2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(ap_CS_fsm_state5, add_ln37_1_fu_211_p2, ap_return_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            ap_return <= add_ln37_1_fu_211_p2(34 downto 17);
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;

    c_1_address0 <= zext_ln27_fu_102_p1(4 - 1 downto 0);

    c_1_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
            c_1_ce0 <= ap_const_logic_1;
        else 
            c_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln22_fu_90_p2 <= "1" when (i_3 = ap_const_lv4_0) else "0";
    icmp_ln27_1_fu_145_p2 <= "1" when (i_3_load_reg_284 = ap_const_lv4_5) else "0";
    icmp_ln27_fu_140_p2 <= "1" when (i_3_load_reg_284 = ap_const_lv4_B) else "0";
    icmp_ln31_fu_220_p2 <= "1" when (cnt = ap_const_lv2_3) else "0";
    inc_3_fu_265_p3 <= 
        ap_const_lv4_0 when (icmp_ln27_reg_336(0) = '1') else 
        inc_reg_305;
    inc_fu_107_p2 <= std_logic_vector(unsigned(ap_const_lv4_1) + unsigned(i_3_load_reg_284));
    or_ln27_1_fu_184_p2 <= (init_3 or and_ln27_fu_178_p2);
    or_ln27_fu_174_p2 <= (icmp_ln27_reg_336 or icmp_ln27_1_reg_342);
    select_ln27_fu_190_p3 <= 
        ap_const_lv38_0 when (or_ln27_1_fu_184_p2(0) = '1') else 
        shift_reg_p_1_load_reg_331;
        sext_ln37_fu_197_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(m_reg_347),38));


    shift_reg_p_1_address0_assign_proc : process(ap_CS_fsm_state3, zext_ln27_1_fu_128_p1, zext_ln29_fu_163_p1, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            shift_reg_p_1_address0 <= zext_ln29_fu_163_p1(5 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_p_1_address0 <= zext_ln27_1_fu_128_p1(5 - 1 downto 0);
        else 
            shift_reg_p_1_address0 <= "XXXXX";
        end if; 
    end process;


    shift_reg_p_1_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            shift_reg_p_1_ce0 <= ap_const_logic_1;
        else 
            shift_reg_p_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    shift_reg_p_1_d0 <= std_logic_vector(signed(sext_ln37_fu_197_p1) + signed(select_ln27_fu_190_p3));

    shift_reg_p_1_we0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            shift_reg_p_1_we0 <= ap_const_logic_1;
        else 
            shift_reg_p_1_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_6_fu_120_p3 <= (inc_fu_107_p2 & ch_2);
    tmp_fu_157_p3 <= (i_3_load_reg_284 & ch_2_load_reg_310);
    trunc_ln37_1_fu_200_p1 <= select_ln27_fu_190_p3(35 - 1 downto 0);
    trunc_ln37_fu_150_p1 <= grp_fu_277_p2(35 - 1 downto 0);
    xor_ln27_fu_168_p2 <= (init_3 xor ap_const_lv1_1);
    xor_ln33_fu_232_p2 <= (ch_2_load_reg_310 xor ap_const_lv1_1);
    zext_ln27_1_fu_128_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_6_fu_120_p3),64));
    zext_ln27_fu_102_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_3),64));
    zext_ln29_fu_163_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_157_p3),64));
end behav;
