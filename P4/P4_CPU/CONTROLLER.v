`include "MACRO.v"

module CONTROLLER(
    input [5:0] opcode,
    input [5:0] funct,
    output reg REGorMEM,
    output reg MemWrite,
    output reg [2:0] NPCOp,
    output reg ZeroEXT,
    output reg [1:0] A1op,
    output reg A2op,
    output reg [1:0] A3op,
    output reg [1:0] REGop,
    output reg RegWrite,
    output reg ALU_Aop,
    output reg [1:0] ALU_Bop,
    output reg [3:0] ALUOp
    );

    initial begin
        REGorMEM = 1'b0;
        MemWrite = 1'b0;
        NPCOp = 3'b000;
        ZeroEXT = 1'b0;
        A1op = 2'b00;
        A2op = 1'b0;
        A3op = 2'b00;
        REGop = 2'b00;
        RegWrite = 1'b0;
        ALU_Aop = 1'b0;
        ALU_Bop = 2'b00;
        ALUOp = `ADD;
    end
    always@(*) begin
        case(opcode)
            `R_OP: begin
                case(funct)
                    `ADDU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        ZeroEXT = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `ADD;
                    end
                    `SUBU_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        ZeroEXT = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SUB;
                    end
                    `SLL_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        ZeroEXT = 1'b0;
                        A1op = 2'b01;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b10;
                        ALUOp = `SLL;
                    end
                    `SRL_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        ZeroEXT = 1'b0;
                        A1op = 2'b01;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b10;
                        ALUOp = `SRL;
                    end
                    `SRA_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        ZeroEXT = 1'b0;
                        A1op = 2'b01;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b10;
                        ALUOp = `SRA;
                    end
                    `SLT_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b000;
                        ZeroEXT = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `SLT;
                    end
                    `JALR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b011;
                        ZeroEXT = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b10;
                        RegWrite = 1'b1;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                    end
                    `JR_FUNCT: begin
                        REGorMEM = 1'b0;
                        MemWrite = 1'b0;
                        NPCOp = 3'b011;
                        ZeroEXT = 1'b0;
                        A1op = 2'b00;
                        A2op = 1'b0;
                        A3op = 2'b00;
                        REGop = 2'b00;
                        RegWrite = 1'b0;
                        ALU_Aop = 1'b0;
                        ALU_Bop = 2'b00;
                        ALUOp = `AND;
                    end
                    default: begin
                        REGorMEM = 1'bx;
                        MemWrite = 1'bx;
                        NPCOp = 3'bxxx;
                        ZeroEXT = 1'bx;
                        A1op = 2'bxx;
                        A2op = 1'bx;
                        A3op = 2'bxx;
                        REGop = 2'bxx;
                        RegWrite = 1'bx;
                        ALU_Aop = 1'bx;
                        ALU_Bop = 2'bxx;
                        ALUOp = 4'bxxxx;
                    end
                endcase
            end
            
            //splitting line--------------------------------------
            `ORI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                ZeroEXT = 1'b1;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 2'b00;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `OR;
            end
            `LW_OP: begin
                REGorMEM = 1'b1;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                ZeroEXT = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 2'b00;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
            end
            `SW_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b1;
                NPCOp = 3'b000;
                ZeroEXT = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 2'b00;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b01;
                ALUOp = `ADD;
            end
            `BEQ_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b001;
                ZeroEXT = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 2'b00;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
            end
            `LUI_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b000;
                ZeroEXT = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b01;
                REGop = 2'b01;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
            end
            `J_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b010;
                ZeroEXT = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b00;
                REGop = 2'b00;
                RegWrite = 1'b0;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
            end
            `JAL_OP: begin
                REGorMEM = 1'b0;
                MemWrite = 1'b0;
                NPCOp = 3'b010;
                ZeroEXT = 1'b0;
                A1op = 2'b00;
                A2op = 1'b0;
                A3op = 2'b10;
                REGop = 2'b10;
                RegWrite = 1'b1;
                ALU_Aop = 1'b0;
                ALU_Bop = 2'b00;
                ALUOp = `AND;
            end
            default: begin
                REGorMEM = 1'bx;
                MemWrite = 1'bx;
                NPCOp = 3'bxxx;
                ZeroEXT = 1'bx;
                A1op = 2'bxx;
                A2op = 1'bx;
                A3op = 2'bxx;
                REGop = 2'bxx;
                RegWrite = 1'bx;
                ALU_Aop = 1'bx;
                ALU_Bop = 2'bxx;
                ALUOp = 4'bxxxx;
            end
        endcase
    end

endmodule
