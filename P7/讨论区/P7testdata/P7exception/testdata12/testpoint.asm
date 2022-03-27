lui	$t0, 0x7fff
lui	$t1, 0x7fff
movz	$s0, $t0, $t1
end:
	beq	$0, $0, end
	nop
	
.ktext	0x4180
mfc0	$k0, $14
mfc0	$k1, $13
addi	$k0, $k0, 4
mtc0	$k0, $14
eret