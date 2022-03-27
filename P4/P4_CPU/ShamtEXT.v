module ShamtEXT(
    input [4:0] shamt,
    output [31:0] shamt32
    );

    assign shamt32 = {27'b0, shamt};

endmodule
