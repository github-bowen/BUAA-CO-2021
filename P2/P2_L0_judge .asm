.eqv True 1
.eqv False 0

.macro read_int(%dst)
	li $v0, 5
	syscall
	move %dst, $v0
.end_macro

.macro getchar(%dst)
	li $v0, 12
	syscall
	move %dst, $v0
.end_macro

.macro output_and_end(%res)
	li $a0, %res
	li $v0, 1
	syscall
	li $v0, 10
	syscall
.end_macro

.data
	str1: .space 24
	str2: .space 24  # str2 = reversed(str1)
.text
	la $s1, str1
	la $s2, str2

	read_int($s0)  # $s0 = n (the lenght of string)
	
	li $t0, 0  #counter
	
	move $t1, $s1  # $t1 = fisrt address of str1
	move $t2, $s2  # $t2 = first address of str2
	add $t2, $t2, $s0  # $t2 = final address of str2
	addi $t2, $t2, -1
	loop_getchar:
		beq $t0, $s0, end_loop_getchar
		getchar($t3)
		sb $t3, 0($t1)
		sb $t3, 0($t2)
		addi $t1, $t1, 1
		addi $t2, $t2, -1
		addi $t0, $t0, 1
		j loop_getchar
		
	end_loop_getchar:
	
	li $t0, 0  # new counter
	loop_compare:
		beq $t0, $s0, yes
		
		lb $t1, 0($s1)
		lb $t2, 0($s2)
		bne $t1, $t2, no
		
		addi $s1, $s1, 1
		addi $s2, $s2, 1
		addi $t0, $t0, 1
		j loop_compare
	
	yes:
		output_and_end(True)
	no:
		output_and_end(False)
	