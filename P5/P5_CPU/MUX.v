module MUX_ALUSrcA(
    input ALU_Aop,
    input [31:0] in0,
    input [31:0] in1, // not difine
    output [31:0] out
    );
    assign out = (ALU_Aop == 0) ? in0 : in1;

endmodule

module MUX_ALUSrcB(
    input [1:0] ALU_Bop,
    input [31:0] in0,
    input [31:0] in1,
    input [31:0] in2, // not difine
    input [31:0] in3, // not difine
    output [31:0] out
    );
    assign out = (ALU_Bop == 2'b00) ? in0 :
                 (ALU_Bop == 2'b01) ? in1 :
                 (ALU_Bop == 2'b10) ? in2 :
                 (ALU_Bop == 2'b11) ? in3 : 32'dx;

endmodule

module MUX_REGorMEM_Result(
    input REGorMEM_W,
    input [31:0] in0,
    input [31:0] in1,
    output [31:0] out
    );
    assign out = (REGorMEM_W == 1'b0) ? in0 : in1;

endmodule

module MUX_RegData(
    input [1:0] REGop_W,
    input [31:0] in0,
    input [31:0] in1, // not define
    input [31:0] in2,
    input [31:0] in3, // not define
    output [31:0] out
    );
    assign out = (REGop_W == 2'b00) ? in0 :
                 (REGop_W == 2'b10) ? in2 : 32'dx;

endmodule