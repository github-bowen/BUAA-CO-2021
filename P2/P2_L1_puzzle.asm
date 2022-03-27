.macro read_int(%res)
	li $v0, 5
	syscall
	move %res, $v0
.end_macro

.macro print_int(%res)
	move $a0, %res
	li $v0, 1
	syscall
.end_macro

.macro get_elem(%res, %addr, %row, %col)
	mul %res, %row, 9
	add %res, %res, %col
	sll %res, %res, 2
	add %res, %res, %addr
	lw %res, %res, 0(%res)
.end_macro

.macro get_addr(%res, %addr, %row, %col)
	mul %res, %row, 9
	add %res, %res, %col
	sll %res, %res, 2
	add %res, %res, %addr
.end_macro

.macro store_elem(%res, %addr, %row, %col)
	mul $t9, %row, 9
	add $t9, $t9, %col
	sll $t9, $t9, 2
	add $t9, $t9, %addr
	sw %res, 0($t9)
.end_macro

.macro logic_not(%num)
	beqz %num, set_1  # else set_0
	li %num, 0
	j end1
set_1:
	li %num, 1
end1:
.end_macro

.macro search(%addr, %i, %j)
	lw $t8, 0(%addr)
	beqz $t8, end2
		sw $0, 0(%addr)
		
		addi $sp, $sp, -24
		sw $t0, 0($sp)
		sw $t1, 4($sp)
		sw $a0, 8($sp)
		sw $a1, 12($sp)
		sw $ra, 16($sp)
		sw $t8, 20($sp)
		
		move $a0, %i  # dfs(%i, %j)
		move $a1, %j
		jal dfs
		
		lw $t0, 0($sp)
		lw $t1, 4($sp)
		lw $a0, 8($sp)
		lw $a1, 12($sp)
		lw $ra, 16($sp)
		lw $t8, 20($sp)
		addi $sp, $sp, 24
		
		sw $t8, 0(%addr)
	end2:
.end_macro

.data
	puzzle: .space 324  # 9 * 9 * 4
.text
	read_int($s0)  # s0 = n = row
	read_int($s1)  # s1 = m = column
	la $s2, puzzle
	
read_matrix:
	li $t0, 1  # count row
	li $t1, 1  # count column
	row_loop:
		bgt $t0, $s0, end_row_loop
		li $t1, 1
		column_loop:
			bgt $t1, $s1, end_column_loop
			read_int($t2)
			logic_not($t2)
			store_elem($t2, $s2, $t0, $t1)
			addi $t1, $t1, 1
			j column_loop
		end_column_loop:
		addi $t0, $t0, 1
		j row_loop
	end_row_loop:
end_read_matrix:

	addi $s0, $s0, 1  # n++
	addi $s1, $s1, 1  # m++
	read_int($s3)  # s3 = start_row
	read_int($s4)  # s4 = start_column
	read_int($s5)  # s5 = end_row
	read_int($s6)  # s6 = end_column
	
	move $a0, $s3
	move $a1, $s4
	jal dfs
	
	print_int($s7)  # s7 = count !!!
	li $v0, 10
	syscall
#-----------------------------------------------------
dfs:
	# a0 = i, a1 = j
	bne $a0, $s5, false
		bne $a1, $s6, false
			addi $s7, $s7, 1
			jr $ra
	false:
	get_addr($t0, $s2, $a0, $a1)  # t0 -> puzzle[i][j]
	
	sw $0, 0($t0)
	
	addi $t0, $t0, -36  # t0 -> puzzle[i - 1][j]
	addi $t1, $a0, -1  # t1 = a0 - 1 = i - 1
	search($t0, $t1, $a1)
	
	addi $t0, $t0, 72  # t0 -> puzzle[i + 1][j]
	addi $t1, $a0, 1  # t1 = t1 + 2 = a0 + 1 = i + 1
	search($t0, $t1, $a1)
	
	addi $t0, $t0, -40  # t0 -= (9 + 1) * 4, t0 -> puzzle[i][j - 1]
	addi $t1, $a1, -1  # t1 = a1 - 1 = j - 1
	search($t0, $a0, $t1)
	
	addi $t0, $t0, 8  # t0 -> puzzle[i][j + 1]
	addi $t1, $a1, 1  # t1 = a1 + 1 = j + 1
	search($t0, $a0, $t1)
	
	jr $ra