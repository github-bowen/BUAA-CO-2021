ori $3, $0, 8
ori $1, $0, 0x0034
ori $2, $0, 0x2345
sw $2, 0($1)
lw $ra, 0($1)
jal label1  # 0x0000_3014
addu $ra, $ra, $3
subu $ra, $ra, $3
label3:
subu $ra, $ra, $3
jal label2
sra $ra, $ra, 4

label1:
	j label3
	sll $ra, $ra, 4
label2:
	nop
	addu $ra, $ra, $ra