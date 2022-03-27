`timescale 1ns / 1ps
module ShamtEXT_tb;

	// Inputs
	reg [4:0] shamt;

	// Outputs
	wire [31:0] shamt32;

	// Instantiate the Unit Under Test (UUT)
	ShamtEXT uut (
		.shamt(shamt), 
		.shamt32(shamt32)
	);

	initial begin
		// Initialize Inputs
		shamt = 0;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		shamt = 1;
		#5;
		shamt = 2;
		#5;
		shamt = 3;
		#5;
		shamt = 4;
		#5;
		shamt = 5;
		#5;
		shamt = 6;

	end
      
endmodule

