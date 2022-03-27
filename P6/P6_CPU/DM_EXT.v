`include "MACRO.v"
module DM_EXT(
    input [31:0] IR_M,
    input [31:0] DM_RD_in,
    input [31:0] MemAddr,
    output reg [31:0] DM_RD_out
    );
    wire [1:0] addr;
    assign addr = MemAddr[1:0];

    always@(*) begin
        case(IR_M[31:26])
            `LW_OP: DM_RD_out = DM_RD_in;
            `LB_OP: begin
                case(addr)
                    2'b00: DM_RD_out = {{24{DM_RD_in[7]}}, DM_RD_in[7:0]};
                    2'b01: DM_RD_out = {{24{DM_RD_in[15]}}, DM_RD_in[15:8]};
                    2'b10: DM_RD_out = {{24{DM_RD_in[23]}}, DM_RD_in[23:16]};
                    2'b11: DM_RD_out = {{24{DM_RD_in[31]}}, DM_RD_in[31:24]};
                endcase
            end
            `LBU_OP: begin
                case(addr)
                    2'b00: DM_RD_out = {24'b0, DM_RD_in[7:0]};
                    2'b01: DM_RD_out = {24'b0, DM_RD_in[15:8]};
                    2'b10: DM_RD_out = {24'b0, DM_RD_in[23:16]};
                    2'b11: DM_RD_out = {24'b0, DM_RD_in[31:24]};
                endcase
            end
            `LH_OP: begin
                case(addr[1])
                    1'b0: DM_RD_out = {{16{DM_RD_in[15]}}, DM_RD_in[15:0]};
                    1'b1: DM_RD_out = {{16{DM_RD_in[31]}}, DM_RD_in[31:16]};
                endcase
            end
            `LHU_OP: begin
                case(addr[1])
                    1'b0: DM_RD_out = {16'b0, DM_RD_in[15:0]};
                    1'b1: DM_RD_out = {16'b0, DM_RD_in[31:16]};
                endcase
            end
            default: DM_RD_out = DM_RD_in;
        endcase
    end

endmodule
