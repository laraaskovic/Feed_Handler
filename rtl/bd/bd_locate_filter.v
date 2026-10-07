// ---------------------------------------------------------------------------
// bd_locate_filter.v - the symbol filter as a Vivado IP Integrator block.
// See bd_hdr_parse.v for why rtl/bd/ exists.
//
// Unlike the other wrappers this one holds logic: in feed_handler_top the
// filter is four lines inline, with no module to wrap. It is the same four
// lines - gate decode's valid on (locate == cfg_locate) and count what was
// dropped - and tb/bd_equiv_tb.sv checks the two stay identical.
//
// Only the valid bit is gated. Every other field of the op goes straight
// from decode to order_table, which the diagram shows plainly.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_locate_filter (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_RESET rst" *)
    input  wire        clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire        rst,

    input  wire        s_valid,
    input  wire [15:0] s_locate,
    input  wire [15:0] cfg_locate,

    // Combinational: the filter costs no cycle.
    output wire        m_valid,
    output reg  [31:0] stat_other_symbol
);

  assign m_valid = s_valid && (s_locate == cfg_locate);

  // Other symbols' ops are counted, so "nothing happened" is distinguishable
  // from "everything was filtered out by a wrong cfg_locate".
  always @(posedge clk) begin
    if (rst) begin
      stat_other_symbol <= 32'd0;
    end else if (s_valid && !m_valid) begin
      stat_other_symbol <= stat_other_symbol + 32'd1;
    end
  end

endmodule

`default_nettype wire
