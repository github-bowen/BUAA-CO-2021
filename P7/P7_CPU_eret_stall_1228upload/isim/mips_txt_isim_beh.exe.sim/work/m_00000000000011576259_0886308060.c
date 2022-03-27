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
static const char *ng0 = "E:/IMPORTANT_FILE/ISE_FOR_PROJECT/P7/P7_CPU_eret_stall_1228upload/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {13U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {9U, 0U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {11U, 0U};
static unsigned int ng18[] = {65535U, 65535U};



static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_22_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t39[8];
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
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
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
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB13:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t29);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t76, 8);

LAB20:    t77 = (t0 + 5568);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t81, 0, 8);
    t82 = 1U;
    t83 = t82;
    t84 = (t3 + 4);
    t85 = *((unsigned int *)t3);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t84);
    t83 = (t83 & t86);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 | t82);
    t89 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t89 | t83);
    xsi_driver_vfirst_trans(t77, 0, 0);
    t90 = (t0 + 5440);
    *((int *)t90) = 1;

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

LAB12:    t35 = (t0 + 3208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB24;

LAB21:    if (t51 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t39) = 1;

LAB24:    memset(t34, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t55) != 0)
        goto LAB27;

LAB28:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t34);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB29;

LAB30:    t67 = *((unsigned int *)t34);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t62) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t34) > 0)
        goto LAB35;

LAB36:    memcpy(t33, t71, 8);

LAB37:    goto LAB13;

LAB14:    t76 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t76, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB27:    t61 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB28;

LAB29:    t66 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t71 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t33, 32, t66, 32, t71, 32);
    goto LAB37;

LAB35:    memcpy(t33, t66, 8);
    goto LAB37;

}

static void Cont_23_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t39[8];
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
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
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
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB13:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t29);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t76, 8);

LAB20:    t77 = (t0 + 5632);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t81, 0, 8);
    t82 = 1U;
    t83 = t82;
    t84 = (t3 + 4);
    t85 = *((unsigned int *)t3);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t84);
    t83 = (t83 & t86);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 | t82);
    t89 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t89 | t83);
    xsi_driver_vfirst_trans(t77, 0, 0);
    t90 = (t0 + 5456);
    *((int *)t90) = 1;

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

LAB12:    t35 = (t0 + 3208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB24;

LAB21:    if (t51 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t39) = 1;

LAB24:    memset(t34, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t55) != 0)
        goto LAB27;

LAB28:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t34);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB29;

LAB30:    t67 = *((unsigned int *)t34);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t62) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t34) > 0)
        goto LAB35;

LAB36:    memcpy(t33, t71, 8);

LAB37:    goto LAB13;

LAB14:    t76 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t76, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB27:    t61 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB28;

LAB29:    t66 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t71 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t33, 32, t66, 32, t71, 32);
    goto LAB37;

LAB35:    memcpy(t33, t66, 8);
    goto LAB37;

}

static void Cont_24_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t39[8];
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
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
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
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB13:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t29);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t76, 8);

LAB20:    t77 = (t0 + 5696);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t81, 0, 8);
    t82 = 1U;
    t83 = t82;
    t84 = (t3 + 4);
    t85 = *((unsigned int *)t3);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t84);
    t83 = (t83 & t86);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 | t82);
    t89 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t89 | t83);
    xsi_driver_vfirst_trans(t77, 0, 0);
    t90 = (t0 + 5472);
    *((int *)t90) = 1;

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

LAB12:    t35 = (t0 + 3208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB24;

LAB21:    if (t51 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t39) = 1;

LAB24:    memset(t34, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t55) != 0)
        goto LAB27;

LAB28:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t34);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB29;

LAB30:    t67 = *((unsigned int *)t34);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t62) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t34) > 0)
        goto LAB35;

LAB36:    memcpy(t33, t71, 8);

LAB37:    goto LAB13;

LAB14:    t76 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t76, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB27:    t61 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB28;

LAB29:    t66 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t71 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t33, 32, t66, 32, t71, 32);
    goto LAB37;

LAB35:    memcpy(t33, t66, 8);
    goto LAB37;

}

static void Always_26_4(char *t0)
{
    char t10[8];
    char t42[8];
    char t52[8];
    char t63[8];
    char t95[8];
    char t124[16];
    char t125[16];
    char t126[16];
    char t127[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
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
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5488);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB40;

LAB41:
LAB42:    t41 = (t0 + 2888);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB39;

LAB9:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB43;

LAB44:
LAB45:    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB39;

LAB11:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB47;

LAB46:    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 4294967295U);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    t25 = (t21 & t22);
    *((unsigned int *)t42) = t25;
    t8 = (t10 + 4);
    t14 = (t9 + 4);
    t15 = (t42 + 4);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t14);
    t28 = (t26 | t27);
    *((unsigned int *)t15) = t28;
    t29 = *((unsigned int *)t15);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB48;

LAB49:
LAB50:    t41 = (t0 + 1208U);
    t51 = *((char **)t41);
    t41 = (t0 + 1368U);
    t53 = *((char **)t41);
    memset(t52, 0, 8);
    t41 = (t52 + 4);
    t54 = (t53 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    *((unsigned int *)t52) = t56;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t54) != 0)
        goto LAB52;

LAB51:    t61 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t61 & 4294967295U);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & 4294967295U);
    t64 = *((unsigned int *)t51);
    t65 = *((unsigned int *)t52);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t51 + 4);
    t68 = (t52 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB53;

LAB54:
LAB55:    t96 = *((unsigned int *)t42);
    t97 = *((unsigned int *)t63);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = (t42 + 4);
    t100 = (t63 + 4);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t99);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB56;

LAB57:
LAB58:    t123 = (t0 + 2888);
    xsi_vlogvar_assign_value(t123, t95, 0, 0, 32);
    goto LAB39;

LAB13:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t42) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t42 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB59;

LAB60:
LAB61:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t42 + 4);
    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB63;

LAB62:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & 4294967295U);
    t41 = (t0 + 2888);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB39;

LAB15:    xsi_set_current_line(32, ng0);

LAB64:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    xsi_vlogtype_concat(t124, 33, 33, 2U, t10, 1, t3, 32);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    t8 = (t0 + 1368U);
    t14 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t15);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t8) = t26;
    xsi_vlogtype_concat(t125, 33, 33, 2U, t42, 1, t9, 32);
    xsi_vlog_unsigned_add(t126, 33, t124, 33, t125, 33);
    t23 = (t0 + 3048);
    xsi_vlogvar_assign_value(t23, t126, 0, 0, 33);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t14 = (t0 + 3048);
    t15 = (t14 + 56U);
    t23 = *((char **)t15);
    memset(t42, 0, 8);
    t24 = (t42 + 4);
    t41 = (t23 + 4);
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t41);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t24) = t26;
    memset(t52, 0, 8);
    t51 = (t10 + 4);
    t53 = (t42 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t42);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t51);
    t31 = *((unsigned int *)t53);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t51);
    t37 = *((unsigned int *)t53);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB66;

LAB65:    if (t38 != 0)
        goto LAB67;

LAB68:    t67 = (t52 + 4);
    t43 = *((unsigned int *)t67);
    t44 = (~(t43));
    t45 = *((unsigned int *)t52);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB71:    goto LAB39;

LAB17:    xsi_set_current_line(38, ng0);

LAB72:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    xsi_vlogtype_concat(t124, 33, 33, 2U, t10, 1, t3, 32);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    t8 = (t0 + 1368U);
    t14 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t15);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t8) = t26;
    xsi_vlogtype_concat(t125, 33, 33, 2U, t42, 1, t9, 32);
    xsi_vlog_unsigned_minus(t126, 33, t124, 33, t125, 33);
    t23 = (t0 + 3048);
    xsi_vlogvar_assign_value(t23, t126, 0, 0, 33);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t14 = (t0 + 3048);
    t15 = (t14 + 56U);
    t23 = *((char **)t15);
    memset(t42, 0, 8);
    t24 = (t42 + 4);
    t41 = (t23 + 4);
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t41);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t24) = t26;
    memset(t52, 0, 8);
    t51 = (t10 + 4);
    t53 = (t42 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t42);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t51);
    t31 = *((unsigned int *)t53);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t51);
    t37 = *((unsigned int *)t53);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB74;

LAB73:    if (t38 != 0)
        goto LAB75;

LAB76:    t67 = (t52 + 4);
    t43 = *((unsigned int *)t67);
    t44 = (~(t43));
    t45 = *((unsigned int *)t52);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB79:    goto LAB39;

LAB19:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB39;

LAB21:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB39;

LAB23:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    memset(t52, 0, 8);
    xsi_vlog_signed_arith_rshift(t52, 32, t4, 32, t7, 5);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t52, 0, 0, 32);
    goto LAB39;

LAB25:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t127, 0, 8);
    xsi_vlog_signed_less(t127, 32, t4, 32, t7, 32);
    memset(t42, 0, 8);
    t3 = (t127 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t127);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t3) != 0)
        goto LAB82;

LAB83:    t9 = (t42 + 4);
    t18 = *((unsigned int *)t42);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB84;

LAB85:    t21 = *((unsigned int *)t42);
    t22 = (~(t21));
    t25 = *((unsigned int *)t9);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t9) > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t42) > 0)
        goto LAB90;

LAB91:    memcpy(t10, t15, 8);

LAB92:    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB39;

LAB27:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    xsi_vlogtype_concat(t124, 33, 33, 2U, t3, 1, t4, 32);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    xsi_vlogtype_concat(t125, 33, 33, 2U, t7, 1, t8, 32);
    xsi_vlog_unsigned_less(t126, 33, t124, 33, t125, 33);
    memset(t42, 0, 8);
    t9 = (t126 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t126);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t9) != 0)
        goto LAB95;

LAB96:    t15 = (t42 + 4);
    t18 = *((unsigned int *)t42);
    t19 = *((unsigned int *)t15);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB97;

LAB98:    t21 = *((unsigned int *)t42);
    t22 = (~(t21));
    t25 = *((unsigned int *)t15);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t15) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t42) > 0)
        goto LAB103;

LAB104:    memcpy(t10, t24, 8);

LAB105:    t41 = (t0 + 2888);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB39;

LAB29:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t42, 0, 8);
    t4 = (t42 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t42) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t17 & 65535U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 65535U);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t42, 16, t3, 16);
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB39;

LAB31:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_lshift(t42, 32, t4, 32, t10, 5);
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t42, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_rshift(t42, 32, t4, 32, t10, 5);
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t42, 0, 0, 32);
    goto LAB39;

LAB35:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t52, 0, 8);
    t3 = (t52 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t52) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t63, 0, 8);
    xsi_vlog_signed_arith_rshift(t63, 32, t4, 32, t52, 5);
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t63, 0, 0, 32);
    goto LAB39;

LAB40:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB42;

LAB43:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB45;

LAB47:    t13 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t16);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t17 | t18);
    goto LAB46;

LAB48:    t31 = *((unsigned int *)t42);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t42) = (t31 | t32);
    t23 = (t10 + 4);
    t24 = (t9 + 4);
    t35 = *((unsigned int *)t10);
    t36 = (~(t35));
    t37 = *((unsigned int *)t23);
    t38 = (~(t37));
    t39 = *((unsigned int *)t9);
    t40 = (~(t39));
    t43 = *((unsigned int *)t24);
    t44 = (~(t43));
    t33 = (t36 & t38);
    t34 = (t40 & t44);
    t45 = (~(t33));
    t46 = (~(t34));
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & t45);
    t48 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t48 & t46);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 & t45);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & t46);
    goto LAB50;

LAB52:    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t54);
    *((unsigned int *)t52) = (t57 | t58);
    t59 = *((unsigned int *)t41);
    t60 = *((unsigned int *)t54);
    *((unsigned int *)t41) = (t59 | t60);
    goto LAB51;

LAB53:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t51 + 4);
    t78 = (t52 + 4);
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t52);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB55;

LAB56:    t107 = *((unsigned int *)t95);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t95) = (t107 | t108);
    t109 = (t42 + 4);
    t110 = (t63 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (~(t111));
    t113 = *((unsigned int *)t42);
    t114 = (t113 & t112);
    t115 = *((unsigned int *)t110);
    t116 = (~(t115));
    t117 = *((unsigned int *)t63);
    t118 = (t117 & t116);
    t119 = (~(t114));
    t120 = (~(t118));
    t121 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t121 & t119);
    t122 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t122 & t120);
    goto LAB58;

LAB59:    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t42) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB61;

LAB63:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t23);
    t44 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t43 | t44);
    goto LAB62;

LAB66:    *((unsigned int *)t52) = 1;
    goto LAB68;

LAB67:    t54 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(35, ng0);
    t68 = ((char*)((ng2)));
    t69 = (t0 + 3208);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB71;

LAB74:    *((unsigned int *)t52) = 1;
    goto LAB76;

LAB75:    t54 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(41, ng0);
    t68 = ((char*)((ng2)));
    t69 = (t0 + 3208);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB79;

LAB80:    *((unsigned int *)t42) = 1;
    goto LAB83;

LAB82:    t8 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB83;

LAB84:    t14 = ((char*)((ng4)));
    goto LAB85;

LAB86:    t15 = ((char*)((ng3)));
    goto LAB87;

LAB88:    xsi_vlog_unsigned_bit_combine(t10, 32, t14, 32, t15, 32);
    goto LAB92;

LAB90:    memcpy(t10, t14, 8);
    goto LAB92;

LAB93:    *((unsigned int *)t42) = 1;
    goto LAB96;

LAB95:    t14 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB97:    t23 = ((char*)((ng4)));
    goto LAB98;

LAB99:    t24 = ((char*)((ng3)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t10, 32, t23, 32, t24, 32);
    goto LAB105;

LAB103:    memcpy(t10, t23, 8);
    goto LAB105;

}


extern void work_m_00000000000011576259_0886308060_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Cont_22_1,(void *)Cont_23_2,(void *)Cont_24_3,(void *)Always_26_4};
	xsi_register_didat("work_m_00000000000011576259_0886308060", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000011576259_0886308060.didat");
	xsi_register_executes(pe);
}
