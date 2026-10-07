// ---------------------------------------------------------------------------
// bd_order_table.v - order_table as a Vivado IP Integrator block.
// See bd_hdr_parse.v for why rtl/bd/ exists.
//
// Two adaptations, both of which feed_handler_top also makes:
//   - s_op arrives as bd_decode's 3-bit encoding of itch_pkg::op_e.
//   - s_tick is decode's full 16-bit field; only the low TICK_W bits reach
//     the table. decode guarantees tick < BAND_TICKS whenever tick_ok is
//     set, so the dropped bits are always zero when they matter. Slicing
//     here keeps the diagram free of a 16-to-12 width mismatch.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_order_table #(
    parameter integer SETS   = 16384,
    parameter integer WAYS   = 8,
    parameter integer STASH  = 16,
    parameter integer TICK_W = 12
) (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_RESET rst" *)
    input  wire              clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire              rst,

    input  wire              s_valid,
    input  wire [2:0]        s_op,
    input  wire [63:0]       s_ref,
    input  wire [63:0]       s_new_ref,
    input  wire              s_side,
    input  wire [31:0]       s_qty,
    input  wire [15:0]       s_tick,
    input  wire              s_tick_ok,
    input  wire [63:0]       s_seq,

    output wire              m_valid,
    output wire              m_side,
    output wire [TICK_W-1:0] m_tick,
    output wire              m_add,
    output wire [31:0]       m_qty,
    output wire              m_done,
    output wire [63:0]       m_seq,

    output wire [31:0]       stat_collisions,
    output wire [31:0]       stat_missing,
    output wire [31:0]       stat_overrun,
    output wire [31:0]       stat_stash_peak,
    output wire              ready
);

  order_table #(.SETS(SETS), .WAYS(WAYS), .STASH(STASH), .TICK_W(TICK_W)) u_orders (
      .clk(clk), .rst(rst),
      .s_valid(s_valid), .s_op(s_op),
      .s_ref(s_ref), .s_new_ref(s_new_ref), .s_side(s_side),
      .s_qty(s_qty), .s_tick(s_tick[TICK_W-1:0]), .s_tick_ok(s_tick_ok),
      .s_seq(s_seq),
      .m_valid(m_valid), .m_side(m_side), .m_tick(m_tick),
      .m_add(m_add), .m_qty(m_qty), .m_done(m_done), .m_seq(m_seq),
      .stat_collisions(stat_collisions), .stat_missing(stat_missing),
      .stat_overrun(stat_overrun), .stat_stash_peak(stat_stash_peak),
      .ready(ready)
  );

endmodule

`default_nettype wire
