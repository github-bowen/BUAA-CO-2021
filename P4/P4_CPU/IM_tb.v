`timescale 1ns / 1ps
module IM_tb;

	// Inputs
	reg [31:0] PC;

	// Outputs
	wire [5:0] opcode;
	wire [5:0] funct;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [4:0] shamt;
	wire [15:0] _16IMM;
	wire [25:0] _26IMM;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.PC(PC), 
		.opcode(opcode), 
		.funct(funct), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.shamt(shamt), 
		._16IMM(_16IMM), 
		._26IMM(_26IMM)
	);

	initial begin
		// Initialize Inputs
		PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		#5;
		PC = PC + 4;
		

	end
      
endmodule

