// ---------------------------------------------------------------------------
// bd_decode.v - decode as a Vivado IP Integrator block.
// See bd_hdr_parse.v for why rtl/bd/ exists.
//
// m_op is itch_pkg::op_e underneath; a block-design pin is just bits, so it
// leaves here as its 3-bit encoding (OP_NONE=0 ADD=1 REDUCE=2 DELETE=3
// REPLACE=4). bd_order_table.v turns it back into the enum.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_decode #(
    parameter integer MAX_MSG    = 50,
    parameter integer BAND_TICKS = 4096
) (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_RESET rst" *)
    input  wire                 clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire                 rst,

    input  wire [MAX_MSG*8-1:0] s_msg,
    input  wire [7:0]           s_len,
    input  wire                 s_valid,
    input  wire [63:0]          s_seq,

    input  wire [31:0]          cfg_band_base,

    output wire [2:0]           m_op,
    output wire                 m_valid,
    output wire [15:0]          m_locate,
    output wire [63:0]          m_ref,
    output wire [63:0]          m_new_ref,
    output wire                 m_side,
    output wire [31:0]          m_qty,
    output wire [31:0]          m_price,
    output wire [15:0]          m_tick,
    output wire                 m_tick_ok,
    output wire [63:0]          m_seq,

    output wire [31:0]          stat_ops,
    output wire [31:0]          stat_out_of_band,
    output wire [31:0]          stat_subpenny
);

  decode #(.MAX_MSG(MAX_MSG), .BAND_TICKS(BAND_TICKS)) u_decode (
      .clk(clk), .rst(rst),
      .s_msg(s_msg), .s_len(s_len), .s_valid(s_valid), .s_seq(s_seq),
      .cfg_band_base(cfg_band_base),
      .m_op(m_op), .m_valid(m_valid), .m_locate(m_locate),
      .m_ref(m_ref), .m_new_ref(m_new_ref), .m_side(m_side),
      .m_qty(m_qty), .m_price(m_price),
      .m_tick(m_tick), .m_tick_ok(m_tick_ok), .m_seq(m_seq),
      .stat_ops(stat_ops), .stat_out_of_band(stat_out_of_band),
      .stat_subpenny(stat_subpenny)
  );

endmodule

`default_nettype wire
