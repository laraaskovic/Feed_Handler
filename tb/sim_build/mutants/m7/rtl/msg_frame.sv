// ---------------------------------------------------------------------------
// msg_frame.sv - step 5: split a MoldUDP64 message block into whole messages.
//
// Input : the payload stream from hdr_parse - length-prefixed ITCH messages
//         packed back to back, 8 bytes per beat, nothing aligned to anything.
// Output: one complete message per m_valid pulse, its first byte at bit 0.
//
// Python oracle: itch.read_messages(), which does this in six lines because it
// can block on a file. This module cannot block on anything.
//
// WHY THIS IS THE HARDEST MODULE IN THE PROJECT
//
// hdr_parse computed its barrel-shift amount ONCE per packet. Here the shift
// changes for every message, because message lengths (19..50 bytes) are not
// multiples of 8. Consecutive messages in one packet start at offsets that
// walk through all eight byte positions:
//
//     message 0  payload byte   0  -> beat  0, offset 0
//     message 1  payload byte  38  -> beat  4, offset 6
//     message 2  payload byte  76  -> beat  9, offset 4
//     message 3  payload byte 114  -> beat 14, offset 2
//
// THE KEY SIZING ARGUMENT, WHICH MAKES THIS TRACTABLE
//
// The shortest message is 19 bytes, so 21 with its length prefix. Only 8 bytes
// arrive per beat. Therefore AT MOST ONE message can newly complete per beat -
// finishing two would need at least 22 new bytes. Since we emit one per beat
// whenever one is available, the backlog never exceeds one message, no drain
// state is needed at the end of a packet, and the buffer stays bounded at
// (2 + MAX_MSG - 1) leftover + 8 new = 59 bytes. BUF_BYTES = 64 covers it.
//
// The same argument gives an INVARIANT the logic leans on: at the start of
// every cycle the buffer holds LESS than one whole message. Two consequences
// make the datapath short (the first version, without them, measured 4.0 ns
// of logic in Yosys static timing; the target is ~3.2):
//   1. When a message completes, it consumes every byte that was held, so
//      what remains is just the tail of the new beat - a 64-bit shift by 1..8
//      bytes, not a 512-bit shift of the whole buffer.
//   2. A message can only complete once the buffer already holds its 2-byte
//      length (8 new bytes cannot finish a 21-byte message on their own), so
//      the length is read from the REGISTERED buffer, never from freshly
//      shifted data. Length decode and the big insert shifter run in parallel.
//
// AND ONE SIMPLIFICATION WORTH BANKING
//
// MoldUDP64 never splits a message across packets. So state resets at every
// tlast and no partial message is ever carried between packets. This is the
// single biggest reason this module is merely hard rather than horrible.
// ---------------------------------------------------------------------------

`default_nettype none

module msg_frame #(
    // Datapath width in bits. 64 matches a 10 GbE MAC at 156.25 MHz.
    parameter int unsigned DW        = 64,
    // Longest ITCH 5.0 message: 'I' (NOII) at 50 bytes. Not hypothetical -
    // the real 2019-01-30 file carries 3.68 million of them, 1% of the day.
    parameter int unsigned MAX_MSG   = 50,
    // Holding register: 59 bytes are reachable, 64 is the tidy power of two.
    parameter int unsigned BUF_BYTES = 64
) (
    input  wire                     clk,
    input  wire                     rst,

    // ---- slave: the message block from hdr_parse ------------------------
    input  wire [DW-1:0]            s_tdata,
    // tkeep matters here, unlike in hdr_parse: the final beat of a payload is
    // genuinely partial and those bytes must not enter the buffer.
    input  wire [DW/8-1:0]          s_tkeep,
    input  wire                     s_tvalid,
    input  wire                     s_tlast,
    // Sequence number of the packet's FIRST message, straight from MoldUDP64.
    input  wire [63:0]              s_sequence,

    // ---- master: one whole message per pulse ----------------------------
    output logic [MAX_MSG*8-1:0]    m_msg,
    output logic [7:0]              m_len,
    output logic                    m_valid,
    // Per-message sequence number = packet sequence + index within packet.
    // MoldUDP64 numbers messages, not packets, so this is what a gap detector
    // downstream actually needs, and it costs one adder.
    output logic [63:0]             m_seq,

    // ---- status: the hardware form of an exception ----------------------
    output logic [31:0]             stat_messages,
    // Leftover bytes at tlast, or a length field that cannot be right. Either
    // means framing has desynchronised; the rest of that packet is discarded
    // and the counter goes up ONCE per bad packet, not once per cycle.
    output logic [31:0]             stat_frame_err
);

  // Bytes per beat, and the buffer expressed in bits.
  localparam int unsigned BW      = DW / 8;
  localparam int unsigned BUF_W   = BUF_BYTES * 8;
  // Shift amounts reach 8*64 = 512. The concatenations that build them are
  // 8+3 = 11 bits wide, so the operand is 11 bits to stay exact.
  localparam int unsigned SHIFT_W = 11;

  // -------------------------------------------------------------------------
  // The holding buffer. Byte 0 (bits [7:0]) is the OLDEST unconsumed byte, so
  // the message currently being assembled always starts at bit 0 and the
  // length prefix is always in the bottom 16 bits. Keeping that invariant is
  // what makes the rest of the logic simple.
  // -------------------------------------------------------------------------
  logic [BUF_W-1:0] buf_q;
  // How many bytes of buf_q are real. 0..BUF_BYTES.
  logic [7:0]       nvalid;
  // Index of the current message within the packet, for the sequence number.
  logic [15:0]      msg_idx;
  // Framing was lost in this packet. Nothing more can be trusted until the
  // next tlast, where MoldUDP64 guarantees a clean message boundary.
  logic             desync;

  // -------------------------------------------------------------------------
  // How many bytes arrived this beat. Only the final beat is ever partial, so
  // a popcount of tkeep is exact; a manual sum is used rather than $countones
  // because synthesis support for the system function is uneven.
  // -------------------------------------------------------------------------
  logic [3:0] in_bytes;
  always_comb begin
    in_bytes = 4'd0;
    // Summing set bits is a small adder tree - three levels for eight lanes.
    for (int i = 0; i < int'(BW); i++) begin
      in_bytes = in_bytes + {3'd0, s_tkeep[i]};
    end
  end

  // -------------------------------------------------------------------------
  // The length prefix, read from the REGISTERED buffer (consequence 2 above).
  // ITCH framing is big-endian, so byte 0 is the high half of the length.
  // -------------------------------------------------------------------------
  logic [15:0] msg_len;
  logic [7:0]  need;                // bytes of the NEW beat the message needs
  logic        have_len, len_sane, bad_len;

  always_comb begin
    msg_len   = {buf_q[7:0], buf_q[15:8]};
    // Two held bytes are needed before the length can be trusted.
    have_len  = !desync && (nvalid >= 8'd2);
    // A length outside the spec's range means framing has desynchronised.
    len_sane  = (msg_len >= 16'd1) && (msg_len <= 16'(MAX_MSG));
    // Prefix plus body, less what is already held. By the invariant this is
    // at least 1; the message completes this cycle iff the beat brings that
    // many bytes. Computed from registers alone - it used to be derived by
    // adding the new byte count first and comparing after, one arithmetic
    // stage longer, which was this module's critical path.
    need      = 8'(msg_len) + 8'd2 - nvalid;
    // The moment framing is lost - detected once, then desync takes over.
    bad_len   = have_len && !len_sane;
  end

  // -------------------------------------------------------------------------
  // The insert: place the new beat right after the held bytes. The incoming
  // beat is zero-extended to the buffer width, then shifted up by 8*nvalid.
  // This is the one big shifter left: 512 bits, 64 byte positions.
  // -------------------------------------------------------------------------
  logic [BUF_W-1:0]    ins_data;
  logic [SHIFT_W-1:0]  ins_shift;
  logic [BUF_W-1:0]    wide;
  logic [7:0]          nv_ins;
  logic                have_msg;

  always_comb begin
    ins_data  = {{(BUF_W-DW){1'b0}}, s_tdata};
    ins_shift = {nvalid, 3'b000};              // nvalid * 8
    // OR rather than a mux: bytes above nvalid are guaranteed zero because
    // every path that shrinks the buffer zero-fills it.
    wide      = s_tvalid ? (buf_q | (ins_data << ins_shift)) : buf_q;
    // Once desynchronised, bytes are dropped rather than counted in, so the
    // buffer cannot grow past what the sizing argument above allows.
    nv_ins    = (s_tvalid && !desync) ? (nvalid + {4'd0, in_bytes}) : nvalid;
    // The whole message is present once this beat supplies what it needs.
    have_msg  = have_len && len_sane && s_tvalid
                && ({4'd0, in_bytes} >= need);
  end

  // -------------------------------------------------------------------------
  // The consume (consequence 1 above). A completed message took every held
  // byte plus the first `need` bytes of this beat, so only the
  // rest of this beat survives - shifted down by 1..8 bytes.
  // -------------------------------------------------------------------------
  logic [DW-1:0]      tail;
  logic [BUF_W-1:0]   buf_next;
  logic [7:0]         nv_next;

  always_comb begin
    // Drop the `need` bytes the message used: a 64-bit, 8-position shifter,
    // cheap, and off the insert's path. (need <= 8 whenever it is used.)
    tail     = s_tdata >> {need[3:0], 3'b000};
    // A bad length empties the buffer: its contents can no longer be framed.
    if (bad_len || desync) begin
      buf_next = '0;
      nv_next  = 8'd0;
    end else if (have_msg) begin
      buf_next = {{(BUF_W-DW){1'b0}}, tail};
      nv_next  = {4'd0, in_bytes} - need;
    end else begin
      // Keep accumulating.
      buf_next = wide;
      nv_next  = nv_ins;
    end
  end

  // One framing error per bad packet: either the length that broke it, or,
  // for a packet that was sane throughout, bytes left over at its end.
  logic frame_err;
  assign frame_err = bad_len
                     || (s_tvalid && s_tlast && !desync && (nv_next != 8'd0));

  // -------------------------------------------------------------------------
  // Main sequential logic
  // -------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (rst) begin
      buf_q          <= '0;
      nvalid         <= 8'd0;
      msg_idx        <= 16'd0;
      desync         <= 1'b0;
      m_valid        <= 1'b0;
      m_msg          <= '0;
      m_len          <= 8'd0;
      m_seq          <= 64'd0;
      stat_messages  <= 32'd0;
      stat_frame_err <= 32'd0;
    end else begin
      // Single-cycle pulse unless re-asserted below.
      m_valid <= 1'b0;

      // --- emit a completed message -------------------------------------
      if (have_msg) begin
        // The body starts two bytes in, past the length prefix. This slice is
        // free: a fixed offset is just wires.
        m_msg   <= wide[16 +: MAX_MSG*8];
        m_len   <= 8'(msg_len);
        m_valid <= 1'b1;
        // MoldUDP64 sequence numbers count messages, so the nth message of a
        // packet is s_sequence + n.
        m_seq   <= s_sequence + {48'd0, msg_idx};
        msg_idx <= msg_idx + 16'd1;
        stat_messages <= stat_messages + 32'd1;
      end

      // --- framing errors ------------------------------------------------
      // Counted once per bad packet rather than every cycle, so the counter
      // means "framing errors" and not "cycles spent confused".
      if (frame_err) begin
        stat_frame_err <= stat_frame_err + 32'd1;
      end
      // A bad length stops all framing until the packet ends.
      if (bad_len) begin
        desync <= 1'b0;
      end

      // --- carry state forward ------------------------------------------
      buf_q  <= buf_next;
      nvalid <= nv_next;

      // --- packet boundary ----------------------------------------------
      // Messages never straddle MoldUDP64 packets, so tlast is a guaranteed
      // clean boundary. Start the next packet clean regardless of how this
      // one went: one bad packet must not corrupt every packet after it.
      if (s_tvalid && s_tlast) begin
        buf_q   <= '0;
        nvalid  <= 8'd0;
        msg_idx <= 16'd0;
        desync  <= 1'b0;
      end
    end
  end

endmodule

`default_nettype wire
