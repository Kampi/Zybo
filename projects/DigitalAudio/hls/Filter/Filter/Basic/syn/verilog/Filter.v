// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="Filter,hls_ip_2019_2_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z010-clg400-1,HLS_INPUT_CLOCK=8.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.380000,HLS_SYN_LAT=60,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=412,HLS_SYN_LUT=352,HLS_VERSION=2019_2_1}" *)

module Filter (
        ap_clk,
        ap_rst_n,
        DataIn_TDATA,
        DataIn_TVALID,
        DataIn_TREADY,
        DataOut_TDATA,
        DataOut_TVALID,
        DataOut_TREADY,
        Enable
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

input   ap_clk;
input   ap_rst_n;
input  [31:0] DataIn_TDATA;
input   DataIn_TVALID;
output   DataIn_TREADY;
output  [31:0] DataOut_TDATA;
output   DataOut_TVALID;
input   DataOut_TREADY;
input   Enable;

reg DataIn_TREADY;

 reg    ap_rst_n_inv;
reg   [4:0] ShiftRegRight_V_address0;
reg    ShiftRegRight_V_ce0;
reg    ShiftRegRight_V_we0;
reg   [15:0] ShiftRegRight_V_d0;
wire   [15:0] ShiftRegRight_V_q0;
reg   [4:0] ShiftRegLeft_V_address0;
reg    ShiftRegLeft_V_ce0;
reg    ShiftRegLeft_V_we0;
reg   [15:0] ShiftRegLeft_V_d0;
wire   [15:0] ShiftRegLeft_V_q0;
wire   [4:0] Coefficients_V_address0;
reg    Coefficients_V_ce0;
wire   [17:0] Coefficients_V_q0;
reg    DataIn_TDATA_blk_n;
(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    DataOut_TDATA_blk_n;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state9;
wire   [15:0] trunc_ln703_fu_231_p1;
reg   [15:0] trunc_ln703_reg_363;
wire   [0:0] Enable_read_read_fu_82_p2;
reg   [15:0] trunc_ln703_1_reg_368;
wire  signed [31:0] sext_ln20_fu_245_p1;
reg  signed [31:0] sext_ln20_reg_373;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln22_fu_257_p2;
reg   [0:0] icmp_ln22_reg_382;
wire   [0:0] tmp_2_fu_249_p3;
wire   [31:0] or_ln_fu_289_p3;
wire   [5:0] grp_fu_224_p2;
reg   [5:0] i_reg_401;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
reg  signed [15:0] ShiftRegRight_V_load_1_reg_421;
wire    ap_CS_fsm_state5;
reg   [17:0] Coefficients_V_load_reg_426;
reg  signed [15:0] ShiftRegLeft_V_load_1_reg_431;
wire  signed [32:0] mul_ln703_1_fu_343_p2;
reg  signed [32:0] mul_ln703_1_reg_436;
wire    ap_CS_fsm_state6;
wire  signed [32:0] mul_ln703_fu_349_p2;
reg  signed [32:0] mul_ln703_reg_441;
wire   [47:0] AccRight_V_fu_324_p2;
wire    ap_CS_fsm_state7;
wire   [47:0] AccLeft_V_fu_337_p2;
reg   [47:0] p_Val2_2_reg_176;
reg   [47:0] p_Val2_s_reg_188;
wire  signed [5:0] ap_phi_mux_i_0_phi_fu_204_p4;
reg  signed [5:0] i_0_reg_200;
reg   [31:0] storemerge_reg_212;
wire   [63:0] zext_ln29_1_fu_263_p1;
wire   [63:0] zext_ln29_fu_297_p1;
wire   [63:0] zext_ln33_fu_302_p1;
reg  signed [5:0] grp_fu_224_p0;
wire   [15:0] tmp_1_fu_279_p4;
wire   [15:0] tmp_fu_269_p4;
wire   [47:0] shl_ln_fu_317_p3;
wire   [47:0] shl_ln703_1_fu_330_p3;
wire  signed [17:0] mul_ln703_1_fu_343_p1;
wire  signed [32:0] sext_ln1118_fu_308_p1;
wire  signed [17:0] mul_ln703_fu_349_p1;
reg   [8:0] ap_NS_fsm;
wire    regslice_both_DataOut_U_apdone_blk;
wire    regslice_both_DataIn_U_apdone_blk;
wire   [31:0] DataIn_TDATA_int;
wire    DataIn_TVALID_int;
reg    DataIn_TREADY_int;
wire    regslice_both_DataIn_U_ack_in;
reg    DataOut_TVALID_int;
wire    DataOut_TREADY_int;
wire    regslice_both_DataOut_U_vld_out;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

Filter_ShiftRegRibkb #(
    .DataWidth( 16 ),
    .AddressRange( 19 ),
    .AddressWidth( 5 ))
ShiftRegRight_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .address0(ShiftRegRight_V_address0),
    .ce0(ShiftRegRight_V_ce0),
    .we0(ShiftRegRight_V_we0),
    .d0(ShiftRegRight_V_d0),
    .q0(ShiftRegRight_V_q0)
);

Filter_ShiftRegRibkb #(
    .DataWidth( 16 ),
    .AddressRange( 19 ),
    .AddressWidth( 5 ))
ShiftRegLeft_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .address0(ShiftRegLeft_V_address0),
    .ce0(ShiftRegLeft_V_ce0),
    .we0(ShiftRegLeft_V_we0),
    .d0(ShiftRegLeft_V_d0),
    .q0(ShiftRegLeft_V_q0)
);

Filter_CoefficiendEe #(
    .DataWidth( 18 ),
    .AddressRange( 19 ),
    .AddressWidth( 5 ))
Coefficients_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .address0(Coefficients_V_address0),
    .ce0(Coefficients_V_ce0),
    .q0(Coefficients_V_q0)
);

Filter_mul_mul_16eOg #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 33 ))
Filter_mul_mul_16eOg_U1(
    .din0(ShiftRegRight_V_load_1_reg_421),
    .din1(mul_ln703_1_fu_343_p1),
    .dout(mul_ln703_1_fu_343_p2)
);

Filter_mul_mul_16eOg #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 33 ))
Filter_mul_mul_16eOg_U2(
    .din0(ShiftRegLeft_V_load_1_reg_431),
    .din1(mul_ln703_fu_349_p1),
    .dout(mul_ln703_fu_349_p2)
);

regslice_both #(
    .DataWidth( 32 ))
regslice_both_DataIn_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .data_in(DataIn_TDATA),
    .vld_in(DataIn_TVALID),
    .ack_in(regslice_both_DataIn_U_ack_in),
    .data_out(DataIn_TDATA_int),
    .vld_out(DataIn_TVALID_int),
    .ack_out(DataIn_TREADY_int),
    .apdone_blk(regslice_both_DataIn_U_apdone_blk)
);

regslice_both #(
    .DataWidth( 32 ))
regslice_both_DataOut_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .data_in(storemerge_reg_212),
    .vld_in(DataOut_TVALID_int),
    .ack_in(DataOut_TREADY_int),
    .data_out(DataOut_TDATA),
    .vld_out(regslice_both_DataOut_U_vld_out),
    .ack_out(DataOut_TREADY),
    .apdone_blk(regslice_both_DataOut_U_apdone_blk)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_200 <= 6'd18;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_0_reg_200 <= i_reg_401;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Val2_2_reg_176 <= 48'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        p_Val2_2_reg_176 <= AccLeft_V_fu_337_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Val2_s_reg_188 <= 48'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        p_Val2_s_reg_188 <= AccRight_V_fu_324_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd0 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
        storemerge_reg_212 <= DataIn_TDATA_int;
    end else if (((tmp_2_fu_249_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        storemerge_reg_212 <= or_ln_fu_289_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        Coefficients_V_load_reg_426 <= Coefficients_V_q0;
        ShiftRegLeft_V_load_1_reg_431 <= ShiftRegLeft_V_q0;
        ShiftRegRight_V_load_1_reg_421 <= ShiftRegRight_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_reg_401 <= grp_fu_224_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_2_fu_249_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        icmp_ln22_reg_382 <= icmp_ln22_fu_257_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        mul_ln703_1_reg_436 <= mul_ln703_1_fu_343_p2;
        mul_ln703_reg_441 <= mul_ln703_fu_349_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        sext_ln20_reg_373 <= sext_ln20_fu_245_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
        trunc_ln703_1_reg_368 <= {{DataIn_TDATA_int[31:16]}};
        trunc_ln703_reg_363 <= trunc_ln703_fu_231_p1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        Coefficients_V_ce0 = 1'b1;
    end else begin
        Coefficients_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        DataIn_TDATA_blk_n = DataIn_TVALID_int;
    end else begin
        DataIn_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((regslice_both_DataIn_U_ack_in == 1'b1) & (1'b1 == DataIn_TVALID))) begin
        DataIn_TREADY = 1'b1;
    end else begin
        DataIn_TREADY = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
        DataIn_TREADY_int = 1'b1;
    end else begin
        DataIn_TREADY_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        DataOut_TDATA_blk_n = DataOut_TREADY_int;
    end else begin
        DataOut_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == DataOut_TREADY_int) & (1'b1 == ap_CS_fsm_state8))) begin
        DataOut_TVALID_int = 1'b1;
    end else begin
        DataOut_TVALID_int = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ShiftRegLeft_V_address0 = zext_ln33_fu_302_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        ShiftRegLeft_V_address0 = zext_ln29_fu_297_p1;
    end else if (((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ShiftRegLeft_V_address0 = 5'd0;
    end else if (((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ShiftRegLeft_V_address0 = zext_ln29_1_fu_263_p1;
    end else begin
        ShiftRegLeft_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | ((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | ((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)))) begin
        ShiftRegLeft_V_ce0 = 1'b1;
    end else begin
        ShiftRegLeft_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ShiftRegLeft_V_d0 = ShiftRegLeft_V_q0;
    end else if (((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ShiftRegLeft_V_d0 = trunc_ln703_1_reg_368;
    end else begin
        ShiftRegLeft_V_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((icmp_ln22_reg_382 == 1'd0) & (1'b1 == ap_CS_fsm_state3)))) begin
        ShiftRegLeft_V_we0 = 1'b1;
    end else begin
        ShiftRegLeft_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ShiftRegRight_V_address0 = zext_ln33_fu_302_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        ShiftRegRight_V_address0 = zext_ln29_fu_297_p1;
    end else if (((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ShiftRegRight_V_address0 = 5'd0;
    end else if (((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ShiftRegRight_V_address0 = zext_ln29_1_fu_263_p1;
    end else begin
        ShiftRegRight_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | ((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | ((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)))) begin
        ShiftRegRight_V_ce0 = 1'b1;
    end else begin
        ShiftRegRight_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ShiftRegRight_V_d0 = ShiftRegRight_V_q0;
    end else if (((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ShiftRegRight_V_d0 = trunc_ln703_reg_363;
    end else begin
        ShiftRegRight_V_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((tmp_2_fu_249_p3 == 1'd0) & (icmp_ln22_fu_257_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((icmp_ln22_reg_382 == 1'd0) & (1'b1 == ap_CS_fsm_state3)))) begin
        ShiftRegRight_V_we0 = 1'b1;
    end else begin
        ShiftRegRight_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_fu_224_p0 = i_0_reg_200;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_fu_224_p0 = ap_phi_mux_i_0_phi_fu_204_p4;
    end else begin
        grp_fu_224_p0 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'd1 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else if (((1'd0 == Enable_read_read_fu_82_p2) & (1'b1 == DataIn_TVALID_int) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((tmp_2_fu_249_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == DataOut_TREADY_int) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            if ((~((1'b0 == DataOut_TREADY_int) | (regslice_both_DataOut_U_apdone_blk == 1'b1)) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign AccLeft_V_fu_337_p2 = (p_Val2_2_reg_176 + shl_ln703_1_fu_330_p3);

assign AccRight_V_fu_324_p2 = (p_Val2_s_reg_188 + shl_ln_fu_317_p3);

assign Coefficients_V_address0 = zext_ln33_fu_302_p1;

assign DataOut_TVALID = regslice_both_DataOut_U_vld_out;

assign Enable_read_read_fu_82_p2 = Enable;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_phi_mux_i_0_phi_fu_204_p4 = i_0_reg_200;

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign grp_fu_224_p2 = ($signed(grp_fu_224_p0) + $signed(6'd63));

assign icmp_ln22_fu_257_p2 = ((i_0_reg_200 == 6'd0) ? 1'b1 : 1'b0);

assign mul_ln703_1_fu_343_p1 = sext_ln1118_fu_308_p1;

assign mul_ln703_fu_349_p1 = sext_ln1118_fu_308_p1;

assign or_ln_fu_289_p3 = {{tmp_1_fu_279_p4}, {tmp_fu_269_p4}};

assign sext_ln1118_fu_308_p1 = $signed(Coefficients_V_load_reg_426);

assign sext_ln20_fu_245_p1 = i_0_reg_200;

assign shl_ln703_1_fu_330_p3 = {{mul_ln703_reg_441}, {15'd0}};

assign shl_ln_fu_317_p3 = {{mul_ln703_1_reg_436}, {15'd0}};

assign tmp_1_fu_279_p4 = {{p_Val2_2_reg_176[47:32]}};

assign tmp_2_fu_249_p3 = i_0_reg_200[32'd5];

assign tmp_fu_269_p4 = {{p_Val2_s_reg_188[47:32]}};

assign trunc_ln703_fu_231_p1 = DataIn_TDATA_int[15:0];

assign zext_ln29_1_fu_263_p1 = grp_fu_224_p2;

assign zext_ln29_fu_297_p1 = $unsigned(sext_ln20_reg_373);

assign zext_ln33_fu_302_p1 = $unsigned(sext_ln20_reg_373);

endmodule //Filter
