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
    output reg [1:0] REGop,
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
    output reg [2:0] Tnew
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
        REGop = 2'b00;
        RegWrite = 1'b0;
        ALU_Aop = 1'b0;
        ALU_Bop = 2'b00;
        ALUOp = `ADD;
        // Tuse Tnew
        Tuse_A1_0 = 0;
        Tuse_A1_1 = 0;
        Tuse_A2_0 = 0;
        Tuse_A2_1 = 0;
        Tuse_A2_2 = 0;
        Tnew = `TNEW_NONE;
    end
    always@(*) begin
        case(opcode)
            `R_OP: begin
                case(funct)
                    `ADDU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    `SUBU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    `SLL_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b01;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    `SRL_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b01;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    `SRA_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b01;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    `SLT_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    `JALR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b011;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b10;
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
                    end
                    `JR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b011;
                        EXTOp = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
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
                    end
                    default: begin
                        REGorMEM = 1'bx;
                        MemWrite = 1'bx;
                        NPCOp = 3'bxxx;
                        EXTOp = 1'bx;
                        A1op = 2'bxx;
                        A2op = 1'bx;
                        A3op = 2'bxx;
                        REGop = 2'bxx;
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
                REGop = 2'b00;
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
            end
            `ORI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b1;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 2'b00;
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
            end
            `LW_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 2'b00;
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
            end
            `SW_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b1;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 2'b00;
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
            end
            `BEQ_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 2'b00;
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
            end
            `LUI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 2'b00;
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
            end
            `J_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b010;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 2'b00;
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
            end
            `JAL_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b010;
                EXTOp = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b10;
                REGop = 2'b10;
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
            end
            default: begin
                REGorMEM = 1'bx;
                MemWrite = 1'bx;
                NPCOp = 3'bxxx;
                EXTOp = 1'bx;
                A1op = 2'bxx;
                A2op = 1'bx;
                A3op = 2'bxx;
                REGop = 2'bxx;
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
            end
        endcase
    end


    assign A1 = (A1op == 2'b00) ? `RS :
                (A1op == 2'b01) ? `RT : 5'b0;

    assign A2 = (A2op == 1'b0) ? `RT : 5'b0;
    
    assign A3 = (A3op == 2'b00) ? `RD :
                (A3op == 2'b01) ? `RT :
                (A3op == 2'b10) ? 5'h1f : 5'b0;
endmodule
