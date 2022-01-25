library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Co_processor is
	port(
		A : in  std_logic_vector(31 downto 0);
		B : in  std_logic_vector(31 downto 0);
		n : in  integer;
		control : in std_logic_vector(2 downto 0);
		clk : in std_logic;
		reset : in std_logic;
		C : out  std_logic_vector(31 downto 0);
		R : out  std_logic_vector(31 downto 0);
		I : out  std_logic_vector(31 downto 0);
		F : out  std_logic_vector(31 downto 0);
		E : out  std_logic_vector(31 downto 0);
		done : INOUT  std_logic;         
      overflow : OUT std_logic   
	);
end Co_processor;

architecture structral of Co_processor is

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
	 
    COMPONENT FPP_DIVIDE
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         go : IN  std_logic;
         done : OUT  std_logic;
			overflow : OUT std_logic;
         result : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
	 
    COMPONENT FPP_MULT
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         go : IN  std_logic;
         done : OUT  std_logic;
			overflow : OUT std_logic;
         result : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
	 
	 
	 signal add_result : std_logic_vector(31 downto 0);
	 signal sub_result : std_logic_vector(31 downto 0);
	 signal mult_result : std_logic_vector(31 downto 0);
	 signal div_result : std_logic_vector(31 downto 0);
	 
	 signal add_done : std_logic;
	 signal sub_done : std_logic;
	 signal mult_done : std_logic;
	 signal div_done : std_logic;
	 
	 signal mult_overflow : std_logic;
	 signal div_overflow : std_logic;
	 
	 
begin
   add: FPP_ADD_SUB PORT MAP (
          A => A,
          B => B,
          clk => clk,
          reset => reset,
          go => '1',
          done => add_done,
          result => add_result
        );
		  
   sub: FPP_ADD_SUB PORT MAP (
          A => A,
          B => B,
          clk => clk,
          reset => reset,
          go => '1',
          done => sub_done,
          result => sub_result
        );
		  
   divide: FPP_DIVIDE PORT MAP (
          A => A,
          B => B,
          clk => clk,
          reset => reset,
          go => '1',
          done => div_done,
			 overflow => mult_overflow,
          result => div_result
        );
		 
   mult: FPP_MULT PORT MAP (
          A => A,
          B => B,
          clk => clk,
          reset => reset,
          go => '1',
          done => mult_done,
			 overflow => mult_overflow,
          result => mult_result
        );
	
  process (CLK) is
  begin
	if (control = "000") then -- add
		C <= add_result;
		done <= add_done;
	elsif (control = "001") then -- sub
		C <= sub_result;
		done <= sub_done;
	elsif (control = "010") then -- mult
		C <= mult_result;
		done <= mult_done;
	elsif (control = "011") then -- div
		C <= div_result;
		done <= div_done; 
	end if;
  end process;	


end structral;

