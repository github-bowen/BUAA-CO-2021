module mips(
    input clk,
    input reset
    );
    wire pc_en, D_en, E_clr;
    wire [2:0] MF_GRFRD1_D_sel, MF_GRFRD2_D_sel, MF_ALUA_E_sel, MF_ALUB_E_sel, MF_MemData_E_sel;
    wire [1:0] MF_DMWD_M_sel;
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
		.IR_W_out(IR_W)
	);

    STALL_CONTROLL STALL_CONTROLL (
		.IR_D(IR_D), 
		.IR_E(IR_E), 
		.IR_M(IR_M), 
		.pc_en(pc_en), 
		.D_en(D_en), 
		.E_clr(E_clr)
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
