`timescale 1ns / 1ps

module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
    reg [31:0] res;
    always@(*) begin
        case(ALUOp)
            0: res = A + B;
            1: res = A - B;
            2: res = A & B;
            3: res = A | B;
            4: res = A >> B;
            5: res = $signed(A) >>> $signed(B);
        endcase
    end

    assign C = res;

endmodule
