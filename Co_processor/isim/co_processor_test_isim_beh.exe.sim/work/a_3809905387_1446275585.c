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
static const char *ng0 = "E:/sadegh/iust/term7/Cources/CAD/project/CAD-4001_Project/Co_processor/MUL.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_3809905387_1446275585_p_0(char *t0)
{
    char t21[16];
    char t22[16];
    char t23[16];
    char t32[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t33;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(48U);
    memset(t1, 0, 48U);
    t5 = t1;
    memset(t5, (unsigned char)2, 48U);
    t6 = (t0 + 4792);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 48U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t2 = t1;
    memset(t2, (unsigned char)2, 9U);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 9U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3112U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 5048);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t11 = (31 - 31);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2952U);
    t6 = *((char **)t5);
    t15 = (31 - 31);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t4 = *((unsigned char *)t5);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 5240);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t20 = *((char **)t10);
    *((unsigned char *)t20) = t19;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = (31 - 22);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 8480U);
    t5 = xsi_base_array_concat(t5, t22, t6, (char)99, (unsigned char)3, (char)97, t1, t7, (char)101);
    t8 = (t0 + 2952U);
    t9 = *((char **)t8);
    t16 = (31 - 22);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t8 = (t9 + t18);
    t20 = ((IEEE_P_2592010699) + 4024);
    t24 = (t0 + 8512U);
    t10 = xsi_base_array_concat(t10, t23, t20, (char)99, (unsigned char)3, (char)97, t8, t24, (char)101);
    t25 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t21, t5, t22, t10, t23);
    t26 = (t0 + 4792);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t25, 48U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = (31 - 30);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t5 = (t0 + 8464U);
    t6 = (t0 + 3408U);
    t7 = *((char **)t6);
    t6 = (t0 + 8400U);
    t8 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t22, t1, t5, t7, t6);
    t9 = (t0 + 2952U);
    t10 = *((char **)t9);
    t16 = (31 - 30);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t9 = (t10 + t18);
    t20 = (t0 + 8496U);
    t24 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t21, t8, t22, t9, t20);
    t25 = (t0 + 4856);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t24, 9U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8432U);
    t3 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t2, t1, 255);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB7;

LAB11:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t11 = (47 - 47);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t12 = (8 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t5 + t14);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t22 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t11 = (0 - 7);
    t16 = (t11 * -1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t6 = xsi_base_array_concat(t6, t21, t7, (char)99, t3, (char)97, t1, t22, (char)101);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t16 = (47 - 45);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t9 = (t10 + t18);
    t24 = ((IEEE_P_2592010699) + 4024);
    t25 = (t32 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 45;
    t26 = (t25 + 4U);
    *((int *)t26) = 23;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t15 = (23 - 45);
    t31 = (t15 * -1);
    t31 = (t31 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t31;
    t20 = xsi_base_array_concat(t20, t23, t24, (char)97, t6, t21, (char)97, t9, t32, (char)101);
    t31 = (1U + 8U);
    t33 = (t31 + 23U);
    t4 = (32U != t33);
    if (t4 == 1)
        goto LAB25;

LAB26:    t26 = (t0 + 5304);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t20, 32U);
    xsi_driver_first_trans_fast_port(t26);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 4920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB7;

LAB12:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB7;

LAB13:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB14:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 5112);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 5048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)3, 32U);
    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t11 = (31 - 31);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t2 + t13);
    *((unsigned char *)t5) = t3;
    t7 = (t0 + 5304);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t20 = *((char **)t10);
    memcpy(t20, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 4920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t16 = (47 - 47);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t22 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 47;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t15 = (1 - 47);
    t31 = (t15 * -1);
    t31 = (t31 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t31;
    t7 = xsi_base_array_concat(t7, t21, t8, (char)99, (unsigned char)2, (char)97, t5, t22, (char)101);
    t31 = (1U + 47U);
    t19 = (48U != t31);
    if (t19 == 1)
        goto LAB23;

LAB24:    t10 = (t0 + 4792);
    t20 = (t10 + 56U);
    t24 = *((char **)t20);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 48U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8432U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t21, t2, t1, 1);
    t6 = (t0 + 4856);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB21;

LAB23:    xsi_size_not_matching(48U, t31, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(32U, t33, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 4920);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

}


extern void work_a_3809905387_1446275585_init()
{
	static char *pe[] = {(void *)work_a_3809905387_1446275585_p_0};
	xsi_register_didat("work_a_3809905387_1446275585", "isim/co_processor_test_isim_beh.exe.sim/work/a_3809905387_1446275585.didat");
	xsi_register_executes(pe);
}
