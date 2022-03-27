`timescale 1ns / 1ps
module GRF_tb;

	// Inputs
	reg clk;
	reg reset;
	reg WE3;
	reg [31:0] PC;
	reg [4:0] A1;
	reg [4:0] A2;
	reg [4:0] A3;
	reg [31:0] WD;

	// Outputs
	wire [31:0] RD1;
	wire [31:0] RD2;

	// Instantiate the Unit Under Test (UUT)
	GRF uut (
		.clk(clk), 
		.reset(reset), 
		.WE3(WE3), 
		.PC(PC), 
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.WD(WD), 
		.RD1(RD1), 
		.RD2(RD2)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		WE3 = 0;
		PC = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		WD = 0;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		#10;
		reset = 0;
		WE3 = 1;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		WD = 10;
		#10;
		reset = 0;
		WE3 = 1;
		A1 = 0;
		A2 = 0;
		A3 = 1;
		WD = 99;
		#10;
		reset = 0;
		WE3 = 1;
		A1 = 0;
		A2 = 0;
		A3 = 2;
		WD = 2;
		#10;
		reset = 0;
		WE3 = 1;
		A1 = 1;
		A2 = 2;
		A3 = 3;
		WD = 3;
		#10;
		reset = 0;
		WE3 = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		WD = 0;

	end
    always #5 clk = ~clk;
	always #10 PC = PC + 4;
endmodule

