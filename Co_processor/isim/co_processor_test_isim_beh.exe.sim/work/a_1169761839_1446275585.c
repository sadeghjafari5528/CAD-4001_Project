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
static const char *ng0 = "E:/sadegh/iust/term7/Cources/CAD/project/CAD-4001_Project/Co_processor/MantissaDivision.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1169761839_1446275585_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 6024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5896);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1169761839_1446275585_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 10716U);
    t4 = (t0 + 2952U);
    t5 = *((char **)t4);
    t4 = (t0 + 10716U);
    t6 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (48U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 48U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 5912);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(48U, t9, 0);
    goto LAB6;

}

static void work_a_1169761839_1446275585_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6152);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 5928);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1169761839_1446275585_p_3(char *t0)
{
    char t20[16];
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    static char *nl0[] = {&&LAB8, &&LAB11, &&LAB9, &&LAB10, &&LAB12};

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2432U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 6216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 6280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(52, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t9 = *((unsigned char *)t7);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 10716U);
    t5 = (t0 + 2952U);
    t6 = *((char **)t5);
    t5 = (t0 + 10716U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t16 = (24 - 2);
    t17 = (23 - t16);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t6 = ((IEEE_P_1242562249) + 3000);
    t7 = (t21 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 22;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t22 = (0 - 22);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t23;
    t5 = xsi_base_array_concat(t5, t20, t6, (char)97, t1, t21, (char)99, (unsigned char)3, (char)101);
    t23 = (23U + 1U);
    t3 = (24U != t23);
    if (t3 == 1)
        goto LAB24;

LAB25:    t8 = (t0 + 6344);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 24U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t16 = (2 * 24);
    t22 = (t16 - 2);
    t17 = (47 - t22);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t6 = ((IEEE_P_1242562249) + 3000);
    t7 = (t21 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 46;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t27 = (0 - 46);
    t23 = (t27 * -1);
    t23 = (t23 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t23;
    t5 = xsi_base_array_concat(t5, t20, t6, (char)97, t1, t21, (char)99, (unsigned char)2, (char)101);
    t23 = (47U + 1U);
    t3 = (48U != t23);
    if (t3 == 1)
        goto LAB26;

LAB27:    t8 = (t0 + 6408);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 48U);
    xsi_driver_first_trans_fast(t8);

LAB18:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t22 = (24 - 1);
    t3 = (t16 < t22);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB29:    goto LAB7;

LAB11:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t16 = (24 - 1);
    t22 = (t16 - 23);
    t17 = (t22 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6664);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 24U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 6280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB7;

LAB12:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB7;

LAB13:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB14:    xsi_set_current_line(53, ng0);
    t6 = xsi_get_transient_memory(24U);
    memset(t6, 0, 24U);
    t8 = t6;
    memset(t8, (unsigned char)2, 24U);
    t11 = (t0 + 6344);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 24U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 24U);
    xsi_driver_first_trans_delta(t1, 24U, 24U, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 6408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_delta(t5, 0U, 24U, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 24U);
    xsi_driver_first_trans_delta(t1, 24U, 24U, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 6472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_delta(t5, 0U, 24U, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 6536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 6280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB15;

LAB17:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t16 = (24 - 2);
    t17 = (23 - t16);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t7 = (t8 + t19);
    t12 = ((IEEE_P_1242562249) + 3000);
    t13 = (t21 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t22 = (0 - 22);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t23;
    t11 = xsi_base_array_concat(t11, t20, t12, (char)97, t7, t21, (char)99, (unsigned char)2, (char)101);
    t23 = (23U + 1U);
    t4 = (24U != t23);
    if (t4 == 1)
        goto LAB20;

LAB21:    t14 = (t0 + 6344);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t11, 24U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t16 = (2 * 24);
    t22 = (t16 - 2);
    t17 = (47 - t22);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t6 = ((IEEE_P_1242562249) + 3000);
    t7 = (t21 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 46;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t27 = (0 - 46);
    t23 = (t27 * -1);
    t23 = (t23 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t23;
    t5 = xsi_base_array_concat(t5, t20, t6, (char)97, t1, t21, (char)99, (unsigned char)2, (char)101);
    t23 = (47U + 1U);
    t3 = (48U != t23);
    if (t3 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 6408);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 48U);
    xsi_driver_first_trans_fast(t8);
    goto LAB18;

LAB20:    xsi_size_not_matching(24U, t23, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(48U, t23, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(24U, t23, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(48U, t23, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t27 = *((int *)t5);
    t28 = (t27 + 1);
    t1 = (t0 + 6536);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = t28;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB31:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t27 = (24 - 2);
    t23 = (23 - t27);
    t29 = (t23 * 1U);
    t30 = (0 + t29);
    t5 = (t6 + t30);
    t8 = ((IEEE_P_1242562249) + 3000);
    t11 = (t21 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 22;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t28 = (0 - 22);
    t31 = (t28 * -1);
    t31 = (t31 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t31;
    t7 = xsi_base_array_concat(t7, t20, t8, (char)97, t5, t21, (char)99, (unsigned char)2, (char)101);
    t31 = (23U + 1U);
    t9 = (24U != t31);
    if (t9 == 1)
        goto LAB34;

LAB35:    t12 = (t0 + 6344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    memcpy(t24, t7, 24U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10748U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t17 = *((unsigned int *)t6);
    t18 = (1U * t17);
    t3 = (8U != t18);
    if (t3 == 1)
        goto LAB36;

LAB37:    t7 = (t0 + 6600);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_size_not_matching(24U, t31, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(8U, t18, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 6280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB39;

}


extern void work_a_1169761839_1446275585_init()
{
	static char *pe[] = {(void *)work_a_1169761839_1446275585_p_0,(void *)work_a_1169761839_1446275585_p_1,(void *)work_a_1169761839_1446275585_p_2,(void *)work_a_1169761839_1446275585_p_3};
	xsi_register_didat("work_a_1169761839_1446275585", "isim/co_processor_test_isim_beh.exe.sim/work/a_1169761839_1446275585.didat");
	xsi_register_executes(pe);
}
