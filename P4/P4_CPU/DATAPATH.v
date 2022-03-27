module DATAPATH(
    input clk,
    input reset,
    input REGorMEM,
    input MemWrite,
    input [2:0] NPCOp,
    input ZeroEXT,
    input [1:0] A1op,
    input A2op,
    input [1:0] A3op,
    input [1:0] REGop,
    input RegWrite,
    input ALU_Aop,
    input [1:0] ALU_Bop,
    input [3:0] ALUOp,
    output [5:0] opcode,
    output [5:0] funct
    );

    wire [4:0] grf_a1, grf_a2, grf_a3;
    // grf_rd1 = GPR[rs]  !!!
    wire [31:0] grf_wd, grf_rd1, grf_rd2, alu_srca, alu_srcb, alu_result, reg_or_mem_res;
    wire [31:0] npc, pc, pc_plus_4, ext_result, shamt32, dm_rd;
    wire [25:0] _26imm;
    wire [15:0] _16imm;
    wire aluzero;
 
    wire [4:0] rs, rt, rd, shamt5;

    // codes below written in the order of datapath
    // IFU
    PC PC_Instance (
        .clk(clk),
        .reset(reset),
        .NPC(npc),
        .PC(pc)
    );

    NPC NPC_Instance (
        ._26IMM(_26imm),
        .ALUZero(aluzero),
        .PC(pc),
        .NPCOp(NPCOp),
        .GPR_rs(grf_rd1),
        .NPC(npc),
        .PC_PLUS_4(pc_plus_4)
    );

    IM IM_Instance (
        .PC(pc),
        .opcode(opcode),
        .funct(funct),
        .rs(rs),
        .rt(rt),
        .rd(rd),
        .shamt(shamt5),
        ._16IMM(_16imm),
        ._26IMM(_26imm)
    );

    ShamtEXT ShamtEXT_Instance (
        .shamt(shamt5),
        .shamt32(shamt32)
    );

    EXT EXT_Instance (
        .ZeroEXT(ZeroEXT),
        ._16IMM(_16imm),
        .EXTResult(ext_result)
    );

    // GRF input
    assign grf_a1 = (A1op == 2'b00) ? rs :
                    (A1op == 2'b01) ? rt : 2'bxx;
    
    assign grf_a2 = (A2op == 1'b0) ? rt : 1'bx;

    assign grf_a3 = (A3op == 2'b00) ? rd : 
                    (A3op == 2'b01) ? rt :
                    (A3op == 2'b10) ? 5'b11111 : 5'bxxxxx;
                    // 5'b11111 = 5'd31
    
    assign grf_wd = (REGop == 2'b00) ? reg_or_mem_res :
                    (REGop == 2'b01) ? {ext_result[15:0], 16'b0} :
                    (REGop == 2'b10) ? pc_plus_4 : 32'h0000_00xx;

    GRF GRF_Instance (
        .clk(clk),
        .reset(reset),
        .WE3(RegWrite),
        .PC(pc),
        .A1(grf_a1),
        .A2(grf_a2),
        .A3(grf_a3),
        .WD(grf_wd),
        .RD1(grf_rd1),
        .RD2(grf_rd2)
    );
    // between GRF output and ALU input
    assign alu_srca = (ALU_Aop == 1'b0) ? grf_rd1 : 32'h0000_000x;

    assign alu_srcb = (ALU_Bop == 2'b00) ? grf_rd2 :
                      (ALU_Bop == 2'b01) ? ext_result :
                      (ALU_Bop == 2'b10) ? shamt32 : 32'hxxxx_0000;

    //ALU
    ALU ALU_Instance (
        .ALUSrcA(alu_srca),
        .ALUSrcB(alu_srcb),
        .ALUResult(alu_result),
        .ALUZero(aluzero),
        .ALUOp(ALUOp)
    );
    
    //DM
    DM DM_Instance (
        .clk(clk),
        .reset(reset),
        .PC(pc),
        .A(alu_result),
        .WD(grf_rd2),
        .WE(MemWrite),
        .RD(dm_rd)
    );

    // after DM
    assign reg_or_mem_res = (REGorMEM == 1'b0) ? alu_result :
                            (REGorMEM == 1'b1) ? dm_rd : 1'bx;

    




endmodule
