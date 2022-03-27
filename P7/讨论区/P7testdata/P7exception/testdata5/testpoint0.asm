## 此组针对存储时发生中断的情形
### 列举一下可存储的设备 DataMemory CP0 HI/LO(permitted) TC0 TC1
.text
	ori	$t0, 0x1001
	mtc0	$t0, $12
	lui	$t0, 0x1111
	ori	$t0, 0xfeda
	# 0x3010
	sh	$t0, 0($0)   		# interrupt
	lui	$t0, 0xfeda
	ori	$t0, 0x1342
	# 0x301c
	sb	$t0, 3($0)		# interrupt
	# 0x3020
	sw	$t0, 4($0)		# interrupt
	add	$t0, $0, $0
	ori	$t0, 0xee41
	# 0x302c
	mtc0	$t0, $14			# interrupt
	mthi	$t0
	mfhi	$t0
	andi	$t0, 1031
	add	$s0, $0, $0
	ori	$s0, 0x7f00
	# 0x3044
	sw	$t0, 4($s0)		# interrupt
	add	$s0, $0, $0
	ori	$s0, 0x7f10
	sw	$t0, 4($s0)
	sb	$t0, 0($s0)
	# 0x3058
	lhu	$t0, 0($s0)		# interrupt
	
.ktext	0x4180
	mfc0	$k0, $14
	mfc0	$k1, $13
	mfhi	$s1
	addi	$k0, $k0, 4
	mtc0	$k0, $14
	eret
	lui	$t0, 0x1111
	
