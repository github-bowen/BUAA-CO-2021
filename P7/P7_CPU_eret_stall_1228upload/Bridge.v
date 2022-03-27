`include "MACRO.v"

module Bridge(
    input [31:0] PrAddr,
    input [3:0] PrByteen,
    output [31:0] PrRD,

    input interrupt,
    output [5:0] HWInt,

    input [31:0] T0_RD,
    input [31:0] T1_RD,
    input  [31:0] m_data_rdata, 
    input T0_IRQ,
    input T1_IRQ,
    output T0_WE,
    output T1_WE,
    output [3:0] m_data_byteen,
    input IntReq,
    input IntReq_reg_out
    );
    wire HitDM, HitT0, HitT1;

    assign HitDM = (PrAddr >= `DM_ADDR_START) && (PrAddr <= `DM_ADDR_END);
    assign HitT0 = (PrAddr >= `T0_ADDR_START) && (PrAddr <= `T0_ADDR_END);
    assign HitT1 = (PrAddr >= `T1_ADDR_START) && (PrAddr <= `T1_ADDR_END);

    assign m_data_byteen = ((IntReq || IntReq_reg_out) && interrupt) ? 4'b1111 :
                           HitDM ? PrByteen : 4'b0000;
    assign T0_WE = (|PrByteen) && HitT0;
    assign T1_WE = (|PrByteen) && HitT1;

    assign HWInt = {3'b000, interrupt, T1_IRQ && (T1_IRQ !== 1'bx), T0_IRQ && (T0_IRQ !== 1'bx)};

    assign PrRD = HitDM ? m_data_rdata :
                  HitT0 ? T0_RD :
                  HitT1 ? T1_RD : 32'dx;
endmodule
