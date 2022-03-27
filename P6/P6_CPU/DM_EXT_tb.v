`timescale 1ns / 1ps

module DM_EXT_tb;

	// Inputs
	reg [31:0] IR_M;
	reg [31:0] DM_RD_in;
	reg [31:0] MemAddr;

	// Outputs
	wire [31:0] DM_RD_out;

	// Instantiate the Unit Under Test (UUT)
	DM_EXT uut (
		.IR_M(IR_M), 
		.DM_RD_in(DM_RD_in), 
		.MemAddr(MemAddr), 
		.DM_RD_out(DM_RD_out)
	);

	initial begin
		// Initialize Inputs
		IR_M = 0;
		DM_RD_in = 0;
		MemAddr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

