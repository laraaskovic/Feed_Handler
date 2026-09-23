// ---------------------------------------------------------------------------
// itch_pkg.sv - shared constants for the whole pipeline.
//
// One package so the op encoding and field offsets are defined exactly once.
// The equivalent mistake in software is cheap to fix; here a mismatched enum
// between two modules is a silent, data-dependent bug.
// ---------------------------------------------------------------------------

`default_nettype none

// Each module imports the whole package but uses only the constants it needs,
// so an unused parameter here is expected rather than a defect.
/* verilator lint_off UNUSEDPARAM */
package itch_pkg;

  // -------------------------------------------------------------------------
  // The normalized book operation. Every one of the seven ITCH message types
  // that touches the book collapses into one of these four.
  // -------------------------------------------------------------------------
  typedef enum logic [2:0] {
    // Nothing to do - a message type this pipeline does not model.
    OP_NONE    = 3'd0,
    // 'A' and 'F': a new order joins the book at a price.
    OP_ADD     = 3'd1,
    // 'E', 'C' and 'X': take shares off an existing order. All three are the
    // same operation to the book, which is why they share one op.
    OP_REDUCE  = 3'd2,
    // 'D': remove whatever is left of the order.
    OP_DELETE  = 3'd3,
    // 'U': delete one order and add another, atomically. Kept as ONE op
    // rather than split into delete+add, because splitting would double the
    // worst-case work in a burst and 'U' is 7.39% of real traffic.
    OP_REPLACE = 3'd4
  } op_e;

  // -------------------------------------------------------------------------
  // ITCH message type codes, as ASCII. Named so the decoder reads like the
  // spec table rather than like a pile of magic hex.
  // -------------------------------------------------------------------------
  localparam logic [7:0] MSG_ADD         = 8'h41;  // 'A' 36 bytes
  localparam logic [7:0] MSG_ADD_MPID    = 8'h46;  // 'F' 40 bytes
  localparam logic [7:0] MSG_EXECUTED    = 8'h45;  // 'E' 31 bytes
  localparam logic [7:0] MSG_EXEC_PRICE  = 8'h43;  // 'C' 36 bytes
  localparam logic [7:0] MSG_CANCEL      = 8'h58;  // 'X' 23 bytes
  localparam logic [7:0] MSG_DELETE      = 8'h44;  // 'D' 19 bytes
  localparam logic [7:0] MSG_REPLACE     = 8'h55;  // 'U' 35 bytes

  // Side indicator, ASCII. Only 'B' needs naming: the field is binary, so
  // the decoder tests for buy and treats everything else as sell.
  localparam logic [7:0] SIDE_BUY = 8'h42;         // 'B'  ('S' = sell)

  // -------------------------------------------------------------------------
  // Prices arrive as integers with four implied decimals, so one cent - one
  // tick for any stock above a dollar - is 100 of these units.
  // -------------------------------------------------------------------------
  localparam int unsigned TICK_UNITS = 100;

endpackage
/* verilator lint_on UNUSEDPARAM */

`default_nettype wire
