.text
ori $t0 $0 0x1001
mtc0 $t0 $12
ori $t0 $0 3
ori $a0 $0 0x7f00
sw $t0 4($a0)
ori $t0 $0 1
sw $t0 0($a0)
lui $t1 1234             #load 3
lui $t2 1234             # 2
lui $t3 1234             #1
lw $t1 1($t0)             #0 req
nop             #int ->0
ori $t0 $0 0x0801
mtc0 $t0 $12
ori $t0 $0 1
sw $t0 0($a0)             #idle 
lui $t1 1234             #load 3
lui $t2 1234             # 2
lui $t3 1234             #1
lw $t1 2($t0)             #0 req -> interrupt
addi $t1 $t1 233             #int ->0 interrupt

sw $t0 0($a0)             #idle 


.ktext 0x4180
mfc0 $k0 $13
mfc0 $k0 $14

_main_handler:
    add $k0 $k0 $0
	andi    $k1 $k0 3
	bnez    $k1 Publish
	nop
	ori $s0 0x3000
	blt $k0 $s0 PC
	ori $s1 0x6ffc
	bgt $k0 $s1 PC
	nop
	j out
	addi	$k0, $k0, 4
Publish:
	srl $k0 $k0 2
	sll $k0 $k0 2
	j out
	addi $k0 $k0 0x20
PC:
	j out
	ori $k0 $0 0x307c
out:
	mtc0	$k0, $14
	eret
	addi $k1 $k1 23203
