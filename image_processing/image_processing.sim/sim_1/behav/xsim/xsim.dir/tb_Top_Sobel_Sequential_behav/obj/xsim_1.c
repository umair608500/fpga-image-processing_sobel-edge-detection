/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_76(char*, char *);
extern void execute_77(char*, char *);
extern void execute_432(char*, char *);
extern void execute_433(char*, char *);
extern void execute_434(char*, char *);
extern void execute_44(char*, char *);
extern void execute_87(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_411(char*, char *);
extern void execute_412(char*, char *);
extern void execute_413(char*, char *);
extern void execute_414(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_416(char*, char *);
extern void execute_417(char*, char *);
extern void execute_418(char*, char *);
extern void execute_419(char*, char *);
extern void execute_420(char*, char *);
extern void execute_421(char*, char *);
extern void execute_422(char*, char *);
extern void execute_423(char*, char *);
extern void execute_424(char*, char *);
extern void execute_425(char*, char *);
extern void execute_426(char*, char *);
extern void execute_427(char*, char *);
extern void execute_428(char*, char *);
extern void execute_429(char*, char *);
extern void execute_430(char*, char *);
extern void execute_431(char*, char *);
extern void execute_4(char*, char *);
extern void execute_6(char*, char *);
extern void execute_82(char*, char *);
extern void execute_83(char*, char *);
extern void execute_84(char*, char *);
extern void execute_85(char*, char *);
extern void execute_86(char*, char *);
extern void execute_219(char*, char *);
extern void execute_220(char*, char *);
extern void execute_229(char*, char *);
extern void execute_230(char*, char *);
extern void execute_231(char*, char *);
extern void execute_232(char*, char *);
extern void execute_233(char*, char *);
extern void execute_235(char*, char *);
extern void execute_240(char*, char *);
extern void execute_241(char*, char *);
extern void execute_242(char*, char *);
extern void execute_243(char*, char *);
extern void execute_244(char*, char *);
extern void execute_9(char*, char *);
extern void execute_37(char*, char *);
extern void execute_204(char*, char *);
extern void execute_205(char*, char *);
extern void execute_206(char*, char *);
extern void execute_207(char*, char *);
extern void execute_208(char*, char *);
extern void execute_209(char*, char *);
extern void execute_210(char*, char *);
extern void execute_18(char*, char *);
extern void execute_19(char*, char *);
extern void execute_20(char*, char *);
extern void execute_34(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_136(char*, char *);
extern void execute_137(char*, char *);
extern void execute_138(char*, char *);
extern void execute_139(char*, char *);
extern void execute_140(char*, char *);
extern void execute_141(char*, char *);
extern void execute_142(char*, char *);
extern void execute_144(char*, char *);
extern void execute_145(char*, char *);
extern void execute_146(char*, char *);
extern void execute_147(char*, char *);
extern void execute_151(char*, char *);
extern void execute_155(char*, char *);
extern void execute_156(char*, char *);
extern void execute_157(char*, char *);
extern void execute_158(char*, char *);
extern void execute_159(char*, char *);
extern void execute_160(char*, char *);
extern void execute_163(char*, char *);
extern void execute_165(char*, char *);
extern void execute_166(char*, char *);
extern void execute_167(char*, char *);
extern void execute_168(char*, char *);
extern void execute_169(char*, char *);
extern void execute_170(char*, char *);
extern void execute_171(char*, char *);
extern void execute_172(char*, char *);
extern void execute_173(char*, char *);
extern void execute_174(char*, char *);
extern void execute_175(char*, char *);
extern void execute_176(char*, char *);
extern void execute_177(char*, char *);
extern void execute_178(char*, char *);
extern void execute_22(char*, char *);
extern void execute_23(char*, char *);
extern void execute_24(char*, char *);
extern void execute_25(char*, char *);
extern void execute_148(char*, char *);
extern void execute_149(char*, char *);
extern void execute_150(char*, char *);
extern void execute_32(char*, char *);
extern void execute_33(char*, char *);
extern void execute_39(char*, char *);
extern void execute_41(char*, char *);
extern void execute_43(char*, char *);
extern void execute_380(char*, char *);
extern void execute_381(char*, char *);
extern void execute_390(char*, char *);
extern void execute_391(char*, char *);
extern void execute_392(char*, char *);
extern void execute_393(char*, char *);
extern void execute_394(char*, char *);
extern void execute_396(char*, char *);
extern void execute_401(char*, char *);
extern void execute_402(char*, char *);
extern void execute_403(char*, char *);
extern void execute_404(char*, char *);
extern void execute_405(char*, char *);
extern void execute_47(char*, char *);
extern void execute_75(char*, char *);
extern void execute_365(char*, char *);
extern void execute_366(char*, char *);
extern void execute_367(char*, char *);
extern void execute_368(char*, char *);
extern void execute_369(char*, char *);
extern void execute_370(char*, char *);
extern void execute_371(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_58(char*, char *);
extern void execute_72(char*, char *);
extern void execute_73(char*, char *);
extern void execute_74(char*, char *);
extern void execute_297(char*, char *);
extern void execute_298(char*, char *);
extern void execute_299(char*, char *);
extern void execute_300(char*, char *);
extern void execute_301(char*, char *);
extern void execute_302(char*, char *);
extern void execute_303(char*, char *);
extern void execute_305(char*, char *);
extern void execute_306(char*, char *);
extern void execute_307(char*, char *);
extern void execute_308(char*, char *);
extern void execute_312(char*, char *);
extern void execute_316(char*, char *);
extern void execute_317(char*, char *);
extern void execute_318(char*, char *);
extern void execute_319(char*, char *);
extern void execute_320(char*, char *);
extern void execute_321(char*, char *);
extern void execute_324(char*, char *);
extern void execute_326(char*, char *);
extern void execute_327(char*, char *);
extern void execute_328(char*, char *);
extern void execute_329(char*, char *);
extern void execute_330(char*, char *);
extern void execute_331(char*, char *);
extern void execute_332(char*, char *);
extern void execute_333(char*, char *);
extern void execute_334(char*, char *);
extern void execute_335(char*, char *);
extern void execute_336(char*, char *);
extern void execute_337(char*, char *);
extern void execute_338(char*, char *);
extern void execute_339(char*, char *);
extern void execute_79(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_435(char*, char *);
extern void execute_436(char*, char *);
extern void execute_437(char*, char *);
extern void execute_438(char*, char *);
extern void execute_439(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_31(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[181] = {(funcp)execute_76, (funcp)execute_77, (funcp)execute_432, (funcp)execute_433, (funcp)execute_434, (funcp)execute_44, (funcp)execute_87, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_411, (funcp)execute_412, (funcp)execute_413, (funcp)execute_414, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_416, (funcp)execute_417, (funcp)execute_418, (funcp)execute_419, (funcp)execute_420, (funcp)execute_421, (funcp)execute_422, (funcp)execute_423, (funcp)execute_424, (funcp)execute_425, (funcp)execute_426, (funcp)execute_427, (funcp)execute_428, (funcp)execute_429, (funcp)execute_430, (funcp)execute_431, (funcp)execute_4, (funcp)execute_6, (funcp)execute_82, (funcp)execute_83, (funcp)execute_84, (funcp)execute_85, (funcp)execute_86, (funcp)execute_219, (funcp)execute_220, (funcp)execute_229, (funcp)execute_230, (funcp)execute_231, (funcp)execute_232, (funcp)execute_233, (funcp)execute_235, (funcp)execute_240, (funcp)execute_241, (funcp)execute_242, (funcp)execute_243, (funcp)execute_244, (funcp)execute_9, (funcp)execute_37, (funcp)execute_204, (funcp)execute_205, (funcp)execute_206, (funcp)execute_207, (funcp)execute_208, (funcp)execute_209, (funcp)execute_210, (funcp)execute_18, (funcp)execute_19, (funcp)execute_20, (funcp)execute_34, (funcp)execute_35, (funcp)execute_36, (funcp)execute_136, (funcp)execute_137, (funcp)execute_138, (funcp)execute_139, (funcp)execute_140, (funcp)execute_141, (funcp)execute_142, (funcp)execute_144, (funcp)execute_145, (funcp)execute_146, (funcp)execute_147, (funcp)execute_151, (funcp)execute_155, (funcp)execute_156, (funcp)execute_157, (funcp)execute_158, (funcp)execute_159, (funcp)execute_160, (funcp)execute_163, (funcp)execute_165, (funcp)execute_166, (funcp)execute_167, (funcp)execute_168, (funcp)execute_169, (funcp)execute_170, (funcp)execute_171, (funcp)execute_172, (funcp)execute_173, (funcp)execute_174, (funcp)execute_175, (funcp)execute_176, (funcp)execute_177, (funcp)execute_178, (funcp)execute_22, (funcp)execute_23, (funcp)execute_24, (funcp)execute_25, (funcp)execute_148, (funcp)execute_149, (funcp)execute_150, (funcp)execute_32, (funcp)execute_33, (funcp)execute_39, (funcp)execute_41, (funcp)execute_43, (funcp)execute_380, (funcp)execute_381, (funcp)execute_390, (funcp)execute_391, (funcp)execute_392, (funcp)execute_393, (funcp)execute_394, (funcp)execute_396, (funcp)execute_401, (funcp)execute_402, (funcp)execute_403, (funcp)execute_404, (funcp)execute_405, (funcp)execute_47, (funcp)execute_75, (funcp)execute_365, (funcp)execute_366, (funcp)execute_367, (funcp)execute_368, (funcp)execute_369, (funcp)execute_370, (funcp)execute_371, (funcp)execute_56, (funcp)execute_57, (funcp)execute_58, (funcp)execute_72, (funcp)execute_73, (funcp)execute_74, (funcp)execute_297, (funcp)execute_298, (funcp)execute_299, (funcp)execute_300, (funcp)execute_301, (funcp)execute_302, (funcp)execute_303, (funcp)execute_305, (funcp)execute_306, (funcp)execute_307, (funcp)execute_308, (funcp)execute_312, (funcp)execute_316, (funcp)execute_317, (funcp)execute_318, (funcp)execute_319, (funcp)execute_320, (funcp)execute_321, (funcp)execute_324, (funcp)execute_326, (funcp)execute_327, (funcp)execute_328, (funcp)execute_329, (funcp)execute_330, (funcp)execute_331, (funcp)execute_332, (funcp)execute_333, (funcp)execute_334, (funcp)execute_335, (funcp)execute_336, (funcp)execute_337, (funcp)execute_338, (funcp)execute_339, (funcp)execute_79, (funcp)execute_80, (funcp)execute_81, (funcp)execute_435, (funcp)execute_436, (funcp)execute_437, (funcp)execute_438, (funcp)execute_439, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_31, (funcp)transaction_32};
const int NumRelocateId= 181;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/tb_Top_Sobel_Sequential_behav/xsim.reloc",  (void **)funcTab, 181);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/tb_Top_Sobel_Sequential_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/tb_Top_Sobel_Sequential_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/tb_Top_Sobel_Sequential_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/tb_Top_Sobel_Sequential_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/tb_Top_Sobel_Sequential_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
