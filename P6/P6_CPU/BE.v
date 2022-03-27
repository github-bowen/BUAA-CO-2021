`include "MACRO.v"

module BE(
    input [31:0] IR_M,
    input [31:0] MemAddr,
    output reg [3:0] m_data_byteen
    );
    wire [1:0] addr;

    assign addr = MemAddr[1:0];

    always@(*) begin
        case(IR_M[31:26])
            `SW_OP: m_data_byteen = 4'b1111;
            `SH_OP: begin
                if(addr[1] == 0) m_data_byteen = 4'b0011;
                else m_data_byteen = 4'b1100;
            end
            `SB_OP: begin
                case(addr) 
                    2'b00: m_data_byteen = 4'b0001;
                    2'b01: m_data_byteen = 4'b0010;
                    2'b10: m_data_byteen = 4'b0100;
                    2'b11: m_data_byteen = 4'b1000;
                    default: m_data_byteen = 4'b0000;
                endcase
            end
            default: m_data_byteen = 4'b0000;
        endcase
    end


endmodule
