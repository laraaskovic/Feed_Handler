// ---------------------------------------------------------------------------
// price_levels.sv - step 8: per-tick share totals, and the BBO.
//
// Python oracle: book.Book.bids / .asks and book.Book.bbo().
//
// WHAT THIS REPLACES
//
//   self.bids[price] += qty        ->  a read-modify-write of one RAM word
//   max(self.bids)                 ->  a bitmap plus a priority encoder
//
// The second substitution is the whole point of the project. max() walks
// every live key, so its cost depends on the data; a feed with no flow
// control cannot tolerate that. The bitmap and encoder give the same answer
// in fixed time regardless of how many levels are occupied.
//
// STRUCTURE, AND WHY EACH PIECE LIVES WHERE IT DOES
//
//   quantities  -> block RAM. 4096 x 32 bits per side is 128 Kbit, which is
//                  cheap in BRAM and absurd in flops.
//   bitmap      -> flops. The priority encoder needs all 4096 bits in the
//                  same cycle, and no RAM can present 4096 bits at once.
//
// That split is forced by the hardware, and it is why the bitmap exists at
// all rather than just scanning the quantity table.
//
// WHY EACH SIDE HAS TWO COPIES OF ITS QUANTITY RAM
//
// Every cycle the ladder needs THREE accesses per side: read the level being
// updated, write it back, and read the quantity at the best price for the
// BBO output. A block RAM has two ports. So each side keeps two identical
// simple-dual-port RAMs, written together: one serves the update read, the
// other the BBO read. That costs 128 Kbit of BRAM per side and is the
// standard way to buy a read port. Writing it as one array with three
// accesses would instead be built from LUTs or flops by synthesis - silently.
//
// PIPELINE. A BRAM read costs a cycle, so an update takes two stages:
//   stage 0  latch the request, issue the read
//   stage 1  quantity arrives, add or subtract, write back, update the bitmap
// Two updates to the same tick back to back would then read stale data, so
// stage 1 forwards the previous cycle's write. A Replace that does not move
// price produces exactly that pattern, so this path is exercised constantly
// rather than being a rare corner.
//
// Publishing the top of book takes three more:
//   stage 2  encoder level 1 over the bitmap (every group in parallel)
//   stage 3  encoder level 2 picks the group -> best tick, registered
//   stage 4  BBO RAM read at the best tick -> tick, size and valid out
//
// The first version did stages 2-4 in ONE cycle: bitmap -> full encoder ->
// RAM address. Yosys static timing put that at 8.5 ns of logic against a
// 6.4 ns clock. Splitting it raises a consistency problem, solved like this:
// the bitmap is read in stage 2 but the RAM in stage 4, two cycles later, so
// the BBO RAM copy receives every write TWO CYCLES LATE (bbo_d1/bbo_d2
// below). It therefore always holds exactly the state the encoder saw, and
// the published tick and size describe the same instant on every cycle -
// by construction, not by an argument about message spacing.
// ---------------------------------------------------------------------------

`default_nettype none

module price_levels #(
    // Ticks covered by the ladder. 4096 one-cent ticks spans $40.96.
    parameter int unsigned BAND_TICKS = 4096,
    // Group width for the priority encoders. 64 gives two balanced stages.
    parameter int unsigned GW         = 64
) (
    input  wire                            clk,
    input  wire                            rst,

    // ---- slave: one level update ----------------------------------------
    input  wire                            s_valid,
    // 1 = bid side, 0 = ask side. Bids and asks are separate memories, so
    // this is a memory select rather than a data bit.
    input  wire                            s_side,
    input  wire [$clog2(BAND_TICKS)-1:0]   s_tick,
    // 1 = add shares to this level, 0 = remove them.
    input  wire                            s_add,
    input  wire [31:0]                     s_qty,
    // Completion marker from the order table: this is the last update of
    // message s_seq (or a bare marker, with s_valid low, for a message that
    // changed nothing on the ladder). It rides the pipeline alongside the
    // update and comes out as m_bbo_valid.
    input  wire                            s_done,
    input  wire [63:0]                     s_seq,

    // ---- master: top of book --------------------------------------------
    // Pulses when the BBO below reflects every message up to m_bbo_seq. The
    // outputs are always live; this marks the cycles a checker should read.
    output logic                           m_bbo_valid,
    output logic [63:0]                    m_bbo_seq,
    output logic [$clog2(BAND_TICKS)-1:0]  m_bid_tick,
    output wire  [31:0]                    m_bid_qty,
    // Low when that side of the book is empty. "No best bid" is a different
    // state from "best bid of zero" and the two must not be conflated.
    output logic                           m_bid_valid,
    output logic [$clog2(BAND_TICKS)-1:0]  m_ask_tick,
    output wire  [31:0]                    m_ask_qty,
    output logic                           m_ask_valid,

    // ---- status -----------------------------------------------------------
    output logic [31:0]                    stat_updates,
    // A level driven below zero. Impossible on a sound feed, so a nonzero
    // count means the order table and the ladder have diverged.
    output logic [31:0]                    stat_underflow
);

  localparam int unsigned TW = $clog2(BAND_TICKS);

  // The non-empty bitmaps, in flops so the encoders can see them all at once.
  logic [BAND_TICKS-1:0] bid_map, ask_map;

  // -------------------------------------------------------------------------
  // Stage 0 -> stage 1 pipeline registers, plus the synchronous read data.
  // -------------------------------------------------------------------------
  logic          s1_valid, s1_side, s1_add, s1_done;
  logic [TW-1:0] s1_tick;
  logic [31:0]   s1_qty;
  logic [63:0]   s1_seq;
  logic [31:0]   rd_bid, rd_ask;
  // Whether this tick was occupied when the read was issued. Block RAM is
  // NOT cleared by reset - only flops are - so the quantity memory still
  // holds whatever a previous session left there. The bitmap, which is
  // flops, is therefore the authority on whether a level exists at all, and
  // a read from an unoccupied tick must be treated as zero rather than
  // resurrecting stale contents.
  logic          s1_occupied;

  // The write performed last cycle, kept so stage 1 can forward it.
  logic          wr_valid, wr_side, wr_done;
  logic [TW-1:0] wr_tick;
  logic [31:0]   wr_qty;
  logic [63:0]   wr_seq;

  // -------------------------------------------------------------------------
  // Stage 1 arithmetic, all combinational so the result can be both written
  // back and forwarded in the same cycle.
  // -------------------------------------------------------------------------
  logic [31:0] base_qty, new_qty;
  logic        fwd_hit, underflow;

  always_comb begin
    // Forward when the update in flight touches the same side and tick that
    // was written last cycle: the RAM read for this request was issued before
    // that write landed, so rd_* is stale.
    fwd_hit = wr_valid && s1_valid && (wr_side == s1_side)
              && (wr_tick == s1_tick);
    // Otherwise take whichever side's RAM was read - but only if the bitmap
    // said the level existed. An unoccupied level is zero by definition.
    base_qty = fwd_hit ? wr_qty
                       : (s1_occupied ? (s1_side ? rd_bid : rd_ask) : 32'd0);

    // Removing more than the level holds means the book has diverged.
    underflow = s1_valid && !s1_add && (s1_qty > base_qty);
    // Saturate rather than wrap: a wrapped quantity would look like an
    // enormous level and corrupt the BBO for the rest of the session.
    new_qty = s1_add ? (base_qty + s1_qty)
                     : (underflow ? 32'd0 : (base_qty - s1_qty));
  end

  // -------------------------------------------------------------------------
  // The two encoders, over the live bitmaps, so the best prices simply
  // follow the bitmap with no tracking or invalidation anywhere. Registered
  // internally between their two levels (stage 2 -> stage 3).
  // -------------------------------------------------------------------------
  logic [TW-1:0] best_bid_tick, best_ask_tick;
  logic          have_bid, have_ask;

  // Bid side: the best price is the HIGHEST occupied tick.
  priority_encoder #(.W(BAND_TICKS), .GW(GW), .HIGHEST(1), .REGISTERED(1))
  u_bid_pe (
      .clk(clk), .bitmap(bid_map), .index(best_bid_tick), .any(have_bid)
  );

  // Ask side: the best price is the LOWEST occupied tick.
  priority_encoder #(.W(BAND_TICKS), .GW(GW), .HIGHEST(0), .REGISTERED(1))
  u_ask_pe (
      .clk(clk), .bitmap(ask_map), .index(best_ask_tick), .any(have_ask)
  );

  // Stage 3 registers: the encoder's answer, and the completion marker
  // travelling alongside it so it reaches the output on the same edge.
  logic          pe_bid_v, pe_ask_v, pub_done1, pub_done2;
  logic [TW-1:0] pe_bid_tick, pe_ask_tick;
  logic [63:0]   pub_seq1, pub_seq2;

  // The delayed write stream for the BBO copies: two register stages.
  logic          bbo_d1_bid, bbo_d1_ask, bbo_d2_bid, bbo_d2_ask;
  logic [TW-1:0] bbo_d1_tick, bbo_d2_tick;
  logic [31:0]   bbo_d1_qty, bbo_d2_qty;

  // -------------------------------------------------------------------------
  // The quantity RAMs: two copies per side, written together in stage 1.
  //   *_upd  read at the incoming tick (stage 0), for the read-modify-write
  //   *_bbo  read at the best tick (stage 2), for the published quantity
  // -------------------------------------------------------------------------
  logic        bid_we, ask_we;
  logic [31:0] bbo_bid_q, bbo_ask_q;
  assign bid_we = s1_valid &&  s1_side;   // stage 1 writes the bid side...
  assign ask_we = s1_valid && !s1_side;   // ...or the ask side, never both

  // Update copies: read the level being changed.
  sdp_ram #(.DW(32), .DEPTH(BAND_TICKS)) u_bid_upd (
      .clk(clk), .we(bid_we), .waddr(s1_tick), .wdata(new_qty),
      .re(1'b1), .raddr(s_tick), .rdata(rd_bid));
  sdp_ram #(.DW(32), .DEPTH(BAND_TICKS)) u_ask_upd (
      .clk(clk), .we(ask_we), .waddr(s1_tick), .wdata(new_qty),
      .re(1'b1), .raddr(s_tick), .rdata(rd_ask));

  // BBO copies: written two cycles late (see PIPELINE above), read at the
  // registered best tick. Read-first, so the write landing in the same cycle
  // is not seen - which is exactly the two-cycle lag the bitmap has too.
  sdp_ram #(.DW(32), .DEPTH(BAND_TICKS)) u_bid_bbo (
      .clk(clk), .we(bbo_d2_bid), .waddr(bbo_d2_tick), .wdata(bbo_d2_qty),
      .re(1'b1), .raddr(pe_bid_tick), .rdata(bbo_bid_q));
  sdp_ram #(.DW(32), .DEPTH(BAND_TICKS)) u_ask_bbo (
      .clk(clk), .we(bbo_d2_ask), .waddr(bbo_d2_tick), .wdata(bbo_d2_qty),
      .re(1'b1), .raddr(pe_ask_tick), .rdata(bbo_ask_q));

  // The RAM output register is the published quantity - no extra flop, so
  // it lines up with m_*_tick below. Gated so an empty side reads as zero
  // rather than whatever stale word the RAM happens to hold.
  assign m_bid_qty = m_bid_valid ? bbo_bid_q : 32'd0;
  assign m_ask_qty = m_ask_valid ? bbo_ask_q : 32'd0;

  // -------------------------------------------------------------------------
  // Main sequential logic
  // -------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (rst) begin
      s1_valid       <= 1'b0;
      s1_done        <= 1'b0;
      s1_occupied    <= 1'b0;
      wr_valid       <= 1'b0;
      wr_done        <= 1'b0;
      bid_map        <= '0;
      ask_map        <= '0;
      m_bid_valid    <= 1'b0;
      m_ask_valid    <= 1'b0;
      m_bid_tick     <= '0;
      m_ask_tick     <= '0;
      m_bbo_valid    <= 1'b0;
      m_bbo_seq      <= 64'd0;
      pe_bid_v       <= 1'b0;
      pe_ask_v       <= 1'b0;
      pub_done1      <= 1'b0;
      pub_done2      <= 1'b0;
      bbo_d1_bid     <= 1'b0;
      bbo_d1_ask     <= 1'b0;
      bbo_d2_bid     <= 1'b0;
      bbo_d2_ask     <= 1'b0;
      stat_updates   <= 32'd0;
      stat_underflow <= 32'd0;
    end else begin
      // --- stage 0: latch the request; the RAM reads are wired above -----
      // Both sides are read every time. Reading the side we do not need is
      // free - the RAMs are separate - and it removes a mux from the address
      // path, which is the path that limits Fmax here.
      s1_valid <= s_valid;
      s1_side  <= s_side;
      s1_tick  <= s_tick;
      s1_add   <= s_add;
      s1_qty   <= s_qty;
      s1_done  <= s_done;
      s1_seq   <= s_seq;
      // Sample the occupancy bit alongside the read. Any write that lands
      // between now and stage 1 is caught by the forwarding path instead.
      s1_occupied <= s_side ? bid_map[s_tick] : ask_map[s_tick];

      // --- stage 1: apply the change (the RAM writes are wired above) ----
      wr_valid <= s1_valid;
      wr_side  <= s1_side;
      wr_tick  <= s1_tick;
      wr_qty   <= new_qty;
      wr_done  <= s1_done;
      wr_seq   <= s1_seq;

      if (s1_valid) begin
        // A level is in the bitmap exactly when it holds shares. This one
        // bit is what the priority encoder searches, and clearing it is the
        // whole of "the best bid just dropped to the next rung down".
        if (s1_side) bid_map[s1_tick] <= (new_qty != 32'd0);
        else         ask_map[s1_tick] <= (new_qty != 32'd0);

        // Every applied update is counted; underflows separately.
        stat_updates <= stat_updates + 32'd1;
        if (underflow) begin
          stat_underflow <= stat_underflow + 32'd1;
        end
      end

      // --- the BBO copies' write stream, delayed two cycles ---------------
      bbo_d1_bid  <= bid_we;
      bbo_d1_ask  <= ask_we;
      bbo_d1_tick <= s1_tick;
      bbo_d1_qty  <= new_qty;
      bbo_d2_bid  <= bbo_d1_bid;
      bbo_d2_ask  <= bbo_d1_ask;
      bbo_d2_tick <= bbo_d1_tick;
      bbo_d2_qty  <= bbo_d1_qty;

      // --- stages 2-3: the encoders (level 1 is inside them) --------------
      // The bitmap seen in stage 2 includes the write made in stage 1 the
      // cycle before, so the marker for that write joins here (wr_done).
      pub_done1   <= wr_done;
      pub_seq1    <= wr_seq;
      pe_bid_tick <= best_bid_tick;
      pe_ask_tick <= best_ask_tick;
      pe_bid_v    <= have_bid;
      pe_ask_v    <= have_ask;
      pub_done2   <= pub_done1;
      pub_seq2    <= pub_seq1;

      // --- stage 4: publish the top of book -------------------------------
      // The BBO RAMs are read at pe_*_tick this cycle; their data lands on
      // the same edge as these registers, so all of it moves together.
      m_bid_valid <= pe_bid_v;
      m_ask_valid <= pe_ask_v;
      m_bid_tick  <= pe_bid_tick;
      m_ask_tick  <= pe_ask_tick;
      // If the marked write was a message's final update, this BBO is that
      // message's result.
      m_bbo_valid <= pub_done2;
      m_bbo_seq   <= pub_seq2;
    end
  end

endmodule

`default_nettype wire
