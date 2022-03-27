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
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P7/P7_CPU_eret_stall_1228upload/MDU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {5U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {32, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {3U, 0U};



static void Initial_18_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18, ng0);

LAB2:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);

LAB1:    return;
}

static void Always_27_1(char *t0)
{
    char t13[8];
    char t30[16];
    char t31[8];
    char t32[16];
    char t34[8];
    char t37[8];
    char t39[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t33;
    char *t35;
    char *t36;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(36, ng0);

LAB17:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);

LAB18:    t11 = ((char*)((ng2)));
    t19 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 4);
    if (t19 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t19 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t19 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB27;

LAB24:    if (t18 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t13) = 1;

LAB27:    t20 = (t13 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB30:    goto LAB16;

LAB19:    xsi_set_current_line(39, ng0);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 32, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB23;

LAB26:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(43, ng0);

LAB31:    xsi_set_current_line(44, ng0);
    t21 = ((char*)((ng4)));
    t29 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t29, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB32:    t2 = ((char*)((ng5)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t19 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t19 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng8)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t19 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng10)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t19 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    xsi_set_current_line(46, ng0);

LAB42:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng6)));
    t11 = (t0 + 1048U);
    t20 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t31 + 4);
    t21 = (t20 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 31);
    t14 = (t10 & 1);
    *((unsigned int *)t11) = t14;
    xsi_vlog_mul_concat(t13, 32, 1, t4, 1U, t31, 1);
    xsi_vlogtype_concat(t30, 64, 64, 2U, t13, 32, t5, 32);
    t29 = (t0 + 1208U);
    t33 = *((char **)t29);
    t29 = ((char*)((ng6)));
    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t37 + 4);
    t38 = (t36 + 4);
    t15 = *((unsigned int *)t36);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t37) = t17;
    t18 = *((unsigned int *)t38);
    t22 = (t18 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t35) = t23;
    xsi_vlog_mul_concat(t34, 32, 1, t29, 1U, t37, 1);
    xsi_vlogtype_concat(t32, 64, 64, 2U, t34, 32, t33, 32);
    xsi_vlog_unsigned_multiply(t39, 64, t30, 64, t32, 64);
    t40 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 32, 0LL);
    t41 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t41, t39, 32, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 6, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(50, ng0);

LAB43:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    xsi_vlogtype_concat(t30, 64, 64, 2U, t4, 32, t5, 32);
    t11 = (t0 + 1208U);
    t20 = *((char **)t11);
    t11 = ((char*)((ng5)));
    xsi_vlogtype_concat(t32, 64, 64, 2U, t11, 32, t20, 32);
    xsi_vlog_unsigned_multiply(t39, 64, t30, 64, t32, 64);
    t21 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t21, t39, 0, 0, 32, 0LL);
    t29 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t29, t39, 32, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 6, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(54, ng0);

LAB44:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t34, 0, 8);
    xsi_vlog_signed_divide(t34, 32, t5, 32, t11, 32);
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t34, 0, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t34, 0, 8);
    xsi_vlog_signed_mod(t34, 32, t4, 32, t5, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t34, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 6, 0LL);
    goto LAB41;

LAB39:    xsi_set_current_line(59, ng0);

LAB45:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    xsi_vlogtype_concat(t30, 33, 33, 2U, t4, 1, t5, 32);
    t11 = (t0 + 1208U);
    t20 = *((char **)t11);
    t11 = ((char*)((ng5)));
    xsi_vlogtype_concat(t32, 33, 33, 2U, t11, 1, t20, 32);
    xsi_vlog_unsigned_divide(t39, 33, t30, 33, t32, 33);
    t21 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t21, t39, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlogtype_concat(t30, 33, 33, 2U, t2, 1, t4, 32);
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    t5 = ((char*)((ng5)));
    xsi_vlogtype_concat(t32, 33, 33, 2U, t5, 1, t11, 32);
    xsi_vlog_unsigned_mod(t39, 33, t30, 33, t32, 33);
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t39, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 6, 0LL);
    goto LAB41;

LAB46:    xsi_set_current_line(66, ng0);

LAB49:    xsi_set_current_line(67, ng0);
    t20 = (t0 + 3208);
    t21 = (t20 + 56U);
    t29 = *((char **)t21);
    t33 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t35 = (t29 + 4);
    t36 = (t33 + 4);
    t14 = *((unsigned int *)t29);
    t15 = *((unsigned int *)t33);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t36);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t35);
    t25 = *((unsigned int *)t36);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB53;

LAB50:    if (t26 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t13) = 1;

LAB53:    t40 = (t13 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 6, t11, 32);
    t20 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 6, 0LL);

LAB56:    goto LAB48;

LAB52:    t38 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(67, ng0);

LAB57:    xsi_set_current_line(68, ng0);
    t41 = (t0 + 2888);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t49, t48, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB56;

}


extern void work_m_00000000004265762358_4111503280_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_27_1};
	xsi_register_didat("work_m_00000000004265762358_4111503280", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000004265762358_4111503280.didat");
	xsi_register_executes(pe);
}
