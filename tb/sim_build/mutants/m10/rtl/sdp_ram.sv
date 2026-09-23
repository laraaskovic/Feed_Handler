// ---------------------------------------------------------------------------
// sdp_ram.sv - simple dual-port RAM: one write port, one registered read port.
//
// Written as the standard vendor inference template so Vivado maps it onto
// block RAM and Yosys onto its BRAM primitives. Everything that needs a
// memory in this design instantiates one of these (or tdp_ram) instead of
// declaring an array inline, for one reason: an inline array that is read at
// two addresses and written at a third in the same cycle has THREE ports, and
// no block RAM has three ports. Synthesis then silently builds it out of LUTs
// or, worse, flip-flops. Making every port explicit makes that impossible.
//
// READ-DURING-WRITE. When the read and write address match in the same cycle
// the read returns the OLD contents ("read-first"). The price ladder depends
// on exactly this: it is what keeps the published tick and quantity a
// consistent snapshot. Anything newer is supplied by explicit forwarding in
// the module that owns the RAM, never by relying on the RAM.
//
// NO RESET. Block RAM contents cannot be reset, so this model does not
// pretend to. Owners must track validity elsewhere (a bitmap in flops, or a
// startup sweep).
// ---------------------------------------------------------------------------

`default_nettype none

module sdp_ram #(
    // Word width in bits.
    parameter int unsigned DW    = 32,
    // Number of words. Need not be a power of two, though it always is here.
    parameter int unsigned DEPTH = 4096,
    // Address width, derived; exposed only so the ports can be sized by it.
    parameter int unsigned AW    = $clog2(DEPTH)
) (
    input  wire           clk,

    // ---- write port -----------------------------------------------------
    input  wire           we,        // write enable, one word per cycle
    input  wire  [AW-1:0] waddr,     // word being written
    input  wire  [DW-1:0] wdata,     // its new value

    // ---- read port ------------------------------------------------------
    input  wire           re,        // read enable; rdata holds when low
    input  wire  [AW-1:0] raddr,     // word being read
    output logic [DW-1:0] rdata      // arrives ONE cycle after raddr
);

  // The storage. The attribute is a hint; the template alone is enough.
  (* ram_style = "block" *)
  logic [DW-1:0] mem [0:DEPTH-1];

  // One process for both ports is the read-first template: the read samples
  // mem before this edge's non-blocking write lands.
  always_ff @(posedge clk) begin
    // Write port: a single word, no byte enables needed anywhere here.
    if (we) mem[waddr] <= wdata;
    // Registered read. This register IS the BRAM output register, which is
    // why a read always costs exactly one cycle.
    if (re) rdata <= mem[raddr];
  end

endmodule

`default_nettype wire
