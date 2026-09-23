// ---------------------------------------------------------------------------
// tdp_ram.sv - true dual-port RAM: two independent read/write ports.
//
// The order table needs this. A Replace touches TWO sets in one operation -
// the old order's and the new order's - so it must read two addresses in one
// cycle and write two in the next. A true dual-port block RAM does exactly
// that with no extra cycles, which is what lets every order-table operation,
// Replace included, finish in a fixed two cycles.
//
// Written in the vendor TDP template: one process per port, both writing the
// same array. That shape is what Vivado recognises as a single RAMB36 in
// true-dual-port mode.
//
// CONTRACT WITH THE OWNER. If both ports write the SAME address in the same
// cycle the result is undefined in real silicon, so the owner must never do
// it. order_table guarantees that by construction (see its REPLACE logic).
// Each port is read-first with respect to its own write.
// ---------------------------------------------------------------------------

`default_nettype none

module tdp_ram #(
    // Word width in bits.
    parameter int unsigned DW    = 64,
    // Number of words.
    parameter int unsigned DEPTH = 1024,
    // Address width, derived.
    parameter int unsigned AW    = $clog2(DEPTH)
) (
    input  wire           clk,

    // ---- port A ---------------------------------------------------------
    input  wire           a_en,      // enable: read (and write if a_we)
    input  wire           a_we,      // write enable, qualified by a_en
    input  wire  [AW-1:0] a_addr,
    input  wire  [DW-1:0] a_din,
    output logic [DW-1:0] a_dout,    // registered: one cycle after a_addr

    // ---- port B ---------------------------------------------------------
    input  wire           b_en,
    input  wire           b_we,
    input  wire  [AW-1:0] b_addr,
    input  wire  [DW-1:0] b_din,
    output logic [DW-1:0] b_dout
);

  // Shared storage. Two processes write it, which is the whole point of a
  // true dual-port RAM, so Verilator's multi-driver warning is expected.
  (* ram_style = "block" *)
  logic [DW-1:0] mem [0:DEPTH-1];

  // Port A. Plain always (not always_ff) because the language forbids two
  // always_ff blocks driving one variable; the vendor template does the same.
  /* verilator lint_off MULTIDRIVEN */
  always @(posedge clk) begin
    if (a_en) begin
      // Read-first: a_dout gets the value from before this write.
      if (a_we) mem[a_addr] <= a_din;
      a_dout <= mem[a_addr];
    end
  end

  // Port B, identical and fully independent of port A.
  always @(posedge clk) begin
    if (b_en) begin
      // Same read-first behaviour on the second port.
      if (b_we) mem[b_addr] <= b_din;
      b_dout <= mem[b_addr];
    end
  end
  /* verilator lint_on MULTIDRIVEN */

endmodule

`default_nettype wire
