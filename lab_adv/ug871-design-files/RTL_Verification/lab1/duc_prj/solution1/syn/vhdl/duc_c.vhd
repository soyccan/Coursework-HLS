-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity duc_c_rom is 
    generic(
             DWIDTH     : integer := 18; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 48
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of duc_c_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000000000011001", 1 => "111111111111001000", 
    2 => "000000000001111001", 3 => "111111111101100101", 
    4 => "000000000001010100", 5 => "000000000010110000", 
    6 => "111111110101011000", 7 => "000000010110000111", 
    8 => "111111011100010101", 9 => "000000110000101100", 
    10 => "111111000101111001", 11 => "010000111101100011", 
    12 => "111111000101111001", 13 => "000000110000101100", 
    14 => "111111011100010101", 15 => "000000010110000111", 
    16 => "111111110101011000", 17 => "000000000010110000", 
    18 => "000000000001010100", 19 => "111111111101100101", 
    20 => "000000000001111001", 21 => "111111111111001000", 
    22 => "000000000000011001", 23 => "000000000000000000", 
    24 => "000000000000101110", 25 => "111111111111110000", 
    26 => "111111111110110010", 27 => "000000000011100010", 
    28 => "111111111010100101", 29 => "000000000100001100", 
    30 => "000000000100100000", 31 => "111111100101000001", 
    32 => "000001001010001111", 33 => "111101001100100100", 
    34 to 35=> "001001111110100001", 36 => "111101001100100100", 
    37 => "000001001010001111", 38 => "111111100101000001", 
    39 => "000000000100100000", 40 => "000000000100001100", 
    41 => "111111111010100101", 42 => "000000000011100010", 
    43 => "111111111110110010", 44 => "111111111111110000", 
    45 => "000000000000101110", 46 to 47=> "000000000000000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity duc_c is
    generic (
        DataWidth : INTEGER := 18;
        AddressRange : INTEGER := 48;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of duc_c is
    component duc_c_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    duc_c_rom_U :  component duc_c_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


