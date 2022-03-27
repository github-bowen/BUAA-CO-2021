`include "MACRO.v"

module DECODER(
    input [31:0] IR,
    output reg REGorMEM,
    output reg MemWrite,
    output reg [2:0] NPCOp,
    output reg EXTOp,
    output reg [1:0] A1op,
    output reg A2op,
    output reg [1:0] A3op,
    output reg [2:0] REGop,
    output reg RegWrite,
    output reg ALU_Aop,
    output reg [1:0] ALU_Bop,
    output reg [3:0] ALUOp,
    output [4:0] A1,
    output [4:0] A2,
    output [4:0] A3,
    output [4:0] shamt,
//-----------------------------------
    output reg Tuse_A1_0,
    output reg Tuse_A1_1,
    output reg Tuse_A2_0,
    output reg Tuse_A2_1,  
    output reg Tuse_A2_2,
    output reg [2:0] Tnew,
    output reg start,
    output reg [3:0] MDUOp,
    output reg MDU_IR
    );
    wire [5:0] opcode, funct;

    assign opcode = IR[31:26];
    assign funct = IR[5:0];

    assign shamt = IR[10:6];

    initial begin
        REGorMEM = 1'b0;
        MemWrite = 1'b0;
        NPCOp = 3'b000;
        EXTOp = 1'b0;
        A1op = 2'b00;
        A2op = 1'b0;
        A3op = 2'b00;
        REGop = 3'b000;
        RegWrite = 1'b0;
        ALU_Aop = 1'b0;
        ALU_Bop = 2'b00;
        ALUOp = `AND;
        // Tuse Tnew
        Tuse_A1_0 = 0;
        Tuse_A1_1 = 0;
        Tuse_A2_0 = 0;
        Tuse_A2_1 = 0;
        Tuse_A2_2 = 0;
        Tnew = `TNEW_NONE;
        //MDU
        MDUOp = `NONE;
        start = 0;
        MDU_IR = 0;
    end
    always@(*) begin
        case(opcode)
            `R_OP: begin
                case(funct)
                    `AND_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `OR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `OR;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `XOR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `XOR;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `NOR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `NOR;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `ADD_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `ADD;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `ADDU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `ADD;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SUB_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SUB;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SUBU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SUB;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SLL_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SLL;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SRL_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SRL;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SRA_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SRA;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SLLV_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SLLV;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SRLV_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SRLV;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SRAV_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SRAV;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SLT_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SLT;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `SLTU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SLTU;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_ALU;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `JALR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b011;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b001;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 1;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_PC;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `JR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b011;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 1;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                    `MULT_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `MULT;
                        start = 1;
                        MDU_IR = 1;
                    end
                    `MULTU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `MULTU;
                        start = 1;
                        MDU_IR = 1;
                    end
                    `DIV_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `DIV;
                        start = 1;
                        MDU_IR = 1;
                    end
                    `DIVU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 1;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `DIVU;
                        start = 1;
                        MDU_IR = 1;
                    end
                    `MFHI_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b010;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_HI;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 1;
                    end
                    `MFLO_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b011;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_LO;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 1;
                    end
                    `MTHI_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `MTHI;
                        start = 0;
                        MDU_IR = 1;
                    end
                    `MTLO_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 3'b000;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 1;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `MTLO;
                        start = 0;
                        MDU_IR = 1;
                    end
                    default: begin
                        REGorMEM = 1'bx;
                        MemWrite = 1'bx;
                        NPCOp = 3'bxxx;
                        EXTOp = 1'bx;
                        A1op = 2'bxx;
                        A2op = 1'bx;
                        A3op = 2'bxx;
                        REGop = 3'bxxx;
                        RegWrite = 1'bx;
                        ALU_Aop = 1'bx;
                        ALU_Bop = 2'bxx;
                        ALUOp = 4'bxxxx;
                        // Tuse Tnew
                        Tuse_A1_0 = 0;
                        Tuse_A1_1 = 0;
                        Tuse_A2_0 = 0;
                        Tuse_A2_1 = 0;
                        Tuse_A2_2 = 0;
                        Tnew = `TNEW_NONE;
                        //MDU
                        MDUOp = `NONE;
                        start = 0;
                        MDU_IR = 0;
                    end
                endcase
            end
            
            //splitting line--------------------------------------
            `ADDI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `ADDIU_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `ANDI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b1;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `ORI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b1;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `OR;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `XORI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b1;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `XOR;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `SLTI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `SLT;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `SLTIU_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `SLTU;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `LW_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_DM;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `LB_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_DM;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `LBU_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_DM;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `LH_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_DM;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `LHU_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_DM;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `SW_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b1;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 1;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `SB_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b1;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 1;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `SH_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b1;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 1;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 1;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `BEQ_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 1;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 1;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `BNE_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 1;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 1;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `BLEZ_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 1;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `BGTZ_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 1;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `BLTZ_BGEZ_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 1;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `LUI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 3'b000;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `LUI;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_ALU;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `J_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b010;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 3'b000;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            `JAL_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b010;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b10;
                REGop = 3'b001;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_PC;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
            default: begin
                REGorMEM = 1'bx;
                MemWrite = 1'bx;
                NPCOp = 3'bxxx;
                EXTOp = 1'bx;
                A1op = 2'bxx;
                A2op = 1'bx;
                A3op = 2'bxx;
                REGop = 3'bxxx;
                RegWrite = 1'bx;
                ALU_Aop = 1'bx;
                ALU_Bop = 2'bxx;
                ALUOp = 4'bxxxx;
                // Tuse Tnew
                Tuse_A1_0 = 0;
                Tuse_A1_1 = 0;
                Tuse_A2_0 = 0;
                Tuse_A2_1 = 0;
                Tuse_A2_2 = 0;
                Tnew = `TNEW_NONE;
                //MDU
                MDUOp = `NONE;
                start = 0;
                MDU_IR = 0;
            end
        endcase
    end


    assign A1 = (A1op == 2'b00) ? `RS : 5'b0;

    assign A2 = (A2op == 1'b0) ? `RT : 5'b0;
    
    assign A3 = (A3op == 2'b00) ? `RD :
                (A3op == 2'b01) ? `RT :
                (A3op == 2'b10) ? 5'h1f : 5'b0;
endmodule
