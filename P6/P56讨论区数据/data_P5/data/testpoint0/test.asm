ori $t0, $0, 123
addu $a0, $t0, $0
lw $a0, -123($a0)

lui $t3, 123
lui $t3, 0
lw $t4, 0($t3)  #3014

ori $t0, $0, 0x3028
addu $a0, $t0, $0
jr $a0

ori $t0, $0, 0x3038  #pc = 0x0000_3024
sw $t0, 0($0)
lw $a0, 0($0)
jr $a0
nop

jal f
nop
j end
nop
f: jr $ra
nop
end:

jal tag
nop
tag: lw $t0, -0x3058($ra)

lw $s0, -0x3038($t0)
lw $s1, -0x3038($s0)
lw $s2, -0x3038($s1)
sw $t0, -0x3038($s2)
