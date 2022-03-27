`timescale 1ns / 1ps
module NPC_tb;

	// Inputs
	reg [25:0] _26IMM;
	reg ALUZero;
	reg [31:0] PC;
	reg [2:0] NPCOp;
	reg [31:0] GPR_rs;

	// Outputs
	wire [31:0] NPC;
	wire [31:0] PC_PLUS_4;

	// Instantiate the Unit Under Test (UUT)
	NPC uut (
		._26IMM(_26IMM), 
		.ALUZero(ALUZero), 
		.PC(PC), 
		.NPCOp(NPCOp), 
		.GPR_rs(GPR_rs), 
		.NPC(NPC), 
		.PC_PLUS_4(PC_PLUS_4)
	);

	initial begin
		// Initialize Inputs
		_26IMM = 0;
		ALUZero = 0;
		PC = 0;
		NPCOp = 0;
		GPR_rs = 0;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		#5;
		_26IMM = 26'd121;
		ALUZero = 1;
		NPCOp = 0;
		GPR_rs = 0;
		#5;
		_26IMM = 26'd541;
		ALUZero = 1;
		NPCOp = 0;
		GPR_rs = 0;
		#5;
		_26IMM = 26'd11;
		ALUZero = 0;
		NPCOp = 2;
		GPR_rs = 0;
		#5;
		_26IMM = 26'd12311;
		ALUZero = 0;
		NPCOp = 1;
		GPR_rs = 0;
		#5;
		_26IMM = 26'd12311;
		ALUZero = 0;
		NPCOp = 1;
		GPR_rs = 0;

	end
	
	always #5 PC = PC + 4;
      
endmodule

