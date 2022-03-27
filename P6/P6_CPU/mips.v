module mips(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);
    wire pc_en, D_en, E_clr, busy, start;
    wire [3:0] MF_GRFRD1_D_sel, MF_GRFRD2_D_sel, MF_ALUA_E_sel, MF_ALUB_E_sel, MF_MemData_E_sel;
    wire [2:0] MF_DMWD_M_sel;
    wire [31:0] IR_D, IR_E, IR_M, IR_W;

    DATAPATH DATAPATH (
		.clk(clk), 
		.reset(reset), 
		.pc_en(pc_en), 
		.D_en(D_en), 
		.E_clr(E_clr), 
		.MF_GRFRD1_D_sel(MF_GRFRD1_D_sel),
		.MF_GRFRD2_D_sel(MF_GRFRD2_D_sel),
		.MF_ALUA_E_sel(MF_ALUA_E_sel), 
		.MF_ALUB_E_sel(MF_ALUB_E_sel), 
		.MF_MemData_E_sel(MF_MemData_E_sel), 
		.MF_DMWD_M_sel(MF_DMWD_M_sel), 
		.IR_D_out(IR_D), 
		.IR_E_out(IR_E), 
		.IR_M_out(IR_M), 
		.IR_W_out(IR_W),
		.i_inst_rdata(i_inst_rdata), 
		.m_data_rdata(m_data_rdata), 
		.i_inst_addr(i_inst_addr), 
		.m_data_addr(m_data_addr), 
		.m_data_wdata(m_data_wdata), 
		.m_data_byteen(m_data_byteen), 
		.m_inst_addr(m_inst_addr), 
		.w_grf_we(w_grf_we), 
		.w_grf_addr(w_grf_addr), 
		.w_grf_wdata(w_grf_wdata), 
		.w_inst_addr(w_inst_addr),
		.busy(busy),
		.start(start)
	);

    STALL_CONTROLL STALL_CONTROLL (
		.IR_D(IR_D), 
		.IR_E(IR_E), 
		.IR_M(IR_M), 
		.pc_en(pc_en), 
		.D_en(D_en), 
		.E_clr(E_clr),
		.busy(busy),
		.start(start)
	);

    FORWARD_CONTROLL FORWARD_CONTROLL (
		.IR_D(IR_D), 
		.IR_E(IR_E), 
		.IR_M(IR_M), 
		.IR_W(IR_W), 
		.MF_GRFRD1_D_sel(MF_GRFRD1_D_sel),
		.MF_GRFRD2_D_sel(MF_GRFRD2_D_sel),
		.MF_ALUA_E_sel(MF_ALUA_E_sel), 
		.MF_ALUB_E_sel(MF_ALUB_E_sel), 
		.MF_MemData_E_sel(MF_MemData_E_sel), 
		.MF_DMWD_M_sel(MF_DMWD_M_sel)
	);


endmodule
