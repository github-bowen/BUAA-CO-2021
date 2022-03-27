`timescale 1ns / 1ps

module BE_tb;

	// Inputs
	reg [31:0] IR_M;
	reg [31:0] MemAddr;

	// Outputs
	wire [3:0] m_data_byteen;

	// Instantiate the Unit Under Test (UUT)
	BE uut (
		.IR_M(IR_M), 
		.MemAddr(MemAddr), 
		.m_data_byteen(m_data_byteen)
	);

	initial begin
		// Initialize Inputs
		IR_M = 0;
		MemAddr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

