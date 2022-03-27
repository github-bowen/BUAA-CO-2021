module NPC(
    input [31:0] IR_D,
    input [2:0] NPCOp,
    input [31:0] pc_F,
    input [31:0] pc4_D,
    input [31:0] pc8_D,
    input [31:0] GPR_rs,
    input zero,
    input Req,
    input [31:0] epc, 
    input eret_D,
    output [31:0] npc_out
    );
    // NPCOp:
    // 000: PC + 4
    // 001: B_INSTRC(linked with zero == 1)
    // 010: jump to 26imm
    // 011: jump to GPR[rs]
    reg [31:0] npc;

    initial npc = 32'h0000_3004;

    assign npc_out = Req ? 32'h0000_4180 : 
                     eret_D ? epc + 4 :
                     npc;

    always@(*) begin
        case(NPCOp)
            3'b000: npc = pc_F + 4;
            3'b001: begin
                if(zero == 1) npc = {{14{IR_D[15]}}, IR_D[15:0], 2'b00} + pc_F;
                else npc = pc_F + 4;
            end
            3'b010: npc = {pc_F[31:28], IR_D[25:0], 2'b00};
            3'b011: npc = GPR_rs;
            default: npc = 32'h0000_xxxx;  // set flag as error assignment
        endcase
    end

endmodule
