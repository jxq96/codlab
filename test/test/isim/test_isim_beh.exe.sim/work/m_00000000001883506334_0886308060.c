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
static const char *ng0 = "E:/cod lab/test/test/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};



static void Always_35_0(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_and(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_or(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_xor(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 32, t7, 32);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t10 + 4);
    memcpy(t9, t10, 8);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    t17 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 32, 0LL);
    goto LAB23;

}


extern void work_m_00000000001883506334_0886308060_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000001883506334_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000001883506334_0886308060.didat");
	xsi_register_executes(pe);
}
