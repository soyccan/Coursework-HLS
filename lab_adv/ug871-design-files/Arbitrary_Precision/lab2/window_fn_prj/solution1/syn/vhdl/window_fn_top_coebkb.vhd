-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity window_fn_top_coebkb_rom is 
    generic(
             DWIDTH     : integer := 17; 
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
    0 => "00000000000000000", 1 => "00000001001110101", 
    2 => "00000100110111110", 3 => "00001010110010010", 
    4 => "00010010101111101", 5 => "00011100011100011", 
    6 => "00100111100000100", 7 => "00110011100000111", 
    8 => "00111111111111111", 9 => "01001100011111000", 
    10 => "01011000011111011", 11 => "01100011100011100", 
    12 => "01101101010000010", 13 => "01110101001101101", 
    14 => "01111011001000001", 15 => "01111110110001010", 
    16 => "10000000000000000", 17 => "01111110110001010", 
    18 => "01111011001000001", 19 => "01110101001101101", 
    20 => "01101101010000010", 21 => "01100011100011100", 
    22 => "01011000011111011", 23 => "01001100011111000", 
    24 => "01000000000000000", 25 => "00110011100000111", 
    26 => "00100111100000100", 27 => "00011100011100011", 
    28 => "00010010101111101", 29 => "00001010110010010", 
    30 => "00000100110111110", 31 => "00000001001110101" );

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

entity window_fn_top_coebkb is
    generic (
        DataWidth : INTEGER := 17;
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


