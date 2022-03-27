`timescale 1ns / 1ps

module DM_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] PC;
	reg [31:0] A;
	reg [31:0] WD;
	reg WE;

	// Outputs
	wire [31:0] RD;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.clk(clk), 
		.reset(reset), 
		.PC(PC), 
		.A(A), 
		.WD(WD), 
		.WE(WE), 
		.RD(RD)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		PC = 32'h0000_3000;
		A = 0;
		WD = 0;
		WE = 0;

		// Wait 20 ns for global reset to finish
		#20;
        reset = 0;
		// Add stimulus here
		A = 0;
		WD = 32'h0000_000f;
		WE = 1;

		#10
		A = 1;
		WD = 32'h0000_00ff;
		WE = 1;

		#10
		A = 2;
		WD = 32'h0000_0fff;
		WE = 1;

		#10
		A = 3;
		WD = 32'h0000_ffff;
		WE = 1;

		#10
		A = 4;
		WD = 32'h000f_ffff;
		WE = 1;

		#10
		A = 5;
		WD = 32'h00ff_ffff;
		WE = 1;

		#10
		A = 1;
		WD = 32'hf000_0000;
		WE = 1;
		#10
		A = 2;
		WD = 32'hff00_0000;
		WE = 1;
		
		#10
		A = 3;
		WD = 32'hfff0_0000;
		WE = 1;

		#10
		A = 4;
		WD = 32'hffff_0000;
		WE = 1;

		#10
		A = 4;
		WD = 32'h4444_0000;
		WE = 0;
		
		

	end

	always #5 clk = ~clk;

	always@(posedge clk) begin
		if(reset == 1) PC <= 32'h0000_3000;
		else PC <= PC + 4;
	end
      
endmodule

