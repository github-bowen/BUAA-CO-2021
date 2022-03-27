.text
## Ov add and AdELPC
ori $k1 $0 0x1001
mtc0 $k1 $12
ori $s0 $0 0x8000
li $t0 0x7fffffff
jr $s0
addi $t1 $t0 1239
label1:
addi $t1 $t0 1239
addi $t1 $t1 2222
nop
## Ov sub
li $t0 0x80000007
sub $t0 $t0 $s0
lui $a0 1234
lui $a0 5678
## RI 
addiu $0 $t0 1234
lui $a0 1234
lui $a0 5678
nop
## AdEL load
lw $t0 3($0) ##没有对齐
nop
lh $t0 3($0) ##没有对齐
nop
lhu $t0 3($0) ##没有对齐
nop
lbu $t0 -1($0) ##地址溢出
nop
ori $t0 $0 0x7f04
lb $t0 2($t0) ##lb 访问Timer
nop
addi $t0 $0 0xef00
lw $t1 -28672($t0)	   #地址计算溢出
nop
sw $t1 -28672($t0)         #地址溢出
nop
sb $t0 3($0) ##没有对齐
nop
sh $t0 -1($0) ##地址溢出
nop
ori $t0 $0 0x7f04
sb $t0 0($t0) ##lb 访问Timer
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
.ktext 0x00004180
mfc0 $k1 $14 ##
ori $a1 0x3000
blt $k1 $a1 PC
ori $a2 0x6ffc
bgt $k1 $a2 PC
nop
addi $k1 $k1 8
j end
nop
PC:
ori $k1 0x3018
end:
mtc0 $k1 $14
eret
nop

