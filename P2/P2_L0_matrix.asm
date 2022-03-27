.macro get_array_addr(%dst, %row, %col)
	# 0 < row <= 7, 0 < col <= 7
	sll %dst, %row, 3  # dst = row * 8
	add %dst, %dst, %col
	sll %dst, %dst, 2  # 1 word = 4 bytes
.end_macro

.macro get_int_from_stdin(%dst)
	li $v0, 5
	syscall
	move %dst, $v0
.end_macro

.macro output_int_to_stdout(%int)
	move $a0, %int
	li $v0, 1
	syscall
.end_macro

.macro output_ch_to_stdout(%label)
	la $a0, %label
	li $v0, 4
	syscall
.end_macro

.macro read_an_array(%addr)  # %addr = the first address of the array
	li $t0, 0  # row counter
	li $t1, 0  # column counter
		row_loop:
			li $t1, 0  # reset col counter
			bge $t0, $s0, end_row_loop  # if $t0 >= $s0, break
			column_loop:
				bge $t1, $s0, end_column_loop
				get_int_from_stdin($t3)  # $t3 = input_int
				get_array_addr($t4, $t0, $t1)
				add $t4, $t4, %addr
				sw $t3, 0($t4)
				addi $t1, $t1, 1
				j column_loop	
			end_column_loop:
			addi $t0, $t0, 1
			j row_loop
		end_row_loop:
.end_macro

.data
	array1: .space 256  # 8 * 8 * 4
	array2: .space 256
	array3: .space 256  # store the result
	space: .asciiz " "
	change_line: .asciiz "\n"
.text
	get_int_from_stdin($s0)  # $s0 = n
	la $s1, array1
	la $s2, array2
	la $s3, array3
	
	read_an_array($s1)  # read array1 from stdin
	read_an_array($s2)  # read array2 from stdin
	
	# c code:		
	# for(i = 0; i < n i++)
	#			for(j = 0; j < n; j++)
	#					res = 0
	#					for(k = 0; k < n; k++)
	#							res += array1[i][k] * array2[k][j];
	#					array3[i][j] = res;
				
	matrix_multiple:
		li $t0, 0  # i = 0
		li $t1, 0  # j = 0
		li $t2, 0  # k = 0
		i_loop:
			li $t1, 0  # reset j = 0
			bge $t0, $s0, end_i_loop
			
			j_loop:
				bge $t1, $s0, end_j_loop
				li $s4, 0  # $s4 = res = 0
				li $t2, 0  # reset k = 0
				
				k_loop:  #$t3 = array1[i][k],  $t4 = array2[k][j]
					bge $t2, $s0, end_k_loop
					get_array_addr($t3, $t0, $t2)
					add $t3, $t3, $s1
					lw $t3, 0($t3)
					get_array_addr($t4, $t2, $t1)
					add $t4, $t4, $s2
					lw $t4, 0($t4)
					mul $t5, $t3, $t4  # $t5(temp) = $t3 * $t4
					add $s4, $s4, $t5  # $s4(res) += $t5
					addi $t2, $t2, 1  # k++
					j k_loop
					
				end_k_loop:
				
				get_array_addr($t5, $t0, $t1)
				add $t5, $s3, $t5
				sw $s4, 0($t5)  # array3[i]]j] = res
				
				addi $t1, $t1, 1  # j++
				
				j j_loop
				
			end_j_loop:
			addi $t0, $t0, 1  # i++
			j i_loop
			
		end_i_loop:  # calculate completely
	
	matrix_output:
		li $t0, 0  # i = 0
		li $t1, 0	 # j = 0
		i_loop2:
			li $t1, 0  # reset j = 0
			bge $t0, $s0, end_i_loop2
			j_loop2:
				bge $t1, $s0, end_j_loop2
				get_array_addr($t2, $t0, $t1)
				add $t2, $t2, $s3
				lw $t2, 0($t2)
				output_int_to_stdout($t2)
				output_ch_to_stdout(space)
				addi $t1, $t1, 1
				j j_loop2
			end_j_loop2:
			output_ch_to_stdout(change_line)
			addi $t0, $t0, 1
			j i_loop2
		end_i_loop2:
	
	li $v0, 10
	syscall