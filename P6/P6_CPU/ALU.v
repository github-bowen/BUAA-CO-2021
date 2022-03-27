`include "MACRO.v"

module ALU(
    input [31:0] ALUSrcA,
    input [31:0] ALUSrcB,
    input [3:0] ALUOp,
    input [4:0] shamt_E,
    output reg [31:0] ALUResult_E
    );
    
    always@(*) begin
        case(ALUOp)
            `AND:  ALUResult_E = ALUSrcA & ALUSrcB;
            `OR :  ALUResult_E = ALUSrcA | ALUSrcB;
            `XOR:  ALUResult_E = (~ALUSrcA & ALUSrcB) | (ALUSrcA & ~ALUSrcB);
            `NOR:  ALUResult_E = ~(ALUSrcA | ALUSrcB);
            `ADD:  ALUResult_E = ALUSrcA + ALUSrcB;
            `SUB:  ALUResult_E = ALUSrcA - ALUSrcB;
            `SLL:  ALUResult_E = ALUSrcB << shamt_E;
            `SRL:  ALUResult_E = ALUSrcB >> shamt_E;
            `SRA:  ALUResult_E = $signed($signed(ALUSrcB) >>> shamt_E);
            `SLT:  ALUResult_E = $signed($signed(ALUSrcA) < $signed(ALUSrcB)) ? 32'b1 : 32'b0;
            `SLTU: ALUResult_E = {1'b0, ALUSrcA} < {1'b0, ALUSrcB} ? 32'b1 : 32'b0;
            `LUI:  ALUResult_E = {ALUSrcB[15:0], 16'h0000};
            `SLLV: ALUResult_E = ALUSrcB << ALUSrcA[4:0];
            `SRLV: ALUResult_E = ALUSrcB >> ALUSrcA[4:0];
            `SRAV: ALUResult_E = $signed($signed(ALUSrcB) >>> ALUSrcA[4:0]);
            default: ALUResult_E = 32'h0000_xxxx;  // set flag as error assignment
        endcase
    end

endmodule