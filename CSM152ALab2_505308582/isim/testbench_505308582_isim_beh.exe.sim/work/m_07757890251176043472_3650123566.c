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
static const char *ng0 = "/home/ashley/Documents/M152A/CSM152ALab2_505308582/clock_gen.v";
static unsigned int ng1[] = {3U, 0U};



static void Always_141_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t16[8];
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
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3656);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(141, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(144, ng0);

LAB10:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = (t0 + 1768);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 15U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 15U);
    xsi_vlogtype_concat(t13, 5, 5, 2U, t16, 4, t14, 1);
    t27 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 5, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(142, ng0);

LAB9:    xsi_set_current_line(143, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB8;

}

static void Always_149_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t16[8];
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
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3672);
    *((int *)t2) = 1;
    t3 = (t0 + 3120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(149, ng0);

LAB5:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(152, ng0);

LAB10:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = (t0 + 1928);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 15U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 15U);
    xsi_vlogtype_concat(t13, 5, 5, 2U, t16, 4, t14, 1);
    t27 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 5, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(150, ng0);

LAB9:    xsi_set_current_line(151, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB8;

}

static void Cont_157_2(char *t0)
{
    char t3[8];
    char t21[8];
    char t36[8];
    char t45[8];
    char t61[8];
    char t70[8];
    char t78[8];
    char t106[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    memset(t21, 0, 8);
    t22 = (t3 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t3);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB13:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    memcpy(t114, t21, 8);

LAB16:    t146 = (t0 + 3768);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    memset(t150, 0, 8);
    t151 = 1U;
    t152 = t151;
    t153 = (t114 + 4);
    t154 = *((unsigned int *)t114);
    t151 = (t151 & t154);
    t155 = *((unsigned int *)t153);
    t152 = (t152 & t155);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t157 | t151);
    t158 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t158 | t152);
    xsi_driver_vfirst_trans(t146, 0, 0);
    t159 = (t0 + 3688);
    *((int *)t159) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB12:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 1768);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 4);
    t41 = (t40 & 1);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 4);
    t44 = (t43 & 1);
    *((unsigned int *)t37) = t44;
    memset(t45, 0, 8);
    t46 = (t36 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t36);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t46) != 0)
        goto LAB19;

LAB20:    t53 = (t45 + 4);
    t54 = *((unsigned int *)t45);
    t55 = (!(t54));
    t56 = *((unsigned int *)t53);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB21;

LAB22:    memcpy(t78, t45, 8);

LAB23:    memset(t106, 0, 8);
    t107 = (t78 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t78);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t107) != 0)
        goto LAB33;

LAB34:    t115 = *((unsigned int *)t21);
    t116 = *((unsigned int *)t106);
    t117 = (t115 & t116);
    *((unsigned int *)t114) = t117;
    t118 = (t21 + 4);
    t119 = (t106 + 4);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB16;

LAB17:    *((unsigned int *)t45) = 1;
    goto LAB20;

LAB19:    t52 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB20;

LAB21:    t58 = (t0 + 1928);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t63 = (t60 + 4);
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 4);
    t66 = (t65 & 1);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 4);
    t69 = (t68 & 1);
    *((unsigned int *)t62) = t69;
    memset(t70, 0, 8);
    t71 = (t61 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t61);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t71) != 0)
        goto LAB26;

LAB27:    t79 = *((unsigned int *)t45);
    t80 = *((unsigned int *)t70);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = (t45 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB24:    *((unsigned int *)t70) = 1;
    goto LAB27;

LAB26:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB27;

LAB28:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t45 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t92);
    t95 = (~(t94));
    t96 = *((unsigned int *)t45);
    t97 = (t96 & t95);
    t98 = *((unsigned int *)t93);
    t99 = (~(t98));
    t100 = *((unsigned int *)t70);
    t101 = (t100 & t99);
    t102 = (~(t97));
    t103 = (~(t101));
    t104 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t104 & t102);
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    goto LAB30;

LAB31:    *((unsigned int *)t106) = 1;
    goto LAB34;

LAB33:    t113 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB34;

LAB35:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t21 + 4);
    t129 = (t106 + 4);
    t130 = *((unsigned int *)t21);
    t131 = (~(t130));
    t132 = *((unsigned int *)t128);
    t133 = (~(t132));
    t134 = *((unsigned int *)t106);
    t135 = (~(t134));
    t136 = *((unsigned int *)t129);
    t137 = (~(t136));
    t138 = (t131 & t133);
    t139 = (t135 & t137);
    t140 = (~(t138));
    t141 = (~(t139));
    t142 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t142 & t140);
    t143 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t143 & t141);
    t144 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t144 & t140);
    t145 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t145 & t141);
    goto LAB37;

}


extern void work_m_07757890251176043472_3650123566_init()
{
	static char *pe[] = {(void *)Always_141_0,(void *)Always_149_1,(void *)Cont_157_2};
	xsi_register_didat("work_m_07757890251176043472_3650123566", "isim/testbench_505308582_isim_beh.exe.sim/work/m_07757890251176043472_3650123566.didat");
	xsi_register_executes(pe);
}
