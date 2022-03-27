`timescale 1ns / 1ps
module mips(
    input clk,
    input reset
    );

    wire REGorMEM, MemWrite, ZeroEXT, A2op, RegWrite, ALU_Aop;
    wire [2:0] NPCOp;
    wire [1:0] A1op, A3op, REGop, ALU_Bop;
    wire [3:0] ALUOp;
    wire [5:0] opcode, funct;

    DATAPATH DATAPATH_Instance (
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

    CONTROLLER CONTROLLER_Instance (
        .opcode(opcode),
        .funct(funct),
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
        .ALUOp(ALUOp)
    );
    
endmodule
