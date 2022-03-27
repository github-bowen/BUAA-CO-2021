.text	
	lui $t0 0x1234
	ori $t0 $t0 0xabcd
	addi $a0 $0 4
	sw $t0 0($a0)
	addi $a0 $0 5
	lw $t1 0($a0)
	addi $a0 $0 7
	lh $t2 0($a0)
	lhu $t3 0($a0)
	addi $a0 $0 0x7f00
	lh $t4 0($a0)
	lhu $t4 0($a0)
	lb $t4 0($a0)
	lbu $t4 0($a0)
	addi $a0 $0 0x7f08
	lh $t4 0($a0)
	lhu $t4 0($a0)
	lb $t4 0($a0)
	lbu $t4 0($a0)
	addi $a0 $0 0x7f10
	lh $t4 0($a0)
	lhu $t4 0($a0)
	lb $t4 0($a0)
	lbu $t4 0($a0)
	addi $a0 $0 0x7f18
	lh $t4 0($a0)
	lhu $t4 0($a0)
	lb $t4 0($a0)
	lbu $t4 0($a0)
	lui $a0 0x7fff
	ori $a0 $a0 0xffff
	lw $t5 4($a0)
	addi $a0 $0 0x3000
	lw $t0 0($a0)
	addi $a0 $0 0x7000
	lw $t0 0($a0)
	addi $a0 $0 0x7efc
	lw $t0 0($a0)
	addi $a0 $0 0x7f0c
	lw $t0 0($a0)
	addi $a0 $0 0x7f1c
	lw $t0 0($a0)
	lui $a0 0x7fff
	ori $a0 0xffff
	lw $t0 0($a0)
	
end:
	beq $0 $0 end
	
	
	