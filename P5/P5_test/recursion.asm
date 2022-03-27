# calculate 20 + 19 + 18 + ..... + 1
ori $s0, $0, 10  # $s0 = 20
addu $a0, $s0, $0
ori $sp, $0, 0x0080
jal func
ori $s1, $0, 0  # $s1 = 0

j end_all

func:
	beq $a0, $0, end
	nop

	addu $sp, $sp, -8
	sw $a0, 0($sp)
	sw $ra, 4($sp)
	
	addu $a0, $a0, -1
	jal func
	nop

	end:
		lw $a0, 0($sp)
		lw $t2, 4($sp)
		addu $sp, $sp, 8
		addu $v0, $a0, $v0
		jr $ra
		addu $ra, $t2, $0
end_all:
addu $v0, $v0, $0