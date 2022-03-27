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
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P1/P1_L1_BlockChecker/BlockChecker.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {98, 0};
static int ng4[] = {66, 0};
static int ng5[] = {32, 0};
static int ng6[] = {101, 0};
static int ng7[] = {69, 0};
static int ng8[] = {103, 0};
static int ng9[] = {71, 0};
static int ng10[] = {105, 0};
static int ng11[] = {73, 0};
static int ng12[] = {110, 0};
static int ng13[] = {78, 0};
static int ng14[] = {100, 0};
static int ng15[] = {68, 0};



static int sp_initialization(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2208);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4520);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t4 = (t1 + 472);
    t5 = *((char **)t4);
    t4 = (t1 + 3720);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(91, ng0);
    t4 = (t1 + 1288);
    t5 = *((char **)t4);
    t4 = (t1 + 3880);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static void Initial_24_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB6:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB8:    if (t13 != 0)
        goto LAB9;

LAB4:    t6 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t6);

LAB5:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 2208);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB7:;
LAB9:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB6;
    goto LAB1;

}

static void Always_26_1(char *t0)
{
    char t27[8];
    char t33[8];
    char t34[8];
    char t36[8];
    char t52[8];
    char t67[8];
    char t83[8];
    char t91[8];
    char t137[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;

LAB0:    t1 = (t0 + 5688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 6256);
    *((int *)t2) = 1;
    t3 = (t0 + 5720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 3000U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);

LAB15:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4200);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t27, 0, 8);
    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB17;

LAB16:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB19;

LAB18:    *((unsigned int *)t27) = 1;

LAB19:    t16 = (t27 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t27);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4200);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t27, 0, 8);
    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB566;

LAB565:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB566;

LAB569:    if (*((unsigned int *)t5) < *((unsigned int *)t13))
        goto LAB567;

LAB568:    t17 = (t27 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t27);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB570;

LAB571:
LAB572:
LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t11 = (t0 + 5496);
    t12 = (t0 + 2208);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB11:    t14 = (t0 + 5592);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB13:    if (t22 != 0)
        goto LAB14;

LAB9:    t15 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t15);

LAB10:    t23 = (t0 + 5592);
    t24 = *((char **)t23);
    t23 = (t0 + 2208);
    t25 = (t0 + 5496);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    goto LAB8;

LAB12:;
LAB14:    t14 = (t0 + 5688U);
    *((char **)t14) = &&LAB11;
    goto LAB1;

LAB17:    t15 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(29, ng0);

LAB24:    xsi_set_current_line(31, ng0);
    t17 = (t0 + 3720);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);

LAB25:    t20 = (t0 + 472);
    t21 = *((char **)t20);
    t22 = xsi_vlog_unsigned_case_compare(t19, 5, t21, 32);
    if (t22 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t22 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t22 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t22 == 1)
        goto LAB32;

LAB33:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t22 == 1)
        goto LAB34;

LAB35:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t22 == 1)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB350:    t5 = (t0 + 1288);
    t11 = *((char **)t5);
    t22 = xsi_vlog_unsigned_case_compare(t4, 5, t11, 32);
    if (t22 == 1)
        goto LAB351;

LAB352:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t22 == 1)
        goto LAB353;

LAB354:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t22 == 1)
        goto LAB355;

LAB356:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t22 == 1)
        goto LAB357;

LAB358:
LAB359:    goto LAB23;

LAB26:    xsi_set_current_line(32, ng0);

LAB39:    xsi_set_current_line(33, ng0);
    t20 = (t0 + 4520);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB81;

LAB78:    if (t32 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t34) = 1;

LAB81:    memset(t33, 0, 8);
    t12 = (t34 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t12) != 0)
        goto LAB84;

LAB85:    t14 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t14);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB86;

LAB87:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t14);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t14) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t33) > 0)
        goto LAB92;

LAB93:    memcpy(t27, t16, 8);

LAB94:    t17 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t17, t27, 0, 0, 1, 0LL);
    goto LAB38;

LAB28:    xsi_set_current_line(36, ng0);

LAB95:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t34, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB99;

LAB96:    if (t32 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t34) = 1;

LAB99:    memset(t36, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t13) != 0)
        goto LAB102;

LAB103:    t15 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB104;

LAB105:    memcpy(t83, t36, 8);

LAB106:    memset(t33, 0, 8);
    t51 = (t83 + 4);
    t107 = *((unsigned int *)t51);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t51) != 0)
        goto LAB120;

LAB121:    t59 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t59);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB122;

LAB123:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t59);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t59) > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t33) > 0)
        goto LAB128;

LAB129:    memcpy(t27, t66, 8);

LAB130:    t60 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t60, t27, 0, 0, 5, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB134;

LAB131:    if (t32 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t34) = 1;

LAB134:    memset(t33, 0, 8);
    t12 = (t34 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t12) != 0)
        goto LAB137;

LAB138:    t14 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t14);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB139;

LAB140:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t14);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t14) > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t33) > 0)
        goto LAB145;

LAB146:    memcpy(t27, t16, 8);

LAB147:    t17 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t17, t27, 0, 0, 1, 0LL);
    goto LAB38;

LAB30:    xsi_set_current_line(40, ng0);

LAB148:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t34, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB152;

LAB149:    if (t32 != 0)
        goto LAB151;

LAB150:    *((unsigned int *)t34) = 1;

LAB152:    memset(t36, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t13) != 0)
        goto LAB155;

LAB156:    t15 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB157;

LAB158:    memcpy(t83, t36, 8);

LAB159:    memset(t33, 0, 8);
    t51 = (t83 + 4);
    t107 = *((unsigned int *)t51);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t51) != 0)
        goto LAB173;

LAB174:    t59 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t59);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB175;

LAB176:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t59);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t59) > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t33) > 0)
        goto LAB181;

LAB182:    memcpy(t27, t66, 8);

LAB183:    t60 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t60, t27, 0, 0, 5, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB187;

LAB184:    if (t32 != 0)
        goto LAB186;

LAB185:    *((unsigned int *)t34) = 1;

LAB187:    memset(t33, 0, 8);
    t12 = (t34 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t12) != 0)
        goto LAB190;

LAB191:    t14 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t14);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB192;

LAB193:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t14);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t14) > 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t33) > 0)
        goto LAB198;

LAB199:    memcpy(t27, t16, 8);

LAB200:    t17 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t17, t27, 0, 0, 1, 0LL);
    goto LAB38;

LAB32:    xsi_set_current_line(44, ng0);

LAB201:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t34, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB205;

LAB202:    if (t32 != 0)
        goto LAB204;

LAB203:    *((unsigned int *)t34) = 1;

LAB205:    memset(t36, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t13) != 0)
        goto LAB208;

LAB209:    t15 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB210;

LAB211:    memcpy(t83, t36, 8);

LAB212:    memset(t33, 0, 8);
    t51 = (t83 + 4);
    t107 = *((unsigned int *)t51);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB224;

LAB225:    if (*((unsigned int *)t51) != 0)
        goto LAB226;

LAB227:    t59 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t59);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB228;

LAB229:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t59);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB230;

LAB231:    if (*((unsigned int *)t59) > 0)
        goto LAB232;

LAB233:    if (*((unsigned int *)t33) > 0)
        goto LAB234;

LAB235:    memcpy(t27, t66, 8);

LAB236:    t60 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t60, t27, 0, 0, 5, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB240;

LAB237:    if (t32 != 0)
        goto LAB239;

LAB238:    *((unsigned int *)t34) = 1;

LAB240:    memset(t33, 0, 8);
    t12 = (t34 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t12) != 0)
        goto LAB243;

LAB244:    t14 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t14);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB245;

LAB246:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t14);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB247;

LAB248:    if (*((unsigned int *)t14) > 0)
        goto LAB249;

LAB250:    if (*((unsigned int *)t33) > 0)
        goto LAB251;

LAB252:    memcpy(t27, t16, 8);

LAB253:    t17 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t17, t27, 0, 0, 1, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(48, ng0);

LAB254:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t34, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB258;

LAB255:    if (t32 != 0)
        goto LAB257;

LAB256:    *((unsigned int *)t34) = 1;

LAB258:    memset(t36, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB259;

LAB260:    if (*((unsigned int *)t13) != 0)
        goto LAB261;

LAB262:    t15 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB263;

LAB264:    memcpy(t83, t36, 8);

LAB265:    memset(t33, 0, 8);
    t51 = (t83 + 4);
    t107 = *((unsigned int *)t51);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB277;

LAB278:    if (*((unsigned int *)t51) != 0)
        goto LAB279;

LAB280:    t59 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t59);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB281;

LAB282:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t59);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB283;

LAB284:    if (*((unsigned int *)t59) > 0)
        goto LAB285;

LAB286:    if (*((unsigned int *)t33) > 0)
        goto LAB287;

LAB288:    memcpy(t27, t66, 8);

LAB289:    t60 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t60, t27, 0, 0, 5, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB293;

LAB290:    if (t32 != 0)
        goto LAB292;

LAB291:    *((unsigned int *)t34) = 1;

LAB293:    memset(t33, 0, 8);
    t12 = (t34 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB294;

LAB295:    if (*((unsigned int *)t12) != 0)
        goto LAB296;

LAB297:    t14 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t14);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB298;

LAB299:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t14);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB300;

LAB301:    if (*((unsigned int *)t14) > 0)
        goto LAB302;

LAB303:    if (*((unsigned int *)t33) > 0)
        goto LAB304;

LAB305:    memcpy(t27, t16, 8);

LAB306:    t17 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t17, t27, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t34, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB310;

LAB307:    if (t32 != 0)
        goto LAB309;

LAB308:    *((unsigned int *)t34) = 1;

LAB310:    memset(t36, 0, 8);
    t12 = (t34 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB311;

LAB312:    if (*((unsigned int *)t12) != 0)
        goto LAB313;

LAB314:    t14 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t14);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB315;

LAB316:    memcpy(t83, t36, 8);

LAB317:    memset(t33, 0, 8);
    t38 = (t83 + 4);
    t107 = *((unsigned int *)t38);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB329;

LAB330:    if (*((unsigned int *)t38) != 0)
        goto LAB331;

LAB332:    t53 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t53);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB333;

LAB334:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t53);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB335;

LAB336:    if (*((unsigned int *)t53) > 0)
        goto LAB337;

LAB338:    if (*((unsigned int *)t33) > 0)
        goto LAB339;

LAB340:    memcpy(t27, t137, 8);

LAB341:    t84 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t84, t27, 0, 0, 16, 0LL);
    goto LAB38;

LAB36:    xsi_set_current_line(53, ng0);

LAB342:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t2 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t27, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB344;

LAB343:    if (t32 != 0)
        goto LAB345;

LAB346:    t12 = (t27 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t27);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB347;

LAB348:
LAB349:    goto LAB38;

LAB40:    xsi_set_current_line(33, ng0);
    t26 = (t0 + 3160U);
    t35 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t26 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t26);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB46;

LAB43:    if (t48 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t36) = 1;

LAB46:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t53) != 0)
        goto LAB49;

LAB50:    t60 = (t52 + 4);
    t61 = *((unsigned int *)t52);
    t62 = (!(t61));
    t63 = *((unsigned int *)t60);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB51;

LAB52:    memcpy(t91, t52, 8);

LAB53:    memset(t34, 0, 8);
    t119 = (t91 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t91);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t119) != 0)
        goto LAB67;

LAB68:    t126 = (t34 + 4);
    t127 = *((unsigned int *)t34);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB69;

LAB70:    t132 = *((unsigned int *)t34);
    t133 = (~(t132));
    t134 = *((unsigned int *)t126);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t126) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t34) > 0)
        goto LAB75;

LAB76:    memcpy(t33, t136, 8);

LAB77:    t130 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t130, t33, 0, 0, 5, 0LL);
    goto LAB42;

LAB45:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t52) = 1;
    goto LAB50;

LAB49:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB50;

LAB51:    t65 = (t0 + 3160U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng4)));
    memset(t67, 0, 8);
    t68 = (t66 + 4);
    t69 = (t65 + 4);
    t70 = *((unsigned int *)t66);
    t71 = *((unsigned int *)t65);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB57;

LAB54:    if (t79 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t67) = 1;

LAB57:    memset(t83, 0, 8);
    t84 = (t67 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t84) != 0)
        goto LAB60;

LAB61:    t92 = *((unsigned int *)t52);
    t93 = *((unsigned int *)t83);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = (t52 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB56:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t83) = 1;
    goto LAB61;

LAB60:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB61;

LAB62:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t52 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (~(t107));
    t109 = *((unsigned int *)t52);
    t110 = (t109 & t108);
    t111 = *((unsigned int *)t106);
    t112 = (~(t111));
    t113 = *((unsigned int *)t83);
    t114 = (t113 & t112);
    t115 = (~(t110));
    t116 = (~(t114));
    t117 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t117 & t115);
    t118 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t118 & t116);
    goto LAB64;

LAB65:    *((unsigned int *)t34) = 1;
    goto LAB68;

LAB67:    t125 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB68;

LAB69:    t130 = (t0 + 608);
    t131 = *((char **)t130);
    goto LAB70;

LAB71:    t130 = (t0 + 472);
    t136 = *((char **)t130);
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t33, 32, t131, 32, t136, 32);
    goto LAB77;

LAB75:    memcpy(t33, t131, 8);
    goto LAB77;

LAB80:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t33) = 1;
    goto LAB85;

LAB84:    t13 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB86:    t15 = ((char*)((ng1)));
    goto LAB87;

LAB88:    t16 = ((char*)((ng2)));
    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t27, 32, t15, 32, t16, 32);
    goto LAB94;

LAB92:    memcpy(t27, t15, 8);
    goto LAB94;

LAB98:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t36) = 1;
    goto LAB103;

LAB102:    t14 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB103;

LAB104:    t16 = (t0 + 3160U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng7)));
    memset(t52, 0, 8);
    t18 = (t17 + 4);
    t20 = (t16 + 4);
    t50 = *((unsigned int *)t17);
    t54 = *((unsigned int *)t16);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t20);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t18);
    t63 = *((unsigned int *)t20);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB110;

LAB107:    if (t64 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t52) = 1;

LAB110:    memset(t67, 0, 8);
    t23 = (t52 + 4);
    t72 = *((unsigned int *)t23);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t23) != 0)
        goto LAB113;

LAB114:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t25 = (t36 + 4);
    t26 = (t67 + 4);
    t35 = (t83 + 4);
    t80 = *((unsigned int *)t25);
    t81 = *((unsigned int *)t26);
    t85 = (t80 | t81);
    *((unsigned int *)t35) = t85;
    t86 = *((unsigned int *)t35);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB106;

LAB109:    t21 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t67) = 1;
    goto LAB114;

LAB113:    t24 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB114;

LAB115:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t35);
    *((unsigned int *)t83) = (t88 | t89);
    t37 = (t36 + 4);
    t38 = (t67 + 4);
    t92 = *((unsigned int *)t37);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t110 = (t94 & t93);
    t98 = *((unsigned int *)t38);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t114 = (t100 & t99);
    t101 = (~(t110));
    t102 = (~(t114));
    t103 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t103 & t101);
    t104 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t104 & t102);
    goto LAB117;

LAB118:    *((unsigned int *)t33) = 1;
    goto LAB121;

LAB120:    t53 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB121;

LAB122:    t60 = (t0 + 744);
    t65 = *((char **)t60);
    goto LAB123;

LAB124:    t60 = (t0 + 472);
    t66 = *((char **)t60);
    goto LAB125;

LAB126:    xsi_vlog_unsigned_bit_combine(t27, 32, t65, 32, t66, 32);
    goto LAB130;

LAB128:    memcpy(t27, t65, 8);
    goto LAB130;

LAB133:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t33) = 1;
    goto LAB138;

LAB137:    t13 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB138;

LAB139:    t15 = ((char*)((ng1)));
    goto LAB140;

LAB141:    t16 = ((char*)((ng2)));
    goto LAB142;

LAB143:    xsi_vlog_unsigned_bit_combine(t27, 32, t15, 32, t16, 32);
    goto LAB147;

LAB145:    memcpy(t27, t15, 8);
    goto LAB147;

LAB151:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB152;

LAB153:    *((unsigned int *)t36) = 1;
    goto LAB156;

LAB155:    t14 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB156;

LAB157:    t16 = (t0 + 3160U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng9)));
    memset(t52, 0, 8);
    t18 = (t17 + 4);
    t20 = (t16 + 4);
    t50 = *((unsigned int *)t17);
    t54 = *((unsigned int *)t16);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t20);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t18);
    t63 = *((unsigned int *)t20);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB163;

LAB160:    if (t64 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t52) = 1;

LAB163:    memset(t67, 0, 8);
    t23 = (t52 + 4);
    t72 = *((unsigned int *)t23);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t23) != 0)
        goto LAB166;

LAB167:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t25 = (t36 + 4);
    t26 = (t67 + 4);
    t35 = (t83 + 4);
    t80 = *((unsigned int *)t25);
    t81 = *((unsigned int *)t26);
    t85 = (t80 | t81);
    *((unsigned int *)t35) = t85;
    t86 = *((unsigned int *)t35);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB168;

LAB169:
LAB170:    goto LAB159;

LAB162:    t21 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB163;

LAB164:    *((unsigned int *)t67) = 1;
    goto LAB167;

LAB166:    t24 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB167;

LAB168:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t35);
    *((unsigned int *)t83) = (t88 | t89);
    t37 = (t36 + 4);
    t38 = (t67 + 4);
    t92 = *((unsigned int *)t37);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t110 = (t94 & t93);
    t98 = *((unsigned int *)t38);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t114 = (t100 & t99);
    t101 = (~(t110));
    t102 = (~(t114));
    t103 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t103 & t101);
    t104 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t104 & t102);
    goto LAB170;

LAB171:    *((unsigned int *)t33) = 1;
    goto LAB174;

LAB173:    t53 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB174;

LAB175:    t60 = (t0 + 880);
    t65 = *((char **)t60);
    goto LAB176;

LAB177:    t60 = (t0 + 472);
    t66 = *((char **)t60);
    goto LAB178;

LAB179:    xsi_vlog_unsigned_bit_combine(t27, 32, t65, 32, t66, 32);
    goto LAB183;

LAB181:    memcpy(t27, t65, 8);
    goto LAB183;

LAB186:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB187;

LAB188:    *((unsigned int *)t33) = 1;
    goto LAB191;

LAB190:    t13 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB191;

LAB192:    t15 = ((char*)((ng1)));
    goto LAB193;

LAB194:    t16 = ((char*)((ng2)));
    goto LAB195;

LAB196:    xsi_vlog_unsigned_bit_combine(t27, 32, t15, 32, t16, 32);
    goto LAB200;

LAB198:    memcpy(t27, t15, 8);
    goto LAB200;

LAB204:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB205;

LAB206:    *((unsigned int *)t36) = 1;
    goto LAB209;

LAB208:    t14 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB209;

LAB210:    t16 = (t0 + 3160U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng11)));
    memset(t52, 0, 8);
    t18 = (t17 + 4);
    t20 = (t16 + 4);
    t50 = *((unsigned int *)t17);
    t54 = *((unsigned int *)t16);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t20);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t18);
    t63 = *((unsigned int *)t20);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB216;

LAB213:    if (t64 != 0)
        goto LAB215;

LAB214:    *((unsigned int *)t52) = 1;

LAB216:    memset(t67, 0, 8);
    t23 = (t52 + 4);
    t72 = *((unsigned int *)t23);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB217;

LAB218:    if (*((unsigned int *)t23) != 0)
        goto LAB219;

LAB220:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t25 = (t36 + 4);
    t26 = (t67 + 4);
    t35 = (t83 + 4);
    t80 = *((unsigned int *)t25);
    t81 = *((unsigned int *)t26);
    t85 = (t80 | t81);
    *((unsigned int *)t35) = t85;
    t86 = *((unsigned int *)t35);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB221;

LAB222:
LAB223:    goto LAB212;

LAB215:    t21 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB216;

LAB217:    *((unsigned int *)t67) = 1;
    goto LAB220;

LAB219:    t24 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB220;

LAB221:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t35);
    *((unsigned int *)t83) = (t88 | t89);
    t37 = (t36 + 4);
    t38 = (t67 + 4);
    t92 = *((unsigned int *)t37);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t110 = (t94 & t93);
    t98 = *((unsigned int *)t38);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t114 = (t100 & t99);
    t101 = (~(t110));
    t102 = (~(t114));
    t103 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t103 & t101);
    t104 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t104 & t102);
    goto LAB223;

LAB224:    *((unsigned int *)t33) = 1;
    goto LAB227;

LAB226:    t53 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB227;

LAB228:    t60 = (t0 + 1016);
    t65 = *((char **)t60);
    goto LAB229;

LAB230:    t60 = (t0 + 472);
    t66 = *((char **)t60);
    goto LAB231;

LAB232:    xsi_vlog_unsigned_bit_combine(t27, 32, t65, 32, t66, 32);
    goto LAB236;

LAB234:    memcpy(t27, t65, 8);
    goto LAB236;

LAB239:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB240;

LAB241:    *((unsigned int *)t33) = 1;
    goto LAB244;

LAB243:    t13 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB244;

LAB245:    t15 = ((char*)((ng1)));
    goto LAB246;

LAB247:    t16 = ((char*)((ng2)));
    goto LAB248;

LAB249:    xsi_vlog_unsigned_bit_combine(t27, 32, t15, 32, t16, 32);
    goto LAB253;

LAB251:    memcpy(t27, t15, 8);
    goto LAB253;

LAB257:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB258;

LAB259:    *((unsigned int *)t36) = 1;
    goto LAB262;

LAB261:    t14 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB262;

LAB263:    t16 = (t0 + 3160U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng13)));
    memset(t52, 0, 8);
    t18 = (t17 + 4);
    t20 = (t16 + 4);
    t50 = *((unsigned int *)t17);
    t54 = *((unsigned int *)t16);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t20);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t18);
    t63 = *((unsigned int *)t20);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB269;

LAB266:    if (t64 != 0)
        goto LAB268;

LAB267:    *((unsigned int *)t52) = 1;

LAB269:    memset(t67, 0, 8);
    t23 = (t52 + 4);
    t72 = *((unsigned int *)t23);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB270;

LAB271:    if (*((unsigned int *)t23) != 0)
        goto LAB272;

LAB273:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t25 = (t36 + 4);
    t26 = (t67 + 4);
    t35 = (t83 + 4);
    t80 = *((unsigned int *)t25);
    t81 = *((unsigned int *)t26);
    t85 = (t80 | t81);
    *((unsigned int *)t35) = t85;
    t86 = *((unsigned int *)t35);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB274;

LAB275:
LAB276:    goto LAB265;

LAB268:    t21 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB269;

LAB270:    *((unsigned int *)t67) = 1;
    goto LAB273;

LAB272:    t24 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB273;

LAB274:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t35);
    *((unsigned int *)t83) = (t88 | t89);
    t37 = (t36 + 4);
    t38 = (t67 + 4);
    t92 = *((unsigned int *)t37);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t110 = (t94 & t93);
    t98 = *((unsigned int *)t38);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t114 = (t100 & t99);
    t101 = (~(t110));
    t102 = (~(t114));
    t103 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t103 & t101);
    t104 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t104 & t102);
    goto LAB276;

LAB277:    *((unsigned int *)t33) = 1;
    goto LAB280;

LAB279:    t53 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB280;

LAB281:    t60 = (t0 + 1152);
    t65 = *((char **)t60);
    goto LAB282;

LAB283:    t60 = (t0 + 472);
    t66 = *((char **)t60);
    goto LAB284;

LAB285:    xsi_vlog_unsigned_bit_combine(t27, 32, t65, 32, t66, 32);
    goto LAB289;

LAB287:    memcpy(t27, t65, 8);
    goto LAB289;

LAB292:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB293;

LAB294:    *((unsigned int *)t33) = 1;
    goto LAB297;

LAB296:    t13 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB297;

LAB298:    t15 = ((char*)((ng1)));
    goto LAB299;

LAB300:    t16 = ((char*)((ng2)));
    goto LAB301;

LAB302:    xsi_vlog_unsigned_bit_combine(t27, 32, t15, 32, t16, 32);
    goto LAB306;

LAB304:    memcpy(t27, t15, 8);
    goto LAB306;

LAB309:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB310;

LAB311:    *((unsigned int *)t36) = 1;
    goto LAB314;

LAB313:    t13 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB314;

LAB315:    t15 = (t0 + 3160U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng13)));
    memset(t52, 0, 8);
    t17 = (t16 + 4);
    t18 = (t15 + 4);
    t50 = *((unsigned int *)t16);
    t54 = *((unsigned int *)t15);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t17);
    t57 = *((unsigned int *)t18);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t17);
    t63 = *((unsigned int *)t18);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB321;

LAB318:    if (t64 != 0)
        goto LAB320;

LAB319:    *((unsigned int *)t52) = 1;

LAB321:    memset(t67, 0, 8);
    t21 = (t52 + 4);
    t72 = *((unsigned int *)t21);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB322;

LAB323:    if (*((unsigned int *)t21) != 0)
        goto LAB324;

LAB325:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t24 = (t36 + 4);
    t25 = (t67 + 4);
    t26 = (t83 + 4);
    t80 = *((unsigned int *)t24);
    t81 = *((unsigned int *)t25);
    t85 = (t80 | t81);
    *((unsigned int *)t26) = t85;
    t86 = *((unsigned int *)t26);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB326;

LAB327:
LAB328:    goto LAB317;

LAB320:    t20 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB321;

LAB322:    *((unsigned int *)t67) = 1;
    goto LAB325;

LAB324:    t23 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB325;

LAB326:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t26);
    *((unsigned int *)t83) = (t88 | t89);
    t35 = (t36 + 4);
    t37 = (t67 + 4);
    t92 = *((unsigned int *)t35);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t22 = (t94 & t93);
    t98 = *((unsigned int *)t37);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t110 = (t100 & t99);
    t101 = (~(t22));
    t102 = (~(t110));
    t103 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t103 & t101);
    t104 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t104 & t102);
    goto LAB328;

LAB329:    *((unsigned int *)t33) = 1;
    goto LAB332;

LAB331:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB332;

LAB333:    t59 = (t0 + 4040);
    t60 = (t59 + 56U);
    t65 = *((char **)t60);
    t66 = ((char*)((ng1)));
    memset(t91, 0, 8);
    xsi_vlog_unsigned_add(t91, 32, t65, 16, t66, 32);
    goto LAB334;

LAB335:    t68 = (t0 + 4040);
    t69 = (t68 + 56U);
    t82 = *((char **)t69);
    memcpy(t137, t82, 8);
    goto LAB336;

LAB337:    xsi_vlog_unsigned_bit_combine(t27, 32, t91, 32, t137, 32);
    goto LAB341;

LAB339:    memcpy(t27, t91, 8);
    goto LAB341;

LAB344:    *((unsigned int *)t27) = 1;
    goto LAB346;

LAB345:    t11 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB346;

LAB347:    xsi_set_current_line(55, ng0);
    t13 = (t0 + 4040);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t15, 16, t16, 32);
    t17 = (t0 + 4040);
    xsi_vlogvar_assign_value(t17, t33, 0, 0, 16);
    goto LAB349;

LAB351:    xsi_set_current_line(60, ng0);

LAB360:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 4520);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB361;

LAB362:
LAB363:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB402;

LAB399:    if (t32 != 0)
        goto LAB401;

LAB400:    *((unsigned int *)t34) = 1;

LAB402:    memset(t33, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB403;

LAB404:    if (*((unsigned int *)t13) != 0)
        goto LAB405;

LAB406:    t15 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t15);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB407;

LAB408:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t15);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB409;

LAB410:    if (*((unsigned int *)t15) > 0)
        goto LAB411;

LAB412:    if (*((unsigned int *)t33) > 0)
        goto LAB413;

LAB414:    memcpy(t27, t17, 8);

LAB415:    t18 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t18, t27, 0, 0, 1, 0LL);
    goto LAB359;

LAB353:    xsi_set_current_line(64, ng0);

LAB416:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3160U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t34, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t12);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB420;

LAB417:    if (t32 != 0)
        goto LAB419;

LAB418:    *((unsigned int *)t34) = 1;

LAB420:    memset(t36, 0, 8);
    t14 = (t34 + 4);
    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB421;

LAB422:    if (*((unsigned int *)t14) != 0)
        goto LAB423;

LAB424:    t16 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t16);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB425;

LAB426:    memcpy(t83, t36, 8);

LAB427:    memset(t33, 0, 8);
    t53 = (t83 + 4);
    t107 = *((unsigned int *)t53);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB439;

LAB440:    if (*((unsigned int *)t53) != 0)
        goto LAB441;

LAB442:    t60 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t60);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB443;

LAB444:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t60);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB445;

LAB446:    if (*((unsigned int *)t60) > 0)
        goto LAB447;

LAB448:    if (*((unsigned int *)t33) > 0)
        goto LAB449;

LAB450:    memcpy(t27, t68, 8);

LAB451:    t65 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t65, t27, 0, 0, 5, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB455;

LAB452:    if (t32 != 0)
        goto LAB454;

LAB453:    *((unsigned int *)t34) = 1;

LAB455:    memset(t33, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB456;

LAB457:    if (*((unsigned int *)t13) != 0)
        goto LAB458;

LAB459:    t15 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t15);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB460;

LAB461:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t15);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB462;

LAB463:    if (*((unsigned int *)t15) > 0)
        goto LAB464;

LAB465:    if (*((unsigned int *)t33) > 0)
        goto LAB466;

LAB467:    memcpy(t27, t17, 8);

LAB468:    t18 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t18, t27, 0, 0, 1, 0LL);
    goto LAB359;

LAB355:    xsi_set_current_line(68, ng0);

LAB469:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3160U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t34, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t12);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB473;

LAB470:    if (t32 != 0)
        goto LAB472;

LAB471:    *((unsigned int *)t34) = 1;

LAB473:    memset(t36, 0, 8);
    t14 = (t34 + 4);
    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB474;

LAB475:    if (*((unsigned int *)t14) != 0)
        goto LAB476;

LAB477:    t16 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t16);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB478;

LAB479:    memcpy(t83, t36, 8);

LAB480:    memset(t33, 0, 8);
    t53 = (t83 + 4);
    t107 = *((unsigned int *)t53);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB492;

LAB493:    if (*((unsigned int *)t53) != 0)
        goto LAB494;

LAB495:    t60 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t60);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB496;

LAB497:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t60);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB498;

LAB499:    if (*((unsigned int *)t60) > 0)
        goto LAB500;

LAB501:    if (*((unsigned int *)t33) > 0)
        goto LAB502;

LAB503:    memcpy(t27, t68, 8);

LAB504:    t65 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t65, t27, 0, 0, 5, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB508;

LAB505:    if (t32 != 0)
        goto LAB507;

LAB506:    *((unsigned int *)t34) = 1;

LAB508:    memset(t33, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB509;

LAB510:    if (*((unsigned int *)t13) != 0)
        goto LAB511;

LAB512:    t15 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t15);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB513;

LAB514:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t54 = *((unsigned int *)t15);
    t55 = (t50 || t54);
    if (t55 > 0)
        goto LAB515;

LAB516:    if (*((unsigned int *)t15) > 0)
        goto LAB517;

LAB518:    if (*((unsigned int *)t33) > 0)
        goto LAB519;

LAB520:    memcpy(t27, t17, 8);

LAB521:    t18 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t18, t27, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t34, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB525;

LAB522:    if (t32 != 0)
        goto LAB524;

LAB523:    *((unsigned int *)t34) = 1;

LAB525:    memset(t36, 0, 8);
    t13 = (t34 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB526;

LAB527:    if (*((unsigned int *)t13) != 0)
        goto LAB528;

LAB529:    t15 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (!(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB530;

LAB531:    memcpy(t83, t36, 8);

LAB532:    memset(t33, 0, 8);
    t51 = (t83 + 4);
    t107 = *((unsigned int *)t51);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t111 = (t109 & t108);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB544;

LAB545:    if (*((unsigned int *)t51) != 0)
        goto LAB546;

LAB547:    t59 = (t33 + 4);
    t113 = *((unsigned int *)t33);
    t115 = *((unsigned int *)t59);
    t116 = (t113 || t115);
    if (t116 > 0)
        goto LAB548;

LAB549:    t117 = *((unsigned int *)t33);
    t118 = (~(t117));
    t120 = *((unsigned int *)t59);
    t121 = (t118 || t120);
    if (t121 > 0)
        goto LAB550;

LAB551:    if (*((unsigned int *)t59) > 0)
        goto LAB552;

LAB553:    if (*((unsigned int *)t33) > 0)
        goto LAB554;

LAB555:    memcpy(t27, t137, 8);

LAB556:    t90 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t90, t27, 0, 0, 16, 0LL);
    goto LAB359;

LAB357:    xsi_set_current_line(73, ng0);

LAB557:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t2 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t27, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t28 = (t9 ^ t10);
    t29 = (t8 | t28);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t39 = (~(t32));
    t40 = (t29 & t39);
    if (t40 != 0)
        goto LAB559;

LAB558:    if (t32 != 0)
        goto LAB560;

LAB561:    t13 = (t27 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t27);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB562;

LAB563:
LAB564:    goto LAB359;

LAB361:    xsi_set_current_line(61, ng0);
    t15 = (t0 + 3160U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng6)));
    memset(t34, 0, 8);
    t17 = (t16 + 4);
    t18 = (t15 + 4);
    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t15);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t18);
    t39 = (t31 ^ t32);
    t40 = (t30 | t39);
    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t18);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB367;

LAB364:    if (t43 != 0)
        goto LAB366;

LAB365:    *((unsigned int *)t34) = 1;

LAB367:    memset(t36, 0, 8);
    t21 = (t34 + 4);
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB368;

LAB369:    if (*((unsigned int *)t21) != 0)
        goto LAB370;

LAB371:    t24 = (t36 + 4);
    t54 = *((unsigned int *)t36);
    t55 = (!(t54));
    t56 = *((unsigned int *)t24);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB372;

LAB373:    memcpy(t83, t36, 8);

LAB374:    memset(t33, 0, 8);
    t69 = (t83 + 4);
    t113 = *((unsigned int *)t69);
    t115 = (~(t113));
    t116 = *((unsigned int *)t83);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB386;

LAB387:    if (*((unsigned int *)t69) != 0)
        goto LAB388;

LAB389:    t84 = (t33 + 4);
    t120 = *((unsigned int *)t33);
    t121 = *((unsigned int *)t84);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB390;

LAB391:    t123 = *((unsigned int *)t33);
    t124 = (~(t123));
    t127 = *((unsigned int *)t84);
    t128 = (t124 || t127);
    if (t128 > 0)
        goto LAB392;

LAB393:    if (*((unsigned int *)t84) > 0)
        goto LAB394;

LAB395:    if (*((unsigned int *)t33) > 0)
        goto LAB396;

LAB397:    memcpy(t27, t96, 8);

LAB398:    t90 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t90, t27, 0, 0, 5, 0LL);
    goto LAB363;

LAB366:    t20 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB367;

LAB368:    *((unsigned int *)t36) = 1;
    goto LAB371;

LAB370:    t23 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB371;

LAB372:    t25 = (t0 + 3160U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng7)));
    memset(t52, 0, 8);
    t35 = (t26 + 4);
    t37 = (t25 + 4);
    t58 = *((unsigned int *)t26);
    t61 = *((unsigned int *)t25);
    t62 = (t58 ^ t61);
    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t37);
    t70 = (t63 ^ t64);
    t71 = (t62 | t70);
    t72 = *((unsigned int *)t35);
    t73 = *((unsigned int *)t37);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB378;

LAB375:    if (t74 != 0)
        goto LAB377;

LAB376:    *((unsigned int *)t52) = 1;

LAB378:    memset(t67, 0, 8);
    t51 = (t52 + 4);
    t77 = *((unsigned int *)t51);
    t78 = (~(t77));
    t79 = *((unsigned int *)t52);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB379;

LAB380:    if (*((unsigned int *)t51) != 0)
        goto LAB381;

LAB382:    t85 = *((unsigned int *)t36);
    t86 = *((unsigned int *)t67);
    t87 = (t85 | t86);
    *((unsigned int *)t83) = t87;
    t59 = (t36 + 4);
    t60 = (t67 + 4);
    t65 = (t83 + 4);
    t88 = *((unsigned int *)t59);
    t89 = *((unsigned int *)t60);
    t92 = (t88 | t89);
    *((unsigned int *)t65) = t92;
    t93 = *((unsigned int *)t65);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB383;

LAB384:
LAB385:    goto LAB374;

LAB377:    t38 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB378;

LAB379:    *((unsigned int *)t67) = 1;
    goto LAB382;

LAB381:    t53 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB382;

LAB383:    t98 = *((unsigned int *)t83);
    t99 = *((unsigned int *)t65);
    *((unsigned int *)t83) = (t98 | t99);
    t66 = (t36 + 4);
    t68 = (t67 + 4);
    t100 = *((unsigned int *)t66);
    t101 = (~(t100));
    t102 = *((unsigned int *)t36);
    t110 = (t102 & t101);
    t103 = *((unsigned int *)t68);
    t104 = (~(t103));
    t107 = *((unsigned int *)t67);
    t114 = (t107 & t104);
    t108 = (~(t110));
    t109 = (~(t114));
    t111 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t111 & t108);
    t112 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t112 & t109);
    goto LAB385;

LAB386:    *((unsigned int *)t33) = 1;
    goto LAB389;

LAB388:    t82 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB389;

LAB390:    t90 = (t0 + 1424);
    t95 = *((char **)t90);
    goto LAB391;

LAB392:    t90 = (t0 + 1288);
    t96 = *((char **)t90);
    goto LAB393;

LAB394:    xsi_vlog_unsigned_bit_combine(t27, 32, t95, 32, t96, 32);
    goto LAB398;

LAB396:    memcpy(t27, t95, 8);
    goto LAB398;

LAB401:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB402;

LAB403:    *((unsigned int *)t33) = 1;
    goto LAB406;

LAB405:    t14 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB406;

LAB407:    t16 = ((char*)((ng1)));
    goto LAB408;

LAB409:    t17 = ((char*)((ng2)));
    goto LAB410;

LAB411:    xsi_vlog_unsigned_bit_combine(t27, 32, t16, 32, t17, 32);
    goto LAB415;

LAB413:    memcpy(t27, t16, 8);
    goto LAB415;

LAB419:    t13 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB420;

LAB421:    *((unsigned int *)t36) = 1;
    goto LAB424;

LAB423:    t15 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB424;

LAB425:    t17 = (t0 + 3160U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng13)));
    memset(t52, 0, 8);
    t20 = (t18 + 4);
    t21 = (t17 + 4);
    t50 = *((unsigned int *)t18);
    t54 = *((unsigned int *)t17);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t20);
    t57 = *((unsigned int *)t21);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t20);
    t63 = *((unsigned int *)t21);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB431;

LAB428:    if (t64 != 0)
        goto LAB430;

LAB429:    *((unsigned int *)t52) = 1;

LAB431:    memset(t67, 0, 8);
    t24 = (t52 + 4);
    t72 = *((unsigned int *)t24);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB432;

LAB433:    if (*((unsigned int *)t24) != 0)
        goto LAB434;

LAB435:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t26 = (t36 + 4);
    t35 = (t67 + 4);
    t37 = (t83 + 4);
    t80 = *((unsigned int *)t26);
    t81 = *((unsigned int *)t35);
    t85 = (t80 | t81);
    *((unsigned int *)t37) = t85;
    t86 = *((unsigned int *)t37);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB436;

LAB437:
LAB438:    goto LAB427;

LAB430:    t23 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB431;

LAB432:    *((unsigned int *)t67) = 1;
    goto LAB435;

LAB434:    t25 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB435;

LAB436:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t37);
    *((unsigned int *)t83) = (t88 | t89);
    t38 = (t36 + 4);
    t51 = (t67 + 4);
    t92 = *((unsigned int *)t38);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t110 = (t94 & t93);
    t98 = *((unsigned int *)t51);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t114 = (t100 & t99);
    t101 = (~(t110));
    t102 = (~(t114));
    t103 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t103 & t101);
    t104 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t104 & t102);
    goto LAB438;

LAB439:    *((unsigned int *)t33) = 1;
    goto LAB442;

LAB441:    t59 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB442;

LAB443:    t65 = (t0 + 1560);
    t66 = *((char **)t65);
    goto LAB444;

LAB445:    t65 = (t0 + 1288);
    t68 = *((char **)t65);
    goto LAB446;

LAB447:    xsi_vlog_unsigned_bit_combine(t27, 32, t66, 32, t68, 32);
    goto LAB451;

LAB449:    memcpy(t27, t66, 8);
    goto LAB451;

LAB454:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB455;

LAB456:    *((unsigned int *)t33) = 1;
    goto LAB459;

LAB458:    t14 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB459;

LAB460:    t16 = ((char*)((ng1)));
    goto LAB461;

LAB462:    t17 = ((char*)((ng2)));
    goto LAB463;

LAB464:    xsi_vlog_unsigned_bit_combine(t27, 32, t16, 32, t17, 32);
    goto LAB468;

LAB466:    memcpy(t27, t16, 8);
    goto LAB468;

LAB472:    t13 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB473;

LAB474:    *((unsigned int *)t36) = 1;
    goto LAB477;

LAB476:    t15 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB477;

LAB478:    t17 = (t0 + 3160U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng15)));
    memset(t52, 0, 8);
    t20 = (t18 + 4);
    t21 = (t17 + 4);
    t50 = *((unsigned int *)t18);
    t54 = *((unsigned int *)t17);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t20);
    t57 = *((unsigned int *)t21);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t20);
    t63 = *((unsigned int *)t21);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB484;

LAB481:    if (t64 != 0)
        goto LAB483;

LAB482:    *((unsigned int *)t52) = 1;

LAB484:    memset(t67, 0, 8);
    t24 = (t52 + 4);
    t72 = *((unsigned int *)t24);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB485;

LAB486:    if (*((unsigned int *)t24) != 0)
        goto LAB487;

LAB488:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t26 = (t36 + 4);
    t35 = (t67 + 4);
    t37 = (t83 + 4);
    t80 = *((unsigned int *)t26);
    t81 = *((unsigned int *)t35);
    t85 = (t80 | t81);
    *((unsigned int *)t37) = t85;
    t86 = *((unsigned int *)t37);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB489;

LAB490:
LAB491:    goto LAB480;

LAB483:    t23 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB484;

LAB485:    *((unsigned int *)t67) = 1;
    goto LAB488;

LAB487:    t25 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB488;

LAB489:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t37);
    *((unsigned int *)t83) = (t88 | t89);
    t38 = (t36 + 4);
    t51 = (t67 + 4);
    t92 = *((unsigned int *)t38);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t110 = (t94 & t93);
    t98 = *((unsigned int *)t51);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t114 = (t100 & t99);
    t101 = (~(t110));
    t102 = (~(t114));
    t103 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t103 & t101);
    t104 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t104 & t102);
    goto LAB491;

LAB492:    *((unsigned int *)t33) = 1;
    goto LAB495;

LAB494:    t59 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB495;

LAB496:    t65 = (t0 + 1696);
    t66 = *((char **)t65);
    goto LAB497;

LAB498:    t65 = (t0 + 1288);
    t68 = *((char **)t65);
    goto LAB499;

LAB500:    xsi_vlog_unsigned_bit_combine(t27, 32, t66, 32, t68, 32);
    goto LAB504;

LAB502:    memcpy(t27, t66, 8);
    goto LAB504;

LAB507:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB508;

LAB509:    *((unsigned int *)t33) = 1;
    goto LAB512;

LAB511:    t14 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB512;

LAB513:    t16 = ((char*)((ng1)));
    goto LAB514;

LAB515:    t17 = ((char*)((ng2)));
    goto LAB516;

LAB517:    xsi_vlog_unsigned_bit_combine(t27, 32, t16, 32, t17, 32);
    goto LAB521;

LAB519:    memcpy(t27, t16, 8);
    goto LAB521;

LAB524:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB525;

LAB526:    *((unsigned int *)t36) = 1;
    goto LAB529;

LAB528:    t14 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB529;

LAB530:    t16 = (t0 + 3160U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng15)));
    memset(t52, 0, 8);
    t18 = (t17 + 4);
    t20 = (t16 + 4);
    t50 = *((unsigned int *)t17);
    t54 = *((unsigned int *)t16);
    t55 = (t50 ^ t54);
    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t20);
    t58 = (t56 ^ t57);
    t61 = (t55 | t58);
    t62 = *((unsigned int *)t18);
    t63 = *((unsigned int *)t20);
    t64 = (t62 | t63);
    t70 = (~(t64));
    t71 = (t61 & t70);
    if (t71 != 0)
        goto LAB536;

LAB533:    if (t64 != 0)
        goto LAB535;

LAB534:    *((unsigned int *)t52) = 1;

LAB536:    memset(t67, 0, 8);
    t23 = (t52 + 4);
    t72 = *((unsigned int *)t23);
    t73 = (~(t72));
    t74 = *((unsigned int *)t52);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB537;

LAB538:    if (*((unsigned int *)t23) != 0)
        goto LAB539;

LAB540:    t77 = *((unsigned int *)t36);
    t78 = *((unsigned int *)t67);
    t79 = (t77 | t78);
    *((unsigned int *)t83) = t79;
    t25 = (t36 + 4);
    t26 = (t67 + 4);
    t35 = (t83 + 4);
    t80 = *((unsigned int *)t25);
    t81 = *((unsigned int *)t26);
    t85 = (t80 | t81);
    *((unsigned int *)t35) = t85;
    t86 = *((unsigned int *)t35);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB541;

LAB542:
LAB543:    goto LAB532;

LAB535:    t21 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB536;

LAB537:    *((unsigned int *)t67) = 1;
    goto LAB540;

LAB539:    t24 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB540;

LAB541:    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t35);
    *((unsigned int *)t83) = (t88 | t89);
    t37 = (t36 + 4);
    t38 = (t67 + 4);
    t92 = *((unsigned int *)t37);
    t93 = (~(t92));
    t94 = *((unsigned int *)t36);
    t22 = (t94 & t93);
    t98 = *((unsigned int *)t38);
    t99 = (~(t98));
    t100 = *((unsigned int *)t67);
    t110 = (t100 & t99);
    t101 = (~(t22));
    t102 = (~(t110));
    t103 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t103 & t101);
    t104 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t104 & t102);
    goto LAB543;

LAB544:    *((unsigned int *)t33) = 1;
    goto LAB547;

LAB546:    t53 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB547;

LAB548:    t60 = (t0 + 4200);
    t65 = (t60 + 56U);
    t66 = *((char **)t65);
    t68 = ((char*)((ng1)));
    memset(t91, 0, 8);
    xsi_vlog_unsigned_add(t91, 32, t66, 16, t68, 32);
    goto LAB549;

LAB550:    t69 = (t0 + 4200);
    t82 = (t69 + 56U);
    t84 = *((char **)t82);
    memcpy(t137, t84, 8);
    goto LAB551;

LAB552:    xsi_vlog_unsigned_bit_combine(t27, 32, t91, 32, t137, 32);
    goto LAB556;

LAB554:    memcpy(t27, t91, 8);
    goto LAB556;

LAB559:    *((unsigned int *)t27) = 1;
    goto LAB561;

LAB560:    t12 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB561;

LAB562:    xsi_set_current_line(75, ng0);
    t14 = (t0 + 4200);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t16, 16, t17, 32);
    t18 = (t0 + 4200);
    xsi_vlogvar_assign_value(t18, t33, 0, 0, 16);
    goto LAB564;

LAB566:    t16 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB568;

LAB567:    *((unsigned int *)t27) = 1;
    goto LAB568;

LAB570:    xsi_set_current_line(80, ng0);
    t18 = ((char*)((ng1)));
    t20 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t20, t18, 0, 0, 1, 0LL);
    goto LAB572;

}

static void Cont_85_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t24[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
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
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;

LAB0:    t1 = (t0 + 5936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4360);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t64 = (t0 + 6352);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memset(t68, 0, 8);
    t69 = 1U;
    t70 = t69;
    t71 = (t3 + 4);
    t72 = *((unsigned int *)t3);
    t69 = (t69 & t72);
    t73 = *((unsigned int *)t71);
    t70 = (t70 & t73);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t75 | t69);
    t76 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t76 | t70);
    xsi_driver_vfirst_trans(t64, 0, 0);
    t77 = (t0 + 6272);
    *((int *)t77) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t25 = (t0 + 4040);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 4200);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB20;

LAB17:    if (t43 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t31) = 1;

LAB20:    memset(t24, 0, 8);
    t47 = (t31 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t31);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t47) != 0)
        goto LAB23;

LAB24:    t54 = (t24 + 4);
    t55 = *((unsigned int *)t24);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB25;

LAB26:    t59 = *((unsigned int *)t24);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t54) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t24) > 0)
        goto LAB31;

LAB32:    memcpy(t23, t63, 8);

LAB33:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB19:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB23:    t53 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB24;

LAB25:    t58 = ((char*)((ng1)));
    goto LAB26;

LAB27:    t63 = ((char*)((ng2)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t23, 32, t58, 32, t63, 32);
    goto LAB33;

LAB31:    memcpy(t23, t58, 8);
    goto LAB33;

}


extern void work_m_00000000000302418194_1075435344_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Always_26_1,(void *)Cont_85_2};
	static char *se[] = {(void *)sp_initialization};
	xsi_register_didat("work_m_00000000000302418194_1075435344", "isim/BlockChecker_tb_isim_beh.exe.sim/work/m_00000000000302418194_1075435344.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
