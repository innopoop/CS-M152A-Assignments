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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ashley/Documents/M152A/CSM152ALab1_505308582/testbench_505308582.v";
static unsigned int ng1[] = {4096U, 0U};
static const char *ng2 = "1_0000_0000_0000";
static unsigned int ng3[] = {4095U, 0U};
static const char *ng4 = "0_1111_1111_1111";
static unsigned int ng5[] = {422U, 0U};
static const char *ng6 = "0_0001_1010_0110";
static unsigned int ng7[] = {7770U, 0U};
static const char *ng8 = "1_1110_0101_1010";
static unsigned int ng9[] = {108U, 0U};
static const char *ng10 = "0_0000_0110_1100";
static unsigned int ng11[] = {110U, 0U};
static const char *ng12 = "0_0000_0110_1110";
static unsigned int ng13[] = {111U, 0U};
static const char *ng14 = "0_0000_0110_1111";
static unsigned int ng15[] = {8191U, 0U};
static const char *ng16 = "1_1111_1111_1111";
static unsigned int ng17[] = {1U, 0U};
static const char *ng18 = "0_0000_0000_0001";
static unsigned int ng19[] = {0U, 0U};
static const char *ng20 = "0_0000_0000_0000";



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng2, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng10, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng16, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng18, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng20, 4, t0, (char)118, t3, 1, (char)118, t4, 3, (char)118, t5, 5);
    xsi_set_current_line(105, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_06688200506855175694_3929880127_init()
{
	static char *pe[] = {(void *)Initial_43_0};
	xsi_register_didat("work_m_06688200506855175694_3929880127", "isim/FPCVT_tb_isim_beh.exe.sim/work/m_06688200506855175694_3929880127.didat");
	xsi_register_executes(pe);
}
