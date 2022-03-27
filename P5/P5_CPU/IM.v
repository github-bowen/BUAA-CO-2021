module IM(
    input [31:0] PC,
    output [31:0] IR
    );
    reg [31:0] im[0:4095];  // 2 ^ 12 = 4096

	initial $readmemh("code.txt", im);
    
    assign IR = im[PC[13:2]-12'hc00];


endmodule