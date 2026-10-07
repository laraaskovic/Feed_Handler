// ---------------------------------------------------------------------------
// bd_equiv_tb.sv - the block design against feed_handler_top, cycle for cycle.
//
// The block design (syn/vivado/bd/build_bd.tcl) rebuilds the pipeline out of
// IP Integrator blocks: wrappers in rtl/bd/, two small stages re-expressed
// there, an AXI-Stream link carrying the sequence number in TUSER, and a
// proc_sys_reset IP. Any slip in that rewiring - a swapped pin, a dropped
// bit, a wrong parameter - must show up here.
//
// Method: drive ONE stream (tb/bd_equiv_stim.py) into both tops and compare
// EVERY output on EVERY cycle. feed_handler_top is itself checked against
// the golden model by tb/test_feed_handler_top.py, so equality here means
// the block design inherits that result.
//
// The one intended difference is reset: proc_sys_reset releases a few cycles
// later than the raw rst feed_handler_top sees, so the two order-table sweeps
// finish at different times. The feed starts only once BOTH report ready,
// exactly as a real system would wait, and the comparison starts with it.
//
// Run by syn/vivado/bd/sim_equiv.tcl under xsim (the proc_sys_reset model
// needs Vivado's libraries, so this bench does not run under Verilator).
// ---------------------------------------------------------------------------

`timescale 1ns / 1ps
`default_nettype none

module bd_equiv_tb;

  // 156.25 MHz, the 10GBASE-R datapath clock.
  logic clk = 1'b0;
  always #3.2 clk = ~clk;

  logic        rst = 1'b1;
  logic [63:0] s_tdata = '0;
  logic [7:0]  s_tkeep = '0;
  logic        s_tvalid = 1'b0, s_tlast = 1'b0;
  logic [31:0] cfg_band_base = '0;
  logic [15:0] cfg_locate = '0;

  // Every output of both tops, gathered into one vector each so a single
  // compare covers them all and a mismatch report can name the field.
  localparam int unsigned N_OUT = 22;
  typedef logic [63:0] outs_t [N_OUT];
  string names [N_OUT] = '{
      "m_bbo_valid", "m_bbo_seq", "m_bid_valid", "m_bid_price", "m_bid_qty",
      "m_ask_valid", "m_ask_price", "m_ask_qty", "ready",
      "stat_packets", "stat_dropped", "stat_messages", "stat_frame_err",
      "stat_ops", "stat_other_symbol", "stat_out_of_band", "stat_subpenny",
      "stat_collisions", "stat_missing", "stat_overrun", "stat_stash_peak",
      "stat_underflow"};

`define OUT_WIRES(p) \
  logic        p``m_bbo_valid, p``m_bid_valid, p``m_ask_valid, p``ready; \
  logic [63:0] p``m_bbo_seq; \
  logic [31:0] p``m_bid_price, p``m_bid_qty, p``m_ask_price, p``m_ask_qty; \
  logic [31:0] p``stat_packets, p``stat_dropped, p``stat_messages, \
               p``stat_frame_err, p``stat_ops, p``stat_other_symbol, \
               p``stat_out_of_band, p``stat_subpenny, p``stat_collisions, \
               p``stat_missing, p``stat_overrun, p``stat_stash_peak, \
               p``stat_underflow;

`define OUT_CONN(p) \
      .m_bbo_valid(p``m_bbo_valid), .m_bbo_seq(p``m_bbo_seq), \
      .m_bid_valid(p``m_bid_valid), .m_bid_price(p``m_bid_price), \
      .m_bid_qty(p``m_bid_qty), .m_ask_valid(p``m_ask_valid), \
      .m_ask_price(p``m_ask_price), .m_ask_qty(p``m_ask_qty), \
      .ready(p``ready), \
      .stat_packets(p``stat_packets), .stat_dropped(p``stat_dropped), \
      .stat_messages(p``stat_messages), .stat_frame_err(p``stat_frame_err), \
      .stat_ops(p``stat_ops), .stat_other_symbol(p``stat_other_symbol), \
      .stat_out_of_band(p``stat_out_of_band), \
      .stat_subpenny(p``stat_subpenny), \
      .stat_collisions(p``stat_collisions), .stat_missing(p``stat_missing), \
      .stat_overrun(p``stat_overrun), .stat_stash_peak(p``stat_stash_peak), \
      .stat_underflow(p``stat_underflow)

`define OUT_VEC(p) '{ \
      64'(p``m_bbo_valid), p``m_bbo_seq, 64'(p``m_bid_valid), \
      64'(p``m_bid_price), 64'(p``m_bid_qty), 64'(p``m_ask_valid), \
      64'(p``m_ask_price), 64'(p``m_ask_qty), 64'(p``ready), \
      64'(p``stat_packets), 64'(p``stat_dropped), 64'(p``stat_messages), \
      64'(p``stat_frame_err), 64'(p``stat_ops), 64'(p``stat_other_symbol), \
      64'(p``stat_out_of_band), 64'(p``stat_subpenny), \
      64'(p``stat_collisions), 64'(p``stat_missing), 64'(p``stat_overrun), \
      64'(p``stat_stash_peak), 64'(p``stat_underflow)}

  `OUT_WIRES(ref_)
  `OUT_WIRES(bd_)

  // The reference: the RTL top that the cocotb benches sign off.
  feed_handler_top u_ref (
      .clk(clk), .rst(rst),
      .s_tdata(s_tdata), .s_tkeep(s_tkeep),
      .s_tvalid(s_tvalid), .s_tlast(s_tlast),
      .cfg_band_base(cfg_band_base), .cfg_locate(cfg_locate),
      `OUT_CONN(ref_)
  );

  // The block design, through the wrapper Vivado generates for it.
  feed_handler_wrapper u_bd (
      .clk(clk), .rst(rst),
      .s_tdata(s_tdata), .s_tkeep(s_tkeep),
      .s_tvalid(s_tvalid), .s_tlast(s_tlast),
      .cfg_band_base(cfg_band_base), .cfg_locate(cfg_locate),
      `OUT_CONN(bd_)
  );

  outs_t ref_v, bd_v;
  assign ref_v = `OUT_VEC(ref_);
  assign bd_v  = `OUT_VEC(bd_);

  // ---- comparison: every output, every cycle, once comparing is set -------
  bit          comparing = 0;
  int unsigned cycles = 0, mismatches = 0, bbo_pulses = 0;

  always @(posedge clk) begin
    if (comparing) begin
      cycles++;
      if (ref_m_bbo_valid) bbo_pulses++;
      for (int i = 0; i < N_OUT; i++) begin
        // !== alone would call X equal to X - which is how a decode bug that
        // left every field X once passed here vacuously. Unknowns fail.
        if (ref_v[i] !== bd_v[i] || $isunknown(ref_v[i])) begin
          mismatches++;
          if (mismatches <= 20)
            $display("MISMATCH t=%0t cycle %0d %s: feed_handler_top=%h block design=%h",
                     $time, cycles, names[i], ref_v[i], bd_v[i]);
        end
      end
    end
  end

  // ---- stimulus ---------------------------------------------------------
  string       path;
  int          fd, n, beats;
  int unsigned v, base, locate, keep, last;
  logic [63:0] data;

  initial begin
    if (!$value$plusargs("STIM=%s", path)) path = "equiv_stim.txt";
    fd = $fopen(path, "r");
    if (fd == 0) $fatal(1, "cannot open stimulus file %s", path);
    n = $fscanf(fd, "%d %d\n", base, locate);
    cfg_band_base = base;
    cfg_locate    = 16'(locate);
    $display("stimulus %s: cfg_band_base=%0d cfg_locate=%0d", path, base, locate);

    repeat (10) @(posedge clk);
    rst <= 1'b0;
    // Both order tables sweep their RAM after reset; the feed waits for both.
    wait (ref_ready && bd_ready);
    repeat (4) @(posedge clk);
    comparing = 1;

    beats = 0;
    while ($fscanf(fd, "%h %h %h %h\n", v, data, keep, last) == 4) begin
      @(posedge clk);
      s_tvalid <= v[0];
      s_tdata  <= data;
      s_tkeep  <= 8'(keep);
      s_tlast  <= last[0];
      beats++;
    end
    $fclose(fd);
    @(posedge clk);
    s_tvalid <= 1'b0;
    s_tlast  <= 1'b0;
    // Drain: the deepest message takes ~15 cycles to reach the outputs.
    repeat (100) @(posedge clk);

    $display("beats %0d, cycles compared %0d, BBO updates %0d, mismatches %0d",
             beats, cycles, bbo_pulses, mismatches);
    $display("feed_handler_top: packets %0d messages %0d ops %0d other_symbol %0d out_of_band %0d",
             ref_stat_packets, ref_stat_messages, ref_stat_ops,
             ref_stat_other_symbol, ref_stat_out_of_band);
    $display("                  frame_err %0d collisions %0d missing %0d overrun %0d underflow %0d",
             ref_stat_frame_err, ref_stat_collisions, ref_stat_missing,
             ref_stat_overrun, ref_stat_underflow);
    // An empty run would also have zero mismatches; demand real traffic.
    if (mismatches == 0 && bbo_pulses > 0 && ref_stat_messages > 0)
      $display("BD_EQUIV PASS");
    else
      $display("BD_EQUIV FAIL");
    $finish;
  end

endmodule

`default_nettype wire
