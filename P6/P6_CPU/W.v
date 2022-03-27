module REG_W(
    input [31:0] hi_M,
    input [31:0] lo_M,
    input [31:0] IR_M,
    input [31:0] ALUResult_M,
    input clk,
    input reset,
    input [31:0] pc4_M,
    input [31:0] pc8_M,
    input [31:0] DM_RD,
    output reg [31:0] IR_W,
    output reg [31:0] ALUResult_W,
    output reg [31:0] pc4_W,
    output reg [31:0] pc8_W,
    output reg [31:0] DM_RD_W,
    output reg [31:0] hi_W,
    output reg [31:0] lo_W
    );
    initial begin
        IR_W <= 32'h0000_0000;
        ALUResult_W <= 32'h0000_0000;
        pc4_W <= 32'h0000_0000;
        pc8_W <= 32'h0000_0000;
        DM_RD_W <= 32'h0000_0000;
        hi_W <= 32'h0000_0000;
        lo_W <= 32'h0000_0000;
    end

    always@(posedge clk) begin
        if(reset) begin
            IR_W <= 32'h0000_0000;
            ALUResult_W <= 32'h0000_0000;
            pc4_W <= 32'h0000_0000;
            pc8_W <= 32'h0000_0000;
            DM_RD_W <= 32'h0000_0000;
            hi_W <= 32'h0000_0000;
            lo_W <= 32'h0000_0000;
        end
        else begin
            IR_W <= IR_M;
            ALUResult_W <= ALUResult_M;
            pc4_W <= pc4_M;
            pc8_W <= pc8_M;
            DM_RD_W <= DM_RD;
            hi_W <= hi_M;
            lo_W <= lo_M;
        end
    end

endmodule
    