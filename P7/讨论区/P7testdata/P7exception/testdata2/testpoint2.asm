.macro clear
	ori $1 $0 0
	ori $2 $1 0
	subu $3 $1 $2
	xor $4 $1 $3
	addi $19 $19 1			# verify tool
.end_macro

.text
nop # not align 4 in IFU using jalr --- non auto
case1:clear 
li $1 0x00003001					# need to be fixed
jalr $4 $1
addi $4 $4 1
label1: addi $4 $4 2
addi $4 $4 4

nop # not align 4 in IFU using jr --- non auto
case2:clear 
li $1 0x0000302d				# need to be fixed
jalr $4 $1
nop
label2: addi $4 $4 2
addi $4 $4 4

nop # out of range in IFU using jalr --- non  auto
case3:clear 
li $1 0x00007000
jalr $4 $1
nop

nop # not align 4 in DM using lw 
case4:clear 
li $1 100
sw $1 96($0)
lw $3 -3($1)
lw $4 -4($1)

nop # not align 2 in DM using lh
case5:clear 
li $1 0x66668888
sw $1 200($0)
lh $3 201($0)
lh $4 202($0)

nop # not align 2 in DM using lhu
case6:clear 
li $1 0x66668888
sw $1 300($0)
lhu $3 301($0)
lhu $4 302($0)

nop # using lh reading timer --- non auto
case7:clear 
li $1 0x00007f1a
lh $3 0($1)
addi $4 $0 1

nop # using lhu reading timer --- non auto
case8:clear 
li $1 0x00007f00
lhu $3 0($1)
addi $4 $0 1

nop # using lb reading timer --- non auto
case9:clear 
li $1 0x00007f0b
lb $3 0($1)
addi $4 $0 1

nop # using lbu reading timer  --- non auto
case10:clear 
li $1 0x00007f1b
lbu $3 0($1)
addi $4 $0 1

nop # reading out of range using lw
case11:clear 
li $1 0x00003004
lw $3 0($1)

nop # reading out of range using lh
case12:clear 
li $1 0x00004000
lh $3 -100($1)

nop # reading out of range using lhu
case13:clear 
li $1 0x00005088
lhu $3 10($1)

nop # reading out of range using lb
case14:clear 
li $1 0x00007f00
lb $3 -1($1)

nop # reading out of range using lbu --- non auto
case15: clear 
li $1 0x00007f1b
lbu $3 1($1)

nop # address overflow using lw --- non auto/auto
case16: clear 
li $1 0x80000000
lw $3 -4($1)

nop  # address overflow using lh --- non auto/auto
case17: clear
li $1 0x7fffffff
lh $3 1($1)

nop # address overflow using lhu --- non auto/auto
case18: clear 
li $1 0x80000000
lhu $3 -2($1)

nop # address overflow using lw --- non auto/auto
case19:clear 
li $1 0x80000000
lb $3 -1($1)

nop  # address overflow using lw --- non auto/auto
case20: clear
li $1 0x7fffffff
lbu $3 1($1)

nop # not align 4 in DM using sw
case21: clear 
li $1 0x00002010
sw $1 2($1)

nop # not align 2 in DM using sh
case22:clear 
li $1 0x00000010
sh $1 -3($1)

nop # save timer using sh --- non auto
case23:clear 
li $1 0x00007f04
sh $0 0($1)
addi $1 $0 1

nop # save timer using sb --- non auto
case24:clear 
li $1 0x00007f15
sb $0 0($1)
addi $1 $0 1

nop # address overflow using sw --- non auto/auto
case25: clear 
li $1 0x80000000
sw $1 -6000($1)

nop # address overflow using sh --- non auto/auto
case26: clear 
li $1 0x7fffffff
sh $1 5999($1)

nop # address overflow using sb --- non auto/auto
case27: clear 
li $1 0x80000009
sb $1 -100($1)

nop # save reg count using sw --- non auto
case28: clear 
li $1 0x00007f08
sw $1 0($1)

nop # save reg count using sh --- non auto
case29: clear 
li $1 0x00007f1a
sh $1 0($1)

nop # save reg count using sb --- non auto
case30: clear 
li $1 0x00007f1b
sb $1 0($1)

nop # unknwon instructions --- non auto
case31: clear 
li $1 0x0000ffff
lwl $1 0($2)
addi $1 $0 1

nop # overflow using add
case32: clear 
li $1 0x80000000
add $2 $1 $1

nop  # overflow using add 2
case33: clear
li $1 0x7fffffff
add $2 $1 $1

nop  # overflow using addi
case34: clear
li $1 0x80000000
addi $2 $1 -1

nop  # overflow using addi 2
case35: clear
li $1 0x7fffffff
addi $2 $1 1

nop # overflow using sub
case36: clear 
li $1 0x80000000
li $2 5
sub $3 $1 $2

nop # overflow using sub 2
case37: clear 
li $1 0x7fffffff
li $2 -100
sub $3 $1 $2
.ktext 0x4180
_entry:
	mfc0	$k0, $14
	mfc0	$k1, $13
	ori	$k0, $0, 0x1000
	sw	$sp, -4($k0)	
	addiu	$k0, $k0, -256
	move	$sp, $k0
	nop
	
_main_handler:
	mfc0 	$k0, $13
	ori 	$k1, $0, 0x007c
	and	$k0, $k1, $k0
	nop
	mfc0	$k0, $14
	andi    $k1 $k0 3
	bnez    $k1 Publish
	nop
	ori $a1 0x3000
	blt $k0 $a1 PC
	ori $a2 0x6ffc
	bgt $k0 $a2 PC
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


