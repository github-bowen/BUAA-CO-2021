module REG_E(
    input [31:0] IR_D,
    input [31:0] V1,
    input [31:0] V2,
    input [31:0] EXTResult,
    input [31:0] pc4_D,
    input [31:0] pc8_D,
    input clk,
    input reset,
    input E_clr,
    output reg [31:0] IR_E,
    output reg [31:0] V1_E,
    output reg [31:0] V2_E,
    output reg [31:0] EXTResult_E,
    output reg [31:0] pc4_E,
    output reg [31:0] pc8_E,
    //Exception
    input Req,
    input bd_in,
    input [4:0] ExcCode_E_old,
    input [4:0] ExcCode_D,
    output reg [4:0] ExcCode_M_old,
    output reg bd_out
    );
    initial begin
        IR_E <= 32'h0000_0000;
        V1_E <= 32'h0000_0000;
        V2_E <= 32'h0000_0000;
        EXTResult_E <= 32'h0000_0000;
        pc4_E <= 32'h0000_0000;
        pc8_E <= 32'h0000_0000;
        ExcCode_M_old <= 0;
        bd_out <= 0;
    end

    always@(posedge clk) begin
        if(reset || E_clr || Req) begin
            IR_E <= 32'h0000_0000;
            V1_E <= 32'h0000_0000;
            V2_E <= 32'h0000_0000;
            EXTResult_E <= 32'h0000_0000;
            pc4_E <= E_clr ? pc4_D : (Req ? 32'h0000_4184 : 0);
            pc8_E <= E_clr ? pc8_D : (Req ? 32'h0000_4188 : 0);
            ExcCode_M_old <= 0;
            bd_out <= E_clr ? bd_in : 0;
        end
        else begin
            IR_E <= IR_D;
            V1_E <= V1;
            V2_E <= V2;
            EXTResult_E <= EXTResult;
            pc4_E <= pc4_D;
            pc8_E <= pc8_D;
            ExcCode_M_old <= (ExcCode_E_old != 0) ? ExcCode_E_old : ExcCode_D;
            bd_out <= bd_in;
        end
    end

endmodule
