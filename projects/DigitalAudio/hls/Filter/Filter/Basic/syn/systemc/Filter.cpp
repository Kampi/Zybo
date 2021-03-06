// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "Filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Filter::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Filter::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<9> Filter::ap_ST_fsm_state1 = "1";
const sc_lv<9> Filter::ap_ST_fsm_state2 = "10";
const sc_lv<9> Filter::ap_ST_fsm_state3 = "100";
const sc_lv<9> Filter::ap_ST_fsm_state4 = "1000";
const sc_lv<9> Filter::ap_ST_fsm_state5 = "10000";
const sc_lv<9> Filter::ap_ST_fsm_state6 = "100000";
const sc_lv<9> Filter::ap_ST_fsm_state7 = "1000000";
const sc_lv<9> Filter::ap_ST_fsm_state8 = "10000000";
const sc_lv<9> Filter::ap_ST_fsm_state9 = "100000000";
const sc_lv<32> Filter::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> Filter::ap_const_lv32_7 = "111";
const sc_lv<32> Filter::ap_const_lv32_8 = "1000";
const sc_lv<1> Filter::ap_const_lv1_1 = "1";
const sc_lv<32> Filter::ap_const_lv32_1 = "1";
const sc_lv<1> Filter::ap_const_lv1_0 = "0";
const sc_lv<32> Filter::ap_const_lv32_2 = "10";
const sc_lv<32> Filter::ap_const_lv32_3 = "11";
const sc_lv<32> Filter::ap_const_lv32_4 = "100";
const sc_lv<32> Filter::ap_const_lv32_5 = "101";
const sc_lv<32> Filter::ap_const_lv32_6 = "110";
const sc_lv<48> Filter::ap_const_lv48_0 = "000000000000000000000000000000000000000000000000";
const sc_lv<6> Filter::ap_const_lv6_12 = "10010";
const sc_lv<5> Filter::ap_const_lv5_0 = "00000";
const sc_lv<6> Filter::ap_const_lv6_3F = "111111";
const sc_lv<32> Filter::ap_const_lv32_10 = "10000";
const sc_lv<32> Filter::ap_const_lv32_1F = "11111";
const sc_lv<6> Filter::ap_const_lv6_0 = "000000";
const sc_lv<32> Filter::ap_const_lv32_20 = "100000";
const sc_lv<32> Filter::ap_const_lv32_2F = "101111";
const sc_lv<15> Filter::ap_const_lv15_0 = "000000000000000";
const bool Filter::ap_const_boolean_1 = true;

Filter::Filter(sc_module_name name) : sc_module(name), mVcdFile(0) {
    ShiftRegRight_V_U = new Filter_ShiftRegRibkb("ShiftRegRight_V_U");
    ShiftRegRight_V_U->clk(ap_clk);
    ShiftRegRight_V_U->reset(ap_rst_n_inv);
    ShiftRegRight_V_U->address0(ShiftRegRight_V_address0);
    ShiftRegRight_V_U->ce0(ShiftRegRight_V_ce0);
    ShiftRegRight_V_U->we0(ShiftRegRight_V_we0);
    ShiftRegRight_V_U->d0(ShiftRegRight_V_d0);
    ShiftRegRight_V_U->q0(ShiftRegRight_V_q0);
    ShiftRegLeft_V_U = new Filter_ShiftRegRibkb("ShiftRegLeft_V_U");
    ShiftRegLeft_V_U->clk(ap_clk);
    ShiftRegLeft_V_U->reset(ap_rst_n_inv);
    ShiftRegLeft_V_U->address0(ShiftRegLeft_V_address0);
    ShiftRegLeft_V_U->ce0(ShiftRegLeft_V_ce0);
    ShiftRegLeft_V_U->we0(ShiftRegLeft_V_we0);
    ShiftRegLeft_V_U->d0(ShiftRegLeft_V_d0);
    ShiftRegLeft_V_U->q0(ShiftRegLeft_V_q0);
    Coefficients_V_U = new Filter_CoefficiendEe("Coefficients_V_U");
    Coefficients_V_U->clk(ap_clk);
    Coefficients_V_U->reset(ap_rst_n_inv);
    Coefficients_V_U->address0(Coefficients_V_address0);
    Coefficients_V_U->ce0(Coefficients_V_ce0);
    Coefficients_V_U->q0(Coefficients_V_q0);
    Filter_mul_mul_16eOg_U1 = new Filter_mul_mul_16eOg<1,1,16,18,33>("Filter_mul_mul_16eOg_U1");
    Filter_mul_mul_16eOg_U1->din0(ShiftRegRight_V_load_1_reg_421);
    Filter_mul_mul_16eOg_U1->din1(mul_ln703_1_fu_343_p1);
    Filter_mul_mul_16eOg_U1->dout(mul_ln703_1_fu_343_p2);
    Filter_mul_mul_16eOg_U2 = new Filter_mul_mul_16eOg<1,1,16,18,33>("Filter_mul_mul_16eOg_U2");
    Filter_mul_mul_16eOg_U2->din0(ShiftRegLeft_V_load_1_reg_431);
    Filter_mul_mul_16eOg_U2->din1(mul_ln703_fu_349_p1);
    Filter_mul_mul_16eOg_U2->dout(mul_ln703_fu_349_p2);
    regslice_both_DataIn_U = new regslice_both<32>("regslice_both_DataIn_U");
    regslice_both_DataIn_U->ap_clk(ap_clk);
    regslice_both_DataIn_U->ap_rst(ap_rst_n_inv);
    regslice_both_DataIn_U->data_in(DataIn_TDATA);
    regslice_both_DataIn_U->vld_in(DataIn_TVALID);
    regslice_both_DataIn_U->ack_in(regslice_both_DataIn_U_ack_in);
    regslice_both_DataIn_U->data_out(DataIn_TDATA_int);
    regslice_both_DataIn_U->vld_out(DataIn_TVALID_int);
    regslice_both_DataIn_U->ack_out(DataIn_TREADY_int);
    regslice_both_DataIn_U->apdone_blk(regslice_both_DataIn_U_apdone_blk);
    regslice_both_DataOut_U = new regslice_both<32>("regslice_both_DataOut_U");
    regslice_both_DataOut_U->ap_clk(ap_clk);
    regslice_both_DataOut_U->ap_rst(ap_rst_n_inv);
    regslice_both_DataOut_U->data_in(storemerge_reg_212);
    regslice_both_DataOut_U->vld_in(DataOut_TVALID_int);
    regslice_both_DataOut_U->ack_in(DataOut_TREADY_int);
    regslice_both_DataOut_U->data_out(DataOut_TDATA);
    regslice_both_DataOut_U->vld_out(regslice_both_DataOut_U_vld_out);
    regslice_both_DataOut_U->ack_out(DataOut_TREADY);
    regslice_both_DataOut_U->apdone_blk(regslice_both_DataOut_U_apdone_blk);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_AccLeft_V_fu_337_p2);
    sensitive << ( p_Val2_2_reg_176 );
    sensitive << ( shl_ln703_1_fu_330_p3 );

    SC_METHOD(thread_AccRight_V_fu_324_p2);
    sensitive << ( p_Val2_s_reg_188 );
    sensitive << ( shl_ln_fu_317_p3 );

    SC_METHOD(thread_Coefficients_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln33_fu_302_p1 );

    SC_METHOD(thread_Coefficients_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_DataIn_TDATA_blk_n);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( DataIn_TVALID_int );

    SC_METHOD(thread_DataIn_TREADY);
    sensitive << ( DataIn_TVALID );
    sensitive << ( regslice_both_DataIn_U_ack_in );

    SC_METHOD(thread_DataIn_TREADY_int);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( DataIn_TVALID_int );

    SC_METHOD(thread_DataOut_TDATA_blk_n);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( DataOut_TREADY_int );

    SC_METHOD(thread_DataOut_TVALID);
    sensitive << ( regslice_both_DataOut_U_vld_out );

    SC_METHOD(thread_DataOut_TVALID_int);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( DataOut_TREADY_int );

    SC_METHOD(thread_Enable_read_read_fu_82_p2);
    sensitive << ( Enable );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( DataIn_TVALID_int );

    SC_METHOD(thread_ShiftRegLeft_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln29_1_fu_263_p1 );
    sensitive << ( zext_ln29_fu_297_p1 );
    sensitive << ( zext_ln33_fu_302_p1 );

    SC_METHOD(thread_ShiftRegLeft_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_ShiftRegLeft_V_d0);
    sensitive << ( ShiftRegLeft_V_q0 );
    sensitive << ( trunc_ln703_1_reg_368 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ShiftRegLeft_V_we0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( icmp_ln22_reg_382 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ShiftRegRight_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln29_1_fu_263_p1 );
    sensitive << ( zext_ln29_fu_297_p1 );
    sensitive << ( zext_ln33_fu_302_p1 );

    SC_METHOD(thread_ShiftRegRight_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_ShiftRegRight_V_d0);
    sensitive << ( ShiftRegRight_V_q0 );
    sensitive << ( trunc_ln703_reg_363 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ShiftRegRight_V_we0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln22_fu_257_p2 );
    sensitive << ( icmp_ln22_reg_382 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_204_p4);
    sensitive << ( i_0_reg_200 );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_grp_fu_224_p0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_phi_mux_i_0_phi_fu_204_p4 );
    sensitive << ( i_0_reg_200 );

    SC_METHOD(thread_grp_fu_224_p2);
    sensitive << ( grp_fu_224_p0 );

    SC_METHOD(thread_icmp_ln22_fu_257_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( i_0_reg_200 );

    SC_METHOD(thread_mul_ln703_1_fu_343_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sext_ln1118_fu_308_p1 );

    SC_METHOD(thread_mul_ln703_fu_349_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sext_ln1118_fu_308_p1 );

    SC_METHOD(thread_or_ln_fu_289_p3);
    sensitive << ( tmp_1_fu_279_p4 );
    sensitive << ( tmp_fu_269_p4 );

    SC_METHOD(thread_sext_ln1118_fu_308_p1);
    sensitive << ( Coefficients_V_load_reg_426 );

    SC_METHOD(thread_sext_ln20_fu_245_p1);
    sensitive << ( i_0_reg_200 );

    SC_METHOD(thread_shl_ln703_1_fu_330_p3);
    sensitive << ( mul_ln703_reg_441 );

    SC_METHOD(thread_shl_ln_fu_317_p3);
    sensitive << ( mul_ln703_1_reg_436 );

    SC_METHOD(thread_tmp_1_fu_279_p4);
    sensitive << ( p_Val2_2_reg_176 );

    SC_METHOD(thread_tmp_2_fu_249_p3);
    sensitive << ( i_0_reg_200 );

    SC_METHOD(thread_tmp_fu_269_p4);
    sensitive << ( p_Val2_s_reg_188 );

    SC_METHOD(thread_trunc_ln703_fu_231_p1);
    sensitive << ( DataIn_TDATA_int );

    SC_METHOD(thread_zext_ln29_1_fu_263_p1);
    sensitive << ( grp_fu_224_p2 );

    SC_METHOD(thread_zext_ln29_fu_297_p1);
    sensitive << ( sext_ln20_reg_373 );

    SC_METHOD(thread_zext_ln33_fu_302_p1);
    sensitive << ( sext_ln20_reg_373 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( Enable_read_read_fu_82_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_2_fu_249_p3 );
    sensitive << ( regslice_both_DataOut_U_apdone_blk );
    sensitive << ( DataIn_TVALID_int );
    sensitive << ( DataOut_TREADY_int );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Filter_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, DataIn_TDATA, "(port)DataIn_TDATA");
    sc_trace(mVcdFile, DataIn_TVALID, "(port)DataIn_TVALID");
    sc_trace(mVcdFile, DataIn_TREADY, "(port)DataIn_TREADY");
    sc_trace(mVcdFile, DataOut_TDATA, "(port)DataOut_TDATA");
    sc_trace(mVcdFile, DataOut_TVALID, "(port)DataOut_TVALID");
    sc_trace(mVcdFile, DataOut_TREADY, "(port)DataOut_TREADY");
    sc_trace(mVcdFile, Enable, "(port)Enable");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, ShiftRegRight_V_address0, "ShiftRegRight_V_address0");
    sc_trace(mVcdFile, ShiftRegRight_V_ce0, "ShiftRegRight_V_ce0");
    sc_trace(mVcdFile, ShiftRegRight_V_we0, "ShiftRegRight_V_we0");
    sc_trace(mVcdFile, ShiftRegRight_V_d0, "ShiftRegRight_V_d0");
    sc_trace(mVcdFile, ShiftRegRight_V_q0, "ShiftRegRight_V_q0");
    sc_trace(mVcdFile, ShiftRegLeft_V_address0, "ShiftRegLeft_V_address0");
    sc_trace(mVcdFile, ShiftRegLeft_V_ce0, "ShiftRegLeft_V_ce0");
    sc_trace(mVcdFile, ShiftRegLeft_V_we0, "ShiftRegLeft_V_we0");
    sc_trace(mVcdFile, ShiftRegLeft_V_d0, "ShiftRegLeft_V_d0");
    sc_trace(mVcdFile, ShiftRegLeft_V_q0, "ShiftRegLeft_V_q0");
    sc_trace(mVcdFile, Coefficients_V_address0, "Coefficients_V_address0");
    sc_trace(mVcdFile, Coefficients_V_ce0, "Coefficients_V_ce0");
    sc_trace(mVcdFile, Coefficients_V_q0, "Coefficients_V_q0");
    sc_trace(mVcdFile, DataIn_TDATA_blk_n, "DataIn_TDATA_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, DataOut_TDATA_blk_n, "DataOut_TDATA_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, trunc_ln703_fu_231_p1, "trunc_ln703_fu_231_p1");
    sc_trace(mVcdFile, trunc_ln703_reg_363, "trunc_ln703_reg_363");
    sc_trace(mVcdFile, Enable_read_read_fu_82_p2, "Enable_read_read_fu_82_p2");
    sc_trace(mVcdFile, trunc_ln703_1_reg_368, "trunc_ln703_1_reg_368");
    sc_trace(mVcdFile, sext_ln20_fu_245_p1, "sext_ln20_fu_245_p1");
    sc_trace(mVcdFile, sext_ln20_reg_373, "sext_ln20_reg_373");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln22_fu_257_p2, "icmp_ln22_fu_257_p2");
    sc_trace(mVcdFile, icmp_ln22_reg_382, "icmp_ln22_reg_382");
    sc_trace(mVcdFile, tmp_2_fu_249_p3, "tmp_2_fu_249_p3");
    sc_trace(mVcdFile, or_ln_fu_289_p3, "or_ln_fu_289_p3");
    sc_trace(mVcdFile, grp_fu_224_p2, "grp_fu_224_p2");
    sc_trace(mVcdFile, i_reg_401, "i_reg_401");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ShiftRegRight_V_load_1_reg_421, "ShiftRegRight_V_load_1_reg_421");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, Coefficients_V_load_reg_426, "Coefficients_V_load_reg_426");
    sc_trace(mVcdFile, ShiftRegLeft_V_load_1_reg_431, "ShiftRegLeft_V_load_1_reg_431");
    sc_trace(mVcdFile, mul_ln703_1_fu_343_p2, "mul_ln703_1_fu_343_p2");
    sc_trace(mVcdFile, mul_ln703_1_reg_436, "mul_ln703_1_reg_436");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, mul_ln703_fu_349_p2, "mul_ln703_fu_349_p2");
    sc_trace(mVcdFile, mul_ln703_reg_441, "mul_ln703_reg_441");
    sc_trace(mVcdFile, AccRight_V_fu_324_p2, "AccRight_V_fu_324_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, AccLeft_V_fu_337_p2, "AccLeft_V_fu_337_p2");
    sc_trace(mVcdFile, p_Val2_2_reg_176, "p_Val2_2_reg_176");
    sc_trace(mVcdFile, p_Val2_s_reg_188, "p_Val2_s_reg_188");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_204_p4, "ap_phi_mux_i_0_phi_fu_204_p4");
    sc_trace(mVcdFile, i_0_reg_200, "i_0_reg_200");
    sc_trace(mVcdFile, storemerge_reg_212, "storemerge_reg_212");
    sc_trace(mVcdFile, zext_ln29_1_fu_263_p1, "zext_ln29_1_fu_263_p1");
    sc_trace(mVcdFile, zext_ln29_fu_297_p1, "zext_ln29_fu_297_p1");
    sc_trace(mVcdFile, zext_ln33_fu_302_p1, "zext_ln33_fu_302_p1");
    sc_trace(mVcdFile, grp_fu_224_p0, "grp_fu_224_p0");
    sc_trace(mVcdFile, tmp_1_fu_279_p4, "tmp_1_fu_279_p4");
    sc_trace(mVcdFile, tmp_fu_269_p4, "tmp_fu_269_p4");
    sc_trace(mVcdFile, shl_ln_fu_317_p3, "shl_ln_fu_317_p3");
    sc_trace(mVcdFile, shl_ln703_1_fu_330_p3, "shl_ln703_1_fu_330_p3");
    sc_trace(mVcdFile, mul_ln703_1_fu_343_p1, "mul_ln703_1_fu_343_p1");
    sc_trace(mVcdFile, sext_ln1118_fu_308_p1, "sext_ln1118_fu_308_p1");
    sc_trace(mVcdFile, mul_ln703_fu_349_p1, "mul_ln703_fu_349_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, regslice_both_DataOut_U_apdone_blk, "regslice_both_DataOut_U_apdone_blk");
    sc_trace(mVcdFile, regslice_both_DataIn_U_apdone_blk, "regslice_both_DataIn_U_apdone_blk");
    sc_trace(mVcdFile, DataIn_TDATA_int, "DataIn_TDATA_int");
    sc_trace(mVcdFile, DataIn_TVALID_int, "DataIn_TVALID_int");
    sc_trace(mVcdFile, DataIn_TREADY_int, "DataIn_TREADY_int");
    sc_trace(mVcdFile, regslice_both_DataIn_U_ack_in, "regslice_both_DataIn_U_ack_in");
    sc_trace(mVcdFile, DataOut_TVALID_int, "DataOut_TVALID_int");
    sc_trace(mVcdFile, DataOut_TREADY_int, "DataOut_TREADY_int");
    sc_trace(mVcdFile, regslice_both_DataOut_U_vld_out, "regslice_both_DataOut_U_vld_out");
#endif

    }
    mHdltvinHandle.open("Filter.hdltvin.dat");
    mHdltvoutHandle.open("Filter.hdltvout.dat");
}

Filter::~Filter() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete ShiftRegRight_V_U;
    delete ShiftRegLeft_V_U;
    delete Coefficients_V_U;
    delete Filter_mul_mul_16eOg_U1;
    delete Filter_mul_mul_16eOg_U2;
    delete regslice_both_DataIn_U;
    delete regslice_both_DataOut_U;
}

void Filter::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
        i_0_reg_200 = ap_const_lv6_12;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_0_reg_200 = i_reg_401.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
        p_Val2_2_reg_176 = ap_const_lv48_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        p_Val2_2_reg_176 = AccLeft_V_fu_337_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
        p_Val2_s_reg_188 = ap_const_lv48_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        p_Val2_s_reg_188 = AccRight_V_fu_324_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
        storemerge_reg_212 = DataIn_TDATA_int.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_249_p3.read()))) {
        storemerge_reg_212 = or_ln_fu_289_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        Coefficients_V_load_reg_426 = Coefficients_V_q0.read();
        ShiftRegLeft_V_load_1_reg_431 = ShiftRegLeft_V_q0.read();
        ShiftRegRight_V_load_1_reg_421 = ShiftRegRight_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_reg_401 = grp_fu_224_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0))) {
        icmp_ln22_reg_382 = icmp_ln22_fu_257_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mul_ln703_1_reg_436 = mul_ln703_1_fu_343_p2.read();
        mul_ln703_reg_441 = mul_ln703_fu_349_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        sext_ln20_reg_373 = sext_ln20_fu_245_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
        trunc_ln703_1_reg_368 = DataIn_TDATA_int.read().range(31, 16);
        trunc_ln703_reg_363 = trunc_ln703_fu_231_p1.read();
    }
}

void Filter::thread_AccLeft_V_fu_337_p2() {
    AccLeft_V_fu_337_p2 = (!p_Val2_2_reg_176.read().is_01() || !shl_ln703_1_fu_330_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_2_reg_176.read()) + sc_biguint<48>(shl_ln703_1_fu_330_p3.read()));
}

void Filter::thread_AccRight_V_fu_324_p2() {
    AccRight_V_fu_324_p2 = (!p_Val2_s_reg_188.read().is_01() || !shl_ln_fu_317_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_s_reg_188.read()) + sc_biguint<48>(shl_ln_fu_317_p3.read()));
}

void Filter::thread_Coefficients_V_address0() {
    Coefficients_V_address0 =  (sc_lv<5>) (zext_ln33_fu_302_p1.read());
}

void Filter::thread_Coefficients_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        Coefficients_V_ce0 = ap_const_logic_1;
    } else {
        Coefficients_V_ce0 = ap_const_logic_0;
    }
}

void Filter::thread_DataIn_TDATA_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        DataIn_TDATA_blk_n = DataIn_TVALID_int.read();
    } else {
        DataIn_TDATA_blk_n = ap_const_logic_1;
    }
}

void Filter::thread_DataIn_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, DataIn_TVALID.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_DataIn_U_ack_in.read()))) {
        DataIn_TREADY = ap_const_logic_1;
    } else {
        DataIn_TREADY = ap_const_logic_0;
    }
}

void Filter::thread_DataIn_TREADY_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
        DataIn_TREADY_int = ap_const_logic_1;
    } else {
        DataIn_TREADY_int = ap_const_logic_0;
    }
}

void Filter::thread_DataOut_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        DataOut_TDATA_blk_n = DataOut_TREADY_int.read();
    } else {
        DataOut_TDATA_blk_n = ap_const_logic_1;
    }
}

void Filter::thread_DataOut_TVALID() {
    DataOut_TVALID = regslice_both_DataOut_U_vld_out.read();
}

void Filter::thread_DataOut_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(DataOut_TREADY_int.read(), ap_const_logic_1))) {
        DataOut_TVALID_int = ap_const_logic_1;
    } else {
        DataOut_TVALID_int = ap_const_logic_0;
    }
}

void Filter::thread_Enable_read_read_fu_82_p2() {
    Enable_read_read_fu_82_p2 =  (sc_lv<1>) (Enable.read());
}

void Filter::thread_ShiftRegLeft_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShiftRegLeft_V_address0 =  (sc_lv<5>) (zext_ln33_fu_302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ShiftRegLeft_V_address0 =  (sc_lv<5>) (zext_ln29_fu_297_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read()))) {
        ShiftRegLeft_V_address0 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(icmp_ln22_fu_257_p2.read(), ap_const_lv1_0))) {
        ShiftRegLeft_V_address0 =  (sc_lv<5>) (zext_ln29_1_fu_263_p1.read());
    } else {
        ShiftRegLeft_V_address0 = "XXXXX";
    }
}

void Filter::thread_ShiftRegLeft_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(icmp_ln22_fu_257_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read())))) {
        ShiftRegLeft_V_ce0 = ap_const_logic_1;
    } else {
        ShiftRegLeft_V_ce0 = ap_const_logic_0;
    }
}

void Filter::thread_ShiftRegLeft_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ShiftRegLeft_V_d0 = ShiftRegLeft_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read()))) {
        ShiftRegLeft_V_d0 = trunc_ln703_1_reg_368.read();
    } else {
        ShiftRegLeft_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void Filter::thread_ShiftRegLeft_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln22_reg_382.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read())))) {
        ShiftRegLeft_V_we0 = ap_const_logic_1;
    } else {
        ShiftRegLeft_V_we0 = ap_const_logic_0;
    }
}

void Filter::thread_ShiftRegRight_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShiftRegRight_V_address0 =  (sc_lv<5>) (zext_ln33_fu_302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ShiftRegRight_V_address0 =  (sc_lv<5>) (zext_ln29_fu_297_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read()))) {
        ShiftRegRight_V_address0 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(icmp_ln22_fu_257_p2.read(), ap_const_lv1_0))) {
        ShiftRegRight_V_address0 =  (sc_lv<5>) (zext_ln29_1_fu_263_p1.read());
    } else {
        ShiftRegRight_V_address0 = "XXXXX";
    }
}

void Filter::thread_ShiftRegRight_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(icmp_ln22_fu_257_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read())))) {
        ShiftRegRight_V_ce0 = ap_const_logic_1;
    } else {
        ShiftRegRight_V_ce0 = ap_const_logic_0;
    }
}

void Filter::thread_ShiftRegRight_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ShiftRegRight_V_d0 = ShiftRegRight_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read()))) {
        ShiftRegRight_V_d0 = trunc_ln703_reg_363.read();
    } else {
        ShiftRegRight_V_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void Filter::thread_ShiftRegRight_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln22_reg_382.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_2_fu_249_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_257_p2.read())))) {
        ShiftRegRight_V_we0 = ap_const_logic_1;
    } else {
        ShiftRegRight_V_we0 = ap_const_logic_0;
    }
}

void Filter::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void Filter::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void Filter::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void Filter::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void Filter::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void Filter::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void Filter::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void Filter::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void Filter::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void Filter::thread_ap_phi_mux_i_0_phi_fu_204_p4() {
    ap_phi_mux_i_0_phi_fu_204_p4 = i_0_reg_200.read();
}

void Filter::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void Filter::thread_grp_fu_224_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_fu_224_p0 = i_0_reg_200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_224_p0 = ap_phi_mux_i_0_phi_fu_204_p4.read();
    } else {
        grp_fu_224_p0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void Filter::thread_grp_fu_224_p2() {
    grp_fu_224_p2 = (!grp_fu_224_p0.read().is_01() || !ap_const_lv6_3F.is_01())? sc_lv<6>(): (sc_bigint<6>(grp_fu_224_p0.read()) + sc_bigint<6>(ap_const_lv6_3F));
}

void Filter::thread_icmp_ln22_fu_257_p2() {
    icmp_ln22_fu_257_p2 = (!i_0_reg_200.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_200.read() == ap_const_lv6_0);
}

void Filter::thread_mul_ln703_1_fu_343_p1() {
    mul_ln703_1_fu_343_p1 =  (sc_lv<18>) (sext_ln1118_fu_308_p1.read());
}

void Filter::thread_mul_ln703_fu_349_p1() {
    mul_ln703_fu_349_p1 =  (sc_lv<18>) (sext_ln1118_fu_308_p1.read());
}

void Filter::thread_or_ln_fu_289_p3() {
    or_ln_fu_289_p3 = esl_concat<16,16>(tmp_1_fu_279_p4.read(), tmp_fu_269_p4.read());
}

void Filter::thread_sext_ln1118_fu_308_p1() {
    sext_ln1118_fu_308_p1 = esl_sext<33,18>(Coefficients_V_load_reg_426.read());
}

void Filter::thread_sext_ln20_fu_245_p1() {
    sext_ln20_fu_245_p1 = esl_sext<32,6>(i_0_reg_200.read());
}

void Filter::thread_shl_ln703_1_fu_330_p3() {
    shl_ln703_1_fu_330_p3 = esl_concat<33,15>(mul_ln703_reg_441.read(), ap_const_lv15_0);
}

void Filter::thread_shl_ln_fu_317_p3() {
    shl_ln_fu_317_p3 = esl_concat<33,15>(mul_ln703_1_reg_436.read(), ap_const_lv15_0);
}

void Filter::thread_tmp_1_fu_279_p4() {
    tmp_1_fu_279_p4 = p_Val2_2_reg_176.read().range(47, 32);
}

void Filter::thread_tmp_2_fu_249_p3() {
    tmp_2_fu_249_p3 = i_0_reg_200.read().range(5, 5);
}

void Filter::thread_tmp_fu_269_p4() {
    tmp_fu_269_p4 = p_Val2_s_reg_188.read().range(47, 32);
}

void Filter::thread_trunc_ln703_fu_231_p1() {
    trunc_ln703_fu_231_p1 = DataIn_TDATA_int.read().range(16-1, 0);
}

void Filter::thread_zext_ln29_1_fu_263_p1() {
    zext_ln29_1_fu_263_p1 = esl_zext<64,6>(grp_fu_224_p2.read());
}

void Filter::thread_zext_ln29_fu_297_p1() {
    zext_ln29_fu_297_p1 = esl_zext<64,32>(sext_ln20_reg_373.read());
}

void Filter::thread_zext_ln33_fu_302_p1() {
    zext_ln33_fu_302_p1 = esl_zext<64,32>(sext_ln20_reg_373.read());
}

void Filter::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(Enable_read_read_fu_82_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(DataIn_TVALID_int.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_249_p3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(DataOut_TREADY_int.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_DataOut_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_0, DataOut_TREADY_int.read())))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<9>) ("XXXXXXXXX");
            break;
    }
}

void Filter::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"DataIn_TDATA\" :  \"" << DataIn_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"DataIn_TVALID\" :  \"" << DataIn_TVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"DataIn_TREADY\" :  \"" << DataIn_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"DataOut_TDATA\" :  \"" << DataOut_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"DataOut_TVALID\" :  \"" << DataOut_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"DataOut_TREADY\" :  \"" << DataOut_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Enable\" :  \"" << Enable.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

