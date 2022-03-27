module CMP(
    input [31:0] V1,
    input [31:0] V2,
    output zero
    );
    assign zero = (V1 == V2) ? 1'b1 : 1'b0;


endmodule
