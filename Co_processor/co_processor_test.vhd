--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:46:35 01/25/2022
-- Design Name:   
-- Module Name:   E:/sadegh/iust/term7/Cources/CAD/project/CAD-4001_Project/Co_processor/co_processor_test.vhd
-- Project Name:  Co_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Co_processor
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY co_processor_test IS
END co_processor_test;
 
ARCHITECTURE behavior OF co_processor_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Co_processor
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         n : IN  integer;
         control : IN  std_logic_vector(2 downto 0);
         clk : IN  std_logic;
			reset : in std_logic;
         C : OUT  std_logic_vector(31 downto 0);
         R : OUT  std_logic_vector(31 downto 0);
         I : OUT  std_logic_vector(31 downto 0);
         F : OUT  std_logic_vector(31 downto 0);
         E : OUT  std_logic_vector(31 downto 0);
         done : INOUT  std_logic;
         overflow : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');
   signal n : integer := 0;
   signal control : std_logic_vector(2 downto 0) := "000";
   signal clk : std_logic := '0';
	signal reset : std_logic := '0';

	--BiDirs
   signal done : std_logic;

 	--Outputs 
   signal C : std_logic_vector(31 downto 0);
   signal R : std_logic_vector(31 downto 0);
   signal I : std_logic_vector(31 downto 0);
   signal F : std_logic_vector(31 downto 0);
   signal E : std_logic_vector(31 downto 0);
   signal overflow : std_logic;

   -- Clock period definitions
   constant clk_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Co_processor PORT MAP (
          A => A,
          B => B,
          n => n,
          control => control,
          clk => clk,
			 reset => reset,
          C => C,
          R => R,
          I => I,
          F => F,
          E => E,
          done => done,
          overflow => overflow
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		A <= X"00000009";
		wait for 75 ns;
		B <= X"00000001";
		wait for 20 ns;
		reset <= '1';
		control <= "001";
		wait for 75 ns;
		reset <= '0';
		wait for 20 ns;
		reset <= '1';
		control <= "010";
		wait for 100 ns;
		reset <= '0';
		wait for 200 ns;
		reset <= '1';
		control <= "011";
		wait for 20 ns;
		reset <= '0';
      wait;
   end process;

END;
