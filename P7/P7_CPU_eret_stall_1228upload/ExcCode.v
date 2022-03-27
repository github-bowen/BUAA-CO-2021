//-----------------------AdEL------------------------

//AdEL_pc_F: set in DATAPATH(F)
//AdEL_pc_F = ((|pc_F[1:0]) || (pc_F < `PC_ADDR_START) || (pc_F > `PC_ADDR_END)) && !eret_D;

//AdEL_load_addr_align: set in DM_EXT(M)

//AdEL_Timer: set in DM_EXT(M)

//AdEL_addr_outrange: set in DM_EXT(M)

//AdEL_addr_overflow_E: set in ALU


//-----------------------AdES-------------------------

//AdES_store_addr_align: set in BE(M)

//AdES_Timer: set in BE(M)

//AdES_Timer_Count: set in BE(M)

//AdES_addr_outrange: set in BE(M)

//AdES_addr_overflow_E: set in ALU


//---------------------OV------------------------------
//Ov_E: set in ALU

//-------------------------RI---------------------------


//异常与中断码	   助记符与名称	      指令与指令类型	       描述

// 0	         Int(外部中断)	       所有指令	          中断请求，来源于计时器与外部中断
// 4	         AdEL(取指异常)	       所有指令	          PC地址未字对齐
//                                                      PC地址超过 0x3000 ~ 0x6ffc
//               AdEL(取数异常)	          lw	         取数地址未与 4 字节对齐
//                                    lh, lhu	        取数地址未与 2 字节对齐
//                                lh, lhu, lb, lbu	    取 Timer 寄存器的值
//                                  load 型指令	         计算地址时加法溢出
//                                  load 型指令	         取数地址超出 DM、Timer0、Timer1 的范围
// 5	         AdES(存数异常)	         sw	             存数地址未 4 字节对齐
//                                      sh	            存数地址未 2 字节对齐
//                                    sh, sb	        存 Timer 寄存器的值
//                                  store 型指令	     计算地址加法溢出
//                                  store 型指令	     向计时器的 Count 寄存器存值
//                                  store 型指令	     存数地址超出 DM、Timer0、Timer1 的范围
// 10	          RI(未知指令)	          -	              未知的指令码
// 12	          Ov(溢出异常)	    add, addi, sub	      算术溢出

//补充说明：
// 分支跳转指令无论跳转与否，延迟槽指令为受害指令时 BD 均需要置位。
// 发生取指异常后视为 nop 直至提交到 CP0。
// 发生 RI 异常后视为 nop 直至提交到 CP0。
// load 与 store 类算址溢出按照 AdEL 与 AdES 处理。
// 测试时不会出现跳转到未加载指令的位置。
// 在 P7 的测试中，对于未知指令的判断仅需考虑 Opcode(和 R 型指令的 funct)，
// 未知指令的测试点中，非法指令的 Opcode 和 Func 码组合一定没有在正确指令集中出现。