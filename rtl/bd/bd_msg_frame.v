// ---------------------------------------------------------------------------
// bd_msg_frame.v - msg_frame as a Vivado IP Integrator block.
// See bd_hdr_parse.v for why rtl/bd/ exists.
//
// Input is hdr_parse's AXI-Stream with the sequence number in TUSER[63:0].
// The message count in TUSER[79:64] is for a gap detector this design does
// not have, so it stops here, exactly as it does in feed_handler_top.
//
// The output is not AXI-Stream: it is one whole message per pulse, 400 bits
// wide, so it stays as plain wires in the diagram.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_msg_frame #(
    parameter integer DW      = 64,
    parameter integer MAX_MSG = 50
) (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_BUSIF s_axis, ASSOCIATED_RESET rst" *)
    input  wire                 clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire                 rst,

    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TDATA" *)
    input  wire [DW-1:0]        s_axis_tdata,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TKEEP" *)
    input  wire [DW/8-1:0]      s_axis_tkeep,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TVALID" *)
    input  wire                 s_axis_tvalid,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TLAST" *)
    input  wire                 s_axis_tlast,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TUSER" *)
    input  wire [79:0]          s_axis_tuser,

    output wire [MAX_MSG*8-1:0] m_msg,
    output wire [7:0]           m_len,
    output wire                 m_valid,
    output wire [63:0]          m_seq,

    output wire [31:0]          stat_messages,
    output wire [31:0]          stat_frame_err
);

  msg_frame #(.DW(DW), .MAX_MSG(MAX_MSG)) u_frame (
      .clk(clk), .rst(rst),
      .s_tdata(s_axis_tdata), .s_tkeep(s_axis_tkeep),
      .s_tvalid(s_axis_tvalid), .s_tlast(s_axis_tlast),
      .s_sequence(s_axis_tuser[63:0]),
      .m_msg(m_msg), .m_len(m_len), .m_valid(m_valid), .m_seq(m_seq),
      .stat_messages(stat_messages), .stat_frame_err(stat_frame_err)
  );

endmodule

`default_nettype wire
