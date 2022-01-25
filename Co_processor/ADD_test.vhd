-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
library work;
USE work.FloatPt.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ADD_test IS
END ADD_test;
 
ARCHITECTURE behavior OF ADD_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FPP_ADD_SUB
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         go : IN  std_logic;
         done : OUT  std_logic;
         result : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal go : std_logic := '0';

 	--Outputs
   signal done : std_logic;
   signal result : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FPP_ADD_SUB PORT MAP (
          A => A,
          B => B,
          clk => clk,
          reset => reset,
          go => go,
          done => done,
          result => result
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
		go <= '1';
		A <= X"00000009";
		wait for 100 ns;
		B <= X"00000001";
		wait for 100 ns;
		reset <= '1';
		wait for 100 ns;
		reset <= '0';
		--A1 <= FP_TO_SIGNED(A, 32);
		--B1 <= FP_TO_SIGNED(B, 32);
		--result1 <= FP_TO_SIGNED(result, 32);
      wait;
   end process;

END;
