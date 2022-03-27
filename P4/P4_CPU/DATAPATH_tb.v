`timescale 1ns / 1ps
module DATAPATH_tb;

	// Inputs
	reg clk;
	reg reset;
	reg REGorMEM;
	reg MemWrite;
	reg [2:0] NPCOp;
	reg ZeroEXT;
	reg [1:0] A1op;
	reg A2op;
	reg [1:0] A3op;
	reg [1:0] REGop;
	reg RegWrite;
	reg ALU_Aop;
	reg [1:0] ALU_Bop;
	reg [3:0] ALUOp;

	// Outputs
	wire [5:0] opcode;
	wire [5:0] funct;

	// Instantiate the Unit Under Test (UUT)
	DATAPATH uut (
		.clk(clk), 
		.reset(reset), 
		.REGorMEM(REGorMEM), 
		.MemWrite(MemWrite), 
		.NPCOp(NPCOp), 
		.ZeroEXT(ZeroEXT), 
		.A1op(A1op), 
		.A2op(A2op), 
		.A3op(A3op), 
		.REGop(REGop), 
		.RegWrite(RegWrite), 
		.ALU_Aop(ALU_Aop), 
		.ALU_Bop(ALU_Bop), 
		.ALUOp(ALUOp), 
		.opcode(opcode), 
		.funct(funct)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		REGorMEM = 0;
		MemWrite = 0;
		NPCOp = 0;
		ZeroEXT = 0;
		A1op = 0;
		A2op = 0;
		A3op = 0;
		REGop = 0;
		RegWrite = 0;
		ALU_Aop = 0;
		ALU_Bop = 0;
		ALUOp = 0;

		// Wait 20 ns for global reset to finish
		#20;
        reset = 0;
		// Add stimulus here
		#10;
		REGorMEM = 0;
		MemWrite = 0;
		NPCOp = 0;
		ZeroEXT = 0;
		A1op = 1;
		A2op = 0;
		A3op = 1;
		REGop = 0;
		RegWrite = 0;
		ALU_Aop = 0;
		ALU_Bop = 0;
		ALUOp = 2;

		#10;
		REGorMEM = 0;
		MemWrite = 1;
		NPCOp = 0;
		ZeroEXT = 0;
		A1op = 1;
		A2op = 0;
		A3op = 1;
		REGop = 0;
		RegWrite = 0;
		ALU_Aop = 0;
		ALU_Bop = 1;
		ALUOp = 2;

		#10;
		REGorMEM = 0;
		MemWrite = 0;
		NPCOp = 0;
		ZeroEXT = 0;
		A1op = 1;
		A2op = 0;
		A3op = 1;
		REGop = 0;
		RegWrite = 1;
		ALU_Aop = 0;
		ALU_Bop = 0;
		ALUOp = 2;
	end

	always #5 clk = ~clk;

      
endmodule

