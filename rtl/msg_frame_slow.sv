// ---------------------------------------------------------------------------
// msg_frame_slow.sv - the one-byte-per-cycle reference framer.
//
// THIS IS NOT A DELIVERABLE. At 156.25 MHz one byte per cycle is 156 MB/s,
// against a 10 GbE line rate of 1250 MB/s. It would drop 87% of the feed.
//
// It exists for exactly one reason: it is obviously correct. No barrel
// shifter, no holding buffer, no simultaneous insert-and-consume - just a
// three-state machine that reads two length bytes and then counts down. When
// the fast framer disagrees with Python, this module answers the only question
// that matters at that moment: is my understanding of the protocol wrong, or
// is my shifting logic wrong?
//
// Both versions are checked against the same oracle, itch.read_messages(),
// and against each other on identical input.
// ---------------------------------------------------------------------------

`default_nettype none

module msg_frame_slow #(
    // Same maximum message as the fast version, so their outputs are directly
    // comparable without any width juggling in the testbench.
    parameter int unsigned MAX_MSG = 50
) (
    input  wire                  clk,
    input  wire                  rst,

    // ---- slave: one byte per cycle --------------------------------------
    input  wire [7:0]            s_byte,
    input  wire                  s_valid,
    // End of the MoldUDP64 packet. Messages never straddle packets, so this
    // is a hard resynchronisation point.
    input  wire                  s_last,
    input  wire [63:0]           s_sequence,

    // ---- master: one whole message per pulse ----------------------------
    output logic [MAX_MSG*8-1:0] m_msg,
    output logic [7:0]           m_len,
    output logic                 m_valid,
    output logic [63:0]          m_seq,

    output logic [31:0]          stat_messages,
    output logic [31:0]          stat_frame_err
);

  // Three working states is the whole design: collect the high length byte,
  // collect the low one, then shift in that many body bytes. The fourth,
  // S_DROP, discards the rest of a packet whose framing has been lost -
  // exactly what the fast framer's desync flag does, so the two versions
  // report errors identically and can be checked against the same oracle.
  typedef enum logic [1:0] { S_LEN_HI, S_LEN_LO, S_BODY, S_DROP } state_e;
  state_e state;

  // Length being assembled, and how many body bytes are still outstanding.
  logic [15:0] len_q;
  logic [15:0] remaining;
  // Where the next body byte goes. Counting up keeps byte order natural.
  logic [7:0]  byte_idx;
  logic [15:0] msg_idx;

  // Assembling into a shift register would reverse the bytes, so bytes are
  // placed by index instead: byte i of the message lands at bits [8i+7:8i],
  // matching the fast framer's little-endian lane convention exactly.
  logic [MAX_MSG*8-1:0] acc;

  // The length as it will be once this cycle's low byte is merged in.
  logic [15:0] len_full;
  logic        len_bad;
  assign len_full = len_q | {8'd0, s_byte};
  // Zero or longer than any ITCH message: framing is lost.
  assign len_bad  = (len_full == 16'd0) || (len_full > 16'(MAX_MSG));

  // A packet may only end on the final body byte of a message. Ending
  // anywhere else - mid-prefix, mid-body - means the lengths and the payload
  // disagree. Two cases are excluded because they are counted elsewhere:
  // a packet already in S_DROP, and a bad length arriving on the last byte.
  logic end_err;
  assign end_err = !(state == S_BODY && remaining == 16'd1)
                   && (state != S_DROP)
                   && !(state == S_LEN_LO && len_bad);

  always_ff @(posedge clk) begin
    if (rst) begin
      state          <= S_LEN_HI;
      len_q          <= 16'd0;
      remaining      <= 16'd0;
      byte_idx       <= 8'd0;
      msg_idx        <= 16'd0;
      acc            <= '0;
      m_msg          <= '0;
      m_len          <= 8'd0;
      m_valid        <= 1'b0;
      m_seq          <= 64'd0;
      stat_messages  <= 32'd0;
      stat_frame_err <= 32'd0;
    end else begin
      // Single-cycle pulse unless re-asserted below.
      m_valid <= 1'b0;

      if (s_valid) begin
        case (state)
          // --- first length byte: big-endian, so this is the high half ----
          S_LEN_HI: begin
            len_q <= {s_byte, 8'd0};
            state <= S_LEN_LO;
          end

          // --- second length byte completes the prefix -------------------
          S_LEN_LO: begin
            // A length outside the spec's range means framing is lost; count
            // it and drop the rest of the packet rather than reading garbage
            // as a message.
            if (len_bad) begin
              stat_frame_err <= stat_frame_err + 32'd1;
              state          <= S_DROP;
            end else begin
              remaining <= len_full;
              len_q     <= len_full;
              byte_idx  <= 8'd0;
              state     <= S_BODY;
            end
          end

          // --- body bytes, one per cycle ---------------------------------
          S_BODY: begin
            // Variable part-select writes this byte without disturbing the
            // ones already placed.
            acc[8*byte_idx +: 8] <= s_byte;
            byte_idx  <= byte_idx + 8'd1;
            remaining <= remaining - 16'd1;

            // The last body byte completes the message. acc does not yet hold
            // this byte (non-blocking assignment), so it is merged in here.
            if (remaining == 16'd1) begin
              m_msg              <= acc;
              m_msg[8*byte_idx +: 8] <= s_byte;
              m_len              <= 8'(len_q);
              m_valid            <= 1'b1;
              m_seq              <= s_sequence + {48'd0, msg_idx};
              msg_idx            <= msg_idx + 16'd1;
              stat_messages      <= stat_messages + 32'd1;
              // Clearing acc is not strictly required - every byte is written
              // before it is read - but it keeps waveforms legible.
              acc                <= '0;
              state              <= S_LEN_HI;
            end
          end

          // --- lost framing: swallow bytes until the packet ends ----------
          S_DROP: ;

          default: state <= S_LEN_HI;
        endcase
      end

      // --- packet boundary ------------------------------------------------
      // A packet must end exactly on a message boundary. Anything else means
      // the lengths and the payload disagree.
      if (s_valid && s_last) begin
        // Counted at most once per packet; see end_err above.
        if (end_err) begin
          stat_frame_err <= stat_frame_err + 32'd1;
        end
        // Resynchronise unconditionally: one malformed packet must not
        // corrupt every packet that follows.
        state     <= S_LEN_HI;
        remaining <= 16'd0;
        byte_idx  <= 8'd0;
        msg_idx   <= 16'd0;
        acc       <= '0;
      end
    end
  end

endmodule

`default_nettype wire
