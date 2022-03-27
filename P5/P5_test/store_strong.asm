ori $1, $0, 0x0020
lui $2, 0x3562
sw $2, 4($1)

ori $3, $1, 0x0028
lw $4, 4($1)
sw $4, 8($3)
sw $3, 12($3)
lw $3, 8($3)
ori $1, $1, 0x0030

jal here
sw $ra, 16($1)
here:
jal there
sw $ra, -400($ra)
there:
nop
