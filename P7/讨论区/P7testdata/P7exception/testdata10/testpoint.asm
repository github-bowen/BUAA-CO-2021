ori	$t0, 0xb
ori	$s0, 0x7f00
sw	$s0, 0($s0)		#exception
lw	$s0, 0($s0)
sw	$s0, 4($s0)		# exception
lw	$s0, 4($s0)
add	$s0, $0, $0
ori	$s0, 0x7b10
sw	$s0, 0($s0)		# exception
lw	$s0, 0($s0)
sw	$s0, 4($s0)		# exception
lw	$s0, 4($s0)
End:
	beq	$0, $0, End
	nop
nop
nop
nop
test:
lui	$t0, 0x1111

		
.ktext	0x4180
mfc0	$k0, $14
addi	$k0, $k0, 4
mtc0	$k0, $14
eret
beq	$0, $0, test

