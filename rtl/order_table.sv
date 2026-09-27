// ---------------------------------------------------------------------------
// order_table.sv - step 7: order reference -> (side, tick, remaining shares).
//
// Python oracle: book.Book.orders, a dict. Occupancy oracle (which orders
// fit, which are dropped): model/table_sim.py, which mirrors this module's
// hash, geometry and stash exactly.
//
// WHY THIS MODULE EXISTS AT ALL
//
// E, C, X, D and U identify an order by its 64-bit reference and nothing
// else - no side, no price, no symbol. So every one of those messages must
// read state written earlier in the day before it can be applied. That read
// is on the critical path of 56% of real traffic.
//
// WHY THE GEOMETRY IS WHAT IT IS - MEASURED OVER WHOLE TRADING DAYS
//
// A hash table in hardware cannot grow or chain, so an order whose set is
// full is DROPPED, and a dropped order is a permanently wrong book. The
// target is therefore zero drops over a full day. model/table_sim.py replays
// complete days of AAPL, MSFT, SPY, QQQ and AMD (AAPL peaks at 42,774 live
// orders) through candidate tables:
//
//   hash     sets x ways  stash   AAPL drops   AAPL stash peak
//   xorfold  32768 x 4     64       39,578          64 (full)
//   xorfold  16384 x 8     32       13,368          32 (full)
//   H3       16384 x 8      0          430           -
//   H3       16384 x 8     16            0           7        <- this design
//
// Three lessons, each visible in one row:
//   1. The original XOR-fold hash is measurably worse than random on real
//      references: at AAPL's peak it leaves 786 sets over-full where a
//      random hash leaves ~350. H3 (below) behaves like random.
//   2. Even a random hash overflows 4-way sets at this load, so 8 ways.
//   3. Even 8 ways overflows a few sets for a few moments a day, so a small
//      fully-associative STASH catches those orders. It peaks at 7 of 16
//      on AAPL's full day: more than 2x margin, all five symbols at zero.
//
// Order references are unique per DAY across all symbols. The measured peak
// across all 8,713 symbols (1.74M live orders) fits on no FPGA, so the
// design covers a configurable symbol (feed_handler_top filters by locate).
//
// TIMING: EVERY OPERATION TAKES EXACTLY TWO CYCLES
//
//   cycle 1  ACCEPT  hash the reference(s), issue the RAM reads
//   cycle 2  EXEC    compare tags (sets and stash), write back, emit update
//
// Two is enough and has to be enough: the shortest ITCH message is 21 bytes
// with its prefix and 8 bytes arrive per beat, so consecutive messages
// complete at least TWO beats apart (21 > 16). It also means an op's writes
// always land before the next op's reads, so there is no read-during-write
// hazard between operations at all.
//
// A Replace touches two sets (old order, new order). It still fits in two
// cycles because each way is a TRUE dual-port RAM: port A serves the old
// order's set, port B the new order's, in the same cycle. Its two ladder
// updates (remove old, add new) leave on consecutive cycles; the second uses
// the output slot the next op cannot need yet. stat_overrun counts any op
// that arrives while busy, so the two-cycle claim is checked every run.
// ---------------------------------------------------------------------------

`default_nettype none

module order_table #(
    // Sets in the table; a power of two, at most 2^16 (16 H3 masks below).
    parameter int unsigned SETS   = 16384,
    // Entries compared in parallel per set. Must be at least 2.
    parameter int unsigned WAYS   = 8,
    // Fully-associative overflow entries, held in flip-flops.
    parameter int unsigned STASH  = 16,
    // Width of a tick index, matching price_levels' BAND_TICKS.
    parameter int unsigned TICK_W = 12
) (
    input  wire                clk,
    input  wire                rst,

    // ---- slave: a normalized book operation from decode -----------------
    input  wire                s_valid,
    input  itch_pkg::op_e      s_op,
    input  wire [63:0]         s_ref,
    input  wire [63:0]         s_new_ref,
    input  wire                s_side,
    input  wire [31:0]         s_qty,
    input  wire [TICK_W-1:0]   s_tick,
    input  wire                s_tick_ok,
    input  wire [63:0]         s_seq,

    // ---- master: level updates for price_levels -------------------------
    // m_valid marks a real ladder change. A Replace produces TWO of these on
    // consecutive cycles: remove the old order's shares, then add the new's.
    output logic               m_valid,
    output logic               m_side,
    output logic [TICK_W-1:0]  m_tick,
    output logic               m_add,
    output logic [31:0]        m_qty,
    // m_done pulses exactly once per accepted op, on the cycle of its LAST
    // ladder update (or alone, if the op changes nothing on the ladder). It
    // is what lets the BBO output say "this top of book reflects message N".
    output logic               m_done,
    output logic [63:0]        m_seq,

    // ---- status ---------------------------------------------------------
    // No free way in the set AND no free stash entry: the order is dropped
    // and the book goes quietly incomplete. This counter is the only
    // evidence that ever happened, so it must read zero on a real day.
    output logic [31:0]        stat_collisions,
    // A reduce/delete/replace naming an order the table never held. Normal
    // when replaying a mid-day extract, a real bug on a full-day replay.
    output logic [31:0]        stat_missing,
    // An op arrived while the previous one was still executing, or before
    // `ready`. Unreachable on a well-formed feed; counted, not assumed.
    output logic [31:0]        stat_overrun,
    // High-water mark of stash occupancy: the table's remaining margin.
    output logic [31:0]        stat_stash_peak,

    // Low until the startup sweep has cleared every valid bit. Block RAM
    // comes up with undefined contents and reset cannot clear it. Takes
    // SETS cycles - about 105 us at 156.25 MHz - once at boot.
    output logic               ready
);

  // Index width: which set. Ways and stash entries are one-hot vectors.
  localparam int unsigned IDX_W = $clog2(SETS);
  // The tag stores only the reference bits ABOVE the index (see the hash).
  localparam int unsigned TAG_W = 64 - IDX_W;

  // Package names are written out in full (itch_pkg::OP_ADD) rather than
  // imported: every simulator and synthesis tool accepts a qualified name,
  // while Yosys rejects both forms of `import` inside a module.

  // -------------------------------------------------------------------------
  // The stored entry, 97 bits at the default geometry:
  //
  //   qty    [31:0]                32 bits  remaining shares
  //   tick   [32 +: TICK_W]        price as a ladder index
  //   side   [E_SIDE]              1 = buy
  //   tag    [E_TAG +: TAG_W]      reference bits above the index
  //   ladder [E_LADDER]            1 = its shares are on the price ladder
  //   valid  [E_VALID]             1 = this way holds a live order
  //
  // The ladder bit exists because an out-of-band order is still tracked (so
  // its later delete resolves) but was never added to the ladder - so its
  // delete must not take shares off it either.
  // -------------------------------------------------------------------------
  localparam int unsigned E_TICK   = 32;
  localparam int unsigned E_SIDE   = 32 + TICK_W;
  localparam int unsigned E_TAG    = E_SIDE + 1;
  localparam int unsigned E_LADDER = E_TAG + TAG_W;
  localparam int unsigned E_VALID  = E_LADDER + 1;
  localparam int unsigned ENTRY_W  = E_VALID + 1;

  // Packing helper, so the layout is written down exactly once. The tag is
  // taken from the full reference here, so callers cannot get it wrong.
  function automatic logic [ENTRY_W-1:0] pack_entry(
      input logic ld, input logic [63:0] r, input logic sd,
      input logic [TICK_W-1:0] tk, input logic [31:0] q);
    // Valid is always 1 for a packed entry; an empty way is simply all-zero.
    pack_entry = {1'b1, ld, r[63:IDX_W], sd, tk, q};
  endfunction

  // -------------------------------------------------------------------------
  // The hash: H3 with an identity low block.
  //
  //   index bit i = ref bit i  XOR  parity(ref[63:IDX_W] AND mask_i)
  //
  // H3 is a universal hash family: structured references (and real ones are
  // very structured) spread across sets like random ones. In hardware each
  // index bit is one XOR tree over at most 50 inputs - three LUT levels, no
  // multiplier. The identity low block buys something extra: two references
  // in the same set with equal upper bits must have equal lower bits too,
  // so the tag stores only ref[63:IDX_W] and a match is still exact - 14
  // bits per entry saved, zero false hits.
  //
  // The 16 masks are the same constants as model/table_sim.py's H3_MASKS,
  // which is how the testbench predicts exactly where each order lands.
  // -------------------------------------------------------------------------
  function automatic logic [63:0] h3_mask(input int i);
    case (i)
      0:  h3_mask = 64'h9E3779B97F4A7C15;
      1:  h3_mask = 64'hBF58476D1CE4E5B9;
      2:  h3_mask = 64'h94D049BB133111EB;
      3:  h3_mask = 64'hD6E8FEB86659FD93;
      4:  h3_mask = 64'hA0761D6478BD642F;
      5:  h3_mask = 64'hE7037ED1A0B428DB;
      6:  h3_mask = 64'h8EBC6AF09C88C6E3;
      7:  h3_mask = 64'h589965CC75374CC3;
      8:  h3_mask = 64'h1D8E4E27C47D124F;
      9:  h3_mask = 64'hC2B2AE3D27D4EB4F;
      10: h3_mask = 64'h165667B19E3779F9;
      11: h3_mask = 64'h85EBCA77C2B2AE63;
      12: h3_mask = 64'h27D4EB2F165667C5;
      13: h3_mask = 64'hFF51AFD7ED558CCD;
      14: h3_mask = 64'hC4CEB9FE1A85EC53;
      15: h3_mask = 64'h9FB21C651E98DF25;
      default: h3_mask = 64'd0;
    endcase
  endfunction

  function automatic logic [IDX_W-1:0] hash_idx(input logic [63:0] r);
    logic [63:0] hi;
    // Only the bits above the index feed the XOR trees.
    hi = r >> IDX_W;
    for (int i = 0; i < int'(IDX_W); i++) begin
      // Reduction XOR = parity: one XOR tree per index bit.
      hash_idx[i] = r[i] ^ (^(hi & (h3_mask(i) >> IDX_W)));
    end
  endfunction

  // -------------------------------------------------------------------------
  // Sequencer: INIT sweeps the table once, then IDLE <-> EXEC forever.
  // -------------------------------------------------------------------------
  typedef enum logic [1:0] { T_INIT, T_IDLE, T_EXEC } tstate_e;
  tstate_e state;

  // Walks every set at startup, clearing all ways through port A.
  logic [IDX_W-1:0] init_idx;

  // The request latched at ACCEPT, used during EXEC.
  itch_pkg::op_e     op_kind;
  logic [63:0]       op_ref, op_new_ref, op_seq;
  logic              op_side, op_tick_ok;
  logic [31:0]       op_qty;
  logic [TICK_W-1:0] op_tick;
  logic [IDX_W-1:0]  idx_a, idx_b;   // set of op_ref, set of op_new_ref

  // A Replace's second ladder update (the add), held for one cycle.
  logic              pend_v, pend_valid, pend_side;
  logic [TICK_W-1:0] pend_tick;
  logic [31:0]       pend_qty;
  logic [63:0]       pend_seq;

  // An op is accepted only in IDLE; NONE never reaches here from decode.
  logic accept;
  assign accept = (state == T_IDLE) && s_valid
                  && (s_op != itch_pkg::OP_NONE);

  // Shorthand for the op in EXEC, used throughout the way selection.
  logic is_add, is_red, is_del, is_rep;
  always_comb begin
    is_add = (state == T_EXEC) && (op_kind == itch_pkg::OP_ADD);
    is_red = (state == T_EXEC) && (op_kind == itch_pkg::OP_REDUCE);
    is_del = (state == T_EXEC) && (op_kind == itch_pkg::OP_DELETE);
    is_rep = (state == T_EXEC) && (op_kind == itch_pkg::OP_REPLACE);
  end

  // -------------------------------------------------------------------------
  // The memories: one true dual-port RAM per way, so all ways of a set are
  // read in the same cycle, on two ports. Addresses are shared by every way;
  // write data and enables are PER WAY, which is what lets each way compute
  // its own write-back in parallel (see EXEC below).
  // -------------------------------------------------------------------------
  logic [IDX_W-1:0]   a_addr, b_addr;
  logic [ENTRY_W-1:0] a_din [WAYS];
  logic [ENTRY_W-1:0] b_din;
  logic [WAYS-1:0]    a_we, b_we;
  logic [ENTRY_W-1:0] rd_a [WAYS];   // op_ref's set, as read at ACCEPT
  logic [ENTRY_W-1:0] rd_b [WAYS];   // op_new_ref's set, likewise

  // Explicit generate/genvar: Quartus Standard/Lite's parser rejects the
  // bare form and an in-loop genvar, though both are legal SystemVerilog.
  genvar w;
  generate
  for (w = 0; w < int'(WAYS); w++) begin : g_way
    // Port A: old/primary order's set. Port B: a Replace's new order's set.
    tdp_ram #(.DW(ENTRY_W), .DEPTH(SETS)) u_way (
        .clk   (clk),
        .a_en  (1'b1),   .a_we(a_we[w]), .a_addr(a_addr), .a_din(a_din[w]),
        .a_dout(rd_a[w]),
        .b_en  (1'b1),   .b_we(b_we[w]), .b_addr(b_addr), .b_din(b_din),
        .b_dout(rd_b[w])
    );
  end
  endgenerate

  // -------------------------------------------------------------------------
  // The stash: STASH full entries in flip-flops, searched in parallel. Being
  // flops it needs no read cycle and no startup sweep - reset clears it.
  // -------------------------------------------------------------------------
  logic [STASH-1:0]  st_valid, st_ladder, st_side;
  logic [63:0]       st_ref  [STASH];
  logic [TICK_W-1:0] st_tick [STASH];
  logic [31:0]       st_qty  [STASH];

  // -------------------------------------------------------------------------
  // EXEC TIMING, AND WHY EVERYTHING BELOW IS ONE-HOT AND PER-WAY
  //
  // EXEC starts when the block RAM data arrives, and must finish with the
  // write-back data at the RAM inputs one cycle later. The first version did
  // it serially - compare tags, encode the winning way to a number, select
  // that way's entry, compare and subtract the quantity, then write - and
  // Yosys static timing measured 10.3 ns of logic against a 6.4 ns clock.
  //
  // Two changes shorten it without adding a cycle (a cycle cannot be added:
  // messages arrive two cycles apart, and overlapping two ops would need four
  // RAM ports):
  //   1. Hits, free ways and stash matches stay ONE-HOT vectors. Selecting
  //      with a one-hot vector is an AND-OR; encoding to a number and
  //      decoding it again was two extra logic levels on every path.
  //   2. Each way has its own RAM, so each way computes its OWN reduced
  //      write-back - quantity arithmetic included - in parallel with the tag
  //      compare. The compare then only decides which way's write enable
  //      fires. "compare, then subtract" became "compare while subtracting".
  // -------------------------------------------------------------------------

  // Lowest set bit of a vector, as one-hot: v & -v. Used to pick the lowest
  // free way or stash entry; this is two's complement, so it is a carry
  // chain rather than a priority encoder.
  function automatic logic [WAYS-1:0] lowest_way(input logic [WAYS-1:0] v);
    lowest_way = v & (~v + 1'b1);
  endfunction
  function automatic logic [STASH-1:0] lowest_st(input logic [STASH-1:0] v);
    lowest_st = v & (~v + 1'b1);
  endfunction

  // --- EXEC part 1: find op_ref in its set (port A) and in the stash -----
  logic [WAYS-1:0]  hitv_a, freev_a, vld_a;
  logic [STASH-1:0] shv_a;
  logic             hit_a, free_a_ok, sh_a, found_a;
  always_comb begin
    for (int w = 0; w < int'(WAYS); w++) begin
      vld_a[w]  = rd_a[w][E_VALID];
      // A live entry whose upper bits match; the set index fixes the rest.
      // All WAYS comparisons happen at once - the whole reason associativity
      // is affordable in hardware.
      hitv_a[w] = vld_a[w] && (rd_a[w][E_TAG +: TAG_W] == op_ref[63:IDX_W]);
    end
    for (int k = 0; k < int'(STASH); k++) begin
      // The stash holds whole references: no set context to lean on.
      shv_a[k] = st_valid[k] && (st_ref[k] == op_ref);
    end
    freev_a   = lowest_way(~vld_a);
    hit_a     = |hitv_a;
    free_a_ok = |(~vld_a);
    sh_a      = |shv_a;
    // An order lives in exactly one place: a way of its set, or the stash.
    found_a   = hit_a || sh_a;
  end

  // --- EXEC part 2: the found order's fields, by one-hot AND-OR ----------
  // These are the side, price and size the message itself never carried.
  //
  // A reduce's arithmetic is done for EVERY way (and stash entry) before
  // anyone knows which one matched, as ONE 33-bit subtraction each:
  //   diff = held - asked.  Its borrow bit says "asked for more than held"
  //   (take everything, free the entry); otherwise diff is the new size, and
  //   held == asked also frees the entry.
  // One carry chain doing both jobs; the first version compared, then
  // selected, then subtracted - two carry chains in series.
  logic [32:0]       diff_w [WAYS];
  logic [32:0]       diff_s [STASH];
  logic [WAYS-1:0]   empties_w;
  logic [STASH-1:0]  empties_s;
  logic [31:0]       take_w [WAYS];
  logic [31:0]       take_s [STASH];
  logic              e_ladder, e_side;
  logic [TICK_W-1:0] e_tick;
  logic [31:0]       e_qty, take_qty, st_left;
  always_comb begin
    e_ladder = 1'b0;
    e_side   = 1'b0;
    e_tick   = '0;
    e_qty    = 32'd0;
    take_qty = 32'd0;
    st_left  = 32'd0;
    for (int w = 0; w < int'(WAYS); w++) begin
      diff_w[w]    = {1'b0, rd_a[w][31:0]} - {1'b0, op_qty};
      // "Exactly used up" is an equality compare, which runs in parallel
      // with the subtraction instead of waiting for its result.
      empties_w[w] = diff_w[w][32] || (rd_a[w][31:0] == op_qty);
      // Saturating: never take more than the order holds.
      take_w[w]    = diff_w[w][32] ? rd_a[w][31:0] : op_qty;
      // At most one bit of hitv_a is set, so OR-ing gated fields selects it.
      e_ladder  = e_ladder | (hitv_a[w] & rd_a[w][E_LADDER]);
      e_side    = e_side   | (hitv_a[w] & rd_a[w][E_SIDE]);
      e_tick    = e_tick   | ({TICK_W{hitv_a[w]}} & rd_a[w][E_TICK +: TICK_W]);
      e_qty     = e_qty    | ({32{hitv_a[w]}} & rd_a[w][31:0]);
      take_qty  = take_qty | ({32{hitv_a[w]}} & take_w[w]);
    end
    for (int k = 0; k < int'(STASH); k++) begin
      // Same selection over the stash; an order is never in both places.
      diff_s[k]    = {1'b0, st_qty[k]} - {1'b0, op_qty};
      empties_s[k] = diff_s[k][32] || (st_qty[k] == op_qty);
      take_s[k]    = diff_s[k][32] ? st_qty[k] : op_qty;
      // What a stash-resident order keeps after a reduce: flops only, so
      // this never waits on the RAM.
      st_left      = st_left | ({32{shv_a[k]}} & diff_s[k][31:0]);
      e_ladder  = e_ladder | (shv_a[k] & st_ladder[k]);
      e_side    = e_side   | (shv_a[k] & st_side[k]);
      e_tick    = e_tick   | ({TICK_W{shv_a[k]}} & st_tick[k]);
      e_qty     = e_qty    | ({32{shv_a[k]}} & st_qty[k]);
      take_qty  = take_qty | ({32{shv_a[k]}} & take_s[k]);
    end
  end

  // --- EXEC part 3: where a new order goes --------------------------------
  //
  // The one hazard left in this module lives here. A Replace frees the old
  // order in the SAME cycle it places the new one, but the reads happened
  // before that. If both orders hash to the SAME set, that set still looks
  // as full as before; without care, a plain swap on a full set would be
  // refused as a collision.
  //
  // The answer: in that case the new order simply takes the old order's way
  // - the very slot this op is vacating. It is always free by the end of
  // the op, and choosing it needs nothing but the tag compare that already
  // happens. (An earlier version instead recomputed the new set's free ways
  // net of the vacated one, which put the free-way search AFTER the tag
  // compare, in series; this keeps the two in parallel.) The stash gets the
  // same treatment through st_busy.
  logic             same_set;
  logic [WAYS-1:0]  vld_b, hitv_b, freev_b;
  logic [STASH-1:0] st_busy, shv_b, st_freev;
  logic             hit_b, free_b_ok, sh_b, st_free_ok;
  always_comb begin
    same_set = (idx_a == idx_b);
    for (int w = 0; w < int'(WAYS); w++) begin
      // Raw occupancy of the new order's set, straight from the RAM.
      vld_b[w]  = rd_b[w][E_VALID];
      // The new reference already live: overwrite it rather than duplicate.
      // (It can never match the old order's entry: the references differ.)
      hitv_b[w] = vld_b[w] && (rd_b[w][E_TAG +: TAG_W] == op_new_ref[63:IDX_W]);
    end
    for (int k = 0; k < int'(STASH); k++) begin
      // Stash occupancy, net of a Replace's old order leaving the stash.
      st_busy[k] = st_valid[k] && !(is_rep && shv_a[k]);
      // A duplicate of the new reference sitting in the stash.
      shv_b[k]   = st_busy[k] && (st_ref[k] == op_new_ref);
    end
    freev_b    = lowest_way(~vld_b);
    st_freev   = lowest_st(~st_busy);
    hit_b      = |hitv_b;
    free_b_ok  = |(~vld_b);
    sh_b       = |shv_b;
    st_free_ok = |(~st_busy);
  end

  // Placement, as one-hot vectors so the RAM enables, the stash writes and
  // the ladder outputs below cannot disagree. Preference: the existing entry
  // (a duplicate reference), then a free way, then the stash.
  logic [WAYS-1:0]  add_wv, rep_wv;
  logic [STASH-1:0] add_sv, rep_sv;
  logic             add_ok, rep_ok;
  always_comb begin
    // An Add goes into op_ref's own set (A)...
    add_wv = hit_a ? hitv_a : ((!sh_a && free_a_ok) ? freev_a : '0);
    add_sv = (|add_wv) ? '0 : (sh_a ? shv_a : (st_free_ok ? st_freev : '0));
    add_ok = |add_wv || |add_sv;
    // ...a Replace's new order into op_new_ref's set (B), and only if the
    // old order was found - an orphan replace changes nothing, as in book.py.
    // Same set as the old order: reuse the old order's way (see above).
    rep_wv = !found_a                 ? '0
           : hit_b                    ? hitv_b
           : (same_set && hit_a)      ? hitv_a
           : (!sh_b && free_b_ok)     ? freev_b
           :                            '0;
    rep_sv = (!found_a || |rep_wv) ? '0
           : (sh_b ? shv_b : (st_free_ok ? st_freev : '0));
    rep_ok = |rep_wv || |rep_sv;
  end

  // -------------------------------------------------------------------------
  // RAM port control. Port A carries the sweep, the primary read, and the
  // primary write-back; port B the new-order read and write of a Replace.
  // -------------------------------------------------------------------------
  logic [ENTRY_W-1:0] add_entry;
  always_comb begin
    // The entry an Add writes: the same for every way; the enable picks one.
    add_entry = pack_entry(op_tick_ok, op_ref, op_side, op_tick, op_qty);
    // A Replace's new order, inheriting the OLD order's side.
    b_din  = pack_entry(op_tick_ok, op_new_ref, e_side, op_tick, op_qty);
    // Defaults: no writes; addresses follow the incoming request so the
    // read is issued in the ACCEPT cycle.
    a_we   = '0;
    b_we   = '0;
    a_addr = hash_idx(s_ref);
    b_addr = hash_idx(s_new_ref);
    for (int w = 0; w < int'(WAYS); w++) begin
      // Each way's own write-back: an Add's entry, this way's entry reduced
      // by this way's take, or all-zero (invalid) to free the way.
      if (is_add) begin
        a_din[w] = add_entry;
      end else if (is_red && !empties_w[w]) begin
        a_din[w] = pack_entry(rd_a[w][E_LADDER], op_ref, rd_a[w][E_SIDE],
                              rd_a[w][E_TICK +: TICK_W], diff_w[w][31:0]);
      end else begin
        a_din[w] = '0;
      end
    end

    if (state == T_INIT) begin
      // Startup sweep: zero every way of one set per cycle.
      a_addr = init_idx;
      a_we   = '1;
    end else if (state == T_EXEC) begin
      // Write back to the sets that were read in ACCEPT.
      a_addr = idx_a;
      b_addr = idx_b;
      if (is_add)                a_we = add_wv;
      else if (is_red || is_del) a_we = hitv_a;
      else if (is_rep) begin
        // Free the old order on port A and place the new one on port B. If
        // both land on the same address of the same way, port B's write
        // alone is enough, and two ports writing one address is undefined,
        // so A stands down for that way.
        a_we = hitv_a & ~(same_set ? rep_wv : '0);
        b_we = rep_wv;
      end
    end
  end

  // -------------------------------------------------------------------------
  // Deferred stash update. EXEC only DECIDES what happens to the stash - which
  // entries to clear, to shrink, or to fill - and registers that; the stash
  // itself changes on the following cycle. That is safe because the next op
  // cannot reach EXEC for at least two more cycles, and it takes the
  // stash's 16-way data muxes off EXEC's critical path (Yosys static timing
  // had that path ending at st_ref). RAM writes cannot be deferred the same
  // way: the next op's RAM read may be the very next cycle.
  // -------------------------------------------------------------------------
  logic [STASH-1:0]  su_kill, su_dec, su_new;   // which entries, one-hot
  logic [31:0]       su_dec_qty;                // shrunk quantity
  logic [63:0]       su_ref;                    // the new entry's fields
  logic              su_side, su_ladder;
  logic [TICK_W-1:0] su_tick;
  logic [31:0]       su_qty;

  // Stash occupancy, for the high-water mark: a small adder tree.
  logic [31:0] st_count;
  always_comb begin
    st_count = 32'd0;
    for (int k = 0; k < int'(STASH); k++) begin
      st_count = st_count + {31'd0, st_valid[k]};
    end
  end

  // -------------------------------------------------------------------------
  // Main sequential logic
  // -------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (rst) begin
      state           <= T_INIT;
      init_idx        <= '0;
      ready           <= 1'b0;
      m_valid         <= 1'b0;
      m_done          <= 1'b0;
      m_side          <= 1'b0;
      m_tick          <= '0;
      m_add           <= 1'b0;
      m_qty           <= 32'd0;
      m_seq           <= 64'd0;
      pend_v          <= 1'b0;
      st_valid        <= '0;
      su_kill         <= '0;
      su_dec          <= '0;
      su_new          <= '0;
      stat_collisions <= 32'd0;
      stat_missing    <= 32'd0;
      stat_overrun    <= 32'd0;
      stat_stash_peak <= 32'd0;
    end else begin
      // Ladder updates and completions are single-cycle pulses.
      m_valid <= 1'b0;
      m_done  <= 1'b0;
      pend_v  <= 1'b0;

      // Apply the stash decision EXEC registered last cycle. Clears first,
      // then fills, so a Replace whose new order reuses the entry its old
      // order vacated ends with the entry valid.
      for (int k = 0; k < int'(STASH); k++) begin
        if (su_kill[k]) st_valid[k] <= 1'b0;
        if (su_dec[k])  st_qty[k]   <= su_dec_qty;
        if (su_new[k]) begin
          st_valid[k]  <= 1'b1;
          st_ladder[k] <= su_ladder;
          st_ref[k]    <= su_ref;
          st_side[k]   <= su_side;
          st_tick[k]   <= su_tick;
          st_qty[k]    <= su_qty;
        end
      end
      // No decision unless EXEC makes one below.
      su_kill <= '0;
      su_dec  <= '0;
      su_new  <= '0;

      // Anything the table cannot take is counted, never silently lost.
      if (s_valid && (s_op != itch_pkg::OP_NONE) && !accept) begin
        stat_overrun <= stat_overrun + 32'd1;
      end
      // The stash's high-water mark: how close the day came to a drop.
      if (st_count > stat_stash_peak) begin
        stat_stash_peak <= st_count;
      end

      // A Replace's second update goes out the cycle after its first. The
      // next op cannot have reached EXEC yet, so this slot is always free.
      if (pend_v) begin
        m_valid <= pend_valid;
        m_side  <= pend_side;
        m_tick  <= pend_tick;
        m_add   <= 1'b1;
        m_qty   <= pend_qty;
        m_seq   <= pend_seq;
        m_done  <= 1'b1;
      end

      case (state)
        // --- startup: port A clears one set per cycle -------------------
        T_INIT: begin
          init_idx <= init_idx + 1'b1;
          // Done once the last set has been written.
          if (init_idx == IDX_W'(SETS - 1)) begin
            state <= T_IDLE;
            ready <= 1'b1;
          end
        end

        // --- ACCEPT: latch the op; the RAM reads were issued above ------
        T_IDLE: begin
          if (accept) begin
            op_kind    <= s_op;
            op_ref     <= s_ref;
            op_new_ref <= s_new_ref;
            op_side    <= s_side;
            op_qty     <= s_qty;
            op_tick    <= s_tick;
            op_tick_ok <= s_tick_ok;
            op_seq     <= s_seq;
            // Remember which sets were read, for the write-back.
            idx_a      <= hash_idx(s_ref);
            idx_b      <= hash_idx(s_new_ref);
            state      <= T_EXEC;
          end
        end

        // --- EXEC: entries are back; RAM writes happen combinationally ---
        T_EXEC: begin
          state  <= T_IDLE;
          m_seq  <= op_seq;
          // Every op but a successful Replace completes this cycle.
          m_done <= !(is_rep && found_a);

          if (is_add) begin
            if (add_ok) begin
              // Into the stash if the set had no room (applied next cycle).
              su_new    <= add_sv;
              su_ref    <= op_ref;
              su_side   <= op_side;
              su_ladder <= op_tick_ok;
              su_tick   <= op_tick;
              su_qty    <= op_qty;
              // Only placed on the ladder if its price was in band.
              m_valid <= op_tick_ok;
              m_side  <= op_side;
              m_tick  <= op_tick;
              m_add   <= 1'b1;
              m_qty   <= op_qty;
            end else begin
              // Set and stash both full: the order is dropped and the book
              // is now quietly incomplete - hence the counter.
              stat_collisions <= stat_collisions + 32'd1;
            end
          end

          // Reduce and delete both need the order's stored side and price.
          if (is_red || is_del) begin
            if (found_a) begin
              // Only orders that went on the ladder may come off it.
              m_valid <= e_ladder;
              m_side  <= e_side;
              m_tick  <= e_tick;
              m_add   <= 1'b0;
              // Delete removes whatever is left; reduce what it names.
              m_qty   <= is_del ? e_qty : take_qty;
              // A stash-resident order is updated next cycle; a set-resident
              // one by its way's RAM write above.
              for (int k = 0; k < int'(STASH); k++) begin
                if (is_del || empties_s[k]) su_kill[k] <= shv_a[k];
                else                        su_dec[k]  <= shv_a[k];
              end
              su_dec_qty <= st_left;
            end else begin
              stat_missing <= stat_missing + 32'd1;
            end
          end

          // The expensive message: remove the old order now, add the new
          // one on the next cycle through the pending register.
          if (is_rep) begin
            if (found_a) begin
              m_valid <= e_ladder;
              m_side  <= e_side;
              m_tick  <= e_tick;
              m_add   <= 1'b0;
              m_qty   <= e_qty;
              // Old order leaving the stash, new order entering it - both
              // applied next cycle, clear before fill.
              su_kill   <= shv_a;
              su_new    <= rep_sv;
              su_ref    <= op_new_ref;
              su_side   <= e_side;
              su_ladder <= op_tick_ok;
              su_tick   <= op_tick;
              su_qty    <= op_qty;
              // The new order inherits the OLD order's side - the reason a
              // replace cannot be applied without reading the table.
              pend_v     <= 1'b1;
              pend_valid <= rep_ok && op_tick_ok;
              pend_side  <= e_side;
              pend_tick  <= op_tick;
              pend_qty   <= op_qty;
              pend_seq   <= op_seq;
              // Old order removed but nowhere at all to put the new one.
              if (!rep_ok) stat_collisions <= stat_collisions + 32'd1;
            end else begin
              stat_missing <= stat_missing + 32'd1;
            end
          end
        end

        default: state <= T_IDLE;
      endcase
    end
  end

endmodule

`default_nettype wire
