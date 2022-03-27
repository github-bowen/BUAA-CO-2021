addu $1, $0, 0x3000  # $1 = base_pc
ori $2, $1, 0x0020
sw $2, 0($0)
lw $1, 0($0)
jr $1
addu $2, $2, $1
ori $3, $1, 0x0020
sll $4, $1, 2
ori $2, $1, 0x002c  # here
addu $2, $2, $1
sw $2, 0($0)
lw $3, 0($0)
beq $2, $3, end
nop
nop
end:
nop
subu $3, $2, $3


