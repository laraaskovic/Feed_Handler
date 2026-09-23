# The feed handler's logic, in software and in hardware

## What the thing actually does

A feed handler is a **translator with a memory**. Bytes arrive off a wire; a
current picture of the market comes out. That is all it is.

The translation is five operations, in order. Every design decision in this
project is about doing one of these five in a fixed number of clock cycles:

| # | Operation | The question it answers |
|---|---|---|
| 1 | **Deframe** | Where does the market data start in this Ethernet frame? |
| 2 | **Frame** | Where does one message end and the next begin? |
| 3 | **Decode** | What are this message's fields? |
| 4 | **Look up** | Which order does this message refer to, and what were its side and price? |
| 5 | **Update and select** | Apply the change, then what are the best bid and ask now? |

Operations 1–3 are pure byte shuffling: no memory, no state beyond a few
counters. Operations 4 and 5 are where the *memory* lives, and they are the
hard part — 4 because the feed refuses to tell you anything about an order
except its ID, and 5 because "the highest price with shares at it" is a search.

## Side by side

```
        SOFTWARE  (model/)                      HARDWARE  (rtl/)
        ─────────────────────                   ─────────────────────

  ┌─────────────────────────────┐        ┌─────────────────────────────────┐
  │ open("...pcap")             │        │ 64-bit AXI-Stream from the MAC  │
  │ frame = read()              │        │ tdata[63:0] tkeep[7:0] tlast    │
  │                             │        │ 8 bytes EVERY cycle, no stalls  │
  └─────────────────────────────┘        └─────────────────────────────────┘
              │                                          │
  ┌─────────────────────────────┐        ┌─────────────────────────────────┐
  │ depacketize(frame)          │   1    │ hdr_parse.sv                    │
  │   off = 12                  │        │   byte counter + small FSM      │
  │   if vlan: off += 4         │        │   skip 14/18 + 20 + 8 + 20      │
  │   ihl = frame[off] & 0x0F   │        │   registers seq number out      │
  │   walk forward by lengths   │        │   0 cycles of slack: the next    │
  │                             │        │   beat arrives regardless        │
  └─────────────────────────────┘        └─────────────────────────────────┘
              │                                          │
  ┌─────────────────────────────┐        ┌─────────────────────────────────┐
  │ while True:                 │   2    │ msg_frame.sv   ** hardest **    │
  │   n = read(2)               │        │   length register + barrel      │
  │   msg = read(n)             │        │   shifter + leftover register   │
  │   yield msg                 │        │   a message can start at ANY    │
  │                             │        │   byte of a beat and straddle   │
  │ 6 lines. reads block and    │        │   into the next. ~300 lines.    │
  │ the file waits.             │        │   Nothing waits.                │
  └─────────────────────────────┘        └─────────────────────────────────┘
              │                                          │
  ┌─────────────────────────────┐        ┌─────────────────────────────────┐
  │ decode(msg)                 │   3    │ decode.sv                       │
  │   struct.unpack(">cHH6sQ…") │        │   fixed bit slices, in parallel │
  │                             │        │   all fields extracted in the   │
  │ one call per message        │        │   SAME cycle - it is just wires │
  │                             │        │   → {add|reduce|delete|replace} │
  └─────────────────────────────┘        └─────────────────────────────────┘
              │                                          │
  ┌─────────────────────────────┐        ┌─────────────────────────────────┐
  │ self.orders[ref]            │   4    │ order_table.sv                  │
  │                             │        │   BRAM, fixed depth             │
  │ a dict:                     │        │   addr = hash(ref)              │
  │  • unlimited size           │        │   entry = {tag, side, px, qty}   │
  │  • grows on demand          │        │   • fixed depth, chosen at       │
  │  • chains on collision      │        │     synthesis, cannot grow       │
  │  • rehashes when full       │        │   • collision = data loss, so a  │
  │  • O(1) amortised           │        │     policy must be picked        │
  │                             │        │   • read takes a CYCLE, so a     │
  │                             │        │     back-to-back message needs   │
  │                             │        │     read-during-write forwarding │
  └─────────────────────────────┘        └─────────────────────────────────┘
              │                                          │
  ┌─────────────────────────────┐        ┌─────────────────────────────────┐
  │ self.bids[price] += qty     │   5    │ price_levels.sv                 │
  │ max(self.bids)              │        │   qty_ram[4096] per side        │
  │                             │        │   bitmap[4096] "level non-empty"│
  │ a dict + max():             │        │   two-level priority encoder:    │
  │  • any price, no bounds     │        │     64 groups of 64 bits        │
  │  • max() walks every key    │        │   • best bid = highest set bit   │
  │  • cost depends on the data │        │   • best ask = lowest set bit    │
  │    ← the fatal property     │        │   • FIXED 1-2 cycles, always,    │
  │                             │        │     regardless of book shape     │
  │                             │        │   • prices outside the band must │
  │                             │        │     be detected and flagged      │
  └─────────────────────────────┘        └─────────────────────────────────┘
              │                                          │
       print(book.bbo())                    bbo_valid + {bid_px, bid_qty,
                                                          ask_px, ask_qty}
```

## The four substitutions that are the whole project

Strip away the plumbing and hardware design here is four trades:

| Software has | Hardware gets | What you give up |
|---|---|---|
| A dict that grows | Fixed-depth BRAM + hash + tag | Unbounded capacity. You must measure the peak and pick a depth, and decide what happens on collision. |
| `max()` over live keys | Bitmap + priority encoder | Data-dependent cost. You gain *fixed* latency, which is the entire point. |
| A blocking `read()` | A beat every cycle, no backpressure | The luxury of being slow. Every stage must keep up with line rate or drop data permanently. |
| `raise BookError` | A counter in a status register | Stack unwinding. Errors become numbers you read out later. |

The first two are the interesting ones because they are not merely
translations — they change what the machine can do. A dict can hold any number
of orders; the BRAM cannot, so the design has a capacity beyond which it is
simply wrong, and `sizing.py` exists to find where that edge is.

## The module hierarchy you will actually write

`rtl/` ends up as six files plus a top level. These are plain SystemVerilog
modules, not Vivado IP (see below):

```
rtl/
  feed_handler_top.sv     wires the pipeline together, exposes the BBO
                          and the status registers
  hdr_parse.sv            step 4   eth/ip/udp/mold → payload + seq
  msg_frame.sv            step 5   payload → one aligned message per pulse
  msg_frame_slow.sv       step 5   the 1-byte/cycle version, for comparison
  decode.sv               step 6   message → normalized book operation
  order_table.sv          step 7   hashed BRAM, tags, RDW forwarding
  price_levels.sv         step 8   per-tick qty + bitmap
  priority_encoder.sv     step 8   64x64 two-level, finds the best level
```

Every module has the same shape: AXI-Stream in, AXI-Stream out, `valid` with
no `ready` (because nothing is allowed to say "wait"). That uniformity is what
lets each one be tested in isolation against its Python counterpart.

## Do you need to make IP blocks?

Short answer: **no, not for the core of this project** — and it is worth
understanding why, because "IP block" means two different things.

**Meaning 1: a reusable module with a standard interface.** In this sense every
file above already is one. A module with AXI-Stream ports that does one job and
can be dropped into another design is the thing engineers mean when they say
"my parser IP". You get this for free by writing clean modules with standard
interfaces. This is what matters, and it is what an interviewer is asking about.

**Meaning 2: a packaged artifact in Vivado's IP Integrator** — an `.xci`, with
a GUI customisation dialog, that you drag into a block design. This is
*packaging*, not design. It is genuinely useful when assembling a large system
from many pieces, and pointless when you are building and measuring one
datapath.

For steps 4 through 9 you write SystemVerilog and simulate it with
Verilator + cocotb. No Vivado, no IP, no block design. At step 10 you run
**out-of-context synthesis** on the modules directly, which is how you get
honest Fmax and utilisation numbers for *your* logic, uncontaminated by the
rest of a system.

**Where real IP does become unavoidable:** if you ever put this on a physical
board and feed it actual Ethernet. Then you need

- a **10G/25G Ethernet Subsystem** (MAC + PHY) — never write this yourself;
  it is thousands of hours of standards compliance and it comes free with
  Vivado,
- a **Clocking Wizard** for the 156.25 MHz reference,
- possibly an **AXI-Lite** interconnect so software can read your status
  registers.

This project does not require any of that, because the design is verified at
the AXI-Stream boundary — exactly where the MAC would hand bytes over. That is
a deliberate choice: it keeps the interesting logic testable without a board,
and the interface is the real one, so the work would drop straight in.

**Optional polish worth doing at the end:** package `feed_handler_top` as a
Vivado IP with `ipx::package_project`. It is an afternoon's work, proves you
understand interface inference and AXI conventions, and makes a good line in a
write-up. Do it last, if at all — never before the logic is measured.
