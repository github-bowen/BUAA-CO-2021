.ktext	0x4180
	mfc0	$k0, $14
	mfc0	$k1, $13
	mfc0	$k1, $12
	ori	$s6, 0x6fff
	ori	$s5, 0x3000
	bgt	$k0, $s6, reviseAddr
	blt	$k0, $s5, reviseAddr 
	andi	$k1, $k1, 0x7c
	bne	$k1, $0, ADDR 
return:
	eret
	
ADDR:
	mfc0	$k0, $14
	addi	$k0, $k0, 4
	mtc0	$k0, $14
	j	return
	
reviseAddr:
	add	$s4, $0, $0
	ori	$s4, 0x8000
	beq	$k0, $s4, eight
	add	$s4, $0, $0
	ori	$s4, 0x2000
	beq	$s4, $k0, two
	### judge if unalign
	andi	$s4, $k0, 1
	bne	$s4, $0, unalignment
eight:
	li	$k0, 0x3058
	mtc0	$k0, $14
	j	return
two:
	li	$k0, 0x3070
	mtc0	$k0, $14
	j	return
unalignment:
	li	$k0, 0x3090
	mtc0	$k0, $14
	j	return