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
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P7/P7_CPU_eret_stall_1228upload/CMP.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};



static void Always_9_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t17[8];
    char t21[8];
    char t54[8];
    char t56[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t14, 6);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(11, ng0);
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    t18 = (t0 + 1208U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t19 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t20);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t18);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB21;

LAB18:    if (t32 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t21) = 1;

LAB21:    memset(t17, 0, 8);
    t36 = (t21 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t36) != 0)
        goto LAB24;

LAB25:    t43 = (t17 + 4);
    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB26;

LAB27:    t48 = *((unsigned int *)t17);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t43) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t17) > 0)
        goto LAB32;

LAB33:    memcpy(t16, t52, 8);

LAB34:    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t16, 0, 0, 1);
    goto LAB17;

LAB9:    xsi_set_current_line(12, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t23 = (t10 | t13);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t7);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB36;

LAB35:    if (t26 != 0)
        goto LAB37;

LAB38:    memset(t17, 0, 8);
    t18 = (t21 + 4);
    t29 = *((unsigned int *)t18);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t18) != 0)
        goto LAB41;

LAB42:    t20 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t20);
    t38 = (t34 || t37);
    if (t38 > 0)
        goto LAB43;

LAB44:    t39 = *((unsigned int *)t17);
    t40 = (~(t39));
    t41 = *((unsigned int *)t20);
    t44 = (t40 || t41);
    if (t44 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t20) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t17) > 0)
        goto LAB49;

LAB50:    memcpy(t16, t35, 8);

LAB51:    t36 = (t0 + 1768);
    xsi_vlogvar_assign_value(t36, t16, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(13, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t56, 0, 8);
    xsi_vlog_signed_leq(t56, 32, t5, 32, t3, 32);
    memset(t17, 0, 8);
    t6 = (t56 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t56);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t6) != 0)
        goto LAB54;

LAB55:    t14 = (t17 + 4);
    t13 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t14);
    t24 = (t13 || t23);
    if (t24 > 0)
        goto LAB56;

LAB57:    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t14) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t17) > 0)
        goto LAB62;

LAB63:    memcpy(t16, t19, 8);

LAB64:    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t16, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t56, 0, 8);
    xsi_vlog_signed_greater(t56, 32, t5, 32, t3, 32);
    memset(t17, 0, 8);
    t6 = (t56 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t56);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t6) != 0)
        goto LAB67;

LAB68:    t14 = (t17 + 4);
    t13 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t14);
    t24 = (t13 || t23);
    if (t24 > 0)
        goto LAB69;

LAB70:    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t14) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t17) > 0)
        goto LAB75;

LAB76:    memcpy(t16, t19, 8);

LAB77:    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t16, 0, 0, 1);
    goto LAB17;

LAB15:    xsi_set_current_line(15, ng0);

LAB78:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 16);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 31U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 31U);
    t7 = ((char*)((ng8)));
    memset(t17, 0, 8);
    t14 = (t16 + 4);
    t18 = (t7 + 4);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t7);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t18);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB82;

LAB79:    if (t32 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t17) = 1;

LAB82:    t20 = (t17 + 4);
    t37 = *((unsigned int *)t20);
    t38 = (~(t37));
    t39 = *((unsigned int *)t17);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = ((char*)((ng7)));
    memset(t17, 0, 8);
    t7 = (t16 + 4);
    t14 = (t6 + 4);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t6);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t14);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t14);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB102;

LAB99:    if (t32 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t17) = 1;

LAB102:    t19 = (t17 + 4);
    t37 = *((unsigned int *)t19);
    t38 = (~(t37));
    t39 = *((unsigned int *)t17);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB103;

LAB104:
LAB105:
LAB85:    goto LAB17;

LAB20:    t35 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB24:    t42 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB25;

LAB26:    t47 = ((char*)((ng2)));
    goto LAB27;

LAB28:    t52 = ((char*)((ng3)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t16, 32, t47, 32, t52, 32);
    goto LAB34;

LAB32:    memcpy(t16, t47, 8);
    goto LAB34;

LAB36:    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB37:    t14 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t17) = 1;
    goto LAB42;

LAB41:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB42;

LAB43:    t22 = ((char*)((ng2)));
    goto LAB44;

LAB45:    t35 = ((char*)((ng3)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t16, 32, t22, 32, t35, 32);
    goto LAB51;

LAB49:    memcpy(t16, t22, 8);
    goto LAB51;

LAB52:    *((unsigned int *)t17) = 1;
    goto LAB55;

LAB54:    t7 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    t18 = ((char*)((ng2)));
    goto LAB57;

LAB58:    t19 = ((char*)((ng3)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t16, 32, t18, 32, t19, 32);
    goto LAB64;

LAB62:    memcpy(t16, t18, 8);
    goto LAB64;

LAB65:    *((unsigned int *)t17) = 1;
    goto LAB68;

LAB67:    t7 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB68;

LAB69:    t18 = ((char*)((ng2)));
    goto LAB70;

LAB71:    t19 = ((char*)((ng3)));
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t16, 32, t18, 32, t19, 32);
    goto LAB77;

LAB75:    memcpy(t16, t18, 8);
    goto LAB77;

LAB81:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(17, ng0);
    t22 = (t0 + 1048U);
    t35 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t58, 0, 8);
    xsi_vlog_signed_less(t58, 32, t35, 32, t22, 32);
    memset(t54, 0, 8);
    t36 = (t58 + 4);
    t44 = *((unsigned int *)t36);
    t45 = (~(t44));
    t46 = *((unsigned int *)t58);
    t48 = (t46 & t45);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t36) != 0)
        goto LAB88;

LAB89:    t43 = (t54 + 4);
    t50 = *((unsigned int *)t54);
    t51 = *((unsigned int *)t43);
    t59 = (t50 || t51);
    if (t59 > 0)
        goto LAB90;

LAB91:    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t43) > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t54) > 0)
        goto LAB96;

LAB97:    memcpy(t21, t52, 8);

LAB98:    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t21, 0, 0, 1);
    goto LAB85;

LAB86:    *((unsigned int *)t54) = 1;
    goto LAB89;

LAB88:    t42 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB89;

LAB90:    t47 = ((char*)((ng2)));
    goto LAB91;

LAB92:    t52 = ((char*)((ng3)));
    goto LAB93;

LAB94:    xsi_vlog_unsigned_bit_combine(t21, 32, t47, 32, t52, 32);
    goto LAB98;

LAB96:    memcpy(t21, t47, 8);
    goto LAB98;

LAB101:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB102;

LAB103:    xsi_set_current_line(19, ng0);
    t20 = (t0 + 1048U);
    t22 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t58, 0, 8);
    xsi_vlog_signed_greatereq(t58, 32, t22, 32, t20, 32);
    memset(t54, 0, 8);
    t35 = (t58 + 4);
    t44 = *((unsigned int *)t35);
    t45 = (~(t44));
    t46 = *((unsigned int *)t58);
    t48 = (t46 & t45);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t35) != 0)
        goto LAB108;

LAB109:    t42 = (t54 + 4);
    t50 = *((unsigned int *)t54);
    t51 = *((unsigned int *)t42);
    t59 = (t50 || t51);
    if (t59 > 0)
        goto LAB110;

LAB111:    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t42) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t54) > 0)
        goto LAB116;

LAB117:    memcpy(t21, t47, 8);

LAB118:    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t21, 0, 0, 1);
    goto LAB105;

LAB106:    *((unsigned int *)t54) = 1;
    goto LAB109;

LAB108:    t36 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB109;

LAB110:    t43 = ((char*)((ng2)));
    goto LAB111;

LAB112:    t47 = ((char*)((ng3)));
    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t21, 32, t43, 32, t47, 32);
    goto LAB118;

LAB116:    memcpy(t21, t43, 8);
    goto LAB118;

}


extern void work_m_00000000002384611970_1579609468_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000002384611970_1579609468", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002384611970_1579609468.didat");
	xsi_register_executes(pe);
}
