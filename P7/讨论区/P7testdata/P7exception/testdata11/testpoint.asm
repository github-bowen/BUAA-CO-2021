lui	$s0, 0x7fff
lui	$s1, 0x7fff
ori	$t0, 0x3015
jr	$t0
add	$s2, $s0, $0
lui	$t0, 0x1111
lui	$t0, 0xffff
end:
beq	$0, $0, end
nop

.ktext	0x4180
mfc0	$k1, $13
mfc0	$k0, $14
addi	$k0, $k0, 4
mtc0	$k0, $14
eret

