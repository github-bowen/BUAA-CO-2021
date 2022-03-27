`timescale 1ns / 1ps
module PC_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] NPC;

	// Outputs
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.reset(reset), 
		.NPC(NPC), 
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		NPC = 32'h0000_3000;

		// Wait 100 ns for global reset to finish
		#10;
      reset = 0;
		// Add stimulus here
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
		#5;
		NPC = PC + 4;
	end


	always #5 clk = ~clk;
	
	
      
endmodule

