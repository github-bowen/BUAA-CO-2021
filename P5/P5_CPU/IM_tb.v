`timescale 1ns / 1ps
module IM_tb;

	// Inputs
	reg [31:0] PC;

	// Outputs
	wire [31:0] IR;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.PC(PC), 
		.IR(IR)
	);

	initial begin
		// Initialize Inputs
		PC = 32'h3000;
        
		// Add stimulus here

	end

	always #10 PC = PC + 4;
      
endmodule

