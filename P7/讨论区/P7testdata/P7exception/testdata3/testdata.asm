.text
ori	$t0, 0x7ef0
ori	$s0, 0x7f30
ori	$t1, 0x1adc
ori	$t2, 0xfec1
mfc0	$0, $12
# 0x7ef0 - 0x7f30
# $t0 is the base
loop:
	beq	$t0, $s0, exit
	sw	$t4, 0($t0)
	sh	$t1, 2($t0)
	sb	$t2, 3($t0)
	lbu	$a0, 3($t0)
	lhu	$a1, 2($t0)
	lw	$a2, 0($t0)
	addi	$t0, $t0, 4
	j	loop
	nop
exit:
	beq	$0, $0, exit
	nop


.ktext	0x4180
mfc0	$k0, $14
mfc0	$k1, $13
addi	$k0, $k0, 4
mtc0	$k0, $14
eret


