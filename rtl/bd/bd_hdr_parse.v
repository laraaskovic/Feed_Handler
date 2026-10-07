// ---------------------------------------------------------------------------
// bd_hdr_parse.v - hdr_parse as a Vivado IP Integrator block.
//
// Every file in rtl/bd/ is a thin wrapper that lets one pipeline stage sit in
// a block design as a "module reference" (create_bd_cell -type module). Two
// reasons they exist rather than referencing the .sv modules directly:
//
//   1. IP Integrator wants the top file of a module reference to be Verilog
//      or VHDL. The SystemVerilog underneath is fine; the port list is not.
//   2. The X_INTERFACE_INFO attributes tell Vivado which ports form a bus,
//      so the diagram draws one AXI-Stream connection instead of five wires,
//      and clock/reset association is explicit rather than guessed.
//
// No logic lives here. syn/vivado/bd/build_bd.tcl builds the diagram, and
// tb/bd_equiv_tb.sv checks it against feed_handler_top cycle for cycle.
//
// THIS WRAPPER: the MoldUDP64 sequence number and message count are sideband
// held stable for a whole output packet, which is exactly what AXI-Stream
// TUSER is for. Packing them into m_axis_tuser makes hdr_parse -> msg_frame a
// single interface connection:  tuser[63:0] = sequence, tuser[79:64] = count.
// ---------------------------------------------------------------------------

`default_nettype none

module bd_hdr_parse #(
    parameter integer DW = 64
) (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_BUSIF s_axis:m_axis, ASSOCIATED_RESET rst" *)
    input  wire            clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_HIGH" *)
    input  wire            rst,

    // ---- raw Ethernet frames from the MAC. No TREADY: no backpressure. ---
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TDATA" *)
    input  wire [DW-1:0]   s_axis_tdata,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TKEEP" *)
    input  wire [DW/8-1:0] s_axis_tkeep,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TVALID" *)
    input  wire            s_axis_tvalid,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TLAST" *)
    input  wire            s_axis_tlast,

    // ---- the MoldUDP64 message block, realigned, sideband in TUSER -------
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TDATA" *)
    output wire [DW-1:0]   m_axis_tdata,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TKEEP" *)
    output wire [DW/8-1:0] m_axis_tkeep,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TVALID" *)
    output wire            m_axis_tvalid,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TLAST" *)
    output wire            m_axis_tlast,
    (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TUSER" *)
    output wire [79:0]     m_axis_tuser,

    output wire [31:0]     stat_packets,
    output wire [31:0]     stat_dropped
);

  hdr_parse #(.DW(DW)) u_hdr (
      .clk(clk), .rst(rst),
      .s_tdata(s_axis_tdata), .s_tkeep(s_axis_tkeep),
      .s_tvalid(s_axis_tvalid), .s_tlast(s_axis_tlast),
      .m_tdata(m_axis_tdata), .m_tkeep(m_axis_tkeep),
      .m_tvalid(m_axis_tvalid), .m_tlast(m_axis_tlast),
      .m_sequence(m_axis_tuser[63:0]), .m_count(m_axis_tuser[79:64]),
      .stat_packets(stat_packets), .stat_dropped(stat_dropped)
  );

endmodule

`default_nettype wire
