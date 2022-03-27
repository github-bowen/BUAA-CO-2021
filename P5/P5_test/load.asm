# initial
lui $1, 0xffff
ori $1, $1, 0xffff
lui $2, 0x1234
ori $2, $2, 0x1234
lui $3, 0x2345
ori $3, $3, 0x2345
lui $4, 0x3456
ori $4, $4, 0x3456
lui $5, 0x4567
ori $5, $5, 0x4567

sw $1, 0($0)
sw $2, 4($0)
sw $3, 8($0)
sw $4, 12($0)
sw $5, 16($0)

# start
lw $6, 0($0)
addu $7, $6, $1
addu $7, $7, $0
addu $7, $7, $0
addu $7, $7, $0
addu $7, $7, $0
subu $8, $6, $2
subu $9, $6, $3

lw $10, 4($0)
ori $11, $10, 0x0001
ori $12, $10, 0x0010
ori $13, $10, 0x0100

lw $14, 8($0)
sll $15, $14, 2
srl $16, $14, 1
sra $17, $14, 1

lw $18, 12($0)
lw $19, 16($0)
slt $20, $18, $19
nop