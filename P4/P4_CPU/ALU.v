`include "MACRO.v"

module ALU(
    input [31:0] ALUSrcA,
    input [31:0] ALUSrcB,
    output reg [31:0] ALUResult,
    output ALUZero,
    input [3:0] ALUOp
    );

    always@(*) begin
        case(ALUOp)
            `AND: ALUResult = ALUSrcA & ALUSrcB;
            `OR : ALUResult = ALUSrcA | ALUSrcB;
            `ADD: ALUResult = ALUSrcA + ALUSrcB;
            `SUB: ALUResult = ALUSrcA - ALUSrcB;
            `SLL: ALUResult = ALUSrcA << ALUSrcB;
            `SRL: ALUResult = ALUSrcA >> ALUSrcB;
            `SRA: ALUResult = $signed($signed(ALUSrcA) >>> ALUSrcB);
            `SLT: ALUResult = $signed($signed(ALUSrcA) < $signed(ALUSrcB)) ? 32'b1 : 32'b0;
            default: ALUResult = 32'h0000_xxxx;  // set flag as error assignment
        endcase
    end

    assign ALUZero = (ALUSrcA == ALUSrcB) ? 1 : 0;

endmodule
