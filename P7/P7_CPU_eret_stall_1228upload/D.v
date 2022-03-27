module REG_D(
    input [31:0] IR_F,
    input [31:0] pc4_F,
    input [31:0] pc8_F,
    input D_en,
    input clk,
    input reset,
    output reg [31:0] IR_D,
    output reg [31:0] pc4_D,
    output reg [31:0] pc8_D,
    //Exception
    input Req,
    input [4:0] ExcCode_D_old,
    input bd_in,
    output reg [4:0] ExcCode_E_old,
    output reg bd_out
    );
    initial begin
        IR_D <= 0;
        pc4_D <= 32'h0000_0000;
        pc8_D <= 32'h0000_0000;
        ExcCode_E_old <= 0;
        bd_out <= 0;
    end

    always@(posedge clk) begin
        if(reset || Req) begin
            IR_D <= 0;
            pc4_D <= Req ? 32'h0000_4184 : 0;
            pc8_D <= Req ? 32'h0000_4188 : 0;
            ExcCode_E_old <= 0;
            bd_out <= 0;
        end
        else if(D_en) begin
            IR_D <= IR_F;
            pc4_D <= pc4_F;
            pc8_D <= pc8_F;
            ExcCode_E_old <= ExcCode_D_old;
            bd_out <= bd_in;
        end
    end

endmodule
