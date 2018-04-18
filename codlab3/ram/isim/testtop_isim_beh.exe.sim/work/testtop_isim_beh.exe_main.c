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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001883506334_0886308060_init();
    work_m_00000000002385306561_3783644070_init();
    xilinxcorelib_ver_m_00000000001358910285_1733429775_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_0732988460_init();
    xilinxcorelib_ver_m_00000000001603977570_1829167227_init();
    work_m_00000000002918048620_2356217838_init();
    work_m_00000000002518757706_3037777339_init();
    work_m_00000000004031668986_3823007873_init();
    work_m_00000000002705598459_1041121107_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002705598459_1041121107");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
