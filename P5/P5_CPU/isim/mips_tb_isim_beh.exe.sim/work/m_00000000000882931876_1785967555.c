/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P5/P5_CPU/EXT.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {4294967295U, 4294967295U};



static void Cont_7_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t49[8];
    char t50[8];
    char t53[8];
    char t80[8];
    char t81[8];
    char t91[8];
    char t95[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    char *t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t108 = (t0 + 2928);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memcpy(t112, t3, 8);
    xsi_driver_vfirst_trans(t108, 0, 31);
    t113 = (t0 + 2848);
    *((int *)t113) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 65535U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 65535U);
    t44 = ((char*)((ng2)));
    xsi_vlogtype_concat(t33, 32, 32, 2U, t44, 16, t34, 16);
    goto LAB13;

LAB14:    t51 = (t0 + 1208U);
    t52 = *((char **)t51);
    t51 = ((char*)((ng2)));
    memset(t53, 0, 8);
    t54 = (t52 + 4);
    t55 = (t51 + 4);
    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB24;

LAB21:    if (t65 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t53) = 1;

LAB24:    memset(t50, 0, 8);
    t69 = (t53 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t69) != 0)
        goto LAB27;

LAB28:    t76 = (t50 + 4);
    t77 = *((unsigned int *)t50);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB29;

LAB30:    t103 = *((unsigned int *)t50);
    t104 = (~(t103));
    t105 = *((unsigned int *)t76);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t76) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t50) > 0)
        goto LAB35;

LAB36:    memcpy(t49, t107, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t49, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB27:    t75 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t82 = (t0 + 1048U);
    t83 = *((char **)t82);
    memset(t81, 0, 8);
    t82 = (t81 + 4);
    t84 = (t83 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (t85 >> 0);
    *((unsigned int *)t81) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 0);
    *((unsigned int *)t82) = t88;
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & 65535U);
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 65535U);
    t92 = ((char*)((ng3)));
    t93 = (t0 + 1048U);
    t94 = *((char **)t93);
    memset(t95, 0, 8);
    t93 = (t95 + 4);
    t96 = (t94 + 4);
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 15);
    t99 = (t98 & 1);
    *((unsigned int *)t95) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 15);
    t102 = (t101 & 1);
    *((unsigned int *)t93) = t102;
    xsi_vlog_mul_concat(t91, 16, 1, t92, 1U, t95, 1);
    xsi_vlogtype_concat(t80, 32, 32, 2U, t91, 16, t81, 16);
    goto LAB30;

LAB31:    t107 = ((char*)((ng4)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t49, 32, t80, 32, t107, 32);
    goto LAB37;

LAB35:    memcpy(t49, t80, 8);
    goto LAB37;

}


extern void work_m_00000000000882931876_1785967555_init()
{
	static char *pe[] = {(void *)Cont_7_0};
	xsi_register_didat("work_m_00000000000882931876_1785967555", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000882931876_1785967555.didat");
	xsi_register_executes(pe);
}
