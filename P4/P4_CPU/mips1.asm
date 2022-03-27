	addu $30, $30, $0
	beq $0, $30, start
	jr $28
start:
	lui $0, 0xffff
	ori $0, $0, 0xffff

	lui $1, 0xffff
	lui $2, 0xfff
	lui $3, 0xff
	ori $1, $1, 0xffff  # $1 = -1
	ori $2, $2, 0xfff
	ori $3, $3, 0xff
	ori $4, $0, 1
	ori $5, $0, 2
	ori $28, $0, 0x100

	nop  # see PC

	addu $6, $1, $4  # $6 = 0
	addu $7, $1, $5  # $7 = 1
	sll $7, $7, 6  
	srl $7, $7, 2
	sra $7, $7, 2  # $7 = 4
	
	subu $8, $4, $1  # $8 = 2
	subu $9, $5, $4  # $9 = 1

	beq $6, $7, start

loop:  # $6 = 0
	beq $6, $28, end_loop
	sw $1, 0($6)
	sw $2, 4($6)
	addu $6, $6, $7  # $6 += 4
	addu $1, $1, $6  # $1 += 4
	addu $2, $2, $6  # $2 += 4
	j loop
end_loop:
	jal load_words
	
	ori $30, $0, 0
test_jalr:
	ori $30, $0, 0x3004
	jalr $28, $30  # $28 = pc + 4; pc = $30
	
	beq $0, $0, final_test
	

load_words:
	lw $1, 0($0)
	lw $2, 4($0)
	lw $3, 8($0)
	lw $4, 12($0)
	lw $5, 16($0)
	lw $6, 20($0)
	lw $7, 24($0)
	lw $8, 28($0)
	jr $ra


final_test:
	lui $1, 0xffff
	ori $1, 0xf
	lui $2, 0xffff
	ori $2, $2, 213
	lui $3, 0x6
	ori $3, $3, 0xff32
	lui $28, 0x7
	
	sll $4, $1, 8
	srl $5, $4, 4
	sra $6, $4, 4
	slt $7, $1, $3
	slt $8, $3, $28
	lui $28, 0x5
	slt $7, $3, $28
	
