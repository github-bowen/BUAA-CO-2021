 ############ 测试非异常情况下的功能 ###########
 ori $1,24981
 ori $2,0x9123
 sw $1,0($0) ## DM 0
 sw $1,0x1564($0) ## DM middle
 sw $1,0x2ffc($0) ## DM end
 sw $2,0x7f00($0) ## Timer0 CTRL
 sw $2,0x7f04($0) ## Timer0 PRESET
 sw $2,0x7f10($0)  ## Timer1 CTRL
 sw $2,0x7f14($0) ## Timer1 PRESET
 sh $1,0($0) ## DM 0
 sh $1,0x1462($0) ## DM middle
 sh $1,0x2ffe($0) ## DM end
 sb $2,0($0) ## DM 0
 sb $2,0x2331($0) ## DM middle
 sb $2,0x2fff($0) ## DM end
 nop
 lw $1,0($0) ## DM 0
 lw $1,0x1564($0) ## DM middle
 lw $1,0x2ffc($0) ## DM end
 lw $2,0x7f00($0) ## Timer0 CTRL
 lw $2,0x7f04($0) ## Timer0 PRESET
 lw $2,0x7f08($0) ## Timer0 COUNT
 lw $2,0x7f10($0)  ## Timer1 CTRL
 lw $2,0x7f14($0) ## Timer1 PRESET
 lw $2,0x7f18($0) ## Timer1 COUNT
 lh $1,0($0) ## DM 0
 lh $1,0x1462($0) ## DM middle
 lh $1,0x2ffe($0) ## DM end
 lhu $1,0($0) ## DM 0
 lhu $1,0x1462($0) ## DM middle
 lhu $1,0x2ffe($0) ## DM end
 lb $2,0($0) ## DM 0
 lb $2,0x2331($0) ## DM middle
 lb $2,0x2fff($0) ## DM end
 lbu $2,0($0) ## DM 0
 lbu $2,0x2331($0) ## DM middle
 lbu $2,0x2fff($0) ## DM end
 or $1,$0,$0
 li $2,698742315
 li $3,1448741332
 add $4,$2,$3 ## 结果为最大正数
 li $2,2147483647
 li $3,-2147483647
 add $5,$3,$2 ## 最大正数+对应负数 结果为0
 li $2,1284291024
 li $3,-1284291024
 add $6,$3,$2 ## 任意正数+对应负数 结果为0
 li $2,-2147483648
 add $7,$2,$0 ## 结果为最小负数
 li $2,2147450880
 li $3,32767
 addi $8,$2,32767 ## 16位最大正数 结果为32位最大正数
 addi $9,$0,-32768 ## 16位最小负数
 li $2,2147483647
 li $3,2147483647
 sub $10,$2,$3 ## 最大正数-最大正数
 sub $11,$2,$0 ## 最大正数-0 结果为最大正数
 sub $12,$0,$2 ## 0-最大正数
 li $2,-2147483648
 li $3,-2147483648
 sub $13,$2,$3 ## 最小负数-最小负数
 sub $14,$3,$0 ## 最小负数-0 结果为最小负数
 ################# 测试是否将已知指令误判为RI ##########
ori $1,0x2411
ori $2,0x948f
sw $1,0($0)
sw $2,0($0)
lb $3,3($0)
lbu $4,3($0)
lh $5,2($0)
lhu $6, 6($0)
lw $7,4($0)
sb $5,7($0)
sh $2,10($0)
sw $3,12($0)
add $8,$1,$0
addu $9,$8,$8
sub $2,$0,$1
subu $7,$6,$5
mult $2,$3
multu $7,$4
div $2,$3
divu $2,$5
sll $10,$4,13
srl $11,$3,2
sra $12,$6,8
sllv $13,$8,$2
srlv $14,$10,$7
srav $15,$2,$3
and $16,$2,$7
or $17,$16,$9
xor $18,$13,$3
nor $19,$18,$7
addi $20,$0,2348
addiu $21,$20,772
andi $22,$21,2424
ori $23,$18,1324
xori $24,$21,3019
lui $25,10379
slt $22,$21,$23
slti $23,$23,2345
sltiu $24,$1,2487
sltu $21,$3,$2
beq $0,$0,all_test1
nop
all_test1:
bne $0,$1,all_test2
nop
all_test2:
blez $0,all_test3
nop
all_test3:
bgtz $1,all_test4
nop
all_test4:
bltz $6,all_test5
nop
all_test5:
bgez $0,all_test6
nop
all_test6:
j all_test7
nop
all_test7:
jal all_test8
nop
all_test8:
ori $10,$0,0x3214 ## all_test9
jalr $10
nop
all_test9:
ori $10,$0,0x3220 ## all_test10
jr $10
nop
all_test10:
mfhi $12
mflo $13
mthi $15
mtlo $19
mfc0 $17,$15
mtc0 $0,$12
test_end:
beq $0,$0,test_end
nop
############ 



.ktext 0x4180
## $30 记录异常次数
## $29 记录中断次数
## $28 调整EPC
## $27 取Cause的BD判断
## $26 取Cause的ExcCode
## $25 取SR
## 规定延迟槽异常为$10导致的异常（如add $10,$10,$10 溢出），db_hanlder将$10清0后返回，$30加1
## 规定非延迟槽指令异常，则exc_handler将EPC对齐后EPC+4跳过该指令，$30加1
## 规定中断处理 EPC不改变 返回原指令，$29加1
mfc0 $28,$14
mfc0 $27,$13
mfc0 $26,$13
mfc0 $25,$12
sll $26,$26,25
srl $26,$26,27 ## ExcCode（通过移位消除IP和BD的影响）
srl $27,$27,31 ## BD
beq $26,$0,interrupt_handler ## ExcCode=0 中断处理
nop
bgtz $27,db_handler ## BD=1
nop
## 延迟槽指令异常同时被外部中断，优先处理外部中断
exc_handler:
andi $28,$28,0xfffffffc ## 字对齐
addi $28,$28,4 ## EPC+4
mtc0 $28,$14
addi $30,$30,1 ## 记录异常次数
eret



db_handler:
or $10,$0,$0 ## $10清零 确保下次延迟槽不会异常
addi $30,$30,1 ## 记录异常次数
eret


interrupt_handler:
addi $29,$29,1
eret ##记录中断次数
