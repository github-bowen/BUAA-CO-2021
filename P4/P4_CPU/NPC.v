module NPC(
    input [25:0] _26IMM,
    input ALUZero,
    input [31:0] PC,
    input [2:0] NPCOp,
    input [31:0] GPR_rs,
    output reg [31:0] NPC,
    output [31:0] PC_PLUS_4
    );
    // NPCOp:
    // 000: PC + 4
    // 001: beq(linked with ALUZero == 1)
    // 010: jump to 26imm
    // 011: jump to GPR[rs]


    always@(*) begin
        case(NPCOp)
            3'b000: NPC = PC + 4;
            3'b001: begin
                if(ALUZero == 1) NPC = {{14{_26IMM[15]}}, _26IMM[15:0], 2'b00} + PC + 4;
                else NPC = PC + 4;
            end
            3'b010: NPC = {PC[31:28], _26IMM, 2'b00};
            3'b011: NPC = GPR_rs;
            default: NPC = 32'h0000_xxxx;  // set flag as error assignment
        endcase
    end

    assign PC_PLUS_4 = PC + 4;

endmodule
