`timescale 1ns / 1ps
module string_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 1;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		clr = 0;
		in = "3";
		#10 in = "*";
		#10 in = "2";
		#10 in = "+";
		#10 in = "5";
		#10 in = "6";
		#10 in = "3";
			clr = 1;
		#30 in = "7";
			clr = 0;
		#10 in = "+";


	end
    
	always #5 clk = ~clk;

endmodule

