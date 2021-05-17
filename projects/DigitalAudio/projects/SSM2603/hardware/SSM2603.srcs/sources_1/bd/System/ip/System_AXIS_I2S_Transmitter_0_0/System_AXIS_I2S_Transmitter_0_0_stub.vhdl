-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Sat Feb 13 22:12:05 2021
-- Host        : PC running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               H:/NextCloud/Git/ZYBO/projects/DigitalAudio/SSM2603/hardware/SSM2603.srcs/sources_1/bd/System/ip/System_AXIS_I2S_Transmitter_0_0/System_AXIS_I2S_Transmitter_0_0_stub.vhdl
-- Design      : System_AXIS_I2S_Transmitter_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z010clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity System_AXIS_I2S_Transmitter_0_0 is
  Port ( 
    MCLK : in STD_LOGIC;
    nReset : in STD_LOGIC;
    LRCLK : out STD_LOGIC;
    SCLK : out STD_LOGIC;
    SD : out STD_LOGIC;
    ACLK : in STD_LOGIC;
    ARESETn : in STD_LOGIC;
    TDATA_RXD : in STD_LOGIC_VECTOR ( 31 downto 0 );
    TREADY_RXD : out STD_LOGIC;
    TVALID_RXD : in STD_LOGIC
  );

end System_AXIS_I2S_Transmitter_0_0;

architecture stub of System_AXIS_I2S_Transmitter_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "MCLK,nReset,LRCLK,SCLK,SD,ACLK,ARESETn,TDATA_RXD[31:0],TREADY_RXD,TVALID_RXD";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "AXIS_I2S,Vivado 2019.2";
begin
end;