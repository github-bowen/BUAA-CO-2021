module PC(
    input clk,
    input reset,
    input [31:0] NPC,
    output [31:0] PC
    );
    reg [31:0] PC_reg;
    initial PC_reg <= 32'h0000_3000;

    always@(posedge clk)  begin//PC synchronous reset
        if(reset) PC_reg <= 32'h0000_3000;
        else PC_reg <= NPC;
    end

    assign PC = PC_reg;

endmodule
