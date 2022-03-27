`timescale 1ns / 1ps
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
    reg [31:0] res;
    always @(*) begin
        case(EOp)
            0: res = {{16{imm[15]}}, imm};
            1: res = {{16{0}}, imm};
            2: res = {imm, {16{0}}};
            3: res = {{14{imm[15]}}, imm, {2{0}}};
        endcase
    end

    assign ext = res;

endmodule
