ori $2, $0, 6
ori $3, $0, 2
ori $4, $0, 3
ori $31, $0, 1024
mult $3, $4
mflo $5    
beq $5, $2, label    
ori $10, $0, 5
ori $11, $0, 6
label:
ori $11, $0, 0xc0f
ori $15, $0, 4
mult $11, $15
mflo $12      
jr $12              
ori $1, $0, 9
lui $9, 0x2222
ori $12, $0, 326
ori $13, $0, 4
mfhi $13
sw $2, 4($13)
mthi $2
mtlo $3
div $2, $3
mfhi $22
mflo $23
ori $14, $0, 256
lui $15, 0xffff
mult $15, $14
mfhi $26
mflo $27
multu $15, $14
mthi $26
mflo $27
divu $15, $14
mthi $9
mfhi $26
mflo $27
div $15, $14
mtlo $31
mfhi $26
mflo $27
sw $31, -4($31)
div $15, $14
mtlo $31
mfhi $26
mflo $27
lw $30, -4($31)
