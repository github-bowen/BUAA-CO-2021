branch:
	ori $t1 $0 0x1234
	ori $t2 $0 0x5678
	ori $s0 $0 0x300c
	bgezal $t1 branch #0x0000_300c
	addi $s1 $s1 1
	bltzal $t1 branch
	addi $s1 $s1 1
	bc1f branch
	addi $s1 $s1 1
	clo $t1 $t2
	addi $s1 $s1 1
	clz $t1 $t2
	addi $s1 $s1 1
	madd $t1 $t2
	addi $s1 $s1 1
	maddu $t1 $t2
	addi $s1 $s1 1
	msub $t1 $t2 
	addi $s1 $s1 1
	msubu $t1 $t2
	addi $s1 $s1 1
	
end:
	beq $0 $0 end
	nop
	

	
