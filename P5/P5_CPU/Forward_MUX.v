`include "MACRO.v"

module MF_GRFRD1_D(
    input [31:0] RD1,
    input [31:0] ALUResult_M,
    input [31:0] pc4_M,
    input [31:0] ALUResult_W,
    input [31:0] DM_RD_W,
    input [31:0] pc4_W,
    input [2:0] MF_GRFRD1_D_sel,
    output reg [31:0] V1
    );
    always@(*) begin
        case(MF_GRFRD1_D_sel) 
            3'b000: V1 = RD1;
            `M_D_ALU: V1 = ALUResult_M;
            `M_D_PC: V1 = pc4_M + 4;
            `W_D_ALU: V1 = ALUResult_W;
            `W_D_DM: V1 = DM_RD_W;
            `W_D_PC: V1 = pc4_W + 4;
            default:  V1 = 32'dx;
        endcase
    end

endmodule

module MF_GRFRD2_D(
    input [31:0] RD2,
    input [31:0] ALUResult_M,
    input [31:0] pc4_M,
    input [31:0] ALUResult_W,
    input [31:0] DM_RD_W,
    input [31:0] pc4_W,
    input [2:0] MF_GRFRD2_D_sel,
    output reg [31:0] V2
    );
    always@(*) begin
        case(MF_GRFRD2_D_sel) 
            3'b000: V2 = RD2;
            `M_D_ALU: V2 = ALUResult_M;
            `M_D_PC: V2 = pc4_M + 4;
            `W_D_ALU: V2 = ALUResult_W;
            `W_D_DM: V2 = DM_RD_W;
            `W_D_PC: V2 = pc4_W + 4;
            default:  V2 = 32'dx;
        endcase
    end

endmodule

module MF_ALUA_E(
    input [31:0] V1_E_left,
    input [31:0] ALUResult_M,
    input [31:0] pc4_M,
    input [31:0] ALUResult_W,
    input [31:0] DM_RD_W,
    input [31:0] pc4_W,
    input [2:0] MF_ALUA_E_sel,
    output reg [31:0] V1_E_right
    );
    always@(*) begin
        case(MF_ALUA_E_sel) 
            3'b000: V1_E_right = V1_E_left;
            `M_E_ALU: V1_E_right = ALUResult_M;
            `M_E_PC: V1_E_right = pc4_M + 4;
            `W_E_ALU: V1_E_right = ALUResult_W;
            `W_E_DM: V1_E_right = DM_RD_W;
            `W_E_PC: V1_E_right = pc4_W + 4;
            default:  V1_E_right = 32'dx;
        endcase
    end

endmodule

module MF_ALUB_E(
    input [31:0] V2_E_left,
    input [31:0] ALUResult_M,
    input [31:0] pc4_M,
    input [31:0] ALUResult_W,
    input [31:0] DM_RD_W,
    input [31:0] pc4_W,
    input [2:0] MF_ALUB_E_sel,
    output reg [31:0] V2_E_right_ALUB
    );
    always@(*) begin
        case(MF_ALUB_E_sel) 
            3'b000: V2_E_right_ALUB = V2_E_left;
            `M_E_ALU: V2_E_right_ALUB = ALUResult_M;
            `M_E_PC: V2_E_right_ALUB = pc4_M + 4;
            `W_E_ALU: V2_E_right_ALUB = ALUResult_W;
            `W_E_DM: V2_E_right_ALUB = DM_RD_W;
            `W_E_PC: V2_E_right_ALUB = pc4_W + 4;
            default: V2_E_right_ALUB = 32'dx;
        endcase
    end

endmodule

module MF_MemData_E(
    input [31:0] V2_E_left,
    input [31:0] ALUResult_M,
    input [31:0] pc4_M,
    input [31:0] ALUResult_W,
    input [31:0] DM_RD_W,
    input [31:0] pc4_W,
    input [2:0] MF_MemData_E_sel,
    output reg [31:0] V2_E_right2_RegM
    );
    always@(*) begin
        case(MF_MemData_E_sel) 
            3'b000: V2_E_right2_RegM = V2_E_left;
            `M_E_ALU: V2_E_right2_RegM = ALUResult_M;
            `M_E_PC: V2_E_right2_RegM = pc4_M + 4;
            `W_E_ALU: V2_E_right2_RegM = ALUResult_W;
            `W_E_DM: V2_E_right2_RegM = DM_RD_W;
            `W_E_PC: V2_E_right2_RegM = pc4_W + 4;
            default:  V2_E_right2_RegM = 32'dx;
        endcase
    end

endmodule

module MF_DMWD_M(
    input [31:0] V2_M,
    input [31:0] ALUResult_W,
    input [31:0] DM_RD_W,
    input [31:0] pc4_W,
    input [1:0] MF_DMWD_M_sel,
    output reg [31:0] MemData
    );
    always@(*) begin
        case(MF_DMWD_M_sel)
            2'b00: MemData = V2_M;
            `W_M_ALU: MemData = ALUResult_W;
            `W_M_DM: MemData = DM_RD_W;
            `W_M_PC: MemData = pc4_W + 4;
            default:  MemData = 32'dx;
        endcase
    end

endmodule