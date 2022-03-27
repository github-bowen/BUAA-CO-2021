.text
	ori $s0 $0 0x3020
	lui $t0 0x7fff		
	ori $t0 $t0 0xffff
	ori $t1 $0 1
	lui $t2 0x8000
	ori $t2 $t2 0x0000
	lui $t3 0xffff
	ori $t3 $t3 0xffff
	add $t3 $t0 $t1
	add $t3 $t1 $t0
	add $t0 $t2 $t3
	add $t0 $t3 $t2
	addi $t3 $t0 1
	sub $t0 $t2 $t1
	sub $t0 $t0 $t3
	
end:
	beq $0 $0 end
	

	