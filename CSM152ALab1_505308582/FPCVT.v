`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Ashley Zhu
// 
// Create Date:    14:26:46 04/13/2021 
// Design Name: 
// Module Name:    FPCVT 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

//Helper Modules

module SignedMagnitude(tc_i, sm_o);
	input [12:0] tc_i;
	output reg [13:0] sm_o;
	
	always@(*) begin
		if(tc_i[12] == 1'b1) begin
			/*
				We know that the number is negative
				Find 
					2^[size] - magnitude from [12:0]
				Return
					[1, ...magnitude]
			*/
			sm_o = {1'b1, ~tc_i + 1'b1};
		end else begin
			/*
				We know that the number is positive
				Return
					[0, ...magnitude]
			*/
			sm_o = {1'b0, tc_i[12:0]};
		end
	end
endmodule

module PriorityEncoder(sm, sign, round, E, F);
		input wire [13:0]sm;
		output reg sign;
		output reg round;
		output reg [2:0] E;
		output reg [4:0] F;
		
	reg [12:0] mag;
	
	/*
		01_0000_0000_0000
		11_0000_0000_0000
	*/
	
	always @ (*) begin
		sign = sm[13];
		mag = sm[12:0];
		
		
		if(mag[12:5] == 8'b0) begin
			E = 0;
			F = mag[4:0];
			round = 0;
		end else if(mag[12:6] == 7'b0) begin
			E = 1;
			F = mag[5:1];
			round = mag[0];
		end else if(mag[12:7] == 6'b0) begin
			E = 2;
			F = mag[6:2];
			round = mag[1];
		end else if(mag[12:8] == 5'b0) begin
			E = 3;
			F = mag[7:3];
			round = mag[2];
		end else if(mag[12:9] == 4'b0) begin
			E = 4;
			F = mag[8:4];
			round = mag[3];
		end else if(mag[12:10] == 3'b0) begin
			E = 5;
			F = mag[10:5];
			round = mag[4];
		end else if(mag[12:11] == 2'b0) begin
			E = 6;
			F = mag[10:6];
			round = mag[5];
		end else if(mag[12] == 1'b0) begin
			E = 7;
			F = mag[11:7];
			round = mag[6];
		end else begin
			E = 7;
			F = 5'b1_1111;
			round = 0;
		end
	end
endmodule

module Round(
	EIn, FIn, R, EOut, FOut
	);
	input [2:0] EIn;
	input [4:0] FIn;
	input R;
	output reg [2:0] EOut;
	output reg [4:0] FOut;
	
	always@(*) begin
		if(R == 1) begin
			/*Round up*/
			if(FIn == 5'b1_1111) begin
				if(EIn != 3'b111) begin
					FOut = 5'b10000;
					EOut = EIn + 1;
				end else begin
					FOut = FIn;
					EOut = EIn;
				end
			end else begin
				FOut = FIn + 1;
				EOut = EIn;
			end
		end else begin
			/*Round Down*/
			EOut = EIn;
			FOut = FIn;
		end
	end
endmodule

module FPCVT(D, S, E, F);
	input [12:0] D;
	output wire S;
	output wire [2:0] E;
	output wire [4:0] F;
		 
	wire [13: 0] sm;
	wire R;
	 
	/*
		Structure for Linear Encoding
		D0 (Least Significant Bit) => D12 (Most Significant Bit)
		
		Two's Complement Representation
		
		Structure for Floating Point Encoding
		
		Bit		8 7 6 5 4 3 2 1 0
		Purpose	S E E E F F F F F
	*/
	 
	SignedMagnitude SM
		(
			.tc_i(D),
			.sm_o(sm)
		);
		
		
	wire [4:0] FIn;
	wire [2:0] EIn;
	

	PriorityEncoder PE
	(
		.sm(sm),
		.sign(S),
		.round(R),
		.E(EIn),
		.F(FIn)
	);
	
	Round rounder
	(
		.EIn(EIn),
		.FIn(FIn),
		.R(R),
		.EOut(E),
		.FOut(F)
	);

endmodule
