.text
ori  $t1, $zero, 0x1234
sw   $t1, 8($zero)
lw   $t1, 8($zero)
mtc0 $t1, $t4
mfc0 $t2, $t4
mtc0 $t2, $t5

.ktext 0x4180
mfc0 $k0, $t6
mfc0 $k1, $t5
addi $k0, $k0, 4
mtc0 $k0, $t6
eret 