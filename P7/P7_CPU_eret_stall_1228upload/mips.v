module mips(
    input clk,
    input reset,
    input interrupt,
    output [31:0] macroscopic_pc,

    output [31:0] i_inst_addr,
    input  [31:0] i_inst_rdata,

    output [31:0] m_data_addr,
    input  [31:0] m_data_rdata,
    output [31:0] m_data_wdata, 
    output [3 :0] m_data_byteen,

    output [31:0] m_inst_addr,

    output w_grf_we,
    output [4 :0] w_grf_addr,
    output [31:0] w_grf_wdata,

    output [31:0] w_inst_addr
);
    wire [31:0] Bridge_Addr, Bridge_RD, Bridge_WD, Bridge_inst_Addr;
	wire [31:0] T0_RD, T1_RD;
    wire [3:0] Bridge_byteen;
    wire [7:2] HWInt;
	wire T0_IRQ, T1_IRQ, T0_WE, T1_WE;
	wire IntReq, IntReq_reg_out;

	assign m_data_addr = ((IntReq || IntReq_reg_out) && HWInt[4]) ? 32'h7f20: Bridge_Addr;
	assign m_data_wdata = Bridge_WD;
	assign m_inst_addr = Bridge_inst_Addr;

    CPU CPU (
		.clk(clk), 
		.reset(reset), 
		.macroscopic_pc(macroscopic_pc), 
		.i_inst_addr(i_inst_addr), 
		.i_inst_rdata(i_inst_rdata), 
		.Bridge_Addr(Bridge_Addr), 
		.Bridge_RD(Bridge_RD), 
		.Bridge_WD(Bridge_WD), 
		.Bridge_byteen(Bridge_byteen), 
		.Bridge_inst_Addr(Bridge_inst_Addr), 
		.IntReq(IntReq),
		.IntReq_reg_out(IntReq_reg_out),
		.w_grf_we(w_grf_we), 
		.w_grf_addr(w_grf_addr), 
		.w_grf_wdata(w_grf_wdata), 
		.w_inst_addr(w_inst_addr), 
		.HWInt(HWInt)
	);

	Bridge Bridge (
		.PrAddr(Bridge_Addr), 
		.PrByteen(Bridge_byteen), 
		.PrRD(Bridge_RD), 
		.interrupt(interrupt), 
		.HWInt(HWInt), 
		.T0_RD(T0_RD), 
		.T1_RD(T1_RD), 
		.m_data_rdata(m_data_rdata), 
		.T0_IRQ(T0_IRQ), 
		.T1_IRQ(T1_IRQ), 
		.T0_WE(T0_WE), 
		.T1_WE(T1_WE), 
		.m_data_byteen(m_data_byteen),
		.IntReq(IntReq),
		.IntReq_reg_out(IntReq_reg_out)
	);

    TC Timer0 (
		.clk(clk), 
		.reset(reset), 
		.Addr(Bridge_Addr[31:2]), 
		.WE(T0_WE), 
		.Din(Bridge_WD), 
		.Dout(T0_RD), 
		.IRQ(T0_IRQ)
	);

    TC Timer1 (
		.clk(clk), 
		.reset(reset), 
		.Addr(Bridge_Addr[31:2]), 
		.WE(T1_WE), 
		.Din(Bridge_WD), 
		.Dout(T1_RD), 
		.IRQ(T1_IRQ)
	);


endmodule
