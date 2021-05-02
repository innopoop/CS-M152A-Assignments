`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:	Ashley Zhu
//
// Create Date:   12:31:13 04/18/2021
// Design Name:   FPCVT
// Module Name:   /home/ashley/Documents/M152A/m152A_lab1/FPCVT_tb.v
// Project Name:  m152A_lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_tb;

	// Inputs
	reg [12:0] D;
	wire S;
	wire [2:0] E;
	wire [4:0] F;
	// Outputs

	// Instantiate the Unit Under Test (UUT)
	
	FPCVT uut (
		.D(D),
		.S(S),
		.E(E),
		.F(F)
	);

	initial begin
		/*
		============Test Cases============
		-4096: 	1 0000 0000 0000
		4095:  	0 1111 1111 1111
		422: 		0 0001 1010 0110
		-422:		1 1110 0101 1010
		
					0 0000 0110 1100
					0 0000 0110 1101
					0 0000 0110 1110
					0 0000 0110 1111
					0 0000 1111 1101
		
		Edge Cases
		- If you increment beyond 
	*/
		D = 13'b1_0000_0000_0000;
		#100;
		$display("1_0000_0000_0000",S, E, F);
		
		D = 13'b0_1111_1111_1111;
		#100;
		$display("0_1111_1111_1111", S, E, F);
		
		D = 13'b0_0001_1010_0110;
		#100;
		$display("0_0001_1010_0110", S, E, F);
		
		D = 13'b1_1110_0101_1010;
		#100;
		$display("1_1110_0101_1010",S, E, F);
		
		D = 13'b0_0000_0110_1100;
		#100;
		$display("0_0000_0110_1100",S, E, F);
		
		D = 13'b0_0000_0110_1110;
		#100;
		$display("0_0000_0110_1110",S, E, F);
		
		D = 13'b0_0000_0110_1111;
		#100;
		$display("0_0000_0110_1111",S, E, F);
		
		D = 13'b1_1110_0101_1010;
		#100;
		$display("1_1110_0101_1010",S, E, F);
		
		D = 13'b1_1111_1111_1111;
		#100;
		$display("1_1111_1111_1111",S, E, F);
		
		D = 13'b0_0000_0000_0001;
		#100;
		$display("0_0000_0000_0001",S, E, F);
		
		D = 13'b0_0000_0000_0000;
		#100;
		$display("0_0000_0000_0000",S, E, F);
		
		
		$finish;
	end
      
endmodule

