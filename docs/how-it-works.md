# How it works, and why the software version is not the hardware

Notes to self while building this. The short version: the Python model and the
SystemVerilog do the same job, but almost every data structure that makes the
Python easy is unavailable in hardware, and the substitutions are the actual
content of the project.

## The pipeline

```
   10 GbE wire
        │  64-bit AXI-Stream beats: tdata[63:0], tkeep[7:0], tlast
        ▼
┌───────────────────┐
│ step 4  header    │  strip Ethernet(14) + IPv4(20) + UDP(8) + MoldUDP64(20)
│         parser    │  out: payload bytes + sequence number as sideband
└───────────────────┘
        ▼
┌───────────────────┐
│ step 5  message   │  read [2-byte length], align each message to bit 0
│         framer    │  hardest module: messages straddle 8-byte beats
└───────────────────┘  out: one whole message per valid pulse
        ▼
┌───────────────────┐
│ step 6  decoder   │  A/F/E/C/X/D/U -> {add | reduce | delete | replace}
└───────────────────┘  carrying order_ref, side, price_ticks, qty
        ▼
┌───────────────────┐
│ step 7  order     │  ref -> (side, price, shares).  BRAM + hash + tag.
│         table     │  E/C/X/D/U carry ONLY the ref, so this lookup is
└───────────────────┘  unavoidable and sits on every message's critical path
        ▼
┌───────────────────┐
│ step 8  price     │  qty[4096 ticks] per side + a 4096-bit non-empty bitmap
│         levels    │  best bid = highest set bit, best ask = lowest set bit
└───────────────────┘
        ▼
     BBO out: (bid_px, bid_qty, ask_px, ask_qty)
```

Each RTL stage has a Python counterpart it gets diffed against:

| RTL stage | Python reference |
|---|---|
| 4 header parser | `packetize.depacketize()` |
| 5 message framer | `itch.read_messages()` (the length-prefix walk) |
| 6 decoder | `itch.decode()` |
| 7 order table | `book.Book.orders` |
| 8 price levels + BBO | `book.Book.bids` / `.asks` / `.bbo()` |

## Where the software cheats

### 1. `self.orders[ref]` is a Python dict

A dict does dynamic allocation, grows on demand, resolves collisions by
chaining, rehashes when it fills, and holds unlimited entries. Hardware has
none of that. What exists is a **block RAM**: fixed depth chosen at synthesis,
one or two ports, a read that takes a clock cycle, no allocator.

So the dict becomes: hash the 64-bit reference down to an address, store a
**tag** alongside each entry to detect landing on someone else's slot, and pick
a policy for when that happens. There is no "just make it bigger" at runtime.

That is why [`sizing.py`](../model/sizing.py) measures peak live orders and
collision rates: those two numbers *are* the depth and the hash choice.

### 2. `max(self.bids)` cannot exist

[`book.py`](../model/book.py) calls `max()` over the live price levels to find
the best bid. That walks every key — fine in Python, impossible in hardware,
and worse, **its cost depends on the data**. Variable latency is the one thing
a feed handler cannot have.

The hardware answer is a 4096-bit bitmap of which ticks are non-empty plus a
two-level priority encoder (64 groups of 64 bits) that finds the highest set bit
in a fixed one or two cycles regardless of how the book looks. Same answer,
constant time.

The model already hints at this: it caches the best price and invalidates the
cache only when the top level empties. That invalidation is the software
analogue of the priority encoder re-scanning the bitmap.

### 3. Time works differently

Python executes one operation at a time and a message takes however long it
takes. Hardware runs *everything* every clock cycle simultaneously, and the only
question is whether a chunk of combinational logic settles within 6.4 ns
(156.25 MHz).

Consequence: a `for` loop in Python reuses one adder N times. The same loop in
RTL becomes N adders sitting in parallel on the die, costing N times the area —
or an explicit state machine that reuses one adder over N cycles, costing N
times the latency. Code that looks identical in the two languages costs wildly
different things, and choosing which way to spend is most of RTL design.

### 4. Nobody waits for you

`read_messages()` pulls from a file and the file waits patiently. A multicast
UDP market data feed has no flow control: you cannot ask Nasdaq to slow down,
and a dropped message means a permanently wrong book for the rest of the day.

So every stage must accept a beat **every** cycle at line rate. No stalls, no
retries, no probing the next hash bucket, nothing with data-dependent timing in
the datapath. This is also why the step 7 collision policy has to be decided up
front rather than "handled later" — there is no later.

### 5. `raise BookError` has no hardware equivalent

An exception unwinds a stack. There is no stack. In RTL an invariant violation
becomes a counter in a status register plus an error flag on an output pin,
read back over AXI-Lite. The `violations`, `orphans` and `crossed` counters in
`Book` are the software rehearsal of exactly those registers.

### 6. Unbounded versus bounded

Python integers are arbitrary precision and the price dict accepts any price.
Hardware has 4096 ticks and 32-bit quantities. Prices outside the band have to
be detected and flagged rather than silently wrapping — which is why
`sizing.py` reports how many orders fall outside each candidate band width.

## So what is the software for?

Three jobs, in order of importance:

1. **Oracle.** A bit-exact comparison target for every RTL stage. Without it,
   "the RTL looks right in the waveform" is the only available standard, which
   is no standard at all.
2. **Measuring instrument.** Every constant the RTL hard-codes — table depth,
   band width, hash function — comes from a measurement rather than a guess,
   and each one has a defensible answer behind it.
3. **A cheap place to be wrong about the protocol.** Discovering that `C` uses
   the resting price rather than the printed one costs ten minutes in Python
   and half a day in a waveform viewer. Every protocol misunderstanding found
   in `model/` is one not found in `rtl/`.

## Verification layering

Each layer catches a different class of bug, which is why all of them are worth
having:

| Layer | Catches |
|---|---|
| `tests/test_itch.py` — hand-assembled bytes with distinct magic numbers per field | A struct format string off by one byte |
| `tests/test_book.py` — rebuilds every price level from the live orders and requires an exact match | Any operation that updated the order table but not the price levels |
| `packetize.py --check` — packetize then depacketize | Asymmetric framing bugs |
| `tools/check_pcap.py` — Wireshark dissects our packets | *Symmetric* framing bugs, where we misread the spec consistently in both directions. Our own round trip cannot catch these. |
| cocotb, step 4 onward | RTL disagreeing with the model |
| step 9 real-data replay | Everything the random stimulus never thought to generate |

The fourth row is the one people skip, and it is the one that catches a
misreading of the spec rather than a mistake in the code.
