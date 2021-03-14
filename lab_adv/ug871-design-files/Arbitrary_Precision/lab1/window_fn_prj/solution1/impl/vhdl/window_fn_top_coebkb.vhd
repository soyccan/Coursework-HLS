-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity window_fn_top_coebkb_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of window_fn_top_coebkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000000000000000000000000000000", 
    1 => "00111100000111010110100000110000", 
    2 => "00111101000110111110010100001100", 
    3 => "00111101101011001001001100111011", 
    4 => "00111110000101011111011000011010", 
    5 => "00111110011000111000110001001100", 
    6 => "00111110100111100000100001110101", 
    7 => "00111110110011100000111010010000", 
    8 => "00111111000000000000000000000000", 
    9 => "00111111000110001111100010111000", 
    10 => "00111111001100001111101111000101", 
    11 => "00111111010001110001110011101101", 
    12 => "00111111010110101000001001111010", 
    13 => "00111111011010100110110110011001", 
    14 => "00111111011101100100000110101111", 
    15 => "00111111011111011000101001011111", 
    16 => "00111111100000000000000000000000", 
    17 => "00111111011111011000101001011111", 
    18 => "00111111011101100100000110101111", 
    19 => "00111111011010100110110110011001", 
    20 => "00111111010110101000001001111010", 
    21 => "00111111010001110001110011101101", 
    22 => "00111111001100001111101111000101", 
    23 => "00111111000110001111100010111000", 
    24 => "00111111000000000000000000000000", 
    25 => "00111110110011100000111010010000", 
    26 => "00111110100111100000100001110101", 
    27 => "00111110011000111000110001001100", 
    28 => "00111110000101011111011000011010", 
    29 => "00111101101011001001001100111011", 
    30 => "00111101000110111110010100001100", 
    31 => "00111100000111010110100000110000" );


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

entity window_fn_top_coebkb is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of window_fn_top_coebkb is
    component window_fn_top_coebkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    window_fn_top_coebkb_rom_U :  component window_fn_top_coebkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


