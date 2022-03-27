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
    output reg MDU_IR,
    output reg eret,
    output reg CP0_WE,
    output [4:0] CP0_addr,
    output reg bj,
    output reg load,
    output reg store,
    output add_addi_sub,
    output RI_out
    );
    wire [5:0] opcode, funct;
    reg RI;

    assign RI_out = (|IR) === 1'bx ? 1'bx : RI;

    assign opcode = IR[31:26];
    assign funct = IR[5:0];
    assign shamt = IR[10:6];
    assign CP0_addr = `RD;

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
        //CP0
        eret = 0;
        CP0_WE = 0;
        //if branch or jump instruction
        bj = 0;
        load = 0;
        store = 0;
        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 1;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 1;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 0;
                    end
                    default: begin
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
                        ALUOp = 4'b0000;
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
                        //CP0
                        eret = 0;
                        CP0_WE = 0;
                        //if branch or jump instruction
                        bj = 0;
                        load = 0;
                        store = 0;
                        RI = 1;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 1;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 1;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 1;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 1;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 1;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 1;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 1;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 1;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 1;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 1;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 1;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 1;
                load = 0;
                store = 0;
                RI = 0;
            end
            `BLTZ_BGEZ_OP: begin
                if(`RT == `BGEZ_RT || `RT == `BLTZ_RT) begin
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
                    //CP0
                    eret = 0;
                    CP0_WE = 0;
                    //if branch or jump instruction
                    bj = 1;
                    load = 0;
                    store = 0;
                    RI = 0;
                end else begin
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
                    ALUOp = 4'b0000;
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
                    //CP0
                    eret = 0;
                    CP0_WE = 0;
                    //if branch or jump instruction
                    bj = 0;
                    load = 0;
                    store = 0;
                    RI = 1;
                end  
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 1;
                load = 0;
                store = 0;
                RI = 0;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 1;
                load = 0;
                store = 0;
                RI = 0;
            end
            `CP0_OP: begin
                if(funct == `ERET_FUNCT) begin
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
                    //CP0
                    eret = 1;
                    CP0_WE = 0;
                    //if branch or jump instruction
                    bj = 0;
                    load = 0;
                    store = 0;
                    RI = 0;
                end else if(`RS == `MFC0_RS) begin
                    REGorMEM = 1'b0;
                    MemWrite = 1'b0;
                    NPCOp = 3'b000;
                    EXTOp = 1'b0;
                    A1op = 2'b00;
                    A2op = 1'b0;
                    A3op = 2'b01;
                    REGop = 3'b100;
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
                    Tnew = `TNEW_CP0;
                    //MDU
                    MDUOp = `NONE;
                    start = 0;
                    MDU_IR = 0;
                    //CP0
                    eret = 0;
                    CP0_WE = 0;
                    //if branch or jump instruction
                    bj = 0;
                    load = 0;
                    store = 0;
                    RI = 0;
                end else if(`RS == `MTC0_RS) begin
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
                    //CP0
                    eret = 0;
                    CP0_WE = 1;
                    //if branch or jump instruction
                    bj = 0;
                    load = 0;
                    store = 0;
                    RI = 0;
                end
            end
            default: begin
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
                ALUOp = 4'b0000;
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
                //CP0
                eret = 0;
                CP0_WE = 0;
                //if branch or jump instruction
                bj = 0;
                load = 0;
                store = 0;
                RI = 1;
            end
        endcase
    end


    assign A1 = (A1op == 2'b00) ? `RS : 5'b0;

    assign A2 = (A2op == 1'b0) ? `RT : 5'b0;
    
    assign A3 = (A3op == 2'b00) ? `RD :
                (A3op == 2'b01) ? `RT :
                (A3op == 2'b10) ? 5'h1f : 5'b0;

    assign add_addi_sub = (opcode == `R_OP && funct == `ADD_FUNCT) ||
                          (opcode == `ADDI_OP) ||
                          (opcode == `R_OP && funct == `SUB_FUNCT); 
endmodule
