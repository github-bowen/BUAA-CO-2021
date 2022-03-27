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
    output reg [31:0] lo_M,
    //Exception
    input Req,
    input bd_in,
    input [4:0] ExcCode_M_old,
    input [4:0] ExcCode_E,
    output reg [4:0] ExcCode_former,
    output reg bd_out
    );
    initial begin
        IR_M <= 32'h0000_0000;
        ALUResult_M <= 32'h0000_0000;
        V2_M <= 32'h0000_0000;
        pc4_M <= 32'h0000_3004;
        pc8_M <= 32'h0000_3008;
        hi_M <= 32'h0000_0000;
        lo_M <= 32'h0000_0000;
        ExcCode_former <= 0;
        bd_out <= 0;
    end

    always@(posedge clk) begin
        if(reset || Req) begin
            IR_M <= 32'h0000_0000;
            ALUResult_M <= 32'h0000_0000;
            V2_M <= 32'h0000_0000;
            pc4_M <= Req ? 32'h0000_4184 : 32'h0000_3004;
            pc8_M <= Req ? 32'h0000_4188 : 32'h0000_3008;
            hi_M <= 32'h0000_0000;
            lo_M <= 32'h0000_0000;
            ExcCode_former <= 0;
            bd_out <= 0;
        end
        else begin
            IR_M <= IR_E;
            ALUResult_M <= ALUResult_E;
            V2_M <= V2_E;
            pc4_M <= pc4_E;
            pc8_M <= pc8_E;
            hi_M <= hi_E;
            lo_M <= lo_E;
            ExcCode_former <= ExcCode_M_old ? ExcCode_M_old : ExcCode_E;
            bd_out <= bd_in;
        end
    end

endmodule
