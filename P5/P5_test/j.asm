ori $1, $0, 1  # $1 = 1
ori $2, $0, 32  # $2 = 32
ori $30, $0, 0x0040  # $30 = 0x0040 (base address)


loop:
	beq $1, $2, end_loop
	
	sll $3, $1, 4
	addu $4, $3, $30
	addu $20, $1, $1
	sw $20, 4($4)
	sw $1, 0($4)
	j loop
	lw $1, 4($4)  # delayed branch
end_loop:
	ori $6, $1, 0
	j j1
	addu $5, $1, $1
	
j1:
	beq $5, $6, j1
	addu $6, $6, $6
	j end
	nop
	nop
end:
	
