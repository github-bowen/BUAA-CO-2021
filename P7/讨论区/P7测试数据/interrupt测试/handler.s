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
