// ---------------------------------------------------------------------------
// COMPLETE


// hdr_parse.sv - step 4: strip Ethernet / IPv4 / UDP / MoldUDP64 headers.
//
// Input :  a raw Ethernet frame as 64-bit AXI-Stream beats.
// Output:  the MoldUDP64 message block (length-prefixed ITCH messages),
//          realigned so its first byte sits in m_tdata[7:0],
//          plus the sequence number and message count as sideband.
//
// The Python reference for this module is packetize.depacketize().
//
// THREE THINGS WORTH UNDERSTANDING BEFORE READING THE CODE
//
// 1. No backpressure.  There is no s_tready or m_tready anywhere.  A market
//    data feed cannot be told to slow down, so every stage must accept a beat
//    on every cycle.  That constraint is what makes this module a pipeline of
//    counters rather than a state machine with wait states.
//
// 2. The header length is not a multiple of 8.  Ethernet(14) + IPv4(20) +
//    UDP(8) + MoldUDP64(20) = 62 bytes, or 66 with a VLAN tag.  Neither is a
//    multiple of the 8-byte datapath, so the payload begins *mid-beat* - at
//    byte 6 of beat 7, or byte 2 of beat 8.  Realigning it to bit 0 needs a
//    barrel shifter that combines two consecutive input beats.  This is the
//    easy version of the problem step 5 solves the hard way: here the shift is
//    fixed for the whole packet, there it changes for every message.
//
// 3. Nothing is hard-coded that the packet can tell us.  The IPv4 header
//    length comes from the IHL field, and the VLAN tag is detected rather than
//    assumed, because a hard-coded 62 silently misparses every field
//    downstream the moment a tagged frame arrives.
// ---------------------------------------------------------------------------

`default_nettype none

module hdr_parse #(
    parameter int unsigned DW        = 64,   // datapath width in bits
    // Bytes of the frame head kept for field extraction.  Must cover the
    // largest possible header: VLAN(18) + max IHL(60) + UDP(8) + Mold(20),
    // and the deepest field read inside it (mold_off + 19).
    parameter int unsigned HDR_BYTES = 128
) (
    input  wire                clk,
    input  wire                rst,

    // ---- slave: raw Ethernet frames ------------------------------------
    input  wire [DW-1:0]       s_tdata,
    // verilator lint_off UNUSEDSIGNAL
    // s_tkeep is accepted for interface completeness but deliberately not
    // used: the IPv4 total-length field is authoritative for how many payload
    // bytes exist, and it excludes the Ethernet padding that tkeep would
    // include on short frames.
    input  wire [DW/8-1:0]     s_tkeep,
    // verilator lint_on UNUSEDSIGNAL
    input  wire                s_tvalid,
    input  wire                s_tlast,

    // ---- master: MoldUDP64 message block -------------------------------
    output logic [DW-1:0]      m_tdata,
    output logic [DW/8-1:0]    m_tkeep,
    output logic               m_tvalid,
    output logic               m_tlast,

    // ---- sideband, stable for the duration of each output packet -------
    // MoldUDP64 numbers *messages*, not packets, and names the first message
    // in the packet.  A receiver detects loss with
    //     previous_sequence + previous_count == this_sequence
    // which is why this leaves the module rather than being thrown away.
    output logic [63:0]        m_sequence,
    output logic [15:0]        m_count,

    // ---- status counters: the hardware form of `raise BookError` -------
    output logic [31:0]        stat_packets,
    output logic [31:0]        stat_dropped
);

  localparam int unsigned    BW         = DW / 8;             // 8 bytes/beat
  localparam logic [7:0]     HDR_BEATS  = 8'(HDR_BYTES / BW); // beats captured

  // The first beat by which every field the decode below needs is certainly
  // captured.  The deepest such field is the IPv4 protocol byte at ip_off+9,
  // which for a VLAN-tagged frame is byte 27 - inside beat 3.  So by the time
  // beat 4 arrives, beats 0..3 (bytes 0..31) are safely in hb.
  localparam logic [7:0]     PARAM_BEAT = 8'd4;

  // -------------------------------------------------------------------------
  // Frame-head capture.  Header fields live at byte offsets that depend on
  // fields earlier in the same header, so rather than trying to catch each one
  // as it flies past, the first HDR_BYTES bytes are simply kept and then
  // indexed like an array.  Costs about a kilobit of flops and removes an
  // entire category of off-by-one bug.
  // -------------------------------------------------------------------------
  logic [7:0]      hb [0:HDR_BYTES-1];
  logic [7:0]      beat_idx;      // which beat of the current frame this is
  logic [DW-1:0]   prev_data;     // the previous beat, for the barrel shifter

  // -------------------------------------------------------------------------
  // Combinational header decode.  Only meaningful once enough bytes have been
  // captured; the sequential block latches these at the one cycle where that
  // is guaranteed.
  // -------------------------------------------------------------------------
  logic [15:0] ethertype_outer, ethertype_inner, ip_total_len;
  logic        vlan_tagged, is_ipv4, is_udp;
  logic [7:0]  ip_off, ihl_bytes, udp_off, mold_off, payload_off;
  logic [15:0] payload_len;
  logic [63:0] mold_seq;
  logic [15:0] mold_cnt;

  always_comb begin
    // Ethernet II: 6 dst + 6 src, then either the ethertype or an 802.1Q tag.
    ethertype_outer = {hb[12], hb[13]};
    vlan_tagged     = (ethertype_outer == 16'h8100);
    ip_off          = vlan_tagged ? 8'd18 : 8'd14;
    ethertype_inner = vlan_tagged ? {hb[16], hb[17]} : ethertype_outer;
    is_ipv4         = (ethertype_inner == 16'h0800);

    // IHL counts 32-bit words, hence the shift by 2.  Options are rare but
    // legal, and trusting a constant 20 here is a classic parser bug.
    ihl_bytes    = {4'd0, hb[7'(ip_off)][3:0]} << 2;
    ip_total_len = {hb[7'(ip_off + 8'd2)], hb[7'(ip_off + 8'd3)]};
    is_udp       = (hb[7'(ip_off + 8'd9)] == 8'd17);

    udp_off     = ip_off + ihl_bytes;
    mold_off    = udp_off + 8'd8;
    payload_off = mold_off + 8'd20;

    // IPv4 total length covers the IP header onward, so subtracting the IP,
    // UDP and MoldUDP64 headers leaves exactly the message block.  Using this
    // rather than the frame length is what makes Ethernet padding harmless.
    payload_len = ip_total_len - {8'd0, ihl_bytes} - 16'd8 - 16'd20;

    // MoldUDP64: 10-byte session, 8-byte sequence, 2-byte count, all
    // big-endian (lowest address is most significant).
    mold_seq = {hb[7'(mold_off + 8'd10)], hb[7'(mold_off + 8'd11)],
                hb[7'(mold_off + 8'd12)], hb[7'(mold_off + 8'd13)],
                hb[7'(mold_off + 8'd14)], hb[7'(mold_off + 8'd15)],
                hb[7'(mold_off + 8'd16)], hb[7'(mold_off + 8'd17)]};
    mold_cnt = {hb[7'(mold_off + 8'd18)], hb[7'(mold_off + 8'd19)]};
  end

  // -------------------------------------------------------------------------
  // Latched per-packet parameters
  // -------------------------------------------------------------------------
  logic [2:0]  r_off;       // payload_off % 8 - byte offset within that beat
  logic [7:0]  emit_start;  // first input beat on which an output beat is ready
  // Output beats this packet still owes. A DOWN-counter on purpose: "any
  // left?" and "is this the last?" become equality tests (!= 0, == 1),
  // which need no carry chain. The first version counted up and compared
  // magnitudes (out_n < out_total), which was this module's critical path.
  logic [15:0] out_left;
  logic        emitting;    // this packet has reached its first output beat
  logic [15:0] pay_len_q;
  logic        pkt_ok;      // IPv4 + UDP, and long enough to have been parsed
  logic        flush_pend;  // owe one final output beat after tlast

  // -------------------------------------------------------------------------
  // The barrel shifter.
  //
  // Byte 0 of the frame is in tdata[7:0], so output byte j must be frame byte
  // payload_off + 8*n + j.  With payload_off = 8*q + r, those bytes straddle
  // input beats (q+n) and (q+n+1):
  //
  //     output = (beat[q+n] >> 8r) | (beat[q+n+1] << (64 - 8r))
  //
  // Holding the previous beat in prev_data makes both halves available at
  // once.  When r is zero the payload happens to be beat-aligned and the
  // current beat passes straight through.
  // -------------------------------------------------------------------------
  logic [6:0]    sh_lo, sh_hi;
  logic [DW-1:0] realigned, flushed;

  always_comb begin
    sh_lo = {1'b0, r_off, 3'b000};        // r_off * 8, so 0..56
    sh_hi = 7'd64 - sh_lo;                // 8..64

    realigned = (r_off == 3'd0) ? s_tdata
                                : ((prev_data >> sh_lo) | (s_tdata << sh_hi));

    // On a flush there is no next input beat, so only the low half exists.
    flushed = prev_data >> sh_lo;
  end

  // Valid-byte mask for the final output beat: payload_len mod 8 bytes, or all
  // of them when the length divides evenly.
  logic [2:0]    last_bytes;
  logic [3:0]    keep_shift;
  logic [BW-1:0] last_keep;

  always_comb begin
    last_bytes = pay_len_q[2:0];
    keep_shift = (last_bytes == 3'd0) ? 4'd0 : (4'd8 - {1'b0, last_bytes});
    last_keep  = {BW{1'b1}} >> keep_shift;
  end

  // Should an output beat be produced on this input beat?  Needed in two
  // places - the emit itself, and the end-of-frame check for whether the
  // shifter still owes a beat - so it is factored out.
  // "Reached the first output beat" is remembered in a flag rather than
  // re-derived with a magnitude compare every beat.
  logic reached, do_emit;
  always_comb begin
    reached = emitting || (beat_idx == emit_start);
    do_emit = s_tvalid && pkt_ok && reached && (out_left != 16'd0);
  end

  // -------------------------------------------------------------------------
  // Main sequential logic
  // -------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (rst) begin
      beat_idx     <= 8'd0;
      out_left     <= 16'd0;
      emitting     <= 1'b0;
      pkt_ok       <= 1'b0;
      flush_pend   <= 1'b0;
      m_tvalid     <= 1'b0;
      m_tlast      <= 1'b0;
      m_tdata      <= '0;
      m_tkeep      <= '0;
      m_sequence   <= 64'd0;
      m_count      <= 16'd0;
      stat_packets <= 32'd0;
      stat_dropped <= 32'd0;
      r_off        <= 3'd0;
      emit_start   <= 8'd0;
      pay_len_q    <= 16'd0;
      prev_data    <= '0;
    end else begin
      // Outputs are single-cycle pulses unless re-asserted below.
      m_tvalid <= 1'b0;
      m_tlast  <= 1'b0;

      // --- deferred final beat, when the payload outran the input frame ----
      // Deliberately does NOT touch out_left: the frame boundary below has
      // already reset it for the next packet, and this is by construction the
      // last beat of the previous one.
      if (flush_pend) begin
        flush_pend <= 1'b0;
        m_tdata    <= flushed;
        m_tkeep    <= last_keep;
        m_tvalid   <= 1'b1;
        m_tlast    <= 1'b1;
      end

      if (s_tvalid) begin
        // --- capture the frame head ---------------------------------------
        if (beat_idx < HDR_BEATS) begin
          for (int b = 0; b < int'(BW); b++) begin
            hb[(int'(beat_idx) * int'(BW)) + b] <= s_tdata[8*b +: 8];
          end
        end
        prev_data <= s_tdata;

        // --- decide, once, what this packet looks like ---------------------
        if (beat_idx == PARAM_BEAT) begin
          pkt_ok     <= is_ipv4 & is_udp;
          r_off      <= payload_off[2:0];
          pay_len_q  <= payload_len;
          out_left   <= (payload_len + 16'd7) >> 3;   // ceil(len / 8)
          // A beat-aligned payload is ready on its own beat; otherwise the
          // shifter needs the following beat as well.
          emit_start <= (payload_off[2:0] == 3'd0) ? (payload_off >> 3)
                                                   : ((payload_off >> 3) + 8'd1);
        end

        // --- sideband, captured on the first emitting beat -----------------
        if (pkt_ok && (beat_idx == emit_start)) begin
          m_sequence <= mold_seq;
          m_count    <= mold_cnt;
          emitting   <= 1'b1;
        end

        // --- emit a payload beat ------------------------------------------
        if (do_emit) begin
          m_tdata  <= realigned;
          m_tvalid <= 1'b1;
          // Exactly one beat left: this is the packet's last.
          if (out_left == 16'd1) begin
            m_tkeep <= last_keep;
            m_tlast <= 1'b1;
          end else begin
            m_tkeep <= {BW{1'b1}};
          end
          out_left <= out_left - 16'd1;
        end

        // --- frame boundary -----------------------------------------------
        if (s_tlast) begin
          beat_idx <= 8'd0;
          out_left <= 16'd0;
          emitting <= 1'b0;
          pkt_ok   <= 1'b0;

          if (pkt_ok) begin
            stat_packets <= stat_packets + 32'd1;
            // If the shifter still owes a beat, the frame ended before the
            // input beat it wanted to read.  Emit it next cycle from
            // prev_data alone.  By construction this can only ever be one
            // beat short, which happens for very small payloads.
            // Owed beats after this one: out_left, less one if emitting now.
            if (do_emit ? (out_left != 16'd1) : (out_left != 16'd0)) begin
              flush_pend <= 1'b1;
            end
          end else begin
            // Not IPv4/UDP, or a runt too short to have been parsed at all.
            stat_dropped <= stat_dropped + 32'd1;
          end
        end else begin
          beat_idx <= beat_idx + 8'd1;
        end
      end
    end
  end

endmodule

`default_nettype wire
