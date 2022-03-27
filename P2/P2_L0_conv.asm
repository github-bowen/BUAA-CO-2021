# matrix convolution
.macro read_int(%dst)
	li $v0, 5
	syscall
	move %dst, $v0
.end_macro

.macro output_int(%int)
	move $a0, %int
	li $v0, 1
	syscall
.end_macro

.macro output_label(%label)
	la $a0, %label
	li $v0, 4
	syscall
.end_macro
	
.macro get_array_addr(%res, %first_addr, %row, %col)  # get index_addr from array[10][10]
	mul %res, %row, 10
	add %res, %res, %col
	sll %res, %res, 2  # res = res * 4
	add %res, %res, %first_addr
.end_macro

.macro read_array_elems(%array, %row2, %col2)
	li $t0, 0  # count row
	li $t1, 0  # count col
	row_loop:
		li $t1, 0  #reset column to 0
		beq $t0, %row2, end_row_loop
		col_loop:
			beq $t1, %col2, end_col_loop
			get_array_addr($t2, %array,$t0, $t1)  # t2 = current address to store
			read_int($t3)  # t3 = input_int
			sw $t3, 0($t2)
			addi $t1, $t1, 1  # col++
			j col_loop
		end_col_loop:
		addi $t0, $t0, 1  # row++
		j row_loop
	end_row_loop:
.end_macro
	
.data
	arr1: .space 400  # 10 * 10 * 4
	arr2: .space 400  # 10 * 10 * 4, core matrix
	res: .space 400  # 10 * 10 * 4
	space: .asciiz " "
	changeline: .asciiz "\n"
.text
	read_int($s0)  # s0 = m1
	read_int($s1)  # s1 = n1
	read_int($s2)  # s2 = m2
	read_int($s3)  # s3 = n2
	
	la $s4, arr1
	la $s5, arr2
	
	read_array_elems($s4, $s0, $s1)  # read all elements of arr1 from stdin
	read_array_elems($s5, $s2, $s3)  # read all elements of arr2 from stdin
	
	# now do four loops: i, j, k, l
	# arr1[i][j]: the currents location of core_matrix[0][0]
	# k, l uesd as index of arr2
	# 0 <= i <= m1 - m2,   0 <= j <= n1 - n2
	# 0 <= k < m2,   0 <= l < n2
	sub $s6, $s0, $s2  # s6 = m1 - m2
	sub $s7, $s1, $s3  # s7 = n1 - n2
	la $t9, res  # $s registers are not enough, use $t9 as first address of res[10][10]
	
	li $t0, 0  # i = 0
	li $t1, 0  # j = 0
	li $t2, 0  # k = 0
	li $t3, 0  # l = 0
	loop_i:
		bgt $t0, $s6, end_loop_i
		li $t1, 0  # j = 0
		loop_j:
			bgt $t1, $s7, end_loop_j
			li $t2, 0  # k = 0
			loop_k:
				beq $t2, $s2, end_loop_k
				li $t3, 0  # l = 0
				loop_l:
					beq $t3, $s3, end_loop_l
					# get arr1[i + k][j + l]
					add $t4, $t0, $t2  # $t4 = i + k
					add $t5, $t1, $t3  # $t5 = j + l
					get_array_addr($t6, $s4, $t4, $t5)
					lw $t6, 0($t6)  # t6 = arr1[i + k][j + l]
					# get arr2[k][l]
					get_array_addr($t7, $s5, $t2, $t3)
					lw $t7, 0($t7)  # t7 = arr2[k][l]
					mul $t8, $t6, $t7  # t8 = arr1[i + k][j + l] * arr2[k][l]
					get_array_addr($t4, $t9, $t0, $t1)  #reuse $t4
					lw $t5, 0($t4)  # resue $t5
					add $t8, $t8, $t5  # t8 += former_res[i][j[
					sw $t8, 0($t4)  # res[i][j] += $t8
					addi $t3, $t3, 1
					j loop_l
				end_loop_l:
				addi $t2, $t2, 1
				j loop_k
			end_loop_k:
			addi $t1, $t1, 1
			j loop_j
		end_loop_j:
		add $t0, $t0, 1
		j loop_i
	end_loop_i:
	
	# now output result
	li $t0, 0  # i = 0
	li $t1, 0  # j = 0
	loop_i2:
		bgt $t0, $s6, end_loop_i2  # $s6 = m1 - m2
		li $t1, 0
		loop_j2:
			bgt $t1, $s7, end_loop_j2  # $s7 = n1 - n2
			get_array_addr($t2, $t9, $t0, $t1)
			lw $t2, 0($t2)
			output_int($t2)
			output_label(space)
			addi $t1, $t1, 1
			j loop_j2
		end_loop_j2:
		output_label(changeline)
		addi $t0, $t0, 1
		j loop_i2
	end_loop_i2:
	
	li $v0, 10
	syscall
