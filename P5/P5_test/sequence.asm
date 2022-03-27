# no forwarding, no stall, no jump or b_instr
# sequence
lui $0, 0x1234
lui $1, 0xf234
lui $2, 0x2345
lui $3, 0xf456

ori $4, 0x4567
ori $5, 0x5678
ori $6, 0x6789
ori $7, 0x789a

addu $8, $0, $0
addu $9, $1, $1
addu $10, $2, $2
addu $11, $3, $3

subu $12, $2, $1
subu $13, $3, $2
subu $14, $4, $3
subu $15, $5, $4

sll $16, $1, 2
sll $17, $2, 3
sll $18, $3, 4
sll $19, $4, 5

srl $20, $1, 2
srl $21, $2, 3
srl $22, $3, 4
srl $23, $4, 5

sra $24, $1, 2
sra $25, $2, 3
sra $26, $3, 4
sra $27, $4, 5

slt $28, $1, $2
slt $29, $2, $3
slt $30, $3, $4
slt $31, $4, $5

sw $1, 0($0)
sw $2, 4($0)
sw $3, 8($0)
sw $4, 12($0)
sw $5, 16($0)
sw $6, 20($0)

lw $11, 0($0)
lw $12, 4($0)
lw $13, 8($0)
lw $14, 12($0)
lw $15, 16($0)
lw $16, 20($0)

nop
nop
nop
nop