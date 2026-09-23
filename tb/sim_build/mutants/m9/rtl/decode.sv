// ---------------------------------------------------------------------------
// decode.sv - step 6: one ITCH message in, one normalized book operation out.
//
// Python oracle: itch.decode(), plus the add/reduce/delete/replace mapping
// that book.Book.apply() performs.
//
// MOSTLY THIS MODULE IS FREE. Field extraction is fixed bit slices - every
// field of every type comes out in the same cycle, because slicing a register
// at a constant offset is just wires. This is the one place where hardware is
// straightforwardly better than software: struct.unpack() costs a function
// call per message, this costs nothing.
//
// THREE THINGS IN IT ARE NOT FREE, AND THEY ARE THE INTERESTING PART:
//
// 1. Price to tick index needs a divide by 100, which is not a shift. Done
//    here with a reciprocal multiply, pipelined (see below).
// 2. A Replace is kept as ONE operation carrying both order references.
//    Splitting it into delete+add would double the worst-case work per
//    message, and 'U' is 7.39% of real traffic - measured on 2019-01-30.
// 3. 'C' carries an execution price that must NOT reach the book. The shares
//    leave at the order's resting price. Using the printed price is the
//    classic ITCH bug that corrupts a book silently for a whole day.
//
// PIPELINE: THREE STAGES, BECAUSE OF THE DIVIDE
//
// The first version did the whole price-to-tick conversion in one cycle with
// a 32 x 32 multiply. Yosys static timing put that path at ~14 ns of logic
// against a 6.4 ns clock - it could never have run at line rate. Now:
//
//   stage 1  fields out of the message, op mapping, band check, delta
//   stage 2  (delta / 4) * 167773 in ONE DSP block, registered
//   stage 3  tick = product >> 22, sub-penny check, outputs registered
//
// Three cycles of latency instead of one, fixed, and a throughput of one
// message per cycle - more than the wire can deliver.
//
// BYTE ORDER. m_msg arrives with message byte i at bits [8i+7:8i], while ITCH
// fields are big-endian. So every multi-byte field is rebuilt by
// concatenating its bytes in increasing address order, most significant
// first - which is what all the explicit concatenations below are doing.
// ---------------------------------------------------------------------------

`default_nettype none

module decode #(
    // Must match msg_frame's MAX_MSG so the message bus lines up.
    parameter int unsigned MAX_MSG    = 50,
    // Ticks the price ladder covers. 4096 one-cent ticks is $40.96. Must
    // match price_levels; feed_handler_top passes one value to both. The
    // reciprocal below is proven exact only up to 4096 ticks.
    parameter int unsigned BAND_TICKS = 4096
) (
    input  wire                   clk,
    input  wire                   rst,

    // ---- slave: one whole message per pulse, from msg_frame -------------
    input  wire [MAX_MSG*8-1:0]   s_msg,
    // verilator lint_off UNUSEDSIGNAL
    // The length is not needed to decode: the type byte already implies it,
    // and msg_frame has already validated it against the spec table. Kept on
    // the interface because dropping a field that the next engineer expects
    // is worse than carrying one that is unused.
    input  wire [7:0]             s_len,
    // verilator lint_on UNUSEDSIGNAL
    input  wire                   s_valid,
    input  wire [63:0]            s_seq,

    // ---- configuration --------------------------------------------------
    // Lowest price the tick table covers, in raw feed units. Set once per
    // session from the opening price; the table spans BAND_TICKS above it.
    input  wire [31:0]            cfg_band_base,

    // ---- master: the normalized book operation --------------------------
    output itch_pkg::op_e         m_op,
    output logic                  m_valid,
    output logic [15:0]           m_locate,
    output logic [63:0]           m_ref,
    // Only meaningful for OP_REPLACE; the order being created.
    output logic [63:0]           m_new_ref,
    // 1 = buy. Only meaningful for OP_ADD: a reduce or delete does not carry
    // a side, which is precisely why the order table has to exist.
    output logic                  m_side,
    output logic [31:0]           m_qty,
    output logic [31:0]           m_price,
    // Price as an index into the tick table, valid only when m_tick_ok.
    output logic [15:0]           m_tick,
    output logic                  m_tick_ok,
    output logic [63:0]           m_seq,

    // ---- status ---------------------------------------------------------
    output logic [31:0]           stat_ops,
    // Prices outside the band. Certain, not hypothetical: AAPL's observed
    // range on a real day is $0.0001 to $199,999.99 because of stub quotes.
    output logic [31:0]           stat_out_of_band,
    // Prices that are not whole cents. Legal below $1, and they cannot be
    // represented in a per-cent tick table, so they are counted not silently
    // rounded.
    output logic [31:0]           stat_subpenny
);

  // Package names are written out in full (itch_pkg::OP_ADD) rather than
  // imported: every simulator and synthesis tool accepts a qualified name,
  // while Yosys rejects both forms of `import` inside a module.

  // The band in raw feed units: ticks times 100 units per cent.
  localparam int unsigned BAND_SPAN = BAND_TICKS * itch_pkg::TICK_UNITS;

  // -------------------------------------------------------------------------
  // Helper: pull a big-endian field out of the little-endian-lane message bus.
  // Byte k of the message sits at bits [8k+7:8k].
  // -------------------------------------------------------------------------
  function automatic logic [15:0] be16(input int k);
    // Byte k is the most significant half of a 2-byte big-endian field.
    be16 = {s_msg[8*k +: 8], s_msg[8*(k+1) +: 8]};
  endfunction

  function automatic logic [31:0] be32(input int k);
    // Four bytes, most significant first, in increasing address order.
    be32 = {s_msg[8*k +: 8], s_msg[8*(k+1) +: 8],
            s_msg[8*(k+2) +: 8], s_msg[8*(k+3) +: 8]};
  endfunction

  function automatic logic [63:0] be64(input int k);
    // Eight bytes. Order references are 64-bit and unique per trading day
    // across every symbol, which is why the order table is shared.
    be64 = {s_msg[8*k +: 8], s_msg[8*(k+1) +: 8],
            s_msg[8*(k+2) +: 8], s_msg[8*(k+3) +: 8],
            s_msg[8*(k+4) +: 8], s_msg[8*(k+5) +: 8],
            s_msg[8*(k+6) +: 8], s_msg[8*(k+7) +: 8]};
  endfunction

  // =========================================================================
  // STAGE 1: field extraction and operation mapping (combinational, then
  // registered into the p1_* stage).
  // =========================================================================

  // Every message shares an 11-byte header: type(1), locate(2), tracking(2),
  // timestamp(6). Type-specific fields follow.
  logic [7:0]  msg_type;
  logic [15:0] locate;
  assign msg_type = s_msg[7:0];
  assign locate   = be16(1);

  // A/F: ref(11) side(19) shares(20) symbol(24) price(32)
  logic [63:0] add_ref;
  logic        add_side;
  assign add_ref   = be64(11);
  // Compare against 'B' rather than testing a bit: the spec says the field is
  // a character, and 'B' vs 'S' differ in more than one bit.
  assign add_side  = (s_msg[8*19 +: 8] == itch_pkg::SIDE_BUY);
  logic [31:0] add_qty, add_price;
  assign add_qty   = be32(20);
  assign add_price = be32(32);

  // E/C/X all share: ref(11) shares(19). C's execution price at byte 32 is
  // deliberately not read - see the header comment.
  logic [63:0] red_ref;
  logic [31:0] red_qty;
  assign red_ref = be64(11);
  assign red_qty = be32(19);

  // U: old ref(11) new ref(19) shares(27) price(31)
  logic [63:0] rep_new_ref;
  logic [31:0] rep_qty, rep_price;
  assign rep_new_ref = be64(19);
  assign rep_qty     = be32(27);
  assign rep_price   = be32(31);

  // The whole of book.Book.apply()'s dispatch, expressed as a mux.
  itch_pkg::op_e op_c;
  logic [63:0]   ref_c, new_ref_c;
  logic [31:0]   qty_c, price_c;
  logic          side_c, has_price;

  always_comb begin
    // Default to doing nothing, so an unhandled type can never accidentally
    // mutate the book.
    op_c      = itch_pkg::OP_NONE;
    ref_c     = add_ref;          // byte offset 11 for every type that has one
    new_ref_c = 64'd0;
    qty_c     = 32'd0;
    price_c   = 32'd0;
    side_c    = 1'b0;
    has_price = 1'b0;

    case (msg_type)
      // 'A' and 'F' differ only by a trailing 4-byte MPID the book ignores.
      itch_pkg::MSG_ADD, itch_pkg::MSG_ADD_MPID: begin
        op_c      = itch_pkg::OP_ADD;
        qty_c     = add_qty;
        price_c   = add_price;
        side_c    = add_side;
        has_price = 1'b1;
      end

      // Execute, execute-with-price and cancel are one operation to the book.
      itch_pkg::MSG_EXECUTED, itch_pkg::MSG_EXEC_PRICE,
      itch_pkg::MSG_CANCEL: begin
        op_c  = itch_pkg::OP_REDUCE;
        ref_c = red_ref;
        qty_c = red_qty;
      end

      // Delete carries nothing but the reference.
      itch_pkg::MSG_DELETE: op_c = itch_pkg::OP_DELETE;

      // Replace carries no side: the new order inherits it from the old one,
      // so the order table must be read before the add can be performed.
      itch_pkg::MSG_REPLACE: begin
        op_c      = itch_pkg::OP_REPLACE;
        new_ref_c = rep_new_ref;
        qty_c     = rep_qty;
        price_c   = rep_price;
        has_price = 1'b1;
      end

      default: op_c = itch_pkg::OP_NONE;
    endcase
  end

  // Band check and offset. The top of the band is precomputed from the
  // (static) configuration, so both bound checks and the subtraction run
  // side by side instead of subtract-then-compare in series - that series
  // chain was this module's critical path.
  logic [32:0] band_top;           // 33 bits: a high base must not wrap
  logic        in_band_c;
  logic [31:0] delta_c;
  always_ff @(posedge clk) begin
    // cfg_band_base is static during a session; one register is enough.
    band_top <= {1'b0, cfg_band_base} + 33'(BAND_SPAN);
  end
  always_comb begin
    delta_c   = price_c - cfg_band_base;
    in_band_c = has_price && (price_c >= cfg_band_base)
                && ({1'b0, price_c} < band_top);
  end

  // Stage-1 registers: everything the later stages carry along.
  logic          p1_valid, p1_side, p1_in_band;
  itch_pkg::op_e p1_op;
  logic [15:0]   p1_locate;
  logic [63:0]   p1_ref, p1_new_ref, p1_seq;
  logic [31:0]   p1_qty, p1_price;
  logic [18:0]   p1_delta;          // < BAND_SPAN = 409,600 < 2^19

  // =========================================================================
  // STAGE 2: the reciprocal multiply.
  //
  // tick = floor(delta / 100) = floor((delta / 4) / 25), and dividing by 4
  // is a free shift. The divide by 25 becomes a multiply by 2^22/25 rounded
  // up (167773) and a shift by 22. Exhaustively checked in Python to be
  // exact for every delta below 409,600 - the whole 4096-tick band - and
  // re-checked at the boundaries by tb/test_decode.py. 17 x 18 bits fits a
  // single DSP block; registering its inputs (p1) and output (p2_prod) is
  // exactly the DSP's own internal pipeline.
  // =========================================================================
  localparam logic [17:0] RECIP_25 = 18'd167773;

  logic          p2_valid, p2_side, p2_in_band;
  itch_pkg::op_e p2_op;
  logic [15:0]   p2_locate;
  logic [63:0]   p2_ref, p2_new_ref, p2_seq;
  logic [31:0]   p2_qty, p2_price;
  logic [18:0]   p2_delta;
  logic [34:0]   p2_prod;           // 17 + 18 bits

  // =========================================================================
  // STAGE 3: recover the tick and check it was a whole cent.
  // =========================================================================
  logic [11:0] tick_c;
  logic        subpenny_c;
  always_comb begin
    // The product's top bits are the quotient.
    tick_c = 12'(p2_prod >> 22);
    // Whole cent <=> delta % 4 == 0 AND (delta / 4) % 25 == 0. Because the
    // reciprocal is exact, the second holds exactly when the product's low 22
    // bits (its fractional part) are below the multiplier itself: with
    // x = 25q + r, those bits are 21q + r*167773, and 21q < 86,016 < 167,773
    // for every q in the band. So one compare off the DSP output replaces
    // the old "multiply the tick back by 100 and compare" - which was this
    // module's critical path.
    subpenny_c = 1'b0 && p2_in_band
                 && ((p2_delta[1:0] != 2'd0) || (p2_prod[21:0] >= 22'(RECIP_25)));
  end

  // -------------------------------------------------------------------------
  // All three stages' registers, in one block.
  // -------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (rst) begin
      p1_valid         <= 1'b0;
      p2_valid         <= 1'b0;
      m_op             <= itch_pkg::OP_NONE;
      m_valid          <= 1'b0;
      m_locate         <= 16'd0;
      m_ref            <= 64'd0;
      m_new_ref        <= 64'd0;
      m_side           <= 1'b0;
      m_qty            <= 32'd0;
      m_price          <= 32'd0;
      m_tick           <= 16'd0;
      m_tick_ok        <= 1'b0;
      m_seq            <= 64'd0;
      stat_ops         <= 32'd0;
      stat_out_of_band <= 32'd0;
      stat_subpenny    <= 32'd0;
    end else begin
      // --- stage 1: only types the book models go any further ------------
      p1_valid   <= s_valid && (op_c != itch_pkg::OP_NONE);
      p1_op      <= op_c;
      p1_locate  <= locate;
      p1_ref     <= ref_c;
      p1_new_ref <= new_ref_c;
      p1_side    <= side_c;
      p1_qty     <= qty_c;
      p1_price   <= price_c;
      p1_seq     <= s_seq;
      p1_in_band <= in_band_c;
      // Out of band the offset is meaningless, and every use of it below is
      // gated by p*_in_band, so it is passed through unmasked.
      p1_delta   <= delta_c[18:0];
      if (s_valid && (op_c != itch_pkg::OP_NONE)) begin
        stat_ops <= stat_ops + 32'd1;
      end
      // Counted rather than dropped: an out-of-band price still deletes and
      // reduces correctly, it just cannot be placed on the ladder.
      if (s_valid && has_price && !in_band_c) begin
        stat_out_of_band <= stat_out_of_band + 32'd1;
      end

      // --- stage 2: the DSP multiply, everything else rides along ---------
      p2_valid   <= p1_valid;
      p2_op      <= p1_op;
      p2_locate  <= p1_locate;
      p2_ref     <= p1_ref;
      p2_new_ref <= p1_new_ref;
      p2_side    <= p1_side;
      p2_qty     <= p1_qty;
      p2_price   <= p1_price;
      p2_seq     <= p1_seq;
      p2_in_band <= p1_in_band;
      p2_delta   <= p1_delta;
      p2_prod    <= 35'(p1_delta[18:2]) * 35'(RECIP_25);

      // --- stage 3: outputs. Valid is a single-cycle pulse ----------------
      m_valid   <= p2_valid;
      m_op      <= p2_op;
      m_locate  <= p2_locate;
      m_ref     <= p2_ref;
      m_new_ref <= p2_new_ref;
      m_side    <= p2_side;
      m_qty     <= p2_qty;
      m_price   <= p2_price;
      m_tick    <= {4'd0, tick_c};
      // A tick index is only usable if the price landed in the band AND
      // sits on a whole cent.
      m_tick_ok <= p2_in_band && !subpenny_c;
      m_seq     <= p2_seq;
      if (p2_valid && subpenny_c) begin
        stat_subpenny <= stat_subpenny + 32'd1;
      end
    end
  end

endmodule

`default_nettype wire
