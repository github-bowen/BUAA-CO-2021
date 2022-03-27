`include "MACRO.v"
module EXT(
    input [31:0] IR_D,
    input EXTOp,
    output [31:0] EXTResult
    );
    assign EXTResult = (EXTOp == `ZERO_EXT) ? {16'd0, IR_D[15:0]} : 
                       (EXTOp == `SIGN_EXT) ? {{16{IR_D[15]}}, IR_D[15:0]} : 32'dx;

endmodule
