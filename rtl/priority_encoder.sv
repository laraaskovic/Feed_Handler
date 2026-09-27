// ---------------------------------------------------------------------------
// priority_encoder.sv - find the highest or lowest set bit of a wide bitmap.
//
// This is the module that replaces max(self.bids) from the Python model, and
// it is the clearest example in the project of what hardware buys you.
//
// max() over a dict walks every live key, so its cost depends on the data. A
// market data feed has no flow control, so variable latency is not merely
// undesirable - it is disqualifying. This module answers the same question in
// a FIXED time whether the book has three price levels or three thousand.
//
// The other half of the insight: nothing here is "tracked". Software caches
// the best price and invalidates the cache when the top level empties. This
// is pure combinational logic over the live bitmap, so clearing one bit
// changes the answer by itself. The cache-invalidation problem does not exist.
//
// WHY TWO LEVELS AND NOT ONE
//
// A flat 4096-input priority encoder is a combinational chain far too deep to
// settle in 6.4 ns. Splitting it into 64 groups of 64 gives two shallow
// problems: which group, and which bit within that group.
//
// WHY THE TWO LEVELS RUN SIDE BY SIDE, NOT ONE AFTER THE OTHER
//
// The obvious structure is serial: find the group, select its 64 bits, then
// encode them. The first version did that, with "last assignment wins" loops
// for the encoders - and Yosys static timing measured 6.4 ns of pure logic,
// the entire clock period, because such a loop synthesises to a 64-deep
// chain. Two changes fix it:
//
//   1. Every encoder is an explicit binary TREE: six levels of 2:1 choices
//      for 64 inputs, which maps onto about three LUT levels.
//   2. The within-group answer is computed for ALL 64 groups at once, in
//      parallel with the group choice, and the group choice then just
//      selects one precomputed 6-bit answer. That costs about 64 small
//      encoders of area per side and takes a whole encoder off the path.
//
// Even so, the whole encoder is ~3.9 ns of logic on 7-series models. With
// REGISTERED = 1 a register splits it between the two levels, so each half
// is well inside the clock; the answer then appears one cycle after the
// bitmap. price_levels uses that, and compensates for the extra cycle (see
// its BBO RAM write delay). REGISTERED = 0 keeps it purely combinational,
// which is how the stand-alone testbench checks it exhaustively.
// ---------------------------------------------------------------------------

`default_nettype none

module priority_encoder #(
    // Total bits to search. One per tick of the price band.
    parameter int unsigned W       = 4096,
    // Bits per group. 64 gives 64 groups of 64 for W = 4096: both levels the
    // same size, which keeps them balanced. Must be a power of two.
    parameter int unsigned GW      = 64,
    // 1 = highest set bit (the best BID, since higher is better to buy at).
    // 0 = lowest set bit  (the best ASK, since lower is better to sell at).
    parameter bit          HIGHEST = 1,
    // 1 = register between the two levels: one cycle of latency.
    parameter bit          REGISTERED = 0
) (
    // Only used when REGISTERED = 1.
    // verilator lint_off UNUSEDSIGNAL
    input  wire                   clk,
    // verilator lint_on UNUSEDSIGNAL
    input  wire [W-1:0]           bitmap,
    output logic [$clog2(W)-1:0]  index,
    // Low when the bitmap is entirely clear. "No best bid" is a different
    // thing from "best bid of zero", and conflating them is an easy bug.
    output logic                  any
);

  // Number of groups, and the width of an index into each level.
  localparam int unsigned NG    = W / GW;
  localparam int unsigned GW_LG = $clog2(GW);
  localparam int unsigned NG_LG = $clog2(NG);

  // -------------------------------------------------------------------------
  // A tree encoder over GW bits. Each level pairs up neighbouring nodes; a
  // node is (any bit set below me, index of the winning bit). Combining a
  // high node and a low node keeps the winner's index and prepends one bit
  // saying which half it came from. log2(GW) levels, each a 2:1 choice.
  // -------------------------------------------------------------------------
  function automatic logic [GW_LG-1:0] enc_group(input logic [GW-1:0] v);
    logic [GW-1:0]       vld, vld_n;     // node valid bits, this/next level
    logic [GW*GW_LG-1:0] idx, idx_n;     // node indices, GW_LG bits each
    vld = v;
    idx = '0;
    for (int l = 0; l < int'(GW_LG); l++) begin
      vld_n = '0;
      idx_n = '0;
      // Level l has GW >> l nodes; pair (2n+1, 2n) becomes node n.
      for (int n = 0; n < int'(GW >> (l + 1)); n++) begin
        vld_n[n] = vld[2*n+1] | vld[2*n];
        // Bit l of the index says whether the winner was the upper node.
        if (HIGHEST ? vld[2*n+1] : !vld[2*n])
          idx_n[n*GW_LG +: GW_LG] = idx[(2*n+1)*GW_LG +: GW_LG] | GW_LG'(1 << l);
        else
          idx_n[n*GW_LG +: GW_LG] = idx[(2*n)*GW_LG +: GW_LG];
      end
      vld = vld_n;
      idx = idx_n;
    end
    // After the last level a single node remains, at position 0.
    enc_group = idx[GW_LG-1:0];
  endfunction

  // The same tree over the NG group-summary bits; kept separate because the
  // widths differ whenever NG != GW.
  function automatic logic [NG_LG-1:0] enc_summary(input logic [NG-1:0] v);
    logic [NG-1:0]       vld, vld_n;
    logic [NG*NG_LG-1:0] idx, idx_n;
    vld = v;
    idx = '0;
    for (int l = 0; l < int'(NG_LG); l++) begin
      vld_n = '0;
      idx_n = '0;
      // Identical pairing rule to enc_group above.
      for (int n = 0; n < int'(NG >> (l + 1)); n++) begin
        vld_n[n] = vld[2*n+1] | vld[2*n];
        if (HIGHEST ? vld[2*n+1] : !vld[2*n])
          idx_n[n*NG_LG +: NG_LG] = idx[(2*n+1)*NG_LG +: NG_LG] | NG_LG'(1 << l);
        else
          idx_n[n*NG_LG +: NG_LG] = idx[(2*n)*NG_LG +: NG_LG];
      end
      vld = vld_n;
      idx = idx_n;
    end
    enc_summary = idx[NG_LG-1:0];
  endfunction

  // -------------------------------------------------------------------------
  // Level 1, all groups in parallel: does each group hold anything, and if
  // so, which of its bits wins. NG independent OR-reductions and NG
  // independent tree encoders - no group waits for any other.
  // -------------------------------------------------------------------------
  logic [NG-1:0]       summary_c, summary;
  logic [NG*GW_LG-1:0] offsets_c, offsets;   // each group's winning bit
  always_comb begin
    for (int g = 0; g < int'(NG); g++) begin
      summary_c[g]                = |bitmap[g*GW +: GW];
      offsets_c[g*GW_LG +: GW_LG] = enc_group(bitmap[g*GW +: GW]);
    end
  end

  // The optional pipeline register between the two levels. Explicit
  // generate because Quartus Standard/Lite rejects the bare form.
  generate
  if (REGISTERED) begin : g_reg
    always_ff @(posedge clk) begin
      summary <= summary_c;
      offsets <= offsets_c;
    end
  end else begin : g_comb
    assign summary = summary_c;
    assign offsets = offsets_c;
  end
  endgenerate

  // -------------------------------------------------------------------------
  // Level 2: pick the group, then pick its precomputed offset. Selecting a
  // 6-bit answer is a far smaller mux than selecting 64 bits to re-encode.
  // -------------------------------------------------------------------------
  logic [NG_LG-1:0] grp;
  logic [GW_LG-1:0] off;
  always_comb begin
    // Which group holds the answer.
    grp   = enc_summary(summary);
    off   = offsets[grp*GW_LG +: GW_LG];
    // group * GW + offset == {group, offset}, because GW is a power of two.
    index = {grp, off};
    // Any bit anywhere means any group was non-empty.
    any   = |summary;
  end

endmodule

`default_nettype wire
