lui $1, 0x1234
ori $1, $1, 0x1234
sw $1, 0($0)

lui $2, 0x234
ori $2, $2, 0x234
sw $2, 4($0)

lw $3, 0($0)
sw $3, 8($0)

lw $4, 0($0)
lui $6, 0x1234
subu $5, $4, $6
addu $4, $4, $4
sw $4, 0($5)
#-------test continue-----
#initial
ori $30, $0, 0x0234
ori $29, $0, 0x0324
ori $28, $0, 0x0844
ori $27, $0, 0x0538
ori $26, $0, 0x011c

sw $30, 0($0)
sw $29, 4($0)
sw $28, 8($0)
sw $27, 12($0)
sw $26, 16($0)
#start
lw $10, 0($0)
lw $11, 4($0)
sw $10, 0($11)

lw $11, 8($0)
lw $12, 12($0)
sw $12, 0($11)
lw $12, 16($0)
sw $11, 0($12)


