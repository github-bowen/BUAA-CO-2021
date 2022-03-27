.ktext	0x4180
	mfc0	$k1, $13
	mfc0	$k0, $14
	addi	$k0, $k0, 4
	mtc0	$k0, $14
	nop
	nop
	eret