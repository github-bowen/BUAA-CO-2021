`include "MACRO.v"

module CMP(
    input [31:0] V1,
    input [31:0] V2,
    input [31:0] IR_D,
    output reg zero
    );
    always@(*) begin
        case(IR_D[31:26])
            `BEQ_OP:   zero = (V1 == V2) ? 1 : 0;
            `BNE_OP:   zero = (V1 != V2) ? 1 : 0;
            `BLEZ_OP:  zero = $signed($signed(V1) <= $signed(0)) ? 1 : 0;
            `BGTZ_OP:  zero = $signed($signed(V1) >  $signed(0)) ? 1 : 0;
            `BLTZ_BGEZ_OP:  begin
                if(IR_D[20:16] == `BLTZ_RT) 
                       zero = $signed($signed(V1) <  $signed(0)) ? 1 : 0;
                else if(IR_D[20:16] == `BGEZ_RT)
                       zero = $signed($signed(V1) >= $signed(0)) ? 1 : 0;
            end

        endcase
    end


endmodule
