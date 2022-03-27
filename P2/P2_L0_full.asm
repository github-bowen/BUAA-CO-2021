# MIPS code translated by c code in website
.macro get_elem(%res, %array, %offset)
	# %array = first address of matrix
	sll %res, %offset, 2
	add %res, %res, %array
	lw %res, 0(%res)  # %res = array[offset]
.end_macro

.macro store_elem(%res, %array, %offset)
	# %array = first address of matrix
	sll $t9, %offset, 2
	add $t9, $t9, %array
	sw %res, 0($t9)  # array[offset] = %res
.end_macro

.macro print_string(%label)
	la $a0, %label
	li $v0, 4
	syscall
.end_macro

.macro print_int(%d)
	# $a0 will be used, but it doesn't influence the result
	move $a0, %d
	li $v0, 1
	syscall
.end_macro

.macro store_in_stack
	# store $s1(i) , $a0(index) , $t1(symbol[i]), $ra
	addi $sp, $sp, -16
	sw $s1, 0($sp)
	sw $a0, 4($sp)
	sw $t1, 8($sp)
	sw $ra, 12($sp)
.end_macro

.macro get_from_stack
	# get $s1(i) and $a0(index) , $t1(symbol[i]), $ra
	lw $s1, 0($sp)
	lw $a0, 4($sp)
	lw $t1, 8($sp)
	lw $ra, 12($sp)
	addi $sp, $sp, 16
.end_macro

.data 
	symbol: .space 80
	array: .space 80
	space: .asciiz " "
	change_line: .asciiz "\n"
.text
	li $v0, 5
	syscall
	move $s0, $v0  # s0 = n
	
	la $s2, symbol
	la $s3, array

	li $a0, 0
	jal FullArray
	
	li $v0, 10
	syscall
	
FullArray:  # recursion function part
	
	li $s1, 0  # int i = 0
	li $s4, 1  # s4 = 1 (constant)
	if1:
		blt $a0, $s0, exit_if1  # if index < n, exit if1
		loop1:
			beq $s1, $s0, end_loop1
			get_elem($t0, $s3, $s1)
			print_int($t0)
			print_string(space)
			addi $s1, $s1, 1
			j loop1
		end_loop1:
			print_string(change_line)
			jr $ra 
			
	exit_if1:
		loop2:
			beq $s1, $s0, end_loop2
			get_elem($t1, $s2, $s1)  # $t1 = symbol[i]
			if2:
				bnez $t1, end_if2
				add $t2, $s1, 1  # t2 = s1(i) + 1
				store_elem($t2, $s3, $a0)  # array[index] = i + 1
				store_elem($s4, $s2, $s1)  # symbol[i] = 1
				
				store_in_stack  # !!!
				addi $a0, $a0, 1
				jal FullArray
				get_from_stack  # !!!
				store_elem($0, $s2, $s1)  # symbol[i] = 0

			end_if2:
			addi $s1, $s1, 1
			j loop2
		end_loop2:
			jr $ra
				
	
