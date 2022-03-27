### only use Timer0 to produce the Interrupt signal
### Set the mode 1
### Set the Cycle to 5
.macro	prepare()
	addi	$t0, $0, 7
	addi	$s0, $0, 0x7f00
	sw	$t0, 4($s0)
	addi	$t0, $0, 0xb	
	sw	$t0, 0($s0)
.end_macro
####
	prepare()
#### cal_r 
	ori	$a0, 0xc00
	mtc0	$a0, $12
	lui	$t0, 0x7fff
	ori	$t0, 0xffff
	lui	$t1, 0x7fff
	ori	$t1, 0xffff
	nop
	nop
	nop
	add	$t2, $t0, $t1   ## exception
	nop
#### cal_i
	# 7
	nop
	lui	$s0, 0x7fff
	ori	$s0, 0xffff
	srav	$s1, $s0, $s0
	sllv	$s2, $s1, $s0
	nop
	nop
	addi	$s0, $s0, 1	## exception
	nop
#### RI
	## 7
	add	$t0, $0, $0
	ori	$t0, 0xabcd
	sub	$t0, $t0, $t1
	srav	$s0, $t0, $t1
	sllv	$t1, $t1, $t0
	#### RI
	nop
	nop
	movz	$t0, $t2, $t3	## exception
	nop
#### Lw
	# 7
	add	$t0, $0, $0
	ori	$t0, 0x5678
	ori	$s2, 0x4444
	sw	$t0, 0($0)
	sh	$t0, 2($0)
	sb	$t0, 1($0)
	nop
	lw	$t8, 0($0)	## exception
	nop
#### Sw
	# 7
	add	$t0, $t0, $0
	ori	$t0, 0x1234
	ori	$t0, 0x5641
	add	$t2, $t0, $t0
	nop
	nop
	nop
	sw	$t2, 4($0)	## exception
	nop
#### j 	+ bd
	nop
	lui	$t0, 0x8000
	ori	$t1, 10
	nop
	nop
	nop
	j	test1
	sub	$s0, $t0, $t1	## exception Ov 
test1:
	beq	$0, $0, test1

.ktext	0x4180
	mfc0	$k1, $13
	mfc0	$k0, $14
	addi	$k0, $k0, 4
	mtc0	$k0, $14
	nop
	nop
	eret
	

	
	
	
	
	
		

