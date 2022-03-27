module PC(
    input clk,
	input pc_en,
    input reset,
    input [31:0] NPC,
    input [31:0] epc,
    input eret_D,
    input Req,
    output [31:0] PC_F,
	output [31:0] PC4_F,
	output [31:0] PC8_F
    );
    reg [31:0] PC_reg;
    initial PC_reg <= 32'h0000_3000;

    always@(posedge clk)  begin//PC synchronous reset
        if(reset || Req) PC_reg <= Req ? 32'h0000_4180 : 32'h0000_3000;
        else if(pc_en) PC_reg <= NPC;
    end

    assign PC_F = eret_D ? epc : PC_reg;
	assign PC4_F = eret_D ? epc + 4 : PC_reg + 4;
	assign PC8_F = eret_D ? epc + 8 : PC_reg + 8;

endmodule
