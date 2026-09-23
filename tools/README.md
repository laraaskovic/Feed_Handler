# Inspection tools

## Status on this machine

Wireshark **4.6.8** with Lua 5.4.6 is installed at `C:\Program Files\Wireshark`,
that directory has been appended to the user PATH, and
`itch50_moldudp64.lua` is installed in `%APPDATA%\Wireshark\plugins\`, so the
dissector loads automatically in both the GUI and `tshark`.

The Wireshark installer does not add itself to PATH, which is why
`tshark --version` prints nothing on a fresh install. The scripts here never
depended on PATH — they look in `C:\Program Files\Wireshark` directly — but a
PATH entry makes `tshark` usable by hand. A PATH change only reaches newly
started terminals, so restart yours.

## Why bother with Wireshark

Our own round-trip test (`packetize.py --check`) proves we can undo our own
work. That is weaker than it looks: if we had misread the MoldUDP64 header,
`packetize` and `depacketize` would be wrong in the *same* direction and the
test would still pass.

Wireshark's dissectors were written by other people from the same public specs.
Agreement between Wireshark and our model is therefore real evidence that the
frames we feed the RTL in step 4 are correct — so when the RTL disagrees, the
RTL is wrong. That removes "maybe my stimulus is bad" from the list of
suspects, which is worth a lot when debugging waveforms.

It also checks two things our Python does not check itself:

- the **IPv4 header checksum**, computed independently;
- that message lengths **tile each packet exactly**. A wrong length makes the
  next message's type byte land on garbage, which surfaces as `unknown message
  type` — the exact failure mode the step 5 framer will have when it breaks.

## The ITCH 5.0 dissector

Wireshark ships with a MoldUDP64 dissector and a Nasdaq ITCH **4.1** dissector,
but not 5.0. The header changed between versions — 5.0 added a 2-byte stock
locate and 2-byte tracking number ahead of the timestamp — so the built-in 4.1
dissector misparses every field of a 5.0 message. `itch50_moldudp64.lua`
handles 5.0 directly, with no compiling.

It binds to UDP port 26477, the `DST_PORT` in [../model/packetize.py](../model/packetize.py).
For another port, use **Analyze → Decode As…** and pick `MOLDUDP64_ITCH50`.

**After editing the Lua file**, reinstall and reload:

```bash
copy tools\itch50_moldudp64.lua %APPDATA%\Wireshark\plugins\
```

then in the GUI: **Analyze → Reload Lua Plugins** (Ctrl+Shift+L). To test a
version without installing it, load it for one run only:

```bash
tshark -X lua_script:tools/itch50_moldudp64.lua -r data/synth.pcap
```

### Lua gotcha worth remembering

`TvbRange:uint64()` returns a **UInt64 object**, not a Lua number. Passing one
to `string.format("%d", ...)` raises a runtime error, which silently **aborts
dissection of the rest of that packet** and shows up only as an expert error.
Wrap it in `tostring()`. `:uint()` (32-bit and under) does return a plain
number, so the bug only appears on fields like order references — which is
exactly how it slipped in here, caught by `check_pcap.py` on its first run
because dissection stopped after every Order Replace.

## Automated cross-check

```bash
python tools/check_pcap.py data/synth.itch
python tools/check_pcap.py data/synth.itch --random-boundaries --msgs-per-packet 3
python tools/check_pcap.py data/synth.itch --vlan 100 --keep data/vlan.pcap
```

It compares, packet by packet:

1. packet count and MoldUDP64 sequence numbers,
2. the ITCH message type of every message, in order,
3. **every decoded field value** — stock locate, tracking number, the 6-byte
   timestamp, order references, side, shares, symbol, price,
4. Wireshark's IPv4 checksum verdict and any malformed or expert-info warnings.

Item 3 is the one that matters for the RTL: those offsets are what step 6's
decoder hard-codes, and an offset wrong by a byte or two still produces
plausible-looking numbers. A clean run compares several thousand individual
field values.

```
OK: Wireshark and our model agree on all 193 packets
    800 messages, 4,880 individual field values compared
```

`tests/test_packetize.py::test_tshark_agrees_with_our_model` runs this
automatically and skips when tshark is not installed.

## Generate something to look at

```bash
cd model
python gen.py ../data/synth.itch -n 20000
python packetize.py ../data/synth.itch --pcap ../data/synth.pcap --check
```

Then open `data/synth.pcap` in Wireshark. Useful things to try:

| Do this | To see |
|---|---|
| Filter `itch50.type == "U"` | Order Replace messages — the expensive one |
| Filter `moldudp64.count > 1` | Packets carrying several messages |
| Filter `itch50.price > 1200000` | Field-level filtering works like any protocol |
| **Analyze → Expert Information** | Anything Wireshark thinks is malformed |
| Click a message, watch the hex pane highlight | Exactly which bytes a field occupies |
| Enable IPv4 checksum validation in **Preferences → Protocols → IPv4** | Our checksum arithmetic, independently verified |

The hex-pane one is worth doing once by hand: select `Price` on an Add Order
and watch exactly 4 bytes light up at offset 32 of the message. That is the
fastest way to convince yourself the offsets in the step 6 decoder are right.

A packet summary line looks like this, which is also how you spot a framing
problem while scrolling — a healthy feed is mostly `A`, `D` and `X`:

```
1  0.000000  10.0.0.1 -> 233.54.12.1  ITCH50  310  seq 1: S R R R S A A D
2  0.000001  10.0.0.1 -> 233.54.12.1  ITCH50  330  seq 9: D A A A U U D A
```

## Coming later

Once the RTL exists, GTKWave or Surfer opens the `.fst`/`.vcd` waveforms cocotb
writes. The pcap and the waveform then show the same bytes from two sides:
Wireshark says what *should* be on the wire, the waveform says what the RTL
actually did with it.
