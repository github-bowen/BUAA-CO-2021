`timescale 1ns / 1ps

module BlockChecker_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 0;
		in = "b";
		// Add stimulus here
		#10 in = "e";
		#10 in = "g";
		#10 in = "i";
		#10 in = "N";
		#10 in = "b";
		#10 in = "E";
		#10 in = "G";
		#10 in = "i";
		#10 in = "n";
		#10 in = " ";
		#10 in = " ";
		#10 in = "b";
		#10 in = "E";
		#10 in = "g";
		#10 in = "I";
		#10 in = "N";
		#10 in = " ";
		#10 in = " ";
		#10 in = " ";
		#10 in = " ";
		#10 in = "E";
		#10 in = "N";
		#10 in = "d";
		#10 in = "e";
		#10 in = "n";
		#10 in = "D";
		#10 in = " ";
		#10 in = "E";
		#10 in = "n";
		#10 in = "d";
		#10 in = " ";
		#10 in = "e";
		#10 in = "n";
		#10 in = "d";
		#10 in = " ";
		#10 in = "b";
		#10 in = "e";
		#10 in = "g";
		#10 in = "i";
		#10 in = "n";
		#10 in = " ";
		#10 in = " ";
	end
    
	always #5 clk = ~clk;
endmodule

