module REG_D(
    input [31:0] IR_F,
    input [31:0] pc4_F,
    input [31:0] pc8_F,
    input D_en,
    input clk,
    input reset,
    output reg [31:0] IR_D,
    output reg [31:0] pc4_D,
    output reg [31:0] pc8_D
    );
    initial begin
        IR_D <= 0;
        pc4_D <= 32'h0000_0000;
        pc8_D <= 32'h0000_0000;
    end

    always@(posedge clk) begin
        if(reset) begin
            IR_D <= 0;
            pc4_D <= 32'h0000_0000;
            pc8_D <= 32'h0000_0000;
        end
        else if(D_en) begin
            IR_D <= IR_F;
            pc4_D <= pc4_F;
            pc8_D <= pc8_F;
        end
    end

endmodule
