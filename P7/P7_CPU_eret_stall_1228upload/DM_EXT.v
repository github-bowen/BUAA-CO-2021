`include "MACRO.v"
module DM_EXT(
    input [31:0] IR_M,
    input [31:0] DM_RD_in,
    input [31:0] MemAddr,
    output reg [31:0] DM_RD_out,
    output reg AdEL_load_addr_align,
    output reg AdEL_Timer,
    output AdEL_addr_outrange
    );
    wire [1:0] addr;
    wire load;

    DECODER DM_EXT_DECODER(
        .IR(IR_M),
        .load(load)
    );

    assign addr = MemAddr[1:0];

    assign AdEL_addr_outrange = (!(
        ((MemAddr >= `DM_ADDR_START) && (MemAddr <= `DM_ADDR_END)) ||
        ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
        ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END)) ) && load
    );

    initial begin
        DM_RD_out = 0;
        AdEL_load_addr_align = 0;
        AdEL_Timer = 0;
    end

    always@(*) begin
        case(IR_M[31:26])
            `LW_OP: begin
                DM_RD_out = DM_RD_in;
                AdEL_Timer = 0;
                AdEL_load_addr_align = |addr;
            end
            `LB_OP: begin
                AdEL_Timer = ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
                             ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END));
                AdEL_load_addr_align = 0;
                case(addr)
                    2'b00: DM_RD_out = {{24{DM_RD_in[7]}}, DM_RD_in[7:0]};
                    2'b01: DM_RD_out = {{24{DM_RD_in[15]}}, DM_RD_in[15:8]};
                    2'b10: DM_RD_out = {{24{DM_RD_in[23]}}, DM_RD_in[23:16]};
                    2'b11: DM_RD_out = {{24{DM_RD_in[31]}}, DM_RD_in[31:24]};
                endcase
            end
            `LBU_OP: begin
                AdEL_Timer = ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
                             ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END));
                AdEL_load_addr_align = 0;
                case(addr)
                    2'b00: DM_RD_out = {24'b0, DM_RD_in[7:0]};
                    2'b01: DM_RD_out = {24'b0, DM_RD_in[15:8]};
                    2'b10: DM_RD_out = {24'b0, DM_RD_in[23:16]};
                    2'b11: DM_RD_out = {24'b0, DM_RD_in[31:24]};
                endcase
            end
            `LH_OP: begin
                AdEL_Timer = ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
                             ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END));
                AdEL_load_addr_align = addr[0];
                case(addr[1])
                    1'b0: DM_RD_out = {{16{DM_RD_in[15]}}, DM_RD_in[15:0]};
                    1'b1: DM_RD_out = {{16{DM_RD_in[31]}}, DM_RD_in[31:16]};
                endcase
            end
            `LHU_OP: begin
                AdEL_Timer = ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
                             ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END));
                AdEL_load_addr_align = addr[0];
                case(addr[1])
                    1'b0: DM_RD_out = {16'b0, DM_RD_in[15:0]};
                    1'b1: DM_RD_out = {16'b0, DM_RD_in[31:16]};
                endcase
            end
            default: begin
                AdEL_load_addr_align = 0;
                AdEL_Timer = 0;
                DM_RD_out = 0;
            end
        endcase
    end

endmodule
