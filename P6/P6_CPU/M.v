module REG_M(
    input [31:0] hi_E,
    input [31:0] lo_E,
    input [31:0] IR_E,
    input [31:0] V2_E,
    input [31:0] ALUResult_E,
    input [31:0] pc4_E,
    input [31:0] pc8_E,
    input clk,
    input reset,
    output reg [31:0] IR_M,
    output reg [31:0] ALUResult_M,
    output reg [31:0] V2_M,
    output reg [31:0] pc4_M,
    output reg [31:0] pc8_M,
    output reg [31:0] hi_M,
    output reg [31:0] lo_M
    );
    initial begin
        IR_M <= 32'h0000_0000;
        ALUResult_M <= 32'h0000_0000;
        V2_M <= 32'h0000_0000;
        pc4_M <= 32'h0000_0000;
        pc8_M <= 32'h0000_0000;
        hi_M <= 32'h0000_0000;
        lo_M <= 32'h0000_0000;
    end

    always@(posedge clk) begin
        if(reset) begin
            IR_M <= 32'h0000_0000;
            ALUResult_M <= 32'h0000_0000;
            V2_M <= 32'h0000_0000;
            pc4_M <= 32'h0000_0000;
            pc8_M <= 32'h0000_0000;
            hi_M <= 32'h0000_0000;
            lo_M <= 32'h0000_0000;
        end
        else begin
            IR_M <= IR_E;
            ALUResult_M <= ALUResult_E;
            V2_M <= V2_E;
            pc4_M <= pc4_E;
            pc8_M <= pc8_E;
            hi_M <= hi_E;
            lo_M <= lo_E;
        end
    end

endmodule
