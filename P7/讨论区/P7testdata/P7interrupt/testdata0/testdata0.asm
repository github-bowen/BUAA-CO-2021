.text
ori $k0 $0 0xff01
mtc0 $k0 $12
## interrupt at lw
#section 1 forward
addi $t0 $0 0xef00
lw $t1 -28672($t0)	   #地址计算溢出
nop
addi $t0 $0 0xef00
lw $t1 -28672($t0)	       #地址计算溢出 但是给interrupt
sw $t0 4($0)
lw $t1 4($0)
sw $t1 ($0)                #W-> M forward interrupt 
#sectione 2 stall
lw $t2 4($0)               #interrupt lw jump stall
beq $t2 $t0 label1
nop          
lw $t2 4($0)
jr $t2                    #interrupt lw jump stall
nop
lw $t3 4($0)
beq $t1 $t2 label1        #interrupt lw branch stall
nop
lw $t3 4($0)             #interrupt lw branch stall
beq $t1 $t2 label1     
add $t1 $t2 $k0      
label1:
## delay lot interrupt
jal label1
add $s0 $ra $ra          #Interrupt
li $t0 0x80000007
jal label1
subi	$t0 $t0 0x7fff      #interrupt
lui $a0 1234
lui $a1 5678
## mult / div interrupt
multu $a0 $a1         # interrupt
mfhi $a0
mflo $a1
## calc jump/branch interrupt 
li $t0 0x80000000
subi $t0 $t0 1
beq $t0 $0 label2
subi $t0 $t0 1       #interrupt
beq $t0 $0 label2
li $t0 0x7fffffff
addiu $t0 $t0 5
li $t0 0x7fffffff
addi $t0 $t0 5 
addiu $t0 $t0 5      ##interrupt 
beq $t0 $0 label2
sra $t0 $t0 31           ##interrupt
beq $0 $0 label2
ori $s2 $0 0xff01
label2:
sub $s2 $s2 10
mtc0 $s2 $12
jal label2
add $ra $ra $ra    ##interrupt
jal label2
nop
.ktext 0x4180
mfc0 $k0 $13
mfc0 $k0 $14

_main_handler:
    add $k0 $k0 $0
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
