module IM(
    input [31:0] PC,
    output [5:0] opcode,
    output [5:0] funct,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [4:0] shamt,
    output [15:0] _16IMM,
    output [25:0] _26IMM
    );

    reg [31:0] im[0:1023];  // address width: 1024 = 2 ^ 10
    reg [31:0] instrc;
    
	initial $readmemh("code.txt", im);
	 
	always@(PC) begin
        instrc = im[PC[11:2]];
    end

    assign opcode = instrc[31:26];
    assign funct = instrc[5:0];
    assign rs = instrc[25:21];
    assign rt = instrc[20:16];
    assign rd = instrc[15:11];
    assign shamt = instrc[10:6];
    assign _16IMM = instrc[15:0];
    assign _26IMM = instrc[25:0];

endmodule
