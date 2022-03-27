`include "MACRO.v"

module DATAPATH(
    input clk,
    input reset,
    input pc_en,
    input D_en,
    input E_clr,
    input [3:0] MF_GRFRD1_D_sel,
    input [3:0] MF_GRFRD2_D_sel,
    input [3:0] MF_ALUA_E_sel,
    input [3:0] MF_ALUB_E_sel,
    input [3:0] MF_MemData_E_sel,
    input [2:0] MF_DMWD_M_sel,
    output [31:0] IR_D_out,
    output [31:0] IR_E_out,
    output [31:0] IR_M_out,
    output [31:0] IR_W_out,
    output eret_D_out,
    //----------IM(in tb)--------------
    input [31:0] i_inst_rdata,   // IR_F
    output [31:0] i_inst_addr,   //PC_F
    //----------to/from Bridge-----------------
    input [31:0] Bridge_RD,
    output [31:0] Bridge_Addr,
    output [31:0] Bridge_WD, 
    output [3:0] Bridge_byteen, //output from BE
    output [31:0] Bridge_inst_Addr,   //PC_M
    output IntReq,
    output IntReq_reg_out,
    //-------------grf(in tb)---------------------
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,
    //--------------to stall comtroller----------
    output busy,
    output start,
    //exception or interrupt
    input [5:0] HWInt
    );


//-------------------F WIRES-------------------
    wire [31:0] pc_F, pc4_F, pc8_F, IR_F;
    wire bd_F;
//-------------------D WIRES-------------------
    wire [31:0] IR_D, pc4_D, pc8_D, RD1, RD2, V1, V2, EXTResult, npc;
    wire [4:0] A1_D, A2_D;
    wire [2:0] NPCOp;
    wire EXTOp, zero, bj_D, bd_D, eret_D;
//-------------------E WIRES-------------------
    wire [31:0] IR_E, V1_E_left, V1_E_right, V2_E_left, V2_E_right_ALUB, 
                V2_E_right2_RegM, EXTResult_E, pc4_E, pc8_E, ALUSrcA, 
                ALUSrcB, ALUResult_E, hi_E, lo_E;
    wire ALU_Aop, start_E;
    wire [1:0] ALU_Bop;
    wire [3:0] ALUOp, MDUOp; 
    wire [4:0] shamt_E;
    wire load_E, store_E, bd_E;
//-------------------M WIRES-------------------
    wire [31:0] IR_M, V1_M, V2_M, MemData, ALUResult_M, pc4_M, pc8_M, 
                DM_RD, hi_M, lo_M, CP0_data_M;
	wire [31:0] epc;
    wire MemWrite_M, CP0_WE, eret_M, Req_M, bd_M;
    wire [4:0] CP0_addr;
    wire [3:0] byteen;
//-------------------W WIRES-------------------
    wire [31:0] IR_W, ALUResult_W, pc4_W, pc8_W, DM_RD_W, REGorMEM_Result_W, 
                RegData_W, hi_W, lo_W, CP0_data_W;
    wire [4:0] A3_W;
    wire RegWrite_W, REGorMEM_W;
    wire [2:0] REGop_W;
//--------------------------------------------------------------------------------------------
//----------------------ExcCode-----------------------
//-------------------------F----------------------------
    wire AdEL_pc_F;
//-------------------------D----------------------------
    wire RI_D;
    wire [4:0] ExcCode_D_old, ExcCode_D;
//-------------------------E----------------------------
    wire add_addi_sub_E, AdEL_addr_overflow_E, AdES_addr_overflow_E, Ov_E;
    wire [4:0] ExcCode_E_old, ExcCode_E;
//-------------------------M----------------------------
    wire AdES_store_addr_align, AdES_Timer, AdES_addr_outrange, AdES_Timer_Count;
    wire AdEL_load_addr_align,  AdEL_Timer, AdEL_addr_outrange, store_M;
    wire [4:0] ExcCode_M_old, ExcCode_M, ExcCode_former;
    wire [4:0] ExcCode_CP0;
//INSTANTIATE
//---------------------F----------------------
    PC PC (
        .clk(clk),
        .pc_en(pc_en),
        .reset(reset),
        .NPC(npc),
        .epc(epc),
        .eret_D(eret_D),
        .Req(Req_M),
        .PC_F(pc_F),
        .PC4_F(pc4_F),
        .PC8_F(pc8_F)
    );

    //IM IM (
        //.PC(pc_F),
        //.IR(IR_F)
    //);
    assign i_inst_addr = pc_F;
    assign IR_F = i_inst_rdata;

    assign AdEL_pc_F = ((|pc_F[1:0]) || (pc_F < `PC_ADDR_START) || (pc_F > `PC_ADDR_END));

    assign ExcCode_D_old = AdEL_pc_F ? `AdEL : 0;
    assign bd_F = bj_D;
//---------------------D----------------------
    REG_D REG_D (
        .IR_F(IR_F),
        .pc4_F(pc4_F),
        .pc8_F(pc8_F),
        .D_en(D_en),
        .clk(clk),
        .reset(reset),
        .IR_D(IR_D),
        .pc4_D(pc4_D),
        .pc8_D(pc8_D),
        //Exception
        .Req(Req_M),
        .bd_in(bd_F),
        .ExcCode_D_old(ExcCode_D_old),
        .ExcCode_E_old(ExcCode_E_old),
        .bd_out(bd_D)
    );

    DECODER d_decoder (
        .IR(IR_D),
        .A1(A1_D),
        .A2(A2_D),
        .EXTOp(EXTOp),
        .NPCOp(NPCOp),
        .eret(eret_D),
        .RI_out(RI_D),
        .bj(bj_D)
    );

    assign eret_D_out = eret_D;

    GRF GRF (
        //from D and W
        .clk(clk),
        .reset(reset),
        .RegWrite_W(RegWrite_W),
        .pc4_W(pc4_W),
        .pc4_D(pc4_D),
        .pc8_D(pc8_D),
        .A1_D(A1_D),
        .A2_D(A2_D),
        .A3_W(A3_W),
        .RegData(RegData_W),
        .RD1(RD1),
        .RD2(RD2)
    );

    assign w_grf_we = RegWrite_W;
    assign w_grf_addr = A3_W;
    assign w_grf_wdata = RegData_W;
    assign w_inst_addr = pc4_W - 4;

    MF_GRFRD1_D MF_GRFRD1_D (
		.RD1(RD1), 
		.ALUResult_M(ALUResult_M), 
        .pc4_M(pc4_M),
        .hi_M(hi_M),
        .lo_M(lo_M),
        .hi_W(hi_W),
        .lo_W(lo_W),
		.ALUResult_W(ALUResult_W), 
		.DM_RD_W(DM_RD_W), 
        .pc4_W(pc4_W),
        .CP0_data_W(CP0_data_W),
		.MF_GRFRD1_D_sel(MF_GRFRD1_D_sel), 
		.V1(V1)
	);

    MF_GRFRD2_D MF_GRFRD2_D (
		.RD2(RD2), 
		.ALUResult_M(ALUResult_M), 
        .pc4_M(pc4_M),
        .hi_M(hi_M),
        .lo_M(lo_M),
        .hi_W(hi_W),
        .lo_W(lo_W),
		.ALUResult_W(ALUResult_W), 
		.DM_RD_W(DM_RD_W), 
        .pc4_W(pc4_W),
        .CP0_data_W(CP0_data_W),
		.MF_GRFRD2_D_sel(MF_GRFRD2_D_sel), 
		.V2(V2)
	);

    CMP CMP (
        .V1(V1),
        .V2(V2),
        .IR_D(IR_D),
        .zero(zero)
    );

    EXT EXT (
        .IR_D(IR_D),
        .EXTOp(EXTOp),
        .EXTResult(EXTResult)
    );

    NPC NPC (
       .IR_D(IR_D),
       .NPCOp(NPCOp),
       .pc_F(pc_F),
       .pc4_D(pc4_D),
       .pc8_D(pc8_D),
       .GPR_rs(V1),
       .zero(zero),
       .epc(epc),
       .eret_D(eret_D),
       .Req(Req_M),
       .npc_out(npc)
   );
    assign ExcCode_D = RI_D ? `RI : 0;

//---------------------E----------------------
    REG_E REG_E (
        .IR_D(IR_D),
        .V1(V1),
        .V2(V2),
        .EXTResult(EXTResult),
        .pc4_D(pc4_D),
        .pc8_D(pc8_D),
        .clk(clk),
        .reset(reset),
        .E_clr(E_clr),
        .IR_E(IR_E),
        .V1_E(V1_E_left),
        .V2_E(V2_E_left),
        .EXTResult_E(EXTResult_E),
        .pc4_E(pc4_E),
        .pc8_E(pc8_E),
        //Exception
        .Req(Req_M),
        .bd_in(bd_D),
        .ExcCode_E_old(ExcCode_E_old),
        .ExcCode_D(ExcCode_D),
        .ExcCode_M_old(ExcCode_M_old),
        .bd_out(bd_E)
    );

    DECODER e_decoder (
        .IR(IR_E),
        .ALU_Aop(ALU_Aop),
        .ALU_Bop(ALU_Bop),
        .ALUOp(ALUOp),
        .shamt(shamt_E),
        .start(start_E),
        .MDUOp(MDUOp),
        .load(load_E),
        .store(store_E),
        .add_addi_sub(add_addi_sub_E)
    );

    assign start = start_E;

    MF_ALUA_E MF_ALUA_E (
		.V1_E_left(V1_E_left), 
		.ALUResult_M(ALUResult_M), 
        .pc4_M(pc4_M),
        .hi_M(hi_M),
        .lo_M(lo_M),
        .hi_W(hi_W),
        .lo_W(lo_W),
		.ALUResult_W(ALUResult_W), 
		.DM_RD_W(DM_RD_W), 
        .pc4_W(pc4_W),
        .CP0_data_W(CP0_data_W),
		.MF_ALUA_E_sel(MF_ALUA_E_sel), 
		.V1_E_right(V1_E_right)
	);

    MUX_ALUSrcA MUX_ALUSrcA (
        .ALU_Aop(ALU_Aop),
        .in0(V1_E_right),
        //.in1(),
        .out(ALUSrcA)
    );

    MF_ALUB_E MF_ALUB_E (
		.V2_E_left(V2_E_left), 
		.ALUResult_M(ALUResult_M), 
        .pc4_M(pc4_M),
        .hi_M(hi_M),
        .lo_M(lo_M),
        .hi_W(hi_W),
        .lo_W(lo_W),
		.ALUResult_W(ALUResult_W), 
		.DM_RD_W(DM_RD_W), 
        .pc4_W(pc4_W),
        .CP0_data_W(CP0_data_W),
		.MF_ALUB_E_sel(MF_ALUB_E_sel), 
		.V2_E_right_ALUB(V2_E_right_ALUB)
	);

    MUX_ALUSrcB MUX_ALUSrcB (
        .ALU_Bop(ALU_Bop),
        .in0(V2_E_right_ALUB),
        .in1(EXTResult_E),
        //.in2(),
        //.in3(),
        .out(ALUSrcB)
    );

    ALU ALU (
        .add_addi_sub(add_addi_sub_E),
        .ALUSrcA(ALUSrcA),
        .ALUSrcB(ALUSrcB),
        .ALUOp(ALUOp),
        .shamt_E(shamt_E),
        .load(load_E),
        .store(store_E),
        .ALUResult_E(ALUResult_E),
        .AdEL_addr_overflow(AdEL_addr_overflow_E),
        .AdES_addr_overflow(AdES_addr_overflow_E),
        .Ov(Ov_E)
    );

    MDU MDU (
		.in1(ALUSrcA), 
		.in2(ALUSrcB), 
		.MDUOp(MDUOp), 
		.start_E(start_E), 
		.clk(clk), 
		.reset(reset), 
		.hi(hi_E), 
		.lo(lo_E), 
		.busy(busy),
        .Req(Req_M)
	);

    MF_MemData_E MF_MemData_E (
		.V2_E_left(V2_E_left), 
		.ALUResult_M(ALUResult_M),
        .pc4_M(pc4_M), 
        .hi_M(hi_M),
        .lo_M(lo_M),
        .hi_W(hi_W),
        .lo_W(lo_W),
		.ALUResult_W(ALUResult_W), 
		.DM_RD_W(DM_RD_W), 
        .pc4_W(pc4_W),
        .CP0_data_W(CP0_data_W),
		.MF_MemData_E_sel(MF_MemData_E_sel), 
		.V2_E_right2_RegM(V2_E_right2_RegM)
	);

    assign ExcCode_E = Ov_E                 ? `Ov   :
                       AdEL_addr_overflow_E ? `AdEL :
                       AdES_addr_overflow_E ? `AdES : 0;

//---------------------M----------------------
    REG_M REG_M (
        .hi_E(hi_E),
        .lo_E(lo_E),
		.IR_E(IR_E), 
		.V2_E(V2_E_right2_RegM), 
		.ALUResult_E(ALUResult_E), 
		.pc4_E(pc4_E), 
		.pc8_E(pc8_E), 
		.clk(clk), 
		.reset(reset), 
		.IR_M(IR_M), 
		.ALUResult_M(ALUResult_M), 
		.V2_M(V2_M), 
		.pc4_M(pc4_M), 
		.pc8_M(pc8_M),
        .hi_M(hi_M),
        .lo_M(lo_M),
        //Exception
        .Req(Req_M),
        .bd_in(bd_E),
        .ExcCode_M_old(ExcCode_M_old),
        .ExcCode_E(ExcCode_E),
        .ExcCode_former(ExcCode_former),
        .bd_out(bd_M)
	);

    DECODER m_decoder (
        .IR(IR_M),
        .MemWrite(MemWrite_M),
        .CP0_WE(CP0_WE),
        .CP0_addr(CP0_addr),
        .eret(eret_M)
    );

    MF_DMWD_M MF_DMWD_M (
		.V2_M(V2_M), 
        .hi_W(hi_W),
        .lo_W(lo_W),
		.ALUResult_W(ALUResult_W), 
		.DM_RD_W(DM_RD_W),
        .pc4_W(pc4_W), 
        .CP0_data_W(CP0_data_W),
		.MF_DMWD_M_sel(MF_DMWD_M_sel), 
		.MemData(MemData)
	);

    BE BE (
		.IR_M(IR_M), 
		.MemAddr(ALUResult_M), 
		.byteen(byteen),
        .AdES_store_addr_align(AdES_store_addr_align),
        .AdES_Timer(AdES_Timer),
        .AdES_Timer_Count(AdES_Timer_Count),
        .AdES_addr_outrange(AdES_addr_outrange)
	);

    //DM DM (
		//.clk(clk), 
		//.reset(reset), 
		//.pc4_M(pc4_M), 
		//.MemAddr(ALUResult_M), 
		//.MemData(MemData), 
		//.MemWrite_M(MemWrite_M), 
		//.DM_RD(DM_RD)
	//);

    assign Bridge_byteen = (ExcCode_CP0) ? 4'b0000 : byteen;

    assign Bridge_Addr = ALUResult_M;
    assign Bridge_WD = (Bridge_byteen == 4'b0010) ? MemData << 8  :
                          (Bridge_byteen == 4'b0100) ? MemData << 16 :
                          (Bridge_byteen == 4'b1000) ? MemData << 24 :
                          (Bridge_byteen == 4'b1100) ? MemData << 16 : MemData;
    //Bridge_byteen output from BE

    assign Bridge_inst_Addr = pc4_M - 4;
    
    DM_EXT DM_EXT (
		.IR_M(IR_M), 
		.DM_RD_in(Bridge_RD), 
		.MemAddr(ALUResult_M), 
		.DM_RD_out(DM_RD),
        .AdEL_load_addr_align(AdEL_load_addr_align),
        .AdEL_Timer(AdEL_Timer),
        .AdEL_addr_outrange(AdEL_addr_outrange)
	);


    assign ExcCode_M = (AdES_store_addr_align | AdES_Timer | AdES_addr_outrange | AdES_Timer_Count) ? `AdES : 
                       (AdEL_load_addr_align | AdEL_Timer | AdEL_addr_outrange) ? `AdEL : 0;
    assign ExcCode_CP0 = ExcCode_former ? ExcCode_former : ExcCode_M;

    CP0 CP0 (
		.CP0_addr(CP0_addr), 
		.CP0_data_in(MemData), 
		.pc_M_in(pc4_M - 4), 
		.ExcCode_in(ExcCode_CP0), 
		.HWInt(HWInt), 
		.CP0_WE(CP0_WE), 
		.eret_M(eret_M), 
		.clk(clk), 
		.reset(reset), 
		.bd_M(bd_M), 
		.Req(Req_M), 
        .IntReq_out(IntReq),
        .IntReq_reg_out(IntReq_reg_out),
		.epc_out(epc), 
		.CP0_data_out(CP0_data_M)
	);
    
//---------------------W----------------------
    REG_W REG_W (
        .hi_M(hi_M),
        .lo_M(lo_M),
		.IR_M(IR_M), 
		.ALUResult_M(ALUResult_M), 
		.clk(clk), 
		.reset(reset), 
        .Req(Req_M),
		.pc4_M(pc4_M), 
		.pc8_M(pc8_M), 
		.DM_RD(DM_RD), 
        .CP0_data_M(CP0_data_M),
		.IR_W(IR_W), 
		.ALUResult_W(ALUResult_W), 
		.pc4_W(pc4_W), 
		.pc8_W(pc8_W), 
		.DM_RD_W(DM_RD_W),
        .hi_W(hi_W),
        .lo_W(lo_W),
        .CP0_data_W(CP0_data_W)
	);

    DECODER w_decoder (
        .IR(IR_W),
        .A3(A3_W),
        .RegWrite(RegWrite_W),
        .REGorMEM(REGorMEM_W),
        .REGop(REGop_W),
        .bj(bj_W)
    );

    MUX_REGorMEM_Result MUX_REGorMEM_Result (
        .REGorMEM_W(REGorMEM_W),
        .in0(ALUResult_W),
        .in1(DM_RD_W),
        .out(REGorMEM_Result_W)
    );

    MUX_RegData MUX_RegData (
        .REGop_W(REGop_W),
        .in0(REGorMEM_Result_W),
        .in1(pc8_W),
        .in2(hi_W),
        .in3(lo_W),
        .in4(CP0_data_W),
        //.in5(),
        //.in6(),
        //.in7(),
        .out(RegData_W)
    );
//--------------------------------------------------------
    assign IR_D_out = IR_D;
	assign IR_E_out = IR_E;
	assign IR_M_out = IR_M;
	assign IR_W_out = IR_W;

endmodule
