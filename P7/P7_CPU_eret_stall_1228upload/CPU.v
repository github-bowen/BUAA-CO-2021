module CPU(
    input clk,                       
    input reset,                                    
    output [31:0] macroscopic_pc,    
	//----------IM(in tb)--------------
    output [31:0] i_inst_addr,      
    input  [31:0] i_inst_rdata,    
	//----------to/from Bridge-----------------
    output [31:0] Bridge_Addr,     
    input  [31:0] Bridge_RD,     
    output [31:0] Bridge_WD,    
    output [3 :0] Bridge_byteen,   
    output [31:0] Bridge_inst_Addr,  
	output IntReq,  
	output IntReq_reg_out, 
	//-------------grf(in tb)-----------------
    output w_grf_we,                 
    output [4:0] w_grf_addr,       
    output [31:0] w_grf_wdata,     
    output [31:0] w_inst_addr,
	//exception or interruption
	input [5:0] HWInt
);
    wire pc_en, D_en, E_clr, busy, start, eret_D;
    wire [3:0] MF_GRFRD1_D_sel, MF_GRFRD2_D_sel, MF_ALUA_E_sel, MF_ALUB_E_sel, MF_MemData_E_sel;
    wire [2:0] MF_DMWD_M_sel;
    wire [31:0] IR_D, IR_E, IR_M, IR_W;

	assign macroscopic_pc = Bridge_inst_Addr;

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
		.eret_D_out(eret_D),
		//----------IM(in tb)--------------
		.i_inst_rdata(i_inst_rdata), 
		.i_inst_addr(i_inst_addr), 
		//----------to/from Bridge-----------------
		.Bridge_RD(Bridge_RD), 
		.Bridge_Addr(Bridge_Addr), 
		.Bridge_WD(Bridge_WD), 
		.Bridge_byteen(Bridge_byteen), 
		.Bridge_inst_Addr(Bridge_inst_Addr), 
		.IntReq(IntReq),
		.IntReq_reg_out(IntReq_reg_out),
		//-------------grf(in tb)---------------------
		.w_grf_we(w_grf_we), 
		.w_grf_addr(w_grf_addr), 
		.w_grf_wdata(w_grf_wdata), 
		.w_inst_addr(w_inst_addr),
		//--------------to stall comtroller---------
		.busy(busy),
		.start(start),
		//exception or interrupt
		.HWInt(HWInt)
	);

    STALL_CONTROLL STALL_CONTROLL (
		.IR_D(IR_D), 
		.IR_E(IR_E), 
		.IR_M(IR_M), 
		.IR_W(IR_W),
		.eret_D(eret_D),
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
