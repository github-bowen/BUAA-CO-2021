.data
	res: .space 1000
.text
	la $s0, res
	li $t0, 1  # multiplier
	li $s1, 1000
	sb $t0, 0($s0)  # s0 = 1
	
	li $v0, 5
	syscall
	
	beqz $v0, end_mul
	
	loop:
		bgt $t0, $v0, end_loop
		li $t1, 0  # index of res array
		mul_loop:
			beq $t1, $s0, end_mul_loop
			