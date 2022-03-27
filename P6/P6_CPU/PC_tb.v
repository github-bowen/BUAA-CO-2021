`timescale 1ns / 1ps
module PC_tb;

	// Inputs
	reg clk;
	reg pc_en;
	reg reset;
	reg [31:0] NPC;

	// Outputs
	wire [31:0] PC_F;
	wire [31:0] PC4_F;
	wire [31:0] PC8_F;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.pc_en(pc_en), 
		.reset(reset), 
		.NPC(NPC), 
		.PC_F(PC_F), 
		.PC4_F(PC4_F), 
		.PC8_F(PC8_F)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pc_en = 1;
		reset = 1;
		NPC = 0;

		// Wait 100 ns for global reset to finish
		#100;
        reset = 0;
		// Add stimulus here
		#10
		pc_en = 0;
		#10
		pc_en = 1;

	end

	always #5 clk = ~clk;
    always begin
		#5;
		if(reset) NPC = 32'h0000_3000;
		else if(pc_en) NPC = NPC + 4;
	end
endmodule

