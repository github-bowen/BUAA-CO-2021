	ori $t0 $0 0x1234
	addi $a0 $0 1
	sw $t0 0($a0)
	addi $a0 $0 7
	sw $t0 0($a0)
	addi $a0 $0 13
	sh $t0 0($a0)
	addi $a0 $0 0x7f00
	sh $t0 0($a0)
	addi $a0 $0 0x7f06
	sh $t0 0($a0)
	addi $a0 $0 0x7f10
	sh $t0 0($a0)
	addi $a0 $0 0x7f18
	sh $t0 0($a0)
	addi $a0 $0 0x7f00
	sb $t0 0($a0)
	addi $a0 $0 0x7f06
	sb $t0 0($a0)
	addi $a0 $0 0x7f10
	sb $t0 0($a0)
	addi $a0 $0 0x7f18
	sb $t0 0($a0)
	lui $a0 0x7fff
	ori $a0 $a0 0xffff
	sw $t0 4($a0)
	addi $a0 $0 0x7f08
	sw $t0 0($a0)
	addi $a0 $0 0x7f18
	sw $t0 0($a0)
	lui $a0 0xffff
	ori $a0 $a0 0xfffc
	sw $t0 0($a0)
	addi $a0 $0 0x3000
	sw $t0 0($a0)
	addi $a0 $0 0x7efc
	sw $t0 0($a0)
	addi $a0 $0 0x7f0c
	sw $t0 0($a0)
	addi $a0 $0 0x7f1c
	sw $t0 0($a0)

end:
	beq $0 $0 end
	nop
	

	
	
	
	
	
	
	
