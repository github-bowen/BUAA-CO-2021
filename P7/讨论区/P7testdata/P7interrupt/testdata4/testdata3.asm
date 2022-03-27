# Interrupt on 0x3010
.text
ori $7,$0,0xfc01
mtc0 $7,$12
li $5,0x5432
li $6,0xba98
nop
mflo	$6
label:
beq $0,$0,label
nop

.ktext	0x4180
mult	$5, $6
mfc0	$k0, $14
addi	$k0, $k0, 4
mtc0	$k0, $14
eret
