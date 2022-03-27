## 测试interrupt interrupt和延迟槽、暂停等机制的组合 interrupt和异常的组合 ##

## 测试正常指令interrupt##
ori $2,$0,64513 ## CP0-SR IE:1 IM:111111
mtc0 $2,$12
ori $2,$0,132445 ############################################# interrupt
ori $3,$0,2491
addu $2,$3,$2
subu $2,$2,$3  ############################################# interrupt
xori $4,$2,58247
nor $2,$3,$4
andi $5,$2,3122  
slt $6,$5,$2
sltiu $6,$5,23144  ############################################# interrupt
srav $3,$2,$3  ############################################# interrupt
sll $5,$4,4   ############################################# interrupt 连续中断
sb $3,7($0)
sw $2,0($0)  
nop
sw $4,4($0) ############################################# interrupt
lb $2,1($0)
lw $4,8($0)
lhu $3,6($0)
beq $0,$0,test1  ############################################# interrupt
addiu $3,$4,1324
test1:
mfc0 $6,$13
bgez $0,test2  ############################################# interrupt
subiu $2,$5,13298
test2:
mfhi $4  ############################################# interrupt
jal test3  ############################################# interrupt
lw $4,0($0)
test3:
ori $2,$0,31745 ## SR IM:011111 IE:1
mtc0 $2,$12 ## 测试mtc0被中断 ############################################# interrupt
ori $2,$0,64513 ## SR IE:1 IM:111111
mtc0 $2,$12 ## 测试mtc0被中断 ############################################# interrupt
ori $2,$0,31745 ## SR IM:011111 IE:1
mtc0 $2,$12 
ori $2,$0,64513 ## SR IE:1 IM:111111
mtc0 $2,$12 ## 测试mtc0被中断 ############################################# interrupt
mfc0 $2,$12
mfc0 $2,$13  ############################################# interrupt
mfc0 $2,$14
mfc0 $2,$12  
addi $3,$3,1
addu $2,$3,$4  ############################################# interrupt
ori $2,$2,13842
beq $0,$0,test4 ## M级interrupt 与 D级跳转 PC测试
nop
lw $2,0($0)
test4:
xori $2,$1,40234
subu $2,$4,$1
ori $2,$0,4244 ############################################# interrupt
sw $3,8($0)
j test5 ## M级interrupt 与 D及跳转 PC测试
nop
addi $2,$4,1324
test5:
ori $5,$0,5
addu $5,$5,$5
ori $5,$2,13918
nop


## interrupt与延迟槽 ##
beq $0,$0,test6
nop  ############################################# interrupt & db
test6:
ori $2,$0,0x3108 ## test7
jalr $3,$2
addu $3,$3,$3  ############################################# interrupt & db
test7:
bne $0,$0,test8 ## 不跳转的延迟槽
addu $2,$2,$2  ############################################# interrupt & db
test8:
jal test9
subu $3,$0,$31  ############################################# interrupt & db
test9:
beq $0,$0,test10 ## 跳转到延迟槽
test10:
addu $3,$3,$3 ############################################# interrupt & db
addu $4,$0,$2
nop


## interrupt与暂停 ##
ori $2,$0,0x3144 ## test11
sw $2,0($0)
lw $3,0($0)
addu $3,$3,$3 ############################################# interrupt & stall
lw $4,0($0)
jalr $5,$4 ############################################# interrupt & stall
addu $5,$5,$5
test11:
mfc0 $2,$12
xor $3,$0,$2 
mfc0 $3,$0
beq $3,$0,test12 ############################################# interrupt & stall
addu $3,$4,$3
test12:
nop


## interrupt 与异常 ##
li $2,0x316d ## test13的PC：0x316c
jr $2         ## PC字未对齐(非受害指令）
nop
ori $2,$0,20  
test13:
ori $2,$0,2 ## 取指异常（PC字未对齐）############################################# interrupt & exc
addi $3,$3,1
teq $3,$3 ## 未知指令异常  ############################################# interrupt & exc
addi $3,$3,1
li $2,0xfbc123d
sw $2,1($0) ## sw字未对齐 
addi $3,$3,1
sh $2,1($0) ## sh字未对齐 ############################################# interrupt & exc
addi $3,$3,1
sh $2,0x7f10($0) ## sh存Timer
addi $3,$3,1
sb $2,0x7f10($0) ## sb存Timer
addi $3,$3,1 ############################################# exc结束立刻interrupt
li $2,0x7fffffff
sw $2,1232($2) ## sw溢出
addi $3,$3,1
sh $2,1232($2) ## sh溢出 
addi $3,$3,1 ############################################# exc结束立刻interrupt
sb $2,1232($2) ## sb溢出
addi $3,$3,1
sw $2,0x7f08 ## sw COunt
addi $3,$3,1
ori $2,$0,0x7f20
sw $2,0($2) ## sw超出范围
addi $3,$3,1 ############################################# exc结束立刻interrupt
ori $2,$0,0x4120
sh $2,0($2) ## sh超出范围
addi $3,$3,1
ori $2,$0,0x7f1c
sb $2,0($2) ## sb超出范围
addi $3,$3,1
lw $2,1($0) ## lw 字未对齐
addi $3,$3,1
lh $2,1($0) ## lh半字未对齐 ############################################# interrupt & exc
addi $3,$3,1
lhu $2,1($0) ## lhu半字未对齐
addi $3,$3,1
lh $2,0x7f00($0) ## lh取Timer
addi $3,$3,1
lhu $2,0x7f00($0) ## lhu取TImer
addi $3,$3,1 ############################################# exc结束立刻interrupt
lb $2,0x7f10($0) ## lb取Timer
addi $3,$3,1
lbu $2,0x7f10($0) ## lbu取Timer
addi $3,$3,1
li $2,0x7fffffff
lw $2,1232($2) ## lw溢出
addi $3,$3,1
lh $2,1232($2) ## lh溢出
addi $3,$3,1
lhu $2,1232($2) ## lw溢出
addi $3,$3,1
lb $2,1232($2) ## lb溢出
addi $3,$3,1
lbu $2,1232($2) ## lbu溢出
addi $3,$3,1
ori $2,$0,0x7f20
lw $2,0($2) ## lw 超出范围
addi $3,$3,1
ori $2,$0,0x3000
lh $2,0($2) ## lh 超出范围
addi $3,$3,1
ori $2,$0,0x5000
lhu $2,0($2) ## lhu 超出范围
addi $3,$3,1
ori $2,$0,0x7a00
lb $2,0($2) ## lb 超出范围
addi $3,$3,1
ori $2,$0,0x8000
lbu $2,0($2) ## lbu 超出范围
addi $3,$3,1
li $2,0x7fffffff
add $2,$2,$2 ## 加法溢出
addi $3,$3,1
addi $2,$2,1232 ## addi溢出
addi $3,$3,1
li $4,-0x24201322
sub $2,$4,$2 ## sub溢出
addi $3,$3,1
db:
li $10,0x7fffffff
beq $0,$0,test14
add $10,$10,$10 ## db 异常 ############################################# interrupt db exc
ori $4,$0,4 ## 跳过不执行(是否返回beq测试）
test14:
addi $3,$3,1 ############################################# nterrupt
li $10,0x7fffffff
ori $5,$0,0x32e8 ## test15
jalr $6,$5
add $10,$10,$10 ## db 异常 ############################################# interrupt db exc
test15:
addi $3,$3,1
mult $5,$10
beq $0,$0,test16
mflo $13 ############################################# interrupt db stall
test16:
div $5,$2
j test17
mfhi $13 ############################################# interrupt db stall
test17:
addu $13,$13,$13
test_end:
beq $0,$0,test_end
nop




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
