`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:		Ashley Zhu
//
// Create Date:   12:05:37 05/01/2021
// Design Name:   clock_gen
// Module Name:   /home/ashley/Documents/M152A/CSM152ALab2_505308582/testbench_505308582.v
// Project Name:  CSM152ALab2_505308582
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_gen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench_505308582;

	reg clk;
	reg rst;
	
	wire clk_div_2;
	wire clk_div_4;
	wire clk_div_8;
	wire clk_div_16;
	wire clk_div_32;
	wire clk_div_26;
	wire clk_div_3;
	wire clk_pos;
	wire clk_neg;
	wire clk_div_5;
	wire clk_div;
	
	wire [7:0] toggle_counter;

	// Instantiate the Unit Under Test (UUT)
	clock_gen uut (
		.clk_in(clk),
		.rst(rst),
		.clk_div_2(clk_div_2),
		.clk_div_4(clk_div_4),
		.clk_div_8(clk_div_8),
		.clk_div_16(clk_div_16),
		.clk_div_32(clk_div_32),
		.clk_div_26(clk_div_26),
		.clk_div_3(clk_div_3),
		.clk_pos(clk_pos),
		.clk_neg(clk_neg),
		.clk_div_5(clk_div_5),
		.clk_div(clk_div),
		.toggle_counter(toggle_counter)
	);
	
	always #5 clk = ~clk;

	initial begin
		// Global Reset
		clk = 0;
		rst = 1;

		#100;
		
		// Global Clk on
 		clk = 1;
		rst = 0;
		
		#1000;
		
		//after sufficient time has passed for div_200, finish the test
		$finish;
	end
      
endmodule

