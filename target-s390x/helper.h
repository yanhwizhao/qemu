#include "exec/def-helper.h"

DEF_HELPER_2(exception, void, env, i32)
DEF_HELPER_4(nc, i32, env, i32, i64, i64)
DEF_HELPER_4(oc, i32, env, i32, i64, i64)
DEF_HELPER_4(xc, i32, env, i32, i64, i64)
DEF_HELPER_4(mvc, void, env, i32, i64, i64)
DEF_HELPER_4(clc, i32, env, i32, i64, i64)
DEF_HELPER_3(mvcl, i32, env, i32, i32)
DEF_HELPER_FLAGS_1(set_cc_comp_s32, TCG_CALL_NO_RWG_SE, i32, s32)
DEF_HELPER_FLAGS_1(set_cc_comp_s64, TCG_CALL_NO_RWG_SE, i32, s64)
DEF_HELPER_FLAGS_2(set_cc_icm, TCG_CALL_NO_RWG_SE, i32, i32, i32)
DEF_HELPER_4(clm, i32, env, i32, i32, i64)
DEF_HELPER_4(stcm, void, env, i32, i32, i64)
DEF_HELPER_3(mlg, void, env, i32, i64)
DEF_HELPER_3(dlg, void, env, i32, i64)
DEF_HELPER_FLAGS_3(set_cc_add64, TCG_CALL_NO_RWG_SE, i32, s64, s64, s64)
DEF_HELPER_FLAGS_3(set_cc_addu64, TCG_CALL_NO_RWG_SE, i32, i64, i64, i64)
DEF_HELPER_FLAGS_3(set_cc_add32, TCG_CALL_NO_RWG_SE, i32, s32, s32, s32)
DEF_HELPER_FLAGS_3(set_cc_addu32, TCG_CALL_NO_RWG_SE, i32, i32, i32, i32)
DEF_HELPER_FLAGS_3(set_cc_sub64, TCG_CALL_NO_RWG_SE, i32, s64, s64, s64)
DEF_HELPER_FLAGS_3(set_cc_subu64, TCG_CALL_NO_RWG_SE, i32, i64, i64, i64)
DEF_HELPER_FLAGS_3(set_cc_sub32, TCG_CALL_NO_RWG_SE, i32, s32, s32, s32)
DEF_HELPER_FLAGS_3(set_cc_subu32, TCG_CALL_NO_RWG_SE, i32, i32, i32, i32)
DEF_HELPER_4(srst, i32, env, i32, i32, i32)
DEF_HELPER_4(clst, i32, env, i32, i32, i32)
DEF_HELPER_4(mvpg, void, env, i64, i64, i64)
DEF_HELPER_4(mvst, void, env, i32, i32, i32)
DEF_HELPER_4(csg, i32, env, i32, i64, i32)
DEF_HELPER_4(cdsg, i32, env, i32, i64, i32)
DEF_HELPER_4(cs, i32, env, i32, i64, i32)
DEF_HELPER_5(ex, i32, env, i32, i64, i64, i64)
DEF_HELPER_FLAGS_1(abs_i32, TCG_CALL_NO_RWG_SE, i32, s32)
DEF_HELPER_FLAGS_1(nabs_i32, TCG_CALL_NO_RWG_SE, s32, s32)
DEF_HELPER_FLAGS_1(abs_i64, TCG_CALL_NO_RWG_SE, i64, s64)
DEF_HELPER_FLAGS_1(nabs_i64, TCG_CALL_NO_RWG_SE, s64, s64)
DEF_HELPER_4(stcmh, void, env, i32, i64, i32)
DEF_HELPER_4(icmh, i32, env, i32, i64, i32)
DEF_HELPER_3(ipm, void, env, i32, i32)
DEF_HELPER_FLAGS_3(addc_u32, TCG_CALL_NO_RWG_SE, i32, i32, i32, i32)
DEF_HELPER_FLAGS_3(set_cc_addc_u64, TCG_CALL_NO_RWG_SE, i32, i64, i64, i64)
DEF_HELPER_4(stam, void, env, i32, i64, i32)
DEF_HELPER_4(lam, void, env, i32, i64, i32)
DEF_HELPER_4(mvcle, i32, env, i32, i64, i32)
DEF_HELPER_4(clcle, i32, env, i32, i64, i32)
DEF_HELPER_4(slb, i32, env, i32, i32, i32)
DEF_HELPER_5(slbg, i32, env, i32, i32, i64, i64)
DEF_HELPER_3(cefbr, void, env, i32, s32)
DEF_HELPER_3(cdfbr, void, env, i32, s32)
DEF_HELPER_3(cxfbr, void, env, i32, s32)
DEF_HELPER_3(cegbr, void, env, i32, s64)
DEF_HELPER_3(cdgbr, void, env, i32, s64)
DEF_HELPER_3(cxgbr, void, env, i32, s64)
DEF_HELPER_3(adbr, i32, env, i32, i32)
DEF_HELPER_3(aebr, i32, env, i32, i32)
DEF_HELPER_3(sebr, i32, env, i32, i32)
DEF_HELPER_3(sdbr, i32, env, i32, i32)
DEF_HELPER_3(debr, void, env, i32, i32)
DEF_HELPER_3(dxbr, void, env, i32, i32)
DEF_HELPER_3(mdbr, void, env, i32, i32)
DEF_HELPER_3(mxbr, void, env, i32, i32)
DEF_HELPER_3(ldebr, void, env, i32, i32)
DEF_HELPER_3(ldxbr, void, env, i32, i32)
DEF_HELPER_3(lxdbr, void, env, i32, i32)
DEF_HELPER_3(ledbr, void, env, i32, i32)
DEF_HELPER_3(lexbr, void, env, i32, i32)
DEF_HELPER_3(lpebr, i32, env, i32, i32)
DEF_HELPER_3(lpdbr, i32, env, i32, i32)
DEF_HELPER_3(lpxbr, i32, env, i32, i32)
DEF_HELPER_3(ltebr, i32, env, i32, i32)
DEF_HELPER_3(ltdbr, i32, env, i32, i32)
DEF_HELPER_3(ltxbr, i32, env, i32, i32)
DEF_HELPER_3(lcebr, i32, env, i32, i32)
DEF_HELPER_3(lcdbr, i32, env, i32, i32)
DEF_HELPER_3(lcxbr, i32, env, i32, i32)
DEF_HELPER_3(aeb, void, env, i32, i32)
DEF_HELPER_3(deb, void, env, i32, i32)
DEF_HELPER_3(meeb, void, env, i32, i32)
DEF_HELPER_3(cdb, i32, env, i32, i64)
DEF_HELPER_3(adb, i32, env, i32, i64)
DEF_HELPER_3(seb, void, env, i32, i32)
DEF_HELPER_3(sdb, i32, env, i32, i64)
DEF_HELPER_3(mdb, void, env, i32, i64)
DEF_HELPER_3(ddb, void, env, i32, i64)
DEF_HELPER_FLAGS_3(cebr, TCG_CALL_NO_SE, i32, env, i32, i32)
DEF_HELPER_FLAGS_3(cdbr, TCG_CALL_NO_SE, i32, env, i32, i32)
DEF_HELPER_FLAGS_3(cxbr, TCG_CALL_NO_SE, i32, env, i32, i32)
DEF_HELPER_4(cgebr, i32, env, i32, i32, i32)
DEF_HELPER_4(cgdbr, i32, env, i32, i32, i32)
DEF_HELPER_4(cgxbr, i32, env, i32, i32, i32)
DEF_HELPER_2(lzer, void, env, i32)
DEF_HELPER_2(lzdr, void, env, i32)
DEF_HELPER_2(lzxr, void, env, i32)
DEF_HELPER_4(cfebr, i32, env, i32, i32, i32)
DEF_HELPER_4(cfdbr, i32, env, i32, i32, i32)
DEF_HELPER_4(cfxbr, i32, env, i32, i32, i32)
DEF_HELPER_3(axbr, i32, env, i32, i32)
DEF_HELPER_3(sxbr, i32, env, i32, i32)
DEF_HELPER_3(meebr, void, env, i32, i32)
DEF_HELPER_3(ddbr, void, env, i32, i32)
DEF_HELPER_4(madb, void, env, i32, i64, i32)
DEF_HELPER_4(maebr, void, env, i32, i32, i32)
DEF_HELPER_4(madbr, void, env, i32, i32, i32)
DEF_HELPER_4(msdbr, void, env, i32, i32, i32)
DEF_HELPER_3(ldeb, void, env, i32, i64)
DEF_HELPER_3(lxdb, void, env, i32, i64)
DEF_HELPER_FLAGS_3(tceb, TCG_CALL_NO_SE, i32, env, i32, i64)
DEF_HELPER_FLAGS_3(tcdb, TCG_CALL_NO_SE, i32, env, i32, i64)
DEF_HELPER_FLAGS_3(tcxb, TCG_CALL_NO_SE, i32, env, i32, i64)
DEF_HELPER_3(flogr, i32, env, i32, i64)
DEF_HELPER_3(sqdbr, void, env, i32, i32)
DEF_HELPER_FLAGS_1(cvd, TCG_CALL_NO_RWG_SE, i64, s32)
DEF_HELPER_4(unpk, void, env, i32, i64, i64)
DEF_HELPER_4(tr, void, env, i32, i64, i64)

DEF_HELPER_3(servc, i32, env, i32, i64)
DEF_HELPER_4(diag, i64, env, i32, i64, i64)
DEF_HELPER_3(load_psw, void, env, i64, i64)
DEF_HELPER_1(program_interrupt, void, i32)
DEF_HELPER_FLAGS_2(stidp, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(spx, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_1(sck, TCG_CALL_NO_RWG, i32, i64)
DEF_HELPER_2(stck, i32, env, i64)
DEF_HELPER_2(stcke, i32, env, i64)
DEF_HELPER_FLAGS_2(sckc, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(stckc, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(spt, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(stpt, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_4(stsi, i32, env, i64, i32, i32)
DEF_HELPER_4(lctl, void, env, i32, i64, i32)
DEF_HELPER_4(lctlg, void, env, i32, i64, i32)
DEF_HELPER_4(stctl, void, env, i32, i64, i32)
DEF_HELPER_4(stctg, void, env, i32, i64, i32)
DEF_HELPER_FLAGS_2(tprot, TCG_CALL_NO_RWG, i32, i64, i64)
DEF_HELPER_FLAGS_2(iske, TCG_CALL_NO_RWG_SE, i64, env, i64)
DEF_HELPER_FLAGS_3(sske, TCG_CALL_NO_RWG, void, env, i32, i64)
DEF_HELPER_FLAGS_3(rrbe, TCG_CALL_NO_RWG, i32, env, i32, i64)
DEF_HELPER_3(csp, i32, env, i32, i32)
DEF_HELPER_4(mvcs, i32, env, i64, i64, i64)
DEF_HELPER_4(mvcp, i32, env, i64, i64, i64)
DEF_HELPER_4(sigp, i32, env, i64, i32, i64)
DEF_HELPER_2(sacf, void, env, i64)
DEF_HELPER_FLAGS_3(ipte, TCG_CALL_NO_RWG, void, env, i64, i64)
DEF_HELPER_FLAGS_1(ptlb, TCG_CALL_NO_RWG, void, env)
DEF_HELPER_3(lra, i32, env, i64, i32)
DEF_HELPER_3(stura, void, env, i64, i32)
DEF_HELPER_3(cksm, void, env, i32, i32)

DEF_HELPER_FLAGS_5(calc_cc, TCG_CALL_NO_RWG_SE,
                   i32, env, i32, i64, i64, i64)

#include "exec/def-helper.h"
