### branch Delay + Stall 
.text
ori	$t9, 0x1001
mtc0	$t9, $12
lui	$t0, 0xabcd
lui	$t1, 0x7fff
### add  +  beq
add	$t2, $0, $t1
# 0x3014
beq	$t1, $t2, test1
beq	$t1, $t2, test1
lui	$t0, 0x1111
test1:
lui	$t2, 0xafde
ori	$t2, 0x5413
srav	$t2, $t1, $t2
ori	$s0, 0x7f04
sw	$t2, 0($s0)
sh	$t2, 2($s0)
sb	$t2, 1($s0)
lw	$t3, 0($s0)		### lw + bne stall nop
## 0x3040
bne	$t2, $t3, test2
nop
lui	$t0, 0x1111
test2: 
add	$t0, $0, $0
ori	$t0, 0x8000
# 0x3054
jr	$t0
jr	$t0
nop
add	$t0, $0, $0
ori	$t0, 0x2000
# 0x3068
jalr	$t1, $t0
jalr	$t1, $t0
nop
###   Addr Unalignment
add	$t0, $0, $0
ori	$t0, 0x4001
lui	$t8, 0x7fff
ori	$t8, 0xffff
move	$t7, $t8
jr	$t0
add	$t6, $t7, $t8
jr	$t0    # Addr unalignment
nop
### stall
mult	$t0, $t1
bne	$t0, $t1, test3
# 0x30a0
mflo	$a0
mflo	$a0
nop
lui	$t0, 0x1111
test3:
nop
nop
nop
lui	$t0, 0xabcd
ori	$t0, 0x4321
lui	$t1, 0x0dea
ori	$t1, 0x4512
sw	$t1, 0($0)
sh	$t2, 2($0)
lh	$t3, 0($0)
#0x30d8
add	$t4, $t3, $t3
add	$t4, $t3, $t2
div	$t4, $t2
#0x30e4
mfhi	$t0
mfhi	$t0
lw	$t4, 0($0)
# 0x30f0
add	$t5, $t4, $t4
add	$t5, $t4, $t4
end:
	beq	$0, $0, end
	nop

.ktext	0x4180
	mfc0	$k0, $14
	mfc0	$k1, $13
	add	$s6, $0, $0
	add	$s5, $0, $0
	ori	$s6, 0x6fff
	ori	$s5, 0x3000
	bgt	$k0, $s6, reviseAddr
	blt	$k0, $s5, reviseAddr 
	### judge if unalign
	add	$s4, $0, $0
	lui	$s4, 0x8000
	and	$s5, $s4, $k1
	beq	$s4, $s5, BD
	andi	$s4, $k0, 1
	bne	$s4, $0, unalignment
	addi	$k0, $k0, 4
	mtc0	$k0, $14
	j	return
	nop
return:
	eret

BD: 
	addi	$k0, $k0, 8
	mtc0	$k0, $14
	j	return
	nop
ADDR:
	mfc0	$k0, $14
	addi	$k0, $k0, 4
	mtc0	$k0, $14
	j	return
	nop
	
reviseAddr:
	add	$s4, $0, $0
	ori	$s4, 0x8000
	beq	$k0, $s4, eight
	add	$s4, $0, $0
	ori	$s4, 0x2000
	beq	$s4, $k0, two
	nop
eight:
	li	$k0, 0x305c
	mtc0	$k0, $14
	j	return
	nop
two:
	li	$k0, 0x3070
	mtc0	$k0, $14
	j	return
	nop
unalignment:
	li	$k0, 0x3094
	mtc0	$k0, $14
	j	return
	nop




	
