## 测试eret后的指令的执行情况 ##
ori $1,1
ori $2,2
ori $3,3
ori $4,4
ori $5,5
ori $6,6
ori $7,7
ori $8,8
ori $9,9
ori $10,10

lw $11,3($0)
addi $12,$12,1

lw $11,3($0)
addi $12,$12,1

lw $11,3($0)
addi $12,$12,1

lw $11,3($0)
addi $12,$12,1
mfc0 $13,$12

lw $11,3($0)
addi $12,$12,1
mfhi $14
mflo $15

lw $11,3($0)
addi $12,$12,1
mfhi $14
mflo $15

lw $11,3($0)
addi $12,$12,1

lw $11,3($0)

addi $13,$13,13
addi $13,$13,13
test_end:
beq $0,$0,test_end
nop

.ktext 0x4180
mfc0 $28,$14
addi $28,$28,4
mtc0 $28,$14
beq $12,$0,eret0
nop
beq $12,$1,eret1
nop
beq $12,$2,eret2
nop
beq $12,$3,eret3
nop
beq $12,$4,eret4
nop
beq $12,$5,eret5
nop
beq $12,$6,eret6
nop
eret

eret0:
eret
addu $2,$12,$3
sub $3,$2,$5
xori $3,$0,134

eret1:
eret
nop
beq $0,$0,test_end ## M级 eret与D级跳转 PC测试
j test_end

eret2:
eret
sw $2,0($0)
lw $4,0($0)

eret3:
eret
mtc0 $2,$12
mtc0 $3,$12
mtc0 $4,$12

eret4:
eret
mthi $3
mtlo $4

eret5:
eret
mult $4,$5
mult $4,$6

eret6:
eret
nop
j test_end ## M级eret 与 D级跳转 PC测试





