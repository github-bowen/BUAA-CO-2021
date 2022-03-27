`timescale 1ns / 1ps
`include "MACRO.v"
module ALU_tb;

	// Inputs
	reg [31:0] ALUSrcA;
	reg [31:0] ALUSrcB;
	reg [3:0] ALUOp;

	// Outputs
	wire [31:0] ALUResult;
	wire ALUZero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ALUSrcA(ALUSrcA), 
		.ALUSrcB(ALUSrcB), 
		.ALUResult(ALUResult), 
		.ALUZero(ALUZero), 
		.ALUOp(ALUOp)
	);

	initial begin
		// Initialize Inputs
		ALUSrcA = 0;
		ALUSrcB = 0;
		ALUOp = 0;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		#5;
		ALUSrcA = 20;
		ALUSrcB = 40;
		ALUOp = `ADD;

		#5;
		ALUSrcA = 20;
		ALUSrcB = 40;
		ALUOp = `SUB;
		#5;
		ALUSrcA = 1;
		ALUSrcB = 2;
		ALUOp = `AND;
		#5;
		ALUSrcA = 1;
		ALUSrcB = 2;
		ALUOp = `OR;
		#5;
		ALUSrcA = 32'h0000_ff00;
		ALUSrcB = 8;
		ALUOp = `SLL;
		#5;
		ALUSrcA = 32'hf000_ff00;
		ALUSrcB = 8;
		ALUOp = `SRL;
		#5;
		ALUSrcA = 32'h0000_ff00;
		ALUSrcB = 32'h0000_ffff;
		ALUOp = `SLT;
		#5;
		ALUSrcA = 32'h0000_ff00;
		ALUSrcB = 32'hf000_ffff;
		ALUOp = `SLT;

	end
      
endmodule

