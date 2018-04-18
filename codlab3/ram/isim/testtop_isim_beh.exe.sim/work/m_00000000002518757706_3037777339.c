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
static const char *ng0 = "E:/cod lab/codlab3/ram/control.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {28U, 0U};
static unsigned int ng6[] = {29U, 0U};



static void Always_35_0(char *t0)
{
    char t4[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4960);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB15:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB17;

LAB18:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(38, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 6, 0LL);
    goto LAB14;

LAB16:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(39, ng0);

LAB23:    xsi_set_current_line(40, ng0);
    t29 = (t0 + 2728);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t31, 6, t32, 32);
    t34 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 6, 0LL);
    goto LAB22;

}

static void Always_44_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4976);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);

LAB14:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 6, t5, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 6);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t30 = (t0 + 2408);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 1608);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 6);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 6, t5, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 6);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 6, t5, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 6);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB12;

}

static void Always_60_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4992);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 6);
    goto LAB2;

}

static void Always_64_3(char *t0)
{
    char t4[8];
    char t31[8];
    char t36[8];
    char t42[8];
    char t50[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5008);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB15:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB17;

LAB18:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB24:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB27;

LAB26:    *((unsigned int *)t4) = 1;

LAB27:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t23) != 0)
        goto LAB31;

LAB32:    t30 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB33;

LAB34:    memcpy(t50, t31, 8);

LAB35:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB22:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(66, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 6, 0LL);
    goto LAB14;

LAB16:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(67, ng0);

LAB23:    xsi_set_current_line(68, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 6, 0LL);
    goto LAB22;

LAB25:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t31) = 1;
    goto LAB32;

LAB31:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB32;

LAB33:    t32 = (t0 + 2568);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    t38 = (t35 + 4);
    t18 = *((unsigned int *)t34);
    t19 = *((unsigned int *)t35);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t37);
    t22 = *((unsigned int *)t38);
    t24 = (t21 ^ t22);
    t25 = (t20 | t24);
    t26 = *((unsigned int *)t37);
    t27 = *((unsigned int *)t38);
    t28 = (t26 | t27);
    t39 = (~(t28));
    t40 = (t25 & t39);
    if (t40 != 0)
        goto LAB39;

LAB36:    if (t28 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t36) = 1;

LAB39:    memset(t42, 0, 8);
    t43 = (t36 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t36);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t43) != 0)
        goto LAB42;

LAB43:    t51 = *((unsigned int *)t31);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t31 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB38:    t41 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t42) = 1;
    goto LAB43;

LAB42:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB43;

LAB44:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t31 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t31);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB46;

LAB47:    xsi_set_current_line(70, ng0);

LAB50:    xsi_set_current_line(71, ng0);
    t88 = (t0 + 2408);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng3)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_add(t92, 32, t90, 6, t91, 32);
    t93 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t93, t92, 0, 0, 6, 0LL);
    goto LAB49;

}

static void Always_75_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5024);
    *((int *)t2) = 1;
    t3 = (t0 + 4672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB18;

LAB15:    if (t19 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB25;

LAB22:    if (t19 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;

LAB25:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB21:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(78, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB14;

LAB17:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(80, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB21;

LAB24:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(81, ng0);

LAB29:    xsi_set_current_line(82, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB28;

}


extern void work_m_00000000002518757706_3037777339_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_44_1,(void *)Always_60_2,(void *)Always_64_3,(void *)Always_75_4};
	xsi_register_didat("work_m_00000000002518757706_3037777339", "isim/testtop_isim_beh.exe.sim/work/m_00000000002518757706_3037777339.didat");
	xsi_register_executes(pe);
}
