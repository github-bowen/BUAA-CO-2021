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

sw $1, 0($0)  # $1 = 0xffff_ffff
sw $2, 4($0)  # $2 = 0x1234_1234
sw $3, 8($0)  # $3 = 0x2345_2345
sw $4, 12($0) # $4 = 0x3456_3456
sw $5, 16($0) # $5 = 0x4567_4567

# start
lw $1, 8($0)  # $1 = $3
lw $2, 8($0)  # $2 = $3

beq $1, $2, yes1
ori $6, $1, 0x1234  # delayed branching
yes2:
ori $7, $1, 0x1234
sll $8, $7, 2
yes1:
beq $7, $8, yes2
sll $7, $7, 2
yes3:
lw $9, 0($0)  # $9 = $1
beq $9, $1, yes3  # delayed branching
sll $1, $1, 2

beq $0, $1, no4
addu $1, $0, $0   # delayed branching

beq $1, $0, yes5
subu $1, $3, $2   # delayed branching
no4:
nop

yes5:
addu $9, $1, $2
addu $10, $3, $4
beq $9, $10, no6
slt $11, $9, $10  # delayed branching

beq $11, $0, no7
srl $12, $11, 31  # delayed branching

beq $12, $0, yes8
srl $13, $12, 31  # delayed branching

yes8:
beq $13, $0, no9
srl $13, $13, 31  # delayed branching

no6:
no7:
nop

no9:
nop
