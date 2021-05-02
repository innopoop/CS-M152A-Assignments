`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 		 Ashley Zhu
// 
// Create Date:    10:07:36 05/01/2021 
// Design Name: 
// Module Name:    clock_gen 
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
module div_pow_2
	(
		input clk_in,
		input rst,
		output wire clk_div_2,
		output wire clk_div_4,
		output wire clk_div_8,
		output wire clk_div_16
	);
	
	reg [3:0] counter = 4'b0000;
	
	always@(posedge clk_in) begin
		if(rst) begin
			counter <= 4'b0000;
		end else begin
			counter <= counter + 1'b1;
		end
	end
	
	assign clk_div_2 = counter[0];
	assign clk_div_4 = counter[1];
	assign clk_div_8 = counter[2];
	assign clk_div_16 = counter[3];

endmodule

module div_32(
		input clk_in,
		input rst,
		output wire clk_div_32
	);
	
	reg [3:0] counter = 4'b0000;
	reg output_32 = 1'b0;
	
	always@(posedge clk_in) begin
		if(rst) begin
			output_32 <= 1'b0;
			counter <= 4'b0000;
		end else begin 
			if(counter == 4'b1111) begin
				output_32 <= ~output_32;
				counter <= 4'b0000;
			end
			counter <= counter + 1'b1;
		end
	end
	
	assign clk_div_32 = output_32;

endmodule

module div_26(
		input clk_in,
		input rst,
		output wire clk_div_26
	);
	
	reg [3:0] counter = 4'b0000;
	reg output_26 = 0;
	
	always@(posedge clk_in) begin
		if(rst) begin
			output_26 <= 0;
			counter <= 4'b0000;
		end else if(counter == 4'b1100) begin
			output_26 <= ~output_26;
			counter <= 0;
		end else begin
			counter <= counter + 1'b1;
		end
	end
	
	assign clk_div_26 = output_26;
	
endmodule

module div_3(
		input clk_in,
		input rst,
		output wire clk_div_3,
		output wire clk_pos,
		output wire clk_neg
	);
	
	reg [2:0] positive_counter = 3'b001;
	reg [2:0] negative_counter = 3'b001;
	
	always@(posedge clk_in) begin
		if(rst) begin
			positive_counter <= 3'b001;
		end else begin
			positive_counter <= {positive_counter[1:0],positive_counter[2]};
		end
	end
	
	always@(negedge clk_in) begin
		if(rst) begin
			negative_counter <= 3'b001;
		end else begin
			negative_counter <= {negative_counter[1:0],negative_counter[2]};
		end
	end
	
	assign clk_pos = positive_counter[2];
	assign clk_neg = negative_counter[2];
	assign clk_div_3 = ~rst && (clk_pos || clk_neg);

endmodule

module div_5(
		input clk_in,
		input rst,
		output wire clk_div_5
	);
	
	reg [4:0] positive_counter = 5'b00001;
	reg [4:0] negative_counter = 5'b00001;
	
	always@(posedge clk_in) begin
		if(rst) begin
			positive_counter <= 5'b0011;
		end else begin
			positive_counter <= {positive_counter[3:0], positive_counter[4]};
		end
	end
	
	always@(negedge clk_in) begin
		if(rst) begin
			negative_counter <= 5'b0011;
		end else begin
			negative_counter <= {negative_counter[3:0], negative_counter[4]};
		end
	end
	
	assign clk_div_5 = ~rst && (positive_counter[4] || negative_counter[4]);
	
endmodule

module div_200 (
		input clk_in,
		input rst,
		output wire clk_div
	);
	
	/*
		100 MHz = 100 000 000 Hz frequency
		period = 1/f => period = 1*10^(-8)s = 10ns
	*/
	
	reg [7:0] counter = 0;
	reg output_200 = 0;
	
	always@(posedge clk_in) begin
		if(rst) begin
			counter <= 0;
		end else begin
			counter <= counter + 1'b1;
			if(counter == 99) begin
				counter <= 0;
			end
		end
	end
	
	always@(posedge clk_in) begin
		if(rst) begin
			output_200 <= 0;
		end
		if(counter == 0) begin
			output_200 <= ~output_200;
		end
	end
	
	assign clk_div = ~rst && output_200;
	
endmodule

module strobe(
		input clk_in,
		input rst,
		output reg [7:0] toggle_counter
	);
	
	reg [1:0] counter = 2'b00;
	
	always@(posedge clk_in) begin
		if(rst) begin
			counter <= 0;
		end else begin
			counter <= counter + 1'b1;
		end
	end
	
	always@(posedge clk_in)begin
		if(rst) begin
			toggle_counter <= 8'b0000_0000;
		end else if(counter == 2'b11) begin
			toggle_counter <= toggle_counter - 8'd5;
		end else begin
			toggle_counter <= toggle_counter + 8'd3;
		end
	end
endmodule

module clock_gen(
		 input clk_in,
		 input rst,
		 output wire clk_div_2,
		 output wire clk_div_4,
		 output wire clk_div_8,
		 output wire clk_div_16,
		 output wire clk_div_32,
		 output wire clk_div_26,
		 output wire clk_div_3,
		 output wire clk_pos,
		 output wire clk_neg,
		 output wire clk_div_5,
		 output wire clk_div,
		 output wire [7:0] toggle_counter
    );
	 
	div_pow_2 task1(
		.clk_in(clk_in),
		.rst(rst),
		.clk_div_2(clk_div_2),
		.clk_div_4(clk_div_4),
		.clk_div_8(clk_div_8),
		.clk_div_16(clk_div_16)
	);
	
	div_32 task2(
		.clk_in(clk_in),
		.rst(rst),
		.clk_div_32(clk_div_32)
	);
	
	div_26 task3(
		.clk_in(clk_in),
		.rst(rst),
		.clk_div_26(clk_div_26)
	);
	
	div_3 task456(
		.clk_in(clk_in),
		.rst(rst),
		.clk_div_3(clk_div_3),
		.clk_pos(clk_pos),
		.clk_neg(clk_neg)
	);
	
	div_5 task7(
		.clk_in(clk_in),
		.rst(rst),
		.clk_div_5(clk_div_5)
	);
	
	div_200 task8(
		.clk_in(clk_in),
		.rst(rst),
		.clk_div(clk_div)
	);
	
	strobe task9(
		.clk_in(clk_in),
		.rst(rst),
		.toggle_counter(toggle_counter)
	);

endmodule
