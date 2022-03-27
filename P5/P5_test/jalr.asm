ori $3, $0, 8
ori $1, $0, 0x0034
ori $2, $0, 0x2345
sw $2, 0($1)
lw $ra, 0($1)

ori $10, $0, 0x303c
jalr $30, $10  # to 0x303c
addu $ra, $ra, $3
subu $ra, $ra, $3
label3:
subu $ra, $ra, $3
ori $11, $0, 0x3040
sw $11, 0($0)
lw $12, 0($0)
jalr $29 ,$12   # to 0x3040
sra $ra, $ra, 4

label1:
	j label3
	sll $ra, $ra, 4
label2:
	nop
	addu $ra, $ra, $ra
