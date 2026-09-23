// ---------------------------------------------------------------------------
// pe_wrap.sv - testbench wrapper only, not part of the design.
//
// priority_encoder is parameterised for one direction at a time. The real
// pipeline instantiates it twice - highest set bit for the bid side, lowest
// for the ask side - so this wrapper does the same, letting a single cocotb
// bench drive one bitmap and check both answers against Python at once.
// ---------------------------------------------------------------------------

`default_nettype none

module pe_wrap #(
    parameter int unsigned W  = 4096,
    parameter int unsigned GW = 64
) (
    input  wire [W-1:0]          bitmap,
    // Best BID: the highest price with shares resting on it.
    output logic [$clog2(W)-1:0] hi_index,
    output logic                 hi_any,
    // Best ASK: the lowest price with shares resting on it.
    output logic [$clog2(W)-1:0] lo_index,
    output logic                 lo_any
);

  // Bid side: higher is better, so search downward from the top.
  // REGISTERED defaults to 0, so no clock is needed: tie it off.
  priority_encoder #(.W(W), .GW(GW), .HIGHEST(1)) u_hi (
      .clk(1'b0), .bitmap(bitmap), .index(hi_index), .any(hi_any)
  );

  // Ask side: lower is better, so search upward from the bottom.
  priority_encoder #(.W(W), .GW(GW), .HIGHEST(0)) u_lo (
      .clk(1'b0), .bitmap(bitmap), .index(lo_index), .any(lo_any)
  );

endmodule

`default_nettype wire
