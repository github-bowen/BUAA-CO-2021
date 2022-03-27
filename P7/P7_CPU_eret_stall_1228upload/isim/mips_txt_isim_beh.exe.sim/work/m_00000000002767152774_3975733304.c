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
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P7/P7_CPU_eret_stall_1228upload/CP0.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {13U, 0U};
static unsigned int ng6[] = {14U, 0U};
static unsigned int ng7[] = {15U, 0U};
static unsigned int ng8[] = {539169176U, 0U};
static int ng9[] = {1, 0};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t7[8];
    char t50[8];
    char t66[8];
    char t101[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;

LAB0:    t1 = (t0 + 6048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 4008);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t11 = (t4 + 4);
    t12 = (t6 + 4);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t39 = (t7 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t7);
    t43 = (t42 & t41);
    t44 = (t43 & 63U);
    if (t44 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t39) != 0)
        goto LAB9;

LAB10:    t46 = (t0 + 4168);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng1)));
    memset(t50, 0, 8);
    t51 = (t48 + 4);
    t52 = (t49 + 4);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t51);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t52);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB14;

LAB11:    if (t62 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t50) = 1;

LAB14:    t67 = *((unsigned int *)t3);
    t68 = *((unsigned int *)t50);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t70 = (t3 + 4);
    t71 = (t50 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB15;

LAB16:
LAB17:    t98 = (t0 + 4328);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t102 = *((unsigned int *)t66);
    t103 = *((unsigned int *)t100);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t105 = (t66 + 4);
    t106 = (t100 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB18;

LAB19:
LAB20:    t133 = (t0 + 8544);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    memset(t137, 0, 8);
    t138 = 1U;
    t139 = t138;
    t140 = (t101 + 4);
    t141 = *((unsigned int *)t101);
    t138 = (t138 & t141);
    t142 = *((unsigned int *)t140);
    t139 = (t139 & t142);
    t143 = (t137 + 4);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t144 | t138);
    t145 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t145 | t139);
    xsi_driver_vfirst_trans(t133, 0, 0);
    t146 = (t0 + 8352);
    *((int *)t146) = 1;

LAB1:    return;
LAB4:    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t7) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    t38 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t38 & t34);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t45 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB10;

LAB13:    t65 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB14;

LAB15:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t3 + 4);
    t81 = (t50 + 4);
    t82 = *((unsigned int *)t3);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t50);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (~(t88));
    t90 = (t83 & t85);
    t91 = (t87 & t89);
    t92 = (~(t90));
    t93 = (~(t91));
    t94 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t94 & t92);
    t95 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t95 & t93);
    t96 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t96 & t92);
    t97 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t97 & t93);
    goto LAB17;

LAB18:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t66 + 4);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t66);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t100);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t129 & t127);
    t130 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t130 & t128);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    t132 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t132 & t128);
    goto LAB20;

}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t15[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 31U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t0 + 4168);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB11;

LAB8:    if (t27 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t15) = 1;

LAB11:    t32 = *((unsigned int *)t3);
    t33 = *((unsigned int *)t15);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t3 + 4);
    t36 = (t15 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB12;

LAB13:
LAB14:    t63 = (t0 + 8608);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    memset(t67, 0, 8);
    t68 = 1U;
    t69 = t68;
    t70 = (t31 + 4);
    t71 = *((unsigned int *)t31);
    t68 = (t68 & t71);
    t72 = *((unsigned int *)t70);
    t69 = (t69 & t72);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 | t68);
    t75 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t75 | t69);
    xsi_driver_vfirst_trans(t63, 0, 0);
    t76 = (t0 + 8368);
    *((int *)t76) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB10:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t3 + 4);
    t46 = (t15 + 4);
    t47 = *((unsigned int *)t3);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t15);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB14;

}

static void Cont_37_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 8672);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 8384);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Cont_39_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 8736);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8400);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_40_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 8416);
    *((int *)t2) = 1;
    t3 = (t0 + 7072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Cont_45_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t45[8];
    char t46[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    t2 = (t0 + 3448U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t34) != 0)
        goto LAB9;

LAB10:    t41 = (t4 + 4);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB11;

LAB12:    t68 = *((unsigned int *)t4);
    t69 = (~(t68));
    t70 = *((unsigned int *)t41);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t41) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t73, 8);

LAB19:    t74 = (t0 + 8800);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memcpy(t78, t3, 8);
    xsi_driver_vfirst_trans(t74, 0, 31);
    t79 = (t0 + 8432);
    *((int *)t79) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t40 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB10;

LAB11:    t47 = (t0 + 2488U);
    t48 = *((char **)t47);
    memset(t46, 0, 8);
    t47 = (t48 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t48);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t47) != 0)
        goto LAB22;

LAB23:    t55 = (t46 + 4);
    t56 = *((unsigned int *)t46);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB24;

LAB25:    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = *((unsigned int *)t55);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t55) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t46) > 0)
        goto LAB30;

LAB31:    memcpy(t45, t67, 8);

LAB32:    goto LAB12;

LAB13:    t66 = (t0 + 4968);
    t72 = (t66 + 56U);
    t73 = *((char **)t72);
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t45, 32, t73, 32);
    goto LAB19;

LAB17:    memcpy(t3, t45, 8);
    goto LAB19;

LAB20:    *((unsigned int *)t46) = 1;
    goto LAB23;

LAB22:    t54 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB23;

LAB24:    t59 = (t0 + 1368U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng2)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 32, t60, 32, t59, 32);
    goto LAB25;

LAB26:    t66 = (t0 + 1368U);
    t67 = *((char **)t66);
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t45, 32, t61, 32, t67, 32);
    goto LAB32;

LAB30:    memcpy(t45, t61, 8);
    goto LAB32;

}

static void Cont_47_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t49[8];
    char t50[8];
    char t53[8];
    char t80[8];
    char t97[8];
    char t98[8];
    char t101[8];
    char t135[8];
    char t136[8];
    char t139[8];
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
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
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t137;
    char *t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;

LAB0:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB20:    t174 = (t0 + 8864);
    t175 = (t174 + 56U);
    t176 = *((char **)t175);
    t177 = (t176 + 56U);
    t178 = *((char **)t177);
    memcpy(t178, t3, 8);
    xsi_driver_vfirst_trans(t174, 0, 31);
    t179 = (t0 + 8448);
    *((int *)t179) = 1;

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

LAB12:    t34 = (t0 + 4328);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 4168);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng4)));
    t41 = (t0 + 4008);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng4)));
    xsi_vlogtype_concat(t33, 32, 32, 5U, t44, 16, t43, 6, t40, 8, t39, 1, t36, 1);
    goto LAB13;

LAB14:    t51 = (t0 + 1048U);
    t52 = *((char **)t51);
    t51 = ((char*)((ng5)));
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

LAB30:    t93 = *((unsigned int *)t50);
    t94 = (~(t93));
    t95 = *((unsigned int *)t76);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t76) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t50) > 0)
        goto LAB35;

LAB36:    memcpy(t49, t97, 8);

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

LAB29:    t81 = ((char*)((ng4)));
    t82 = (t0 + 4648);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng4)));
    t86 = (t0 + 4808);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng4)));
    t90 = (t0 + 4488);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    xsi_vlogtype_concat(t80, 32, 32, 6U, t92, 1, t89, 15, t88, 6, t85, 3, t84, 5, t81, 2);
    goto LAB30;

LAB31:    t99 = (t0 + 1048U);
    t100 = *((char **)t99);
    t99 = ((char*)((ng6)));
    memset(t101, 0, 8);
    t102 = (t100 + 4);
    t103 = (t99 + 4);
    t104 = *((unsigned int *)t100);
    t105 = *((unsigned int *)t99);
    t106 = (t104 ^ t105);
    t107 = *((unsigned int *)t102);
    t108 = *((unsigned int *)t103);
    t109 = (t107 ^ t108);
    t110 = (t106 | t109);
    t111 = *((unsigned int *)t102);
    t112 = *((unsigned int *)t103);
    t113 = (t111 | t112);
    t114 = (~(t113));
    t115 = (t110 & t114);
    if (t115 != 0)
        goto LAB41;

LAB38:    if (t113 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t101) = 1;

LAB41:    memset(t98, 0, 8);
    t117 = (t101 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t101);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t117) != 0)
        goto LAB44;

LAB45:    t124 = (t98 + 4);
    t125 = *((unsigned int *)t98);
    t126 = *((unsigned int *)t124);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB46;

LAB47:    t131 = *((unsigned int *)t98);
    t132 = (~(t131));
    t133 = *((unsigned int *)t124);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t124) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t98) > 0)
        goto LAB52;

LAB53:    memcpy(t97, t135, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t49, 32, t80, 32, t97, 32);
    goto LAB37;

LAB35:    memcpy(t49, t80, 8);
    goto LAB37;

LAB40:    t116 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t98) = 1;
    goto LAB45;

LAB44:    t123 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB45;

LAB46:    t128 = (t0 + 4968);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    goto LAB47;

LAB48:    t137 = (t0 + 1048U);
    t138 = *((char **)t137);
    t137 = ((char*)((ng7)));
    memset(t139, 0, 8);
    t140 = (t138 + 4);
    t141 = (t137 + 4);
    t142 = *((unsigned int *)t138);
    t143 = *((unsigned int *)t137);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t140);
    t150 = *((unsigned int *)t141);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t153 = (t148 & t152);
    if (t153 != 0)
        goto LAB58;

LAB55:    if (t151 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t139) = 1;

LAB58:    memset(t136, 0, 8);
    t155 = (t139 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t139);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t155) != 0)
        goto LAB61;

LAB62:    t162 = (t136 + 4);
    t163 = *((unsigned int *)t136);
    t164 = *((unsigned int *)t162);
    t165 = (t163 || t164);
    if (t165 > 0)
        goto LAB63;

LAB64:    t169 = *((unsigned int *)t136);
    t170 = (~(t169));
    t171 = *((unsigned int *)t162);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t162) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t136) > 0)
        goto LAB69;

LAB70:    memcpy(t135, t173, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t97, 32, t130, 32, t135, 32);
    goto LAB54;

LAB52:    memcpy(t97, t130, 8);
    goto LAB54;

LAB57:    t154 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t136) = 1;
    goto LAB62;

LAB61:    t161 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB62;

LAB63:    t166 = (t0 + 5128);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    goto LAB64;

LAB65:    t173 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t135, 32, t168, 32, t173, 32);
    goto LAB71;

LAB69:    memcpy(t135, t168, 8);
    goto LAB71;

}

static void Initial_53_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t1, 1, 0, 1, 0LL);
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t1, 2, 0, 6, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t1, 5, 0, 6, 0LL);
    t4 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t4, t1, 11, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_60_8(char *t0)
{
    char t15[8];
    char t19[8];
    char t25[8];
    char t32[8];
    char t73[8];
    char t76[8];
    char t86[8];
    char t94[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    int t72;
    char *t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 8464);
    *((int *)t2) = 1;
    t3 = (t0 + 8064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(66, ng0);

LAB10:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB17:
LAB13:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t2) != 0)
        goto LAB25;

LAB26:    t5 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB27;

LAB28:    memcpy(t32, t15, 8);

LAB29:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);

LAB9:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    t13 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t13, t11, 1, 0, 1, 0LL);
    t14 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t14, t11, 2, 0, 6, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    t4 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t4, t2, 5, 0, 6, 0LL);
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 11, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(71, ng0);

LAB14:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(76, ng0);

LAB18:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(81, ng0);

LAB22:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t15) = 1;
    goto LAB26;

LAB25:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB27:    t11 = (t0 + 2648U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t12 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t11) == 0)
        goto LAB30;

LAB32:    t13 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t13) = 1;

LAB33:    memset(t25, 0, 8);
    t14 = (t19 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t19);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t14) != 0)
        goto LAB36;

LAB37:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t25);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t15 + 4);
    t37 = (t25 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB30:    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t25) = 1;
    goto LAB37;

LAB36:    t31 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB37;

LAB38:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t15 + 4);
    t47 = (t25 + 4);
    t48 = *((unsigned int *)t15);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t25);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB40;

LAB41:    xsi_set_current_line(86, ng0);

LAB44:    xsi_set_current_line(87, ng0);
    t70 = (t0 + 1048U);
    t71 = *((char **)t70);

LAB45:    t70 = ((char*)((ng3)));
    t72 = xsi_vlog_unsigned_case_compare(t71, 5, t70, 5);
    if (t72 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng6)));
    t56 = xsi_vlog_unsigned_case_compare(t71, 5, t2, 5);
    if (t56 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB43;

LAB46:    xsi_set_current_line(88, ng0);
    t74 = (t0 + 1208U);
    t75 = *((char **)t74);
    memset(t76, 0, 8);
    t74 = (t76 + 4);
    t77 = (t75 + 4);
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 0);
    t80 = (t79 & 1);
    *((unsigned int *)t76) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 >> 0);
    t83 = (t82 & 1);
    *((unsigned int *)t74) = t83;
    t84 = (t0 + 1208U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t84 = (t86 + 4);
    t87 = (t85 + 4);
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 1);
    t90 = (t89 & 1);
    *((unsigned int *)t86) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 >> 1);
    t93 = (t92 & 1);
    *((unsigned int *)t84) = t93;
    t95 = (t0 + 1208U);
    t96 = *((char **)t95);
    memset(t94, 0, 8);
    t95 = (t94 + 4);
    t97 = (t96 + 4);
    t98 = *((unsigned int *)t96);
    t99 = (t98 >> 10);
    *((unsigned int *)t94) = t99;
    t100 = *((unsigned int *)t97);
    t101 = (t100 >> 10);
    *((unsigned int *)t95) = t101;
    t102 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t102 & 63U);
    t103 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t103 & 63U);
    xsi_vlogtype_concat(t73, 8, 8, 3U, t94, 6, t86, 1, t76, 1);
    t104 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t104, t73, 0, 0, 1, 0LL);
    t105 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t105, t73, 1, 0, 1, 0LL);
    t106 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t106, t73, 2, 0, 6, 0LL);
    goto LAB50;

LAB48:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB50;

}


extern void work_m_00000000002767152774_3975733304_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Cont_37_2,(void *)Cont_39_3,(void *)Always_40_4,(void *)Cont_45_5,(void *)Cont_47_6,(void *)Initial_53_7,(void *)Always_60_8};
	xsi_register_didat("work_m_00000000002767152774_3975733304", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002767152774_3975733304.didat");
	xsi_register_executes(pe);
}
