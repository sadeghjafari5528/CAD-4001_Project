library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

package FloatPt is
--------------------
--convert a signed integer to flt point format
  function SIGNED_TO_FP(v  : signed) return std_logic_vector;
--convert a number in 32-bit flt format to a signed vector of length N
  function FP_TO_SIGNED(fp : std_logic_vector; N : integer) return signed;
---------------------
  component FPP_MULT is
    port(A        : in  std_logic_vector(31 downto 0);
         B        : in  std_logic_vector(31 downto 0);
         clk      : in  std_logic;
         reset    : in  std_logic;
         go       : in  std_logic;
         done     : out std_logic;
         overflow : out std_logic;
         result   : out std_logic_vector(31 downto 0)
         );
  end component;
-----------------------
  component FPP_ADD_SUB is
    port(A      : in  std_logic_vector(31 downto 0);
         B      : in  std_logic_vector(31 downto 0);
         clk    : in  std_logic;
         reset  : in  std_logic;
         go     : in  std_logic;
         done   : out std_logic;
         result : out std_logic_vector(31 downto 0)
         );
  end component;
-----------------------
  component FPP_DIVIDE is
    port (A        : in  std_logic_vector(31 downto 0);  --Dividend
          B        : in  std_logic_vector(31 downto 0);  --Divisor
          clk      : in  std_logic;     --Master clock
          reset    : in  std_logic;     --Global asynch reset
          go       : in  std_logic;     --Enable
          done     : out std_logic;     --Flag for done computing
          overflow : out std_logic;     --Flag for overflow
          result   : out std_logic_vector(31 downto 0)  --Holds final FP result
          );
  end component;
------------------------
  component MantissaDivision is
    generic (NBIT : integer := 24;
             EBIT : integer := 8);
    port(
      clkin : in  std_logic;            --50 mhz expected in
      reset : in  std_logic;  --only needed to initialize state machine 
      start : in  std_logic;            --external start request
      done  : out std_logic;            --division complete signal out
      as    : in  unsigned(NBIT-1 downto 0);  --aligned  dividend mantissa
      bs    : in  unsigned(NBIT-1 downto 0);  --divisor mantissa
      qs    : out unsigned(NBIT-1 downto 0);  -- quotient
      shift : out unsigned(EBIT-1 downto 0)
      );
  end component;
--------------------------
end package FloatPt;

---===========================================
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

package body FloatPt is
------------------------
  use IEEE.std_logic_1164.all;
  use IEEE.numeric_std.all;

  function SIGNED_TO_FP(v : signed) return std_logic_vector is
--Convert a signed binary integer to 32-bit floating pt sign-magnitude format 
    variable i   : integer range 0 to v'left+1;
    variable j   : integer range 0 to 255;
    variable fp  : std_logic_vector(31 downto 0);  --returned FP
    variable exp : integer range -1024 to 1024;    --exponent
    variable m   : unsigned(v'length downto 0);    --mantissa + leading bit
    
  begin
    m   := '0' & unsigned(abs(v));  --we use the mag of v to create a mantissa
    --start with biased exp equiv to 2**(LENGTH-1), so m becomes the mantissa, m.mmmmm...
    --i.e. mag(v) = 2**(exp-127) * m.m m m m m....
    exp := 127 + m'length-1;
    --normalize m as the mantissa with one bit in front of the decimal point 
    for i in 0 to m'left loop
      if m(m'left) = '1' then
        j := i;
        exit;
      else
        m := m(m'left-1 downto 0) & '0';
                                        --exp:= exp - 1;
      end if;
    end loop;
    exp              := exp - j;
    fp(30 downto 23) := std_logic_vector(TO_UNSIGNED(exp, 8));
    --Make sure we have enough bits for a normalized full mantissa (23)
    -- and at the same time remove the mantissa leading 1
    if m'length < 24 then  -- <24 bits, bottom bits set to 0, and drop the leading 1        
      fp(23-m'length downto 0)  := (others => '0');
      fp(22 downto 24-m'length) := std_logic_vector(m(m'length-2 downto 0));
    else  --if >= 24, drop leading 1 and take next 23 bits for fp
      fp(22 downto 0) := std_logic_vector(m(m'length-2 downto m'length-24));
    end if;

    if v(v'left) = '1' then
      fp(31) := '1';
    else fp(31) := '0';
    end if;
    return fp;
  end function SIGNED_TO_FP;
--------------------------------
  use IEEE.std_logic_1164.all;
  use IEEE.numeric_std.all;
--Convert a number in std 32-bit flt pt format to a signed binary integer with N bits.
--NOTE that N must be large enough for the entire truncated result as a signed integer
--If the number is positive, the result can be typecast into unsigned if desired.
  function FP_TO_SIGNED(fp : std_logic_vector; N : integer) return signed is
    variable num    : unsigned(N+1 downto 0);
    variable result : signed(N+1 downto 0);   --returned number
    variable exp    : integer range -1024 to 1023;
    variable m      : unsigned(24 downto 0);
  begin
    m   := "01" & unsigned(fp(22 downto 0));  --restore the mantissa leading 1 
    exp := TO_INTEGER(unsigned(fp(30 downto 23))) - 127;  --unbias the exponent
    if exp < 0 then                     --number less than 1 truncated to 0
      num := (others => '0');
    elsif exp >= N then
      num := (others => '1');           --num greater than 2**N saturates
    else
      num(exp+1 downto 0)   := m(24 downto 23-exp);  --effectively multiply m by 2**exp,
      num(N+1 downto exp+2) := (others => '0');  --  and pad with leading 0's.
    end if;
    if fp(31) = '1' then
      result := -signed(num);
    else
      result := signed(num);
    end if;
    return result(N-1 downto 0);
  end function FP_TO_SIGNED;
---------------------------------
end package body FloatPt;