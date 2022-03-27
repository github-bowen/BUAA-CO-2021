`include "MACRO.v"

module BE(
    input [31:0] IR_M,
    input [31:0] MemAddr,
    output reg [3:0] byteen,
    output reg AdES_store_addr_align,
    output reg AdES_Timer,
    output AdES_Timer_Count,
    output AdES_addr_outrange
    );
    wire [1:0] addr;
    wire store;

    DECODER BE_DECODER(
        .IR(IR_M),
        .store(store)
    );

    assign AdES_Timer_Count = store && 
                (({MemAddr[31:2], 2'b00} == `T0_COUNT_Addr) || ({MemAddr[31:2], 2'b00} == `T1_COUNT_Addr));

    assign AdES_addr_outrange = (!(
        ((MemAddr >= `DM_ADDR_START) && (MemAddr <= `DM_ADDR_END)) ||
        ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
        ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END)) ) && store
    );

    initial begin
        byteen = 4'b0000;
        AdES_store_addr_align = 0;
        AdES_Timer = 0;
    end

    assign addr = MemAddr[1:0];

    always@(*) begin
        case(IR_M[31:26])
            `SW_OP: begin
                AdES_Timer = 0;
                AdES_store_addr_align = |addr;
                byteen = 4'b1111;
            end
            `SH_OP: begin
                AdES_Timer = ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
                             ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END));
                AdES_store_addr_align = addr[0];
                if(addr[1] == 0) byteen = 4'b0011;
                else byteen = 4'b1100;
            end
            `SB_OP: begin
                AdES_Timer = ((MemAddr >= `T0_ADDR_START) && (MemAddr <= `T0_ADDR_END)) ||
                             ((MemAddr >= `T1_ADDR_START) && (MemAddr <= `T1_ADDR_END));
                AdES_store_addr_align = 0;
                case(addr) 
                    2'b00: byteen = 4'b0001;
                    2'b01: byteen = 4'b0010;
                    2'b10: byteen = 4'b0100;
                    2'b11: byteen = 4'b1000;
                endcase
            end
            default: begin
                byteen = 4'b0000;
                AdES_Timer = 0;
                AdES_store_addr_align = 0;
            end
        endcase
    end


endmodule
