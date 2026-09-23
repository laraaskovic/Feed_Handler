--[[
  Wireshark dissector for MoldUDP64 carrying Nasdaq TotalView-ITCH 5.0.

  Why this file exists: Wireshark ships with a MoldUDP64 dissector and an
  ITCH *4.1* dissector, but not 5.0.  The header changed between the two
  versions (5.0 added the 2-byte stock locate and 2-byte tracking number in
  front of the timestamp), so the built-in 4.1 dissector misparses every
  field of a 5.0 message.  Rather than patch C and rebuild Wireshark, this
  Lua plugin dissects 5.0 directly.

  What it is for: an INDEPENDENT check on model/packetize.py.  If Wireshark
  agrees with our Python about where every field starts, then the frames fed
  to the RTL header parser in step 4 are trustworthy stimulus - so when the
  RTL disagrees, the RTL is wrong.  Two things it verifies for free that our
  Python does not check itself:
    * the IPv4 header checksum (turn on "Validate the IPv4 checksum" in the
      IPv4 protocol preferences), and
    * that message lengths tile the packet exactly, since a wrong length
      makes the next message's type byte land on garbage and show up here as
      "unknown type".

  Install (Windows):
      copy this file into  %APPDATA%\Wireshark\plugins\
      then in Wireshark:   Analyze > Reload Lua Plugins   (Ctrl+Shift+L)

  It binds to UDP port 26477 (the DST_PORT in model/packetize.py).  For any
  other port, use Analyze > Decode As... and pick MOLDUDP64_ITCH50.
--]]

local p_mold = Proto("moldudp64_itch50", "MoldUDP64 / Nasdaq ITCH 5.0")

-- MoldUDP64 header: 10-byte session, 8-byte sequence, 2-byte message count.
local f_session  = ProtoField.string("moldudp64.session", "Session")
local f_sequence = ProtoField.uint64("moldudp64.sequence", "Sequence Number")
local f_count    = ProtoField.uint16("moldudp64.count", "Message Count")
local f_msglen   = ProtoField.uint16("moldudp64.msg_length", "Message Length")

-- The ITCH 5.0 common header, present on every message.
local f_type     = ProtoField.string("itch50.type", "Message Type")
local f_locate   = ProtoField.uint16("itch50.locate", "Stock Locate")
local f_track    = ProtoField.uint16("itch50.tracking", "Tracking Number")
local f_ts       = ProtoField.uint64("itch50.timestamp", "Timestamp (ns since midnight)")

-- Message-specific fields.
local f_ref      = ProtoField.uint64("itch50.order_ref", "Order Reference")
local f_newref   = ProtoField.uint64("itch50.new_order_ref", "New Order Reference")
local f_side     = ProtoField.string("itch50.side", "Side")
local f_shares   = ProtoField.uint32("itch50.shares", "Shares")
local f_symbol   = ProtoField.string("itch50.symbol", "Stock Symbol")
local f_price    = ProtoField.uint32("itch50.price", "Price")
local f_mpid     = ProtoField.string("itch50.mpid", "Attribution (MPID)")
local f_match    = ProtoField.uint64("itch50.match", "Match Number")
local f_printable = ProtoField.string("itch50.printable", "Printable")
local f_execpx   = ProtoField.uint32("itch50.exec_price", "Execution Price")
local f_event    = ProtoField.string("itch50.event_code", "Event Code")

p_mold.fields = {
  f_session, f_sequence, f_count, f_msglen,
  f_type, f_locate, f_track, f_ts,
  f_ref, f_newref, f_side, f_shares, f_symbol, f_price, f_mpid,
  f_match, f_printable, f_execpx, f_event,
}

local expert_len = ProtoExpert.new("itch50.bad_length", "Message length disagrees with the spec",
                                   expert.group.MALFORMED, expert.severity.ERROR)
local expert_unknown = ProtoExpert.new("itch50.unknown_type", "Unknown message type",
                                       expert.group.UNDECODED, expert.severity.WARN)
p_mold.experts = { expert_len, expert_unknown }

-- Length table from the spec, same as MSG_LENGTHS in model/itch.py.  Keeping
-- both copies in step means a length bug shows up here as an expert warning.
local MSG_LEN = {
  S = 12,  R = 39,  H = 25,  Y = 20,  L = 26,  V = 35,  W = 12,  K = 28,
  J = 35,  h = 21,  A = 36,  F = 40,  E = 31,  C = 36,  X = 23,  D = 19,
  U = 35,  P = 44,  Q = 40,  B = 19,  I = 50,  N = 20,
}

local MSG_NAME = {
  A = "Add Order",            F = "Add Order with MPID",
  E = "Order Executed",       C = "Order Executed with Price",
  X = "Order Cancel",         D = "Order Delete",
  U = "Order Replace",        R = "Stock Directory",
  S = "System Event",         P = "Trade",
  Q = "Cross Trade",          B = "Broken Trade",
  H = "Stock Trading Action", I = "NOII",
}

-- Prices carry four implied decimals: 1234500 means $123.45.
local function px(v) return string.format("$%.4f", v / 10000.0) end

-- Two spellings: side_word for appending to the field itself (which already
-- shows the letter), side_name for the one-line message summary.
local function side_word(c)
  if c == "B" then return "Buy" elseif c == "S" then return "Sell" end
  return "?"
end

local function side_name(c)
  return c .. " (" .. side_word(c) .. ")"
end

-- Dissect one ITCH message body.  `buf` covers exactly the message.
local function dissect_message(buf, tree)
  local t = buf(0, 1):string()
  local name = MSG_NAME[t] or "Unknown"
  local len = buf:len()

  local sub = tree:add(p_mold, buf(), string.format("ITCH %s - %s (%d bytes)", t, name, len))
  sub:add(f_type, buf(0, 1))
  sub:add(f_locate, buf(1, 2))
  sub:add(f_track, buf(3, 2))
  sub:add(f_ts, buf(5, 6))

  if MSG_LEN[t] == nil then
    sub:add_proto_expert_info(expert_unknown, "type '" .. t .. "' is not in the ITCH 5.0 spec")
    return t
  end
  if MSG_LEN[t] ~= len then
    sub:add_proto_expert_info(expert_len,
      string.format("type '%s' should be %d bytes, got %d", t, MSG_LEN[t], len))
    return t
  end

  if t == "A" or t == "F" then
    sub:add(f_ref, buf(11, 8))
    sub:add(f_side, buf(19, 1)):append_text(" (" .. side_word(buf(19, 1):string()) .. ")")
    sub:add(f_shares, buf(20, 4))
    sub:add(f_symbol, buf(24, 8))
    sub:add(f_price, buf(32, 4)):append_text(" = " .. px(buf(32, 4):uint()))
    if t == "F" then sub:add(f_mpid, buf(36, 4)) end
    sub:append_text(string.format(": %s %d %s @ %s",
      side_name(buf(19, 1):string()), buf(20, 4):uint(),
      buf(24, 8):string(), px(buf(32, 4):uint())))

  elseif t == "E" then
    sub:add(f_ref, buf(11, 8))
    sub:add(f_shares, buf(19, 4))
    sub:add(f_match, buf(23, 8))

  elseif t == "C" then
    sub:add(f_ref, buf(11, 8))
    sub:add(f_shares, buf(19, 4))
    sub:add(f_match, buf(23, 8))
    sub:add(f_printable, buf(31, 1))
    -- NOTE: the book must reduce at the order's RESTING price, not this one.
    sub:add(f_execpx, buf(32, 4)):append_text(" = " .. px(buf(32, 4):uint())
      .. "  (printed price; the book uses the resting price)")

  elseif t == "X" then
    sub:add(f_ref, buf(11, 8))
    sub:add(f_shares, buf(19, 4)):append_text(" cancelled")

  elseif t == "D" then
    sub:add(f_ref, buf(11, 8))

  elseif t == "U" then
    sub:add(f_ref, buf(11, 8)):append_text(" (original, deleted)")
    sub:add(f_newref, buf(19, 8)):append_text(" (replacement)")
    sub:add(f_shares, buf(27, 4))
    sub:add(f_price, buf(31, 4)):append_text(" = " .. px(buf(31, 4):uint()))
    -- NOTE: :uint64() returns a UInt64 *object*, not a Lua number, so it must
    -- go through tostring().  Passing it to string.format("%d") raises a Lua
    -- error, which aborts dissection of the rest of the packet and shows up as
    -- an expert error - exactly the bug tools/check_pcap.py caught here.
    sub:append_text(string.format(": %s -> %s, %d @ %s",
      tostring(buf(11, 8):uint64()), tostring(buf(19, 8):uint64()),
      buf(27, 4):uint(), px(buf(31, 4):uint())))

  elseif t == "R" then
    sub:add(f_symbol, buf(11, 8))
    sub:append_text(": locate " .. buf(1, 2):uint() .. " = " .. buf(11, 8):string())

  elseif t == "S" then
    sub:add(f_event, buf(11, 1))
  end

  return t
end

function p_mold.dissector(buf, pinfo, tree)
  local len = buf:len()
  if len < 20 then return 0 end            -- too short to be a Mold header

  pinfo.cols.protocol = "ITCH50"

  local root = tree:add(p_mold, buf(), "MoldUDP64 / Nasdaq ITCH 5.0")
  root:add(f_session, buf(0, 10))
  root:add(f_sequence, buf(10, 8))
  local count = buf(18, 2):uint()
  root:add(f_count, buf(18, 2))

  -- A count of 0xFFFF is a MoldUDP64 end-of-session marker, and 0 is a
  -- heartbeat.  Neither carries messages.
  if count == 0xFFFF then
    root:append_text("  [end of session]")
    pinfo.cols.info = "MoldUDP64 end of session"
    return len
  end
  if count == 0 then
    root:append_text("  [heartbeat]")
    pinfo.cols.info = string.format("heartbeat, seq %d", buf(10, 8):uint64())
    return len
  end

  root:append_text(string.format("  seq %s, %d message%s",
    tostring(buf(10, 8):uint64()), count, count == 1 and "" or "s"))

  local off = 20
  local types = {}
  for i = 1, count do
    if off + 2 > len then
      root:add_proto_expert_info(expert_len, "packet ended mid message-length")
      break
    end
    local mlen = buf(off, 2):uint()
    root:add(f_msglen, buf(off, 2))
    off = off + 2
    if off + mlen > len then
      root:add_proto_expert_info(expert_len,
        string.format("message %d claims %d bytes but only %d remain", i, mlen, len - off))
      break
    end
    types[#types + 1] = dissect_message(buf(off, mlen), root)
    off = off + mlen
  end

  -- The Info column shows the message mix at a glance, which is how you spot
  -- a framing problem while scrolling: a healthy feed is mostly A/D/X.
  pinfo.cols.info = string.format("seq %s: %s",
    tostring(buf(10, 8):uint64()), table.concat(types, " "))
  return len
end

-- Bind to the port model/packetize.py sends to.  Change or extend this list if
-- you retarget the packetizer.
DissectorTable.get("udp.port"):add(26477, p_mold)
