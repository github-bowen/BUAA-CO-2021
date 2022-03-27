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
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P1/P1_L0_Expression_fsm/string.v";
static int ng1[] = {48, 0};
static int ng2[] = {57, 0};
static int ng3[] = {42, 0};
static int ng4[] = {43, 0};



static void Initial_14_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t1, t2, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_16_1(char *t0)
{
    char t14[8];
    char t15[8];
    char t16[8];
    char t20[8];
    char t29[8];
    char t33[8];
    char t41[8];
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
    int t13;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
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
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4208);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18, ng0);

LAB9:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t11, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(17, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 2, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(20, ng0);
    t5 = (t0 + 1912U);
    t12 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t12 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB19;

LAB18:    t18 = (t5 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t12) < *((unsigned int *)t5))
        goto LAB21;

LAB20:    *((unsigned int *)t16) = 1;

LAB21:    memset(t20, 0, 8);
    t21 = (t16 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t21) != 0)
        goto LAB25;

LAB26:    t23 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB27;

LAB28:    memcpy(t41, t20, 8);

LAB29:    memset(t15, 0, 8);
    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t73) != 0)
        goto LAB44;

LAB45:    t80 = (t15 + 4);
    t81 = *((unsigned int *)t15);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB46;

LAB47:    t86 = *((unsigned int *)t15);
    t87 = (~(t86));
    t88 = *((unsigned int *)t80);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t80) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t15) > 0)
        goto LAB52;

LAB53:    memcpy(t14, t90, 8);

LAB54:    t84 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t84, t14, 0, 0, 2, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t24 = (t9 ^ t10);
    t25 = (t8 | t24);
    t26 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t12);
    t36 = (t26 | t35);
    t37 = (~(t36));
    t38 = (t25 & t37);
    if (t38 != 0)
        goto LAB58;

LAB55:    if (t36 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t16) = 1;

LAB58:    memset(t20, 0, 8);
    t18 = (t16 + 4);
    t39 = *((unsigned int *)t18);
    t42 = (~(t39));
    t43 = *((unsigned int *)t16);
    t44 = (t43 & t42);
    t48 = (t44 & 1U);
    if (t48 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t18) != 0)
        goto LAB61;

LAB62:    t21 = (t20 + 4);
    t49 = *((unsigned int *)t20);
    t50 = (!(t49));
    t51 = *((unsigned int *)t21);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB63;

LAB64:    memcpy(t41, t20, 8);

LAB65:    memset(t15, 0, 8);
    t55 = (t41 + 4);
    t100 = *((unsigned int *)t55);
    t101 = (~(t100));
    t102 = *((unsigned int *)t41);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t55) != 0)
        goto LAB79;

LAB80:    t73 = (t15 + 4);
    t105 = *((unsigned int *)t15);
    t106 = *((unsigned int *)t73);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB81;

LAB82:    t108 = *((unsigned int *)t15);
    t109 = (~(t108));
    t110 = *((unsigned int *)t73);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t73) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t15) > 0)
        goto LAB87;

LAB88:    memcpy(t14, t84, 8);

LAB89:    t79 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t79, t14, 0, 0, 2, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB91;

LAB90:    t12 = (t2 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t5) < *((unsigned int *)t2))
        goto LAB93;

LAB92:    *((unsigned int *)t16) = 1;

LAB93:    memset(t20, 0, 8);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t18) != 0)
        goto LAB97;

LAB98:    t21 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t21);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB99;

LAB100:    memcpy(t41, t20, 8);

LAB101:    memset(t15, 0, 8);
    t55 = (t41 + 4);
    t74 = *((unsigned int *)t55);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t55) != 0)
        goto LAB116;

LAB117:    t73 = (t15 + 4);
    t81 = *((unsigned int *)t15);
    t82 = *((unsigned int *)t73);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB118;

LAB119:    t86 = *((unsigned int *)t15);
    t87 = (~(t86));
    t88 = *((unsigned int *)t73);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t73) > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t15) > 0)
        goto LAB124;

LAB125:    memcpy(t14, t84, 8);

LAB126:    t79 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t79, t14, 0, 0, 2, 0LL);
    goto LAB17;

LAB19:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t20) = 1;
    goto LAB26;

LAB25:    t22 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB26;

LAB27:    t27 = (t0 + 1912U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng2)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB31;

LAB30:    t31 = (t27 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t28) > *((unsigned int *)t27))
        goto LAB33;

LAB32:    *((unsigned int *)t29) = 1;

LAB33:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t34) != 0)
        goto LAB37;

LAB38:    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t20 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB29;

LAB31:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t33) = 1;
    goto LAB38;

LAB37:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB38;

LAB39:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t20 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t20);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB41;

LAB42:    *((unsigned int *)t15) = 1;
    goto LAB45;

LAB44:    t79 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB46:    t84 = (t0 + 608);
    t85 = *((char **)t84);
    goto LAB47;

LAB48:    t84 = (t0 + 880);
    t90 = *((char **)t84);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t14, 32, t85, 32, t90, 32);
    goto LAB54;

LAB52:    memcpy(t14, t85, 8);
    goto LAB54;

LAB57:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t20) = 1;
    goto LAB62;

LAB61:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB62;

LAB63:    t22 = (t0 + 1912U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t27 = (t23 + 4);
    t28 = (t22 + 4);
    t53 = *((unsigned int *)t23);
    t54 = *((unsigned int *)t22);
    t57 = (t53 ^ t54);
    t58 = *((unsigned int *)t27);
    t59 = *((unsigned int *)t28);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t27);
    t63 = *((unsigned int *)t28);
    t64 = (t62 | t63);
    t67 = (~(t64));
    t68 = (t61 & t67);
    if (t68 != 0)
        goto LAB69;

LAB66:    if (t64 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t29) = 1;

LAB69:    memset(t33, 0, 8);
    t31 = (t29 + 4);
    t69 = *((unsigned int *)t31);
    t70 = (~(t69));
    t71 = *((unsigned int *)t29);
    t72 = (t71 & t70);
    t74 = (t72 & 1U);
    if (t74 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t31) != 0)
        goto LAB72;

LAB73:    t75 = *((unsigned int *)t20);
    t76 = *((unsigned int *)t33);
    t77 = (t75 | t76);
    *((unsigned int *)t41) = t77;
    t34 = (t20 + 4);
    t40 = (t33 + 4);
    t45 = (t41 + 4);
    t78 = *((unsigned int *)t34);
    t81 = *((unsigned int *)t40);
    t82 = (t78 | t81);
    *((unsigned int *)t45) = t82;
    t83 = *((unsigned int *)t45);
    t86 = (t83 != 0);
    if (t86 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB68:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t33) = 1;
    goto LAB73;

LAB72:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB74:    t87 = *((unsigned int *)t41);
    t88 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t87 | t88);
    t46 = (t20 + 4);
    t47 = (t33 + 4);
    t89 = *((unsigned int *)t46);
    t91 = (~(t89));
    t92 = *((unsigned int *)t20);
    t65 = (t92 & t91);
    t93 = *((unsigned int *)t47);
    t94 = (~(t93));
    t95 = *((unsigned int *)t33);
    t66 = (t95 & t94);
    t96 = (~(t65));
    t97 = (~(t66));
    t98 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t98 & t96);
    t99 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t99 & t97);
    goto LAB76;

LAB77:    *((unsigned int *)t15) = 1;
    goto LAB80;

LAB79:    t56 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB80;

LAB81:    t79 = (t0 + 744);
    t80 = *((char **)t79);
    goto LAB82;

LAB83:    t79 = (t0 + 880);
    t84 = *((char **)t79);
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t14, 32, t80, 32, t84, 32);
    goto LAB89;

LAB87:    memcpy(t14, t80, 8);
    goto LAB89;

LAB91:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB93;

LAB95:    *((unsigned int *)t20) = 1;
    goto LAB98;

LAB97:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB98;

LAB99:    t22 = (t0 + 1912U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t29, 0, 8);
    t27 = (t23 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB103;

LAB102:    t28 = (t22 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t23) > *((unsigned int *)t22))
        goto LAB105;

LAB104:    *((unsigned int *)t29) = 1;

LAB105:    memset(t33, 0, 8);
    t31 = (t29 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t31) != 0)
        goto LAB109;

LAB110:    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t34 = (t20 + 4);
    t40 = (t33 + 4);
    t45 = (t41 + 4);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t45);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB101;

LAB103:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB105;

LAB107:    *((unsigned int *)t33) = 1;
    goto LAB110;

LAB109:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB110;

LAB111:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t53 | t54);
    t46 = (t20 + 4);
    t47 = (t33 + 4);
    t57 = *((unsigned int *)t20);
    t58 = (~(t57));
    t59 = *((unsigned int *)t46);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t47);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t69 & t67);
    t70 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB113;

LAB114:    *((unsigned int *)t15) = 1;
    goto LAB117;

LAB116:    t56 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB117;

LAB118:    t79 = (t0 + 608);
    t80 = *((char **)t79);
    goto LAB119;

LAB120:    t79 = (t0 + 880);
    t84 = *((char **)t79);
    goto LAB121;

LAB122:    xsi_vlog_unsigned_bit_combine(t14, 32, t80, 32, t84, 32);
    goto LAB126;

LAB124:    memcpy(t14, t80, 8);
    goto LAB126;

}

static void Cont_27_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t22 = (t0 + 4304);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 4224);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}


extern void work_m_00000000000025210899_4180013079_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Always_16_1,(void *)Cont_27_2};
	xsi_register_didat("work_m_00000000000025210899_4180013079", "isim/string_tb_isim_beh.exe.sim/work/m_00000000000025210899_4180013079.didat");
	xsi_register_executes(pe);
}
