// ---------------------------------------------------------------------------
// feed_handler_top.sv - step 9: the whole pipeline, wire to top of book.
//
//   Ethernet frames (64-bit AXI-Stream, 156.25 MHz, no backpressure)
//     -> hdr_parse     strip Ethernet / IPv4 / UDP / MoldUDP64
//     -> msg_frame     split the message block into whole ITCH messages
//     -> decode        message -> normalized book operation
//     -> locate filter keep only the configured symbol's operations
//     -> order_table   recover side / price / size from the order reference
//     -> price_levels  per-tick quantities, bitmap, priority encoders
//     -> BBO           best bid and ask, price and size, every message
//
// Python oracle for the whole thing: replay.py's BBO trace, i.e. book.Book
// applied message by message. tb/test_feed_handler_top.py diffs the two after
// EVERY message.
//
// WHAT THIS LEVEL ADDS
//
// 1. The symbol filter. One order table could serve every symbol, but the
//    price ladder is one book, so the top keeps only ops whose stock locate
//    matches cfg_locate. Locates are small integers assigned per day by the
//    'R' messages, so this is a 16-bit compare - no symbol strings anywhere.
//    Order references are unique across ALL symbols, so dropping other
//    symbols' ops can never make this symbol's lookups ambiguous.
// 2. Tick back to price: price = band_base + tick * 100, registered, so the
//    outputs are in the same units as the feed.
// 3. Status aggregation: every stage's counters, side by side, which is the
//    hardware replacement for the model's exceptions and invariant counters.
//
// LATENCY - measured by tb/test_feed_handler_top.py::test_fixed_latency,
// from the clock edge that takes in a message's last byte to the edge that
// registers its BBO on these outputs:
//
//   hdr_parse     1-2  (2 when the byte needs the NEXT beat to realign)
//   msg_frame     1
//   decode        3    (extract; reciprocal multiply in a DSP; tick check)
//   order_table   2    (+1 for a Replace: its second ladder update)
//   price_levels  5    (read, modify-write, encoder x2, BBO RAM read)
//   output regs   1
//   ------------------
//   wire -> BBO   13-14 cycles = 83-90 ns at 156.25 MHz; Replace 14-15.
//
// Why decode and price_levels are deeper than the minimum: each of their
// single-cycle versions measured well over the 6.4 ns clock in Yosys static
// timing (decode 14.0 ns, the encoder path 8.5 ns). Pipelining trades a few
// fixed cycles for a design that can actually run at line rate.
//
// The test asserts this is a CONSTANT per message type - the property the
// whole design exists to deliver. Nothing here depends on the data.
// ---------------------------------------------------------------------------

`default_nettype none

module feed_handler_top #(
    // Datapath width: 64 bits at 156.25 MHz is 10 Gb/s.
    parameter int unsigned DW         = 64,
    // Longest ITCH message, 'I' at 50 bytes; sizes the message bus.
    parameter int unsigned MAX_MSG    = 50,
    // Order table geometry: SETS x WAYS entries plus a STASH of overflow
    // entries. 16K x 8 + 16 drops zero orders over full real days of AAPL,
    // MSFT, SPY, QQQ and AMD (model/table_sim.py); see order_table.sv.
    parameter int unsigned SETS       = 16384,
    parameter int unsigned WAYS       = 8,
    parameter int unsigned STASH      = 16,
    // Price ladder: 4096 one-cent ticks = $40.96 around cfg_band_base.
    parameter int unsigned BAND_TICKS = 4096
) (
    input  wire                 clk,
    input  wire                 rst,

    // ---- slave: raw Ethernet frames from the MAC ------------------------
    input  wire [DW-1:0]        s_tdata,
    input  wire [DW/8-1:0]      s_tkeep,
    input  wire                 s_tvalid,
    input  wire                 s_tlast,

    // ---- configuration, static for a session ----------------------------
    // Lowest price on the ladder, raw feed units (1/10000 dollar). Set from
    // the opening price so the band straddles where the stock trades.
    input  wire [31:0]          cfg_band_base,
    // Stock locate of the one symbol this book tracks (from its 'R' msg).
    input  wire [15:0]          cfg_locate,

    // ---- master: top of book --------------------------------------------
    // Pulses once per book message for cfg_locate, after it is fully applied.
    output logic                m_bbo_valid,
    // MoldUDP64 sequence number of that message, for per-message checking.
    output logic [63:0]         m_bbo_seq,
    // Best bid. m_bid_valid low means "no bids", which is not "bid of zero".
    output logic                m_bid_valid,
    output logic [31:0]         m_bid_price,
    output logic [31:0]         m_bid_qty,
    // Best ask, likewise.
    output logic                m_ask_valid,
    output logic [31:0]         m_ask_price,
    output logic [31:0]         m_ask_qty,

    // High once the order table's startup sweep has finished. The feed must
    // not be connected before this; ops that arrive earlier are counted in
    // stat_overrun rather than silently lost.
    output logic                ready,

    // ---- status counters ------------------------------------------------
    output logic [31:0]         stat_packets,      // frames parsed
    output logic [31:0]         stat_dropped,      // non-IPv4/UDP frames
    output logic [31:0]         stat_messages,     // ITCH messages framed
    output logic [31:0]         stat_frame_err,    // packets with bad framing
    output logic [31:0]         stat_ops,          // book ops decoded
    output logic [31:0]         stat_other_symbol, // ops for other locates
    output logic [31:0]         stat_out_of_band,  // prices off the ladder
    output logic [31:0]         stat_subpenny,     // prices not on a cent
    output logic [31:0]         stat_collisions,   // orders with no free way
    output logic [31:0]         stat_missing,      // refs never seen
    output logic [31:0]         stat_overrun,      // ops the table missed
    output logic [31:0]         stat_stash_peak,   // order-table margin
    output logic [31:0]         stat_underflow     // levels driven negative
);

  // Widths derived once, so every stage agrees.
  localparam int unsigned TW = $clog2(BAND_TICKS);

  // =========================================================================
  // Stage 1: headers. Output is the MoldUDP64 message block, realigned.
  // =========================================================================
  logic [DW-1:0]   hp_tdata;
  logic [DW/8-1:0] hp_tkeep;
  logic            hp_tvalid, hp_tlast;
  logic [63:0]     hp_seq;
  // The message count is sideband for a gap detector; unused by the book.
  /* verilator lint_off UNUSEDSIGNAL */
  logic [15:0]     hp_count;
  /* verilator lint_on UNUSEDSIGNAL */

  hdr_parse #(.DW(DW)) u_hdr (
      .clk(clk), .rst(rst),
      .s_tdata(s_tdata), .s_tkeep(s_tkeep),
      .s_tvalid(s_tvalid), .s_tlast(s_tlast),
      .m_tdata(hp_tdata), .m_tkeep(hp_tkeep),
      .m_tvalid(hp_tvalid), .m_tlast(hp_tlast),
      .m_sequence(hp_seq), .m_count(hp_count),
      .stat_packets(stat_packets), .stat_dropped(stat_dropped)
  );

  // =========================================================================
  // Stage 2: framing. One whole message per pulse, first byte at bit 0.
  // =========================================================================
  logic [MAX_MSG*8-1:0] mf_msg;
  logic [7:0]           mf_len;
  logic                 mf_valid;
  logic [63:0]          mf_seq;

  msg_frame #(.DW(DW), .MAX_MSG(MAX_MSG)) u_frame (
      .clk(clk), .rst(rst),
      .s_tdata(hp_tdata), .s_tkeep(hp_tkeep),
      .s_tvalid(hp_tvalid), .s_tlast(hp_tlast),
      .s_sequence(hp_seq),
      .m_msg(mf_msg), .m_len(mf_len), .m_valid(mf_valid), .m_seq(mf_seq),
      .stat_messages(stat_messages), .stat_frame_err(stat_frame_err)
  );

  // =========================================================================
  // Stage 3: decode. Seven message types collapse to four operations.
  // =========================================================================
  itch_pkg::op_e dc_op;
  logic          dc_valid, dc_side, dc_tick_ok;
  logic [15:0]   dc_locate, dc_tick;
  logic [63:0]   dc_ref, dc_new_ref, dc_seq;
  logic [31:0]   dc_qty;
  // The raw price rides along for debug; the ladder only needs the tick.
  /* verilator lint_off UNUSEDSIGNAL */
  logic [31:0]   dc_price;
  /* verilator lint_on UNUSEDSIGNAL */

  decode #(.MAX_MSG(MAX_MSG), .BAND_TICKS(BAND_TICKS)) u_decode (
      .clk(clk), .rst(rst),
      .s_msg(mf_msg), .s_len(mf_len), .s_valid(mf_valid), .s_seq(mf_seq),
      .cfg_band_base(cfg_band_base),
      .m_op(dc_op), .m_valid(dc_valid), .m_locate(dc_locate),
      .m_ref(dc_ref), .m_new_ref(dc_new_ref), .m_side(dc_side),
      .m_qty(dc_qty), .m_price(dc_price),
      .m_tick(dc_tick), .m_tick_ok(dc_tick_ok), .m_seq(dc_seq),
      .stat_ops(stat_ops), .stat_out_of_band(stat_out_of_band),
      .stat_subpenny(stat_subpenny)
  );

  // =========================================================================
  // The symbol filter. Pure combinational gating of one valid bit.
  // =========================================================================
  logic ot_valid;
  assign ot_valid = dc_valid;

  // Other symbols' ops are counted, so "nothing happened" is distinguishable
  // from "everything was filtered out by a wrong cfg_locate".
  always_ff @(posedge clk) begin
    if (rst) begin
      stat_other_symbol <= 32'd0;
    end else if (dc_valid && !ot_valid) begin
      stat_other_symbol <= stat_other_symbol + 32'd1;
    end
  end

  // =========================================================================
  // Stage 4: the order table. The lookup that E/C/X/D/U cannot do without.
  // =========================================================================
  logic          ot_m_valid, ot_m_side, ot_m_add, ot_m_done;
  logic [TW-1:0] ot_m_tick;
  logic [31:0]   ot_m_qty;
  logic [63:0]   ot_m_seq;

  order_table #(.SETS(SETS), .WAYS(WAYS), .STASH(STASH), .TICK_W(TW)) u_orders (
      .clk(clk), .rst(rst),
      .s_valid(ot_valid), .s_op(dc_op),
      .s_ref(dc_ref), .s_new_ref(dc_new_ref), .s_side(dc_side),
      .s_qty(dc_qty),
      // decode guarantees tick < BAND_TICKS whenever tick_ok is set, so
      // dropping the upper bits loses nothing.
      .s_tick(dc_tick[TW-1:0]), .s_tick_ok(dc_tick_ok),
      .s_seq(dc_seq),
      .m_valid(ot_m_valid), .m_side(ot_m_side), .m_tick(ot_m_tick),
      .m_add(ot_m_add), .m_qty(ot_m_qty), .m_done(ot_m_done),
      .m_seq(ot_m_seq),
      .stat_collisions(stat_collisions), .stat_missing(stat_missing),
      .stat_overrun(stat_overrun), .stat_stash_peak(stat_stash_peak),
      .ready(ready)
  );

  // decode's tick field is 16 bits wide; the ladder uses the low TW.
  /* verilator lint_off UNUSEDSIGNAL */
  logic [15:0] unused_tick_hi;
  assign unused_tick_hi = dc_tick;
  /* verilator lint_on UNUSEDSIGNAL */

  // =========================================================================
  // Stage 5: the price ladder and the priority encoders.
  // =========================================================================
  logic          pl_bid_valid, pl_ask_valid, pl_bbo_valid;
  logic [TW-1:0] pl_bid_tick, pl_ask_tick;
  logic [31:0]   pl_bid_qty, pl_ask_qty;
  logic [63:0]   pl_bbo_seq;
  // Updates applied: a debug statistic, not exported.
  /* verilator lint_off UNUSEDSIGNAL */
  logic [31:0]   pl_updates;
  /* verilator lint_on UNUSEDSIGNAL */

  price_levels #(.BAND_TICKS(BAND_TICKS)) u_levels (
      .clk(clk), .rst(rst),
      .s_valid(ot_m_valid), .s_side(ot_m_side), .s_tick(ot_m_tick),
      .s_add(ot_m_add), .s_qty(ot_m_qty),
      .s_done(ot_m_done), .s_seq(ot_m_seq),
      .m_bbo_valid(pl_bbo_valid), .m_bbo_seq(pl_bbo_seq),
      .m_bid_tick(pl_bid_tick), .m_bid_qty(pl_bid_qty),
      .m_bid_valid(pl_bid_valid),
      .m_ask_tick(pl_ask_tick), .m_ask_qty(pl_ask_qty),
      .m_ask_valid(pl_ask_valid),
      .stat_updates(pl_updates), .stat_underflow(stat_underflow)
  );

  // =========================================================================
  // Output stage: tick index back to a feed price, and register everything.
  // tick * 100 is a constant multiply - two shifted adds (64t + 32t + 4t),
  // no DSP needed - and registering it keeps the output ports off any
  // combinational path, which is what out-of-context timing should measure.
  // =========================================================================
  function automatic logic [31:0] tick_to_price(input logic [TW-1:0] t);
    // Band base plus whole cents; 100 feed units per cent.
    tick_to_price = cfg_band_base + (32'(t) * 32'(itch_pkg::TICK_UNITS));
  endfunction

  always_ff @(posedge clk) begin
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
      // All fields move together, so the marker and the book it describes
      // can never be a cycle apart.
      m_bbo_valid <= pl_bbo_valid;
      m_bbo_seq   <= pl_bbo_seq;
      m_bid_valid <= pl_bid_valid;
      m_ask_valid <= pl_ask_valid;
      // An empty side reports price 0 alongside valid low, never garbage.
      m_bid_price <= pl_bid_valid ? tick_to_price(pl_bid_tick) : 32'd0;
      m_ask_price <= pl_ask_valid ? tick_to_price(pl_ask_tick) : 32'd0;
      m_bid_qty   <= pl_bid_qty;
      m_ask_qty   <= pl_ask_qty;
    end
  end

endmodule

`default_nettype wire
