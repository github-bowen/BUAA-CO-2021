`include "MACRO.v"

module CP0(
    input [4:0] CP0_addr,
    input [31:0] CP0_data_in,
    input [31:0] pc_M_in,
    input [6:2] ExcCode_in,
    input [5:0] HWInt,
    input CP0_WE,
    input eret_M,
    input clk,
    input reset,
    input bd_M,
    output Req,
    output IntReq_out,
    output reg IntReq_reg_out,
    output [31:0] epc_out,
    output [31:0] CP0_data_out
    );
//----------------------CP0 REGISTER----------------------
    //SR = {16'b0, IM, 8'b0, EXL, IE};
    reg [15:10] IM;
    reg EXL, IE;
    //Cause = {BD, 15'b0, hwint_pend, 3'b0, ExcCode, 2'b0};
    reg BD;
    reg [6:2] ExcCode;
    reg [15:10] hwint_pend;
    //EPC = epc_reg;
    reg [31:0] epc_reg;
    //PRId
    reg [31:0] PRId;
//------------------------OTHERS------------------------
    wire IntReq, ExcReq;

    assign IntReq = (|(HWInt & IM)) & (EXL == 0) & IE;
    assign ExcReq = (|ExcCode_in) & (EXL == 0);
    assign Req = IntReq | ExcReq;

    assign IntReq_out = IntReq;
    always@(posedge clk) begin
        if(reset) IntReq_reg_out <= 0;
        else IntReq_reg_out <= IntReq;
    end

    assign epc_out = (IntReq | ExcReq) ? (bd_M ? pc_M_in - 4 : pc_M_in) : epc_reg;

    assign CP0_data_out = 
                (CP0_addr == `SR_Addr)    ? {16'b0, IM, 8'b0, EXL, IE} :
                (CP0_addr == `Cause_Addr) ? {BD, 15'b0, hwint_pend, 3'b0, ExcCode, 2'b0} :
                (CP0_addr == `epc_Addr)   ? epc_reg :
                (CP0_addr == `PRId_Addr)  ? PRId : 0;

    initial begin
        {IM, EXL, IE} <= {6'b000000, 1'b0, 1'b0};
        {BD, hwint_pend, ExcCode} <= {1'b0, 6'b0, 5'b0};
        epc_reg <= 32'd0;
        PRId <= 32'h2023_1198;
    end

    always@(posedge clk) begin
        if(reset) begin
            {IM, EXL, IE} <= {6'b000000, 1'b0, 1'b0};
            {BD, hwint_pend, ExcCode} <= {1'b0, 6'b0, 5'b0};
            epc_reg <= 32'd0;
            PRId <= 32'h2023_1198;
        end else begin
        //1: renew hwint_pend
            hwint_pend <= HWInt;

        //2: when Req == 1: do as follows
            if(IntReq) begin// Interrupt first, then Exception
                ExcCode <= `Int;
                EXL <= 1;
                epc_reg <= epc_out;
                BD <= bd_M;
            end else if(ExcReq) begin
                ExcCode <= ExcCode_in;
                EXL <= 1;
                epc_reg <= epc_out;
                BD <= bd_M;
            end else if(eret_M) begin
                EXL <= 0;
            end

        //3: when CP0_WE == 1: do follows
            if(CP0_WE && !Req) begin
                case(CP0_addr)
                    `SR_Addr: {IM, EXL, IE} <= {CP0_data_in[15:10], CP0_data_in[1], CP0_data_in[0]};
                    `epc_Addr: epc_reg <= CP0_data_in;
                endcase
            end
        end
    end

endmodule
