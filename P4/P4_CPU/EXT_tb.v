`timescale 1ns / 1ps
module EXT_tb;

	// Inputs
	reg ZeroEXT;
	reg [15:0] _16IMM;

	// Outputs
	wire [31:0] EXTResult;

	// Instantiate the Unit Under Test (UUT)
	EXT uut (
		.ZeroEXT(ZeroEXT), 
		._16IMM(_16IMM), 
		.EXTResult(EXTResult)
	);

	initial begin
		// Initialize Inputs
		ZeroEXT = 0;
		_16IMM = 0;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		#5;
		ZeroEXT = 0;
		_16IMM = 16'b0000_1111_0000_0000;
		#5;
		ZeroEXT = 0;
		_16IMM = 16'b1111_1111_0000_0000;
		#5;
		ZeroEXT = 1;
		_16IMM = 16'b0000_1111_0000_0000;
		#5;
		ZeroEXT = 1;
		_16IMM = 16'b1111_1111_0000_0000;
		#5;
		ZeroEXT = 0;
		_16IMM = 16'b0000_1111_0000_0000;
		#5;
		ZeroEXT = 1;
		_16IMM = 16'b1111_1111_0000_0000;
		#5;
		ZeroEXT = 0;
		_16IMM = 16'b1111_1111_1111_1111;
		#5;
		ZeroEXT = 1;
		_16IMM = 16'b0000_1111_0000_0000;
		#5;
		ZeroEXT = 0;
		_16IMM = 16'b0000_1111_0000_0000;
	end
      
endmodule

