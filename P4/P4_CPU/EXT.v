module EXT(
    input ZeroEXT,
    input [15:0] _16IMM,
    output reg [31:0] EXTResult
    );

    always@(*) begin
        case(ZeroEXT)
            1'b0: EXTResult = {{16{_16IMM[15]}}, _16IMM};
            1'b1: EXTResult = {16'b0, _16IMM};
        endcase
    end

endmodule
