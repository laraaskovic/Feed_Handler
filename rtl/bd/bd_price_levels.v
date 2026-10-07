// ---------------------------------------------------------------------------
// bd_price_levels.v - price_levels as a Vivado IP Integrator block.
// See bd_hdr_parse.v for why rtl/bd/ exists.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_price_levels #(
    parameter integer BAND_TICKS = 4096,
    parameter integer GW         = 64
) (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_RESET rst" *)
    input  wire                          clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire                          rst,

    input  wire                          s_valid,
    input  wire                          s_side,
    input  wire [$clog2(BAND_TICKS)-1:0] s_tick,
    input  wire                          s_add,
    input  wire [31:0]                   s_qty,
    input  wire                          s_done,
    input  wire [63:0]                   s_seq,

    output wire                          m_bbo_valid,
    output wire [63:0]                   m_bbo_seq,
    output wire [$clog2(BAND_TICKS)-1:0] m_bid_tick,
    output wire [31:0]                   m_bid_qty,
    output wire                          m_bid_valid,
    output wire [$clog2(BAND_TICKS)-1:0] m_ask_tick,
    output wire [31:0]                   m_ask_qty,
    output wire                          m_ask_valid,

    output wire [31:0]                   stat_updates,
    output wire [31:0]                   stat_underflow
);

  price_levels #(.BAND_TICKS(BAND_TICKS), .GW(GW)) u_levels (
      .clk(clk), .rst(rst),
      .s_valid(s_valid), .s_side(s_side), .s_tick(s_tick),
      .s_add(s_add), .s_qty(s_qty), .s_done(s_done), .s_seq(s_seq),
      .m_bbo_valid(m_bbo_valid), .m_bbo_seq(m_bbo_seq),
      .m_bid_tick(m_bid_tick), .m_bid_qty(m_bid_qty),
      .m_bid_valid(m_bid_valid),
      .m_ask_tick(m_ask_tick), .m_ask_qty(m_ask_qty),
      .m_ask_valid(m_ask_valid),
      .stat_updates(stat_updates), .stat_underflow(stat_underflow)
  );

endmodule

`default_nettype wire
