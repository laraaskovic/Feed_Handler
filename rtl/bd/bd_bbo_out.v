// ---------------------------------------------------------------------------
// bd_bbo_out.v - the output stage as a Vivado IP Integrator block.
// See bd_hdr_parse.v for why rtl/bd/ exists.
//
// Like bd_locate_filter.v this holds logic, because in feed_handler_top the
// output registers are inline. It is the same stage: tick index back to a
// feed price (band_base + tick * 100), and every output registered so the
// marker and the book it describes move together. tb/bd_equiv_tb.sv checks
// it against feed_handler_top.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_bbo_out #(
    parameter integer BAND_TICKS = 4096
) (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_RESET rst" *)
    input  wire                          clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire                          rst,

    input  wire [31:0]                   cfg_band_base,

    input  wire                          s_bbo_valid,
    input  wire [63:0]                   s_bbo_seq,
    input  wire                          s_bid_valid,
    input  wire [$clog2(BAND_TICKS)-1:0] s_bid_tick,
    input  wire [31:0]                   s_bid_qty,
    input  wire                          s_ask_valid,
    input  wire [$clog2(BAND_TICKS)-1:0] s_ask_tick,
    input  wire [31:0]                   s_ask_qty,

    output reg                           m_bbo_valid,
    output reg  [63:0]                   m_bbo_seq,
    output reg                           m_bid_valid,
    output reg  [31:0]                   m_bid_price,
    output reg  [31:0]                   m_bid_qty,
    output reg                           m_ask_valid,
    output reg  [31:0]                   m_ask_price,
    output reg  [31:0]                   m_ask_qty
);

  // Feed units per one-cent tick: itch_pkg::TICK_UNITS, which a Verilog file
  // cannot import. A constant multiply, so shifted adds rather than a DSP.
  localparam [31:0] TICK_UNITS = 32'd100;

  always @(posedge clk) begin
    if (rst) begin
      m_bbo_valid <= 1'b0;
      m_bbo_seq   <= 64'd0;
      m_bid_valid <= 1'b0;
      m_ask_valid <= 1'b0;
      m_bid_price <= 32'd0;
      m_ask_price <= 32'd0;
      m_bid_qty   <= 32'd0;
      m_ask_qty   <= 32'd0;
    end else begin
      m_bbo_valid <= s_bbo_valid;
      m_bbo_seq   <= s_bbo_seq;
      m_bid_valid <= s_bid_valid;
      m_ask_valid <= s_ask_valid;
      // An empty side reports price 0 alongside valid low, never garbage.
      m_bid_price <= s_bid_valid ? cfg_band_base + s_bid_tick * TICK_UNITS : 32'd0;
      m_ask_price <= s_ask_valid ? cfg_band_base + s_ask_tick * TICK_UNITS : 32'd0;
      m_bid_qty   <= s_bid_qty;
      m_ask_qty   <= s_ask_qty;
    end
  end

endmodule

`default_nettype wire
