module PC(
    input clk,
	input pc_en,
    input reset,
    input [31:0] NPC,
    output [31:0] PC_F,
	output [31:0] PC4_F,
	output [31:0] PC8_F
    );
    reg [31:0] PC_reg;
    initial PC_reg <= 32'h0000_3000;

    always@(posedge clk)  begin//PC synchronous reset
        if(reset) PC_reg <= 32'h0000_3000;
        else if(pc_en) PC_reg <= NPC;
    end

    assign PC_F = PC_reg;
	assign PC4_F = PC_reg + 4;
	assign PC8_F = PC_reg + 8;

endmodule
