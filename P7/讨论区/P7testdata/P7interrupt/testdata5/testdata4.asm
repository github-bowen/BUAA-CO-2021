.text
j start
nop
func: addiu $v0 $a0 10 # @3750
jr $ra
    nop
    start:
    li $a0 1926
li $a1 817
    div $a0 $a1      # @3770, DIV
    jal func         # @3774, BRANCH or JUMP
    mflo $a2         # @3778, Delay Slot (stalled), [Interrupt at here(PC: 00003024)]
add $a2 $a2 $v0  # @377c, Instruction after delay slot
    add $a2 $a2 $a2
end: beq $0 $0 end
nop

.ktext 0x4180
mfc0 $k0 $12
mfc0 $k0 $13
mfc0 $k0 $14
eret