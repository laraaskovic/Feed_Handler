# ITCH Feed Handler — a 10 Gb/s order book in SystemVerilog

A hardware market-data feed handler. It takes Nasdaq TotalView-ITCH 5.0 off a
10 Gb/s Ethernet stream, maintains a live order book, and publishes the top of
book (best bid and ask, price and size) **a fixed number of clock cycles after
every message**, with no backpressure anywhere in the datapath.

This README is written as a **textbook for this repository**: it explains the
problem, then walks every file — Python model, SystemVerilog, testbench, tool —
saying what it does, why it is shaped that way, and how we know it is right.
If you only read one thing, read [§9, How we check it works](#9-how-we-check-it-works);
that is the part that turns "it looks right in the waveform" into evidence.

**Independence.** This is an independent personal project built entirely from
the public Nasdaq TotalView-ITCH 5.0 specification and public sample data. It
contains no employer code, designs, or notes, and no employer equipment was
used.

---

## Contents

| § | |
|---|---|
| [0](#0-the-result-in-one-screen) | The result in one screen |
| [1](#1-the-problem) | The problem: what is on the wire and why it is hard |
| [2](#2-the-method-software-first-then-hardware-diffed-against-it) | The method: software first, then hardware, diffed against it |
| [3](#3-the-measurements-that-set-every-constant) | The measurements that set every constant |
| [4](#4-file-by-file-the-python-model-model) | File by file: the Python model (`model/`) |
| [5](#5-file-by-file-the-rtl-rtl) | File by file: the RTL (`rtl/`) |
| [6](#6-file-by-file-the-testbenches-tb) | File by file: the testbenches (`tb/`) |
| [7](#7-file-by-file-the-tools-tools) | File by file: the tools (`tools/`) |
| [8](#8-file-by-file-synthesis-syn) | File by file: synthesis (`syn/`) |
| [9](#9-how-we-check-it-works) | **How we check it works** |
| [10](#10-results-latency-area-timing) | Results: latency, area, timing |
| [11](#11-setup-and-repo-layout) | Setup and repo layout |
| [12](#12-status-and-what-is-deliberately-not-done) | Status, and what is deliberately not done |

---

## 0. The result in one screen

**What exists.** Eleven SystemVerilog files implementing the complete pipeline,
wire to top of book, plus a Python golden model that every stage is diffed
against, 77 cocotb tests, a mutation-testing harness that proves those tests
can fail, and an open-source synthesis flow that runs on any machine.

```
   10 GbE, 64-bit AXI-Stream @ 156.25 MHz, no backpressure
        │
        ▼   hdr_parse.sv       strip Ethernet / IPv4 / UDP / MoldUDP64
        ▼   msg_frame.sv       split the block into whole ITCH messages
        ▼   decode.sv          7 message types → 4 book operations
        ▼   (locate filter)    keep one symbol's operations
        ▼   order_table.sv     order reference → side, price, shares
        ▼   price_levels.sv    per-tick quantities + bitmap + priority encoders
        ▼
   best bid / best ask, price and size, 13–14 cycles after the message's last byte
```

**The three numbers that matter.**

| | Value | Where it comes from |
|---|---|---|
| **Latency** | 13–14 cycles wire→BBO (83–90 ns at 156.25 MHz); a Replace one more | Measured by `tb/test_feed_handler_top.py::test_fixed_latency`, per message type, and asserted to be a **constant** |
| **Throughput** | one message per 2 cycles sustained — the tightest spacing the wire can produce; no stalls, no backpressure, no data-dependent timing | Structural: see [§5.7](#57-order_tablesv--the-lookup-every-message-needs) |
| **Correctness** | the published BBO equals the Python model's BBO after **every single message**, keyed by MoldUDP64 sequence number | `tb/test_feed_handler_top.py` |

**The design in one sentence:** every data structure that makes the Python easy
— a dict keyed on order reference, `max()` over the live price levels — is
unavailable in hardware, and the substitutions (a hashed set-associative BRAM
table with an overflow stash; a 4096-bit occupancy bitmap with a two-level
priority encoder) are the actual content of the project.

---

## 1. The problem

### 1.1 What a feed handler actually does

Nasdaq runs the auction. It matches buyers to sellers and then **broadcasts a
description of everything that happened** over a multicast UDP feed. A feed
handler is a *listener*: it hears those announcements and keeps an accurate
picture of the order book. It never decides anything. `model/demo.py` is a
narrated 13-step walkthrough of exactly this, and is the best first thing to
run in the repo.

### 1.2 What arrives on the wire

Four layers of wrapping around the messages we care about:

```
Ethernet   14 bytes   dst MAC, src MAC, ethertype        (+4 if VLAN tagged)
IPv4       20 bytes   incl. header checksum              (more if IHL > 5)
UDP         8 bytes
MoldUDP64  20 bytes   session(10) sequence(8) count(2)
payload               [2-byte big-endian length][message] × count
```

Two consequences drive the first two RTL modules:

1. **62 bytes of header is not a multiple of 8.** The payload therefore begins
   *mid-beat* on a 64-bit datapath — at byte 6 of beat 7, or byte 2 of beat 8
   with a VLAN tag. Realigning it needs a barrel shifter. That is `hdr_parse`.
2. **Messages are 19–50 bytes, also not multiples of 8**, so consecutive
   messages inside one packet start at offsets that walk through all eight byte
   positions. That is `msg_frame`, and it is the hardest module in the project.

One simplification is worth banking: **MoldUDP64 never splits a message across
packets.** Every `tlast` is a guaranteed clean message boundary, so no partial
message is ever carried between packets.

> **Note on the sample files.** Despite some download pages saying "pcap",
> Nasdaq's downloadable sample files are **not** network captures. They are
> BinaryFILE: a flat sequence of `[2-byte length][message]` to EOF. Wireshark
> cannot open them. The network framing is added by this project, in
> `model/packetize.py`.

### 1.3 The seven messages that matter

Of ~22 ITCH message types, only seven change the order book. Everything else is
dropped in the first stage. Shares are from the real 2019-01-30 session
(368,366,634 messages, `data/scan_fullday.txt`):

| Type | Name | Effect | Bytes | Share of the day |
|---|---|---|---|---|
| `A` | Add Order | new order at a price | 36 | 44.24% |
| `D` | Order Delete | remove the order | 19 | 42.97% |
| `U` | Order Replace | delete one order, add another | 35 | 7.39% |
| `E` | Order Executed | reduce shares | 31 | 2.20% |
| `X` | Order Cancel | partial cancel: reduce shares | 23 | 1.27% |
| `F` | Add Order with MPID | as `A`, plus a participant id | 40 | 0.47% |
| `C` | Order Executed with Price | reduce shares, printed at another price | 36 | 0.04% |

Book-affecting messages are **98.58%** of the feed. There is no "fast path" to
optimise for — the common case *is* the whole feed.

### 1.4 Three facts about that set that shape the entire design

**1. `E`, `C`, `X`, `D` and `U` identify the order only by its 64-bit
reference.** No side, no price, no symbol. So the book cannot be maintained
without a lookup table keyed on order reference, and that lookup sits on the
critical path of 53.9% of real traffic. This is why `order_table.sv` exists and
why it is the most expensive module in the design.

**2. A Replace inherits the side of the order it replaces.** It must *read* the
order table before it can *write* a new entry, and it touches two price levels.
It is the most expensive message in the feed — and at 7.39% it is far too
common to treat as a corner case.

**3. `C` prints a different execution price, but the book loses shares at the
order's original resting price.** Using the printed price is a classic ITCH bug
that silently corrupts the book for the rest of the day. `rtl/decode.sv`
deliberately does not read byte 32 of a `C` message; `tb/test_decode.py::test_exec_with_price_ignores_printed_price`
is the test that keeps it that way.

**And one gift.** `R` (Stock Directory) messages at the head of each day map
every 8-character symbol to a small integer — the **stock locate** — and every
later message carries that integer. So the RTL never compares symbol strings:
the locate *is* the book index, for free, as a 16-bit compare.

### 1.5 Why this needs hardware at all

Measured on the real file, single-threaded Python parses at **21.3 MB/s
(0.70 M msg/s)**. A 10 Gb/s link is **1250 MB/s**. That is a factor of ~59
before any book maintenance is done at all.

But throughput is the less interesting half. The binding constraint is this:

> **A market data feed cannot be told to slow down.** There is no flow control
> on a multicast UDP feed, and a dropped message means a permanently wrong book
> for the rest of the day.

So every stage must accept a beat *every* cycle at line rate. That single
requirement rules out everything with data-dependent timing: no retries, no
multi-cycle hash probing, no stalls waiting on BRAM, no `max()` over a
container whose size depends on the data. It is also why the order table's
collision policy has to be decided up front — there is no "handle it later",
because there is no later.

---

## 2. The method: software first, then hardware, diffed against it

The whole pipeline was built in Python first, then built again in
SystemVerilog, with **every RTL stage checked against its Python counterpart**.

```
model/  ──────────────►  the oracle every cocotb test imports
   │
   │  measures the data
   ▼
the constants rtl/ hard-codes  (table depth, hash, band width, latencies)
```

This is not scaffolding to be deleted once the RTL works. It is a permanent
dependency of the RTL tests:

| RTL module | Python oracle |
|---|---|
| `hdr_parse.sv` | `packetize.depacketize()` |
| `msg_frame.sv`, `msg_frame_slow.sv` | `itch.read_messages()` |
| `decode.sv` | `itch.decode()` + `book.Book.apply()`'s dispatch |
| `order_table.sv` | `book.Book.orders` (a dict) + `table_sim.Table` |
| `priority_encoder.sv` | Python's own `int.bit_length()` |
| `price_levels.sv` | `book.Book.bids` / `.asks` / `.bbo()` |
| `feed_handler_top.sv` | `book.MultiBook`, message by message |

Three rules make it work:

1. **Nothing is hard-coded in a testbench.** Not one expected byte. The bench
   builds stimulus with `model/packetize.py`, feeds it to the RTL, and asks the
   model what should come out. When they disagree, one of them is wrong and the
   diff names the field.
2. **Mutation testing proves the tests work.** A green suite means nothing until
   it has been shown capable of going red. See [§9.5](#95-layer-6--mutation-testing-proving-the-tests-can-fail).
3. **Real data last.** Random stimulus only finds what it thought to generate.
   The January 30 2019 file has 368 million messages of things nobody would
   think to generate.

There is a fourth rule that pays for itself repeatedly: **be wrong in Python.**
Discovering that `C` uses the resting price rather than the printed one costs
ten minutes in Python and half a day in a waveform viewer.

---

## 3. The measurements that set every constant

Every number the RTL hard-codes comes from a measurement over real data, not a
guess. This is the part that turns "I chose 8 ways" into a defensible answer.

| Measurement | Determines | Answer | Produced by |
|---|---|---|---|
| Global peak simultaneously live orders, all 8,713 symbols | Whether one shared table is possible | **1,742,866** → a shared table needs ~4 M entries ≈ 7,282 BRAM36. Not feasible. **So the design tracks one configurable symbol.** | `model/peak_orders.py` → `data/peak_orders.txt` |
| Per-symbol peak live orders | Order table depth | AAPL **42,774** → 16,384 sets × 8 ways = 131,072 entries, ~3× headroom | `model/sizing.py` |
| Hash collision behaviour over a whole day | Hash choice | Low-bit indexing is the **worst** on real references (76.7% collisions at 64 K entries) while looking perfect on synthetic sequential ids. XOR-fold collides at roughly the load factor. **H3** behaves like a random hash. | `model/sizing.py`, `model/table_sim.py` |
| Drops per full trading day, per geometry | Ways and stash size | see the table below | `model/table_sim.py` |
| Daily price range in ticks; orders outside a candidate band | Price band width | 4096 one-cent ticks = **$40.96** around a configurable base | `model/sizing.py` |
| Peak book messages per millisecond | Throughput target | the burst, not the daily average | `model/sizing.py` |
| Message type mix | What to optimise | `U` is 7.39%, so a Replace is not a corner case | `model/scan.py` → `data/scan_fullday.txt` |

### The order table geometry study, in one table

`model/table_sim.py` replays complete days of AAPL, MSFT, SPY, QQQ and AMD
through candidate tables. A dropped order is **not a statistic** — it is a
permanently wrong book, because its later executions and deletes find nothing.
So the target is zero drops over a full day.

| hash | sets × ways | stash | AAPL drops | AAPL stash peak |
|---|---|---|---|---|
| xorfold | 32768 × 4 | 64 | 39,578 | 64 (full) |
| xorfold | 16384 × 8 | 32 | 13,368 | 32 (full) |
| H3 | 16384 × 8 | 0 | 430 | — |
| **H3** | **16384 × 8** | **16** | **0** | **7** ← this design |

Three lessons, one per row:

1. The obvious XOR-fold hash is measurably **worse than random** on real order
   references: at AAPL's peak it leaves 786 sets over-full where a random hash
   leaves ~350. Real references are sparse and structured.
2. Even a good hash overflows 4-way sets at this load. Hence 8 ways.
3. Even 8 ways overflows a few sets for a few moments a day. Hence a small
   fully-associative **stash**, which peaks at 7 of 16 on AAPL's full day —
   more than 2× margin, and zero drops on all five symbols.

---

## 4. File by file: the Python model (`model/`)

Eleven files. Read them in this order.

### `demo.py` — what are we even modelling?
A narrated 13-step walkthrough: hand-written messages, printing the order
table, the price ladder and the BBO after each one. It exists to make the
difference between *running a market* and *listening to one* concrete. Run this
first. Checked by `tests/test_demo.py`, which runs it and fails if the
invariant counters come back nonzero.

### `itch.py` — the only file that knows the wire format
Message layouts, the spec's length table, BinaryFILE read/write, and
`decode()`. Everything else imports from here, so there is exactly one
definition of the spec to get wrong. `read_messages()` is the six-line
length-prefix walk that is the oracle for both RTL framers.
Checked by `tests/test_itch.py`, which hand-assembles bytes with a distinct
magic number per field, so a `struct` format string off by one byte names the
field that moved.

### `scan.py` — is the framing right, and what is the mix?
Message-type histogram, framing validated against the spec length table, and a
Python throughput baseline. Run it first on any new data file: if the length
prefixes and the length table disagree, the reader has lost sync and nothing
else in the project will work. Produced `data/scan_fullday.txt`.

### `extract.py` — one symbol out of a 4.7 GB day
Lists `symbol → locate` from the `R` messages, then extracts one symbol's
entire stream (including the `E/C/X/D/U` messages that never mention the
symbol, which is exactly why filtering by locate rather than by symbol string
is necessary). Produced `data/extract_log.txt` and the five `.itch` extracts.

### `book.py` — the golden order book
The reference every RTL module is judged against, written to be obviously
correct rather than fast. Its data structures deliberately mirror the hardware:

```
Book.orders      →  order_table.sv   (BRAM, hashed on order reference)
Book.bids/asks   →  price_levels.sv  (per-tick quantity table)
Book.best_bid    →  priority_encoder.sv (over the non-empty bitmap)
```

It checks itself while it runs, which is what makes it usable as an oracle:
share counts never go negative; a reduce may never exceed what an order holds;
an operation on an unknown reference is counted as an **orphan** (expected when
replaying a mid-day extract, a real bug on a full-day replay from message one);
crossed books are counted as a rate to watch, since they do occur in real feeds.
Checked by `tests/test_book.py`, which **rebuilds every price level from the
live orders and requires an exact match** — one check that catches any
operation that updated the order table but not the price levels, or vice versa.

### `replay.py` — the BBO trace the RTL is diffed against
Replays a file through `book.py` and writes one line per book message with the
resulting top of book. In the RTL tests, the message index is the sequence
number that makes a mismatch locatable. Also contains a trace comparator.

### `sizing.py` — measurement → design decision
The measurements in [§3](#3-the-measurements-that-set-every-constant). Checked
by `tests/test_sizing.py`, because a hash simulator that under-counts collisions
would talk you into a table that does not work.

### `table_sim.py` — the order table, in Python, exactly
Mirrors `rtl/order_table.sv`: the same H3 hash with the same 16 mask constants,
the same "an order lives in its set if there is room, else in the stash" policy,
the same rule that an `E/C/X` taking the last share frees the entry. It is both
the sizing study of [§3](#3-the-measurements-that-set-every-constant) **and**
the oracle `tb/test_order_table.py` uses to predict where each order lands. The
masks are fixed hex rather than a seeded RNG precisely so the Python and the
SystemVerilog cannot drift apart unnoticed.

### `peak_orders.py` — the one number that needed the whole day
Deliberately narrow and fast: no book, no price levels, no hash simulation,
just "is this reference still live?". One pass over 368 M messages (1,407 s)
to answer whether a single shared table across all symbols is possible.
It is not — hence the per-symbol design.

### `packetize.py` — the input format for the entire hardware pipeline
Wraps messages in MoldUDP64/UDP/IPv4/Ethernet, emits 64-bit AXI-Stream beats,
exports pcap. Also holds `depacketize()`, the reference for `hdr_parse.sv`.
Because this file *defines* the stimulus the RTL sees, a mistake here is the
worst kind: the RTL then looks broken while being correct. That is why it is
cross-checked against Wireshark ([§9.2](#92-layer-2--wireshark-cross-check)).

### `gen.py` — synthetic feed generator
Emits a *valid* ITCH BinaryFILE, so the whole pipeline runs in seconds without
the 4.7 GB download, and becomes the constrained-random stimulus source for the
RTL benches. It is not a market simulator; it guarantees only the properties the
pipeline cares about — every `E/C/X/D/U` references a live order, and reduces
never take more shares than remain.

> **A caveat the tests pin down:** `gen.py` issues *sequential* order
> references, which flatters the low-bits hash. Collision numbers only mean
> something on real data. This is exactly the sort of thing that makes "tested
> on synthetic data" a weaker claim than it sounds.

---

## 5. File by file: the RTL (`rtl/`)

Eleven files. Every one is written to the same shape: a header comment stating
the job, the Python oracle, and the one or two things about the module that are
not obvious; then the code, commented every few lines.

Conventions, stated once:

- **No backpressure.** There is no `s_tready` or `m_tready` anywhere. Every
  stage accepts a beat on every cycle, by construction.
- **Byte lane order.** Frame byte 0 lives in `tdata[7:0]`, the lowest lane (the
  `cocotbext-axi` convention). ITCH fields are big-endian, so every multi-byte
  field is rebuilt by concatenating bytes in *increasing address order, most
  significant first*. Get this backwards and every field lands byte-swapped.
- **`valid` is a single-cycle pulse**, re-asserted only when there is something
  to say.
- **Errors are counters, not exceptions.** There is no stack to unwind. Every
  `raise BookError` in the model has a `stat_*` counter as its hardware
  equivalent, and the testbenches assert on those counters as part of the
  contract, not as decoration.
- **`default_nettype none`** in every file, so a mistyped signal name is a
  compile error rather than a silent one-bit wire.

### 5.1 `itch_pkg.sv` — the shared vocabulary

The `op_e` enum (`OP_NONE / OP_ADD / OP_REDUCE / OP_DELETE / OP_REPLACE`), the
seven ASCII message-type codes, the buy-side indicator, and `TICK_UNITS = 100`
(prices arrive as integers with four implied decimals, so one cent is 100 feed
units).

One package, so the op encoding is defined *exactly once*. The equivalent
mistake in software is cheap to fix; here a mismatched enum between two modules
is a silent, data-dependent bug.

> Package names are written out in full (`itch_pkg::OP_ADD`) rather than
> imported, because Yosys rejects both forms of `import` inside a module while
> every tool accepts a qualified name. Small detail, but it is the difference
> between "synthesises everywhere" and "synthesises in Vivado only".

### 5.2 `sdp_ram.sv` and `tdp_ram.sv` — memory, made explicit

Simple dual-port (one write port, one registered read port) and true dual-port
(two independent ports). Written as the standard vendor inference templates so
Vivado maps them onto block RAM and Yosys onto its BRAM primitives.

**Why these exist instead of inline arrays:** an inline array that is read at
two addresses and written at a third in the same cycle has *three* ports, and no
block RAM has three ports. Synthesis then silently builds it out of LUTs or,
worse, flip-flops — and you find out from a utilisation report, not from a
simulation. Making every port explicit makes that impossible.

Two contracts the owners depend on:

- **Read-during-write returns the OLD contents** ("read-first"). Anything newer
  is supplied by explicit forwarding in the module that owns the RAM, never by
  relying on the RAM.
- **No reset.** Block RAM contents cannot be reset, and this model does not
  pretend otherwise. Owners track validity elsewhere: `price_levels` uses a
  bitmap in flops, `order_table` uses a startup sweep. Modelling this honestly
  is what makes the startup sweep exist at all.

`tdp_ram` adds one more: **both ports must never write the same address in the
same cycle** (undefined in real silicon). `order_table` guarantees that by
construction, in its Replace logic.

### 5.3 `hdr_parse.sv` — strip four layers of header

**In:** raw Ethernet frames, 64-bit beats. **Out:** the MoldUDP64 message block,
realigned so its first byte sits in `m_tdata[7:0]`, plus the sequence number and
message count as sideband. **Oracle:** `packetize.depacketize()`.

Three ideas do all the work.

**Capture the head, then index it like an array.** Header fields live at byte
offsets that depend on fields earlier in the same header, so rather than trying
to catch each one as it flies past, the first 128 bytes are kept in a flop array
and indexed. Costs about a kilobit of flops and removes an entire category of
off-by-one bug.

**Nothing is hard-coded that the packet can tell us.** The IPv4 header length
comes from the IHL field (options are rare but legal); the VLAN tag is detected,
not assumed. A hard-coded 62 silently misparses every field downstream the
moment a tagged frame arrives — mutation #10 in the mutation report, and it is
caught.

**The barrel shifter.** With `payload_off = 8q + r`, output beat *n* is
`(beat[q+n] >> 8r) | (beat[q+n+1] << (64-8r))`. Holding the previous beat makes
both halves available at once. The shift amount is computed **once per packet**
here — the easy version of the problem `msg_frame` solves the hard way.

Two details worth noticing. `s_tkeep` is deliberately *ignored*: the IPv4
total-length field is authoritative and excludes the Ethernet padding that
`tkeep` would include on short frames. And `out_left` is a **down**-counter on
purpose, so "any left?" and "is this the last?" become `!= 0` and `== 1`, which
need no carry chain; the first version counted up and compared magnitudes, and
that was this module's critical path.

| | |
|---|---|
| Latency | 1–2 cycles (2 when a byte needs the *next* beat to realign) |
| Counters | `stat_packets`, `stat_dropped` (non-IPv4/UDP frames, and runts) |
| Tests | 10, in `tb/test_hdr_parse.py` |

### 5.4 `msg_frame.sv` — the hardest module in the project

**In:** the payload stream from `hdr_parse`. **Out:** one complete message per
pulse, first byte at bit 0. **Oracle:** `itch.read_messages()`, which does this
in six lines because it can block on a file. This module cannot block on
anything.

The difficulty is that the shift amount changes **for every message**:

```
message 0  payload byte   0  -> beat  0, offset 0
message 1  payload byte  38  -> beat  4, offset 6
message 2  payload byte  76  -> beat  9, offset 4
message 3  payload byte 114  -> beat 14, offset 2
```

**The sizing argument that makes it tractable.** The shortest message is 19
bytes, 21 with its prefix, and only 8 bytes arrive per beat. Therefore **at most
one message can newly complete per beat** — finishing two would need 22 new
bytes. Emit one per beat whenever one is available and the backlog never exceeds
one message: no drain state at the end of a packet, and the buffer stays bounded
at 59 bytes (`BUF_BYTES = 64`).

That argument also gives the **invariant** the datapath leans on: *at the start
of every cycle the buffer holds less than one whole message.* Two consequences,
which together took the critical path from 4.0 ns to 3.3 ns:

1. When a message completes it consumes *every* held byte, so what remains is
   just the tail of the new beat — a 64-bit shift by 1–8 bytes, not a 512-bit
   shift of the whole buffer.
2. A message can only complete once the buffer already holds its 2-byte length,
   so the length is read from the **registered** buffer, never from freshly
   shifted data. Length decode and the big insert shifter run in parallel.

Framing errors (a length outside 1…50, or leftover bytes at `tlast`) set a
`desync` flag that discards the rest of that packet and counts **once per bad
packet**, not once per cycle — so the counter means "framing errors", not
"cycles spent confused". State resets at every `tlast`, so one malformed packet
cannot corrupt every packet after it.

| | |
|---|---|
| Latency | 1 cycle |
| Counters | `stat_messages`, `stat_frame_err` |
| Tests | 11, in `tb/test_msg_frame.py` |

### 5.5 `msg_frame_slow.sv` — the obviously-correct one

One byte per cycle: a three-state machine that reads two length bytes and then
counts down. **This is not a deliverable** — at 156.25 MHz it is 156 MB/s
against a line rate of 1250 MB/s, so it would drop 87% of the feed.

It exists for one reason. When the fast framer disagrees with Python, this
module answers the only question that matters at that moment: *is my
understanding of the protocol wrong, or is my shifting logic wrong?* Both
versions are checked against the same oracle and built from the same stimulus
(`tb/frame_stim.py`), so "the two versions agree" is a real claim rather than a
coincidence of two different test setups.

One assembly detail: bytes are placed by **index** (`acc[8*i +: 8]`) rather than
shifted in, because a shift register would reverse them relative to the fast
framer's lane convention.

| | |
|---|---|
| Tests | 5, in `tb/test_msg_frame_slow.py` |

### 5.6 `decode.sv` — seven message types, four operations

**Oracle:** `itch.decode()` plus `book.Book.apply()`'s dispatch.

**Mostly this module is free.** Field extraction is fixed bit slices — every
field of every type comes out in the same cycle, because slicing a register at a
constant offset is just wires. This is the one place where hardware is
straightforwardly better than software: `struct.unpack()` costs a function call
per message; this costs nothing.

Three things in it are **not** free, and they are the interesting part.

**1. Price to tick index needs a divide by 100.** Not a shift. Done as a
reciprocal multiply: `tick = (delta/4 × 167773) >> 22`, exact for every offset
in the 4096-tick band (checked exhaustively in Python, and re-checked at the
boundaries by `test_tick_conversion_exact_at_boundaries`). 17 × 18 bits fits a
single DSP block, and registering its input and output *is* the DSP's own
internal pipeline.

**2. Sub-penny detection, free, off the same multiply.** A price is a whole cent
iff `delta % 4 == 0` **and** the product's low 22 bits are below the multiplier
itself. Because the reciprocal is exact, that second condition is equivalent to
`(delta/4) % 25 == 0` — one compare off the DSP output, replacing the old
"multiply the tick back by 100 and compare", which was the module's critical
path. Sub-penny prices are legal below $1 and cannot be represented on a
per-cent ladder, so they are **counted, not silently rounded**.

**3. A Replace stays ONE operation** carrying both references. Splitting it into
delete+add would double the worst-case work per message, and `U` is 7.39% of
real traffic.

**Why three pipeline stages.** The first version did the whole price conversion
in one cycle with a 32×32 multiply. Yosys static timing put that path at ~14 ns
against a 6.4 ns clock — it could never have run at line rate. Now: stage 1
extracts fields, maps the operation and checks the band; stage 2 is the DSP
multiply; stage 3 recovers the tick and checks for sub-penny. Three fixed
cycles, one message per cycle of throughput — more than the wire can deliver.

An out-of-band price does **not** drop the message: the order is still tracked
so that its later delete resolves, it is simply never placed on the ladder. The
counter is the only evidence it happened, which is why it is a port and not a
comment.

| | |
|---|---|
| Latency | 3 cycles |
| Counters | `stat_ops`, `stat_out_of_band`, `stat_subpenny` |
| Tests | 10, in `tb/test_decode.py` |
### 5.7 `order_table.sv` — the lookup every message needs

**Oracle:** `book.Book.orders`, a dict, for behaviour; `model/table_sim.py`,
which mirrors this module's hash, geometry and stash exactly, for *occupancy* —
which orders fit and which are dropped.

This is the most expensive module in the design, and the reason is [§1.4 fact
1](#14-three-facts-about-that-set-that-shape-the-entire-design): `E`, `C`, `X`,
`D` and `U` carry nothing but a 64-bit reference, so 53.9% of real traffic must
read state written earlier in the day before it can be applied.

**Geometry:** 16,384 sets × 8 ways + a 16-entry fully-associative stash;
97-bit entries `{valid, ladder, tag, side, tick, qty}`. Sized by the study in
[§3](#3-the-measurements-that-set-every-constant): zero drops over full days of
AAPL, MSFT, SPY, QQQ and AMD, with the stash peaking at 7 of 16.

**The hash is H3 with an identity low block:**

```
index bit i = ref bit i XOR parity(ref[63:IDX_W] AND mask_i)
```

H3 is a universal hash family, so structured references — and real ones are very
structured — spread across sets like random ones. In hardware each index bit is
one XOR tree over at most 50 inputs: three LUT levels, no multiplier. The
identity low block buys something extra: two references in the same set with
equal upper bits must have equal lower bits too, so the stored **tag** can omit
the index bits — 14 bits saved per entry, with zero false hits. The 16 mask
constants are the same hex literals as `model/table_sim.py`'s `H3_MASKS`, which
is how the testbench can predict exactly where each order lands.

**Every operation takes exactly two cycles:**

```
cycle 1  ACCEPT  hash the reference(s), issue the RAM reads
cycle 2  EXEC    compare tags (sets and stash), write back, emit the update
```

Two is enough and has to be enough. The shortest message is 21 bytes with its
prefix and 8 bytes arrive per beat, so consecutive messages complete at least
**two** beats apart (21 > 16). It also means an op's writes always land before
the next op's reads, so there is no read-during-write hazard *between*
operations at all — the bypass path that `docs/rtl-plan.md` predicted would be
"the single most likely source of a subtle, rare, real bug" was designed out
instead of debugged.

**A Replace still fits in two cycles** because every way is a true dual-port
RAM: port A serves the old order's set, port B the new order's, in the same
cycle. Its two ladder updates (remove old, add new) leave on consecutive cycles,
the second using an output slot the next op cannot need yet.

**Why everything inside EXEC is one-hot and per-way.** EXEC starts when the BRAM
data arrives and must finish with write-back data at the RAM inputs one cycle
later. The first version did it serially — compare tags, encode the winning way
to a number, select that way's entry, compare and subtract the quantity, then
write — and Yosys measured 10.3 ns of logic against a 6.4 ns clock. A cycle
cannot be added (messages arrive two cycles apart, and overlapping two ops would
need four RAM ports), so two changes shortened it instead:

1. **Hits, free ways and stash matches stay one-hot vectors.** Selecting with a
   one-hot vector is an AND-OR; encoding to a number and decoding it again was
   two extra logic levels on every path.
2. **Each way computes its own write-back**, quantity arithmetic included, in
   parallel with the tag compare. "Compare, then subtract" became "compare while
   subtracting". A reduce is one 33-bit subtraction per way, whose borrow bit
   *is* the "asked for more than held" flag.

**The one real hazard, and how it is closed.** A Replace frees the old order in
the same cycle it places the new one, but the reads happened before that. If
both orders hash to the *same* set, that set still looks as full as it was, and
a naive implementation refuses a plain swap on a full set as a collision. The
answer: in that case the new order simply takes **the old order's way** — the
very slot this operation is vacating. It is always free by the end of the op,
and choosing it needs nothing beyond the tag compare that already happened, so
the free-way search stays *parallel* to the tag compare instead of behind it.
This is mutation #0 in the mutation report.

**Deferred stash update.** EXEC only *decides* what happens to the stash and
registers that decision; the stash itself changes on the following cycle. Safe,
because the next op cannot reach EXEC for two more cycles — and it takes the
stash's 16-way data muxes off EXEC's critical path. RAM writes cannot be
deferred the same way, because the next op's RAM read may be the very next
cycle.

**The `ladder` bit.** An out-of-band order is still tracked, so its later delete
resolves, but it was never added to the ladder — so its delete must not take
shares off the ladder either. One bit per entry. Mutation #1 removes it.

**The startup sweep.** Block RAM comes up with undefined contents and reset
cannot clear it, so after reset the module walks every set clearing all ways,
one set per cycle: 16,384 cycles ≈ 105 µs, once at boot. `ready` goes high when
it finishes, and ops arriving before that are counted in `stat_overrun` rather
than silently lost.

| | |
|---|---|
| Latency | 2 cycles (+1 for a Replace's second ladder update) |
| Counters | `stat_collisions` (orders dropped — **must read zero**), `stat_missing`, `stat_overrun`, `stat_stash_peak` |
| Tests | 16, in `tb/test_order_table.py`, run against a deliberately tiny 16×2+2 table |

> The bench builds the table at 16 sets × 2 ways + 2 stash entries **on
> purpose**. A 131,072-entry table would never fill a set on a few hundred test
> orders, leaving the set → stash → drop policy — the thing most likely to be
> wrong — completely untested.

### 5.8 `priority_encoder.sv` — what `max(self.bids)` becomes

Find the highest (or lowest) set bit of a 4096-bit map. This is the clearest
example in the project of what hardware buys you.

`max()` over a dict walks every live key, so **its cost depends on the data**.
A feed with no flow control cannot tolerate that. This module answers the same
question in a fixed time whether the book has three price levels or three
thousand.

The other half of the insight: **nothing is "tracked"**. Software caches the
best price and invalidates the cache when the top level empties. This is pure
combinational logic over the live bitmap, so clearing one bit changes the answer
by itself. The cache-invalidation problem does not exist.

**Why two levels, not one.** A flat 4096-input priority encoder is a
combinational chain far too deep to settle in 6.4 ns. Splitting it into 64
groups of 64 gives two shallow problems: which group, and which bit within it.

**Why the two levels run side by side, not one after the other.** The obvious
structure is serial — find the group, select its 64 bits, encode them. The first
version did that, with "last assignment wins" loops for the encoders, and Yosys
measured 6.4 ns of pure logic: the entire clock period, because such a loop
synthesises to a 64-deep chain. Two changes fix it:

1. Every encoder is an explicit binary **tree**: six levels of 2:1 choices for
   64 inputs, about three LUT levels.
2. The within-group answer is computed for **all 64 groups at once**, in
   parallel with the group choice, which then just selects one precomputed
   6-bit answer. That costs ~64 small encoders of area per side and takes a
   whole encoder off the path.

Even so it is ~3.9 ns of logic on 7-series models, so `price_levels`
instantiates it with `REGISTERED = 1`, splitting it between its two levels. The
standalone bench uses `REGISTERED = 0` so it can be checked combinationally,
exhaustively, against Python's own bit operations.

| | |
|---|---|
| Latency | 0 or 1 cycle (`REGISTERED`) |
| Tests | 7, in `tb/test_priority_encoder.py`, via the `tb/pe_wrap.sv` two-instance wrapper |

### 5.9 `price_levels.sv` — the tick ladder and the BBO

**Oracle:** `book.Book.bids` / `.asks` and `book.Book.bbo()`.

```
self.bids[price] += qty   ->  a read-modify-write of one RAM word
max(self.bids)            ->  a bitmap plus a priority encoder
```

**Where each piece lives, and why the hardware forces it:**

- **quantities → block RAM.** 4096 × 32 bits per side is 128 Kbit: cheap in
  BRAM, absurd in flops.
- **the non-empty bitmap → flops.** The priority encoder needs all 4096 bits in
  the same cycle, and no RAM can present 4096 bits at once.

That split is *why the bitmap exists at all* rather than just scanning the
quantity table.

**Why each side has two copies of its quantity RAM.** Every cycle the ladder
needs three accesses per side: read the level being updated, write it back, and
read the quantity at the best price for the BBO output. A block RAM has two
ports. So each side keeps two identical RAMs, written together: one serves the
update read, the other the BBO read. That is the standard way to buy a read
port. Writing it as one array with three accesses would instead be built from
LUTs or flops by synthesis — silently.

**The pipeline, and the consistency argument.** An update takes two stages
(latch and read; then add or subtract, write back, update the bitmap), with
stage 1 forwarding the previous cycle's write so two updates to the same tick
back to back cannot read stale data. A Replace that does not move price produces
exactly that pattern, so this path is exercised constantly rather than being a
rare corner (mutation #5).

Publishing the top of book takes three more stages: encoder level 1, encoder
level 2, then the BBO RAM read. The first version did all three in one cycle —
bitmap → full encoder → RAM address — and Yosys measured 8.5 ns against a 6.4 ns
clock. Splitting it raises a consistency problem: the bitmap is read in stage 2
but the RAM in stage 4, two cycles later. The fix is to feed the BBO RAM copies
the same write stream **two cycles late**, so they always hold exactly the state
the encoder saw. The published tick and size then describe the same instant on
every cycle **by construction**, not by an argument about message spacing
(mutation #6).

Two smaller correctness points that are easy to get wrong:

- **An unoccupied level reads as zero, not as stale RAM contents.** Block RAM is
  not cleared by reset, so the bitmap (flops) is the authority on whether a level
  exists at all.
- **Underflow saturates at zero and is counted.** A wrapped quantity would look
  like an enormous level and corrupt the BBO for the rest of the session.
  `stat_underflow` nonzero means the order table and the ladder have diverged.
- **"No best bid" is not "best bid of zero".** They are separate `valid` bits,
  and conflating them is an easy and invisible bug.

| | |
|---|---|
| Latency | 5 cycles (read, apply, encoder ×2, BBO RAM read) |
| Counters | `stat_updates`, `stat_underflow` |
| Tests | 11, in `tb/test_price_levels.py` |

### 5.10 `feed_handler_top.sv` — the whole pipeline

Chains the five stages and adds three things:

**1. The symbol filter.** One order table could serve every symbol, but the
price ladder is one book, so the top keeps only operations whose stock locate
matches `cfg_locate`. That is a 16-bit compare — no symbol strings anywhere.
Order references are unique across *all* symbols, so dropping other symbols'
operations can never make this symbol's lookups ambiguous. Filtered operations
are counted in `stat_other_symbol`, so "nothing happened" is distinguishable
from "everything was filtered out by a wrong `cfg_locate`" (mutation #11).

**2. Tick back to price.** `price = cfg_band_base + tick × 100`, registered.
`× 100` is a constant multiply — two shifted adds, no DSP — and registering it
keeps the output ports off any combinational path, which is what out-of-context
timing should measure.

**3. Status aggregation.** Thirteen counters, side by side: the hardware
replacement for the model's exceptions and invariant counters.

| Counter | Means |
|---|---|
| `stat_packets` / `stat_dropped` | frames parsed / non-IPv4-UDP frames |
| `stat_messages` / `stat_frame_err` | ITCH messages framed / packets with bad framing |
| `stat_ops` / `stat_other_symbol` | book ops decoded / ops for other locates |
| `stat_out_of_band` / `stat_subpenny` | prices off the ladder / not on a whole cent |
| `stat_collisions` | **orders dropped by the table — must be zero** |
| `stat_missing` | references never seen (expected on a mid-day extract) |
| `stat_overrun` | an op arrived while the table was busy — must be zero |
| `stat_stash_peak` | the table's remaining margin |
| `stat_underflow` | a level driven negative — the ladder and the orders diverged |

**The latency budget, which is the point of the whole design:**

```
hdr_parse     1-2   (2 when the byte needs the NEXT beat to realign)
msg_frame     1
decode        3     (extract; reciprocal multiply in a DSP; tick check)
order_table   2     (+1 for a Replace: its second ladder update)
price_levels  5     (read, modify-write, encoder x2, BBO RAM read)
output regs   1
-------------------
wire -> BBO   13-14 cycles = 83-90 ns at 156.25 MHz; a Replace 14-15
```

Several stages are deeper than their minimum on purpose. Each single-cycle
version measured well over the 6.4 ns clock in static timing (decode 14.0 ns,
the encoder path 8.5 ns, the order table 10.3 ns). Pipelining trades a few fixed
cycles for a design that can actually run at line rate — and `test_fixed_latency`
asserts the result is a **constant per message type**, which is the property the
whole design exists to deliver.
---

## 6. File by file: the testbenches (`tb/`)

cocotb 2.x drives the simulator from Python, which suits this project exactly:
**the same interpreter that runs the golden model runs the simulation**, so a
testbench imports `model/` directly instead of marshalling expected values
through files.

### `run.py` — the build-and-run driver

One entry per bench: which RTL files it needs, the top-level name, the test
module, and any parameter overrides. Builds with Verilator, `-Wall` on (its lint
catches width mismatches and unused signals, which in RTL are usually real bugs
rather than style complaints), then runs.

```bash
wsl .venv/bin/python tb/run.py                 # all eight benches
wsl .venv/bin/python tb/run.py hdr_parse       # one
wsl .venv/bin/python tb/run.py hdr_parse -w    # ...and dump an FST
wsl gtkwave tb/sim_build/hdr_parse/dump.fst
```

`FH_RTL_DIR` points a run at a *copy* of `rtl/`, which is how `tools/mutate.py`
runs a deliberately broken design without ever touching the real sources.
`--tag` gives a run its own build directory, so several soaks can run in
parallel.

### `frame_stim.py` — shared stimulus for the two framers

Packet builders and expectations used by **both** framer benches. Keeping them
in one module is what makes "the two versions agree" a real claim: any
difference in outcome is a difference in the RTL, not in the test. It holds no
tests of its own, so importing it never registers a test twice.

### `pe_wrap.sv` — a testbench-only wrapper

`priority_encoder` is parameterised for one direction at a time; the pipeline
instantiates it twice (highest bit for the bid, lowest for the ask). This
wrapper does the same, so one bench drives one bitmap and checks both answers
against Python at once.

### The eight benches

| Bench | Tests | What it is really testing |
|---|---|---|
| `test_hdr_parse.py` | 10 | every start offset, VLAN, IHL, runts, back-to-back frames with no gap, and a **bidirectional** model-agreement check |
| `test_msg_frame.py` | 11 | messages starting at all 8 byte offsets, shortest (19 B) and longest (50 B), 50 messages per packet, malformed packets counted once and recovered from |
| `test_msg_frame_slow.py` | 5 | the same questions, same stimulus, same oracle — so the two framers agree |
| `test_decode.py` | 10 | every message type field-by-field against `itch.decode()`; `C` ignoring its printed price; tick conversion exact at both band boundaries; back-to-back every cycle |
| `test_priority_encoder.py` | 7 | single bit at all 4096 positions, group boundaries, dense and random maps, all bits set, empty |
| `test_price_levels.py` | 11 | a level emptying and refilling, back-to-back same-tick forwarding, band edges, underflow, random traffic vs `max()`/`min()`, and the BBO marker lining up with each message |
| `test_order_table.py` | 16 | overflow into the stash then dropping, stash-resident orders, freed ways reused, Replace within a full set, every op completing exactly once, random traffic vs a dict |
| `test_feed_handler_top.py` | 7 | the whole pipeline: synthetic day, symbol selection, replace-heavy at minimum spacing, VLAN, out-of-band band, **fixed latency**, and real-data replay |
| **total** | **77** | |

### How the top-level bench judges the design

`test_feed_handler_top.py` is worth reading in full, but the shape is:

1. Build frames with `model/packetize.py` — the same code Wireshark has
   cross-checked — with randomised messages-per-packet so every message lands
   at every byte offset of a beat.
2. Drive them back to back with **no idle cycles**.
3. Run the same messages through `book.MultiBook` and record the BBO after each
   one, keyed by MoldUDP64 sequence number.
4. Assert, for **every** book message of the tracked symbol: exactly one BBO was
   published, never two (a half-applied Replace would show up as two), never
   none, and its value equals the model's.
5. Assert the status counters: `stat_frame_err`, `stat_dropped`,
   `stat_overrun`, `stat_underflow` and `stat_collisions` all zero;
   `stat_packets` and `stat_messages` exactly right.

One honest difference between model and hardware is **modelled explicitly
rather than papered over**: the ladder covers only 4096 cents around
`cfg_band_base`, while the Python dicts hold any price. So the oracle's BBO is
taken over in-band, whole-cent levels only. Because a level is the sum of orders
*at* that price, filtering levels by price is exactly equivalent to the RTL
keeping out-of-band orders off the ladder — the equivalence is what makes this
legitimate rather than a fudge.

The latency test deserves its own note. It records the cycle the beat holding a
message's **last byte** enters the DUT and the cycle its BBO is **registered at
the output**, then asserts that the difference is a *single value per message
type* (a Replace being exactly one more), with at most 2 cycles of spread
overall from `hdr_parse`'s realignment. That is not "measure the average
latency"; it is "prove the latency is not a distribution".
---

## 7. File by file: the tools (`tools/`)

### `itch50_moldudp64.lua` — a Wireshark dissector for ITCH 5.0

Wireshark ships a MoldUDP64 dissector and a Nasdaq ITCH **4.1** dissector, but
not 5.0. The header changed between versions — 5.0 added a 2-byte stock locate
and 2-byte tracking number ahead of the timestamp — so the built-in 4.1
dissector misparses every field of a 5.0 message. This one handles 5.0 directly,
binding to UDP port 26477 (the `DST_PORT` in `model/packetize.py`).

### `check_pcap.py` — diff Wireshark's dissection against ours

Packetizes a file, runs `tshark` over it, and compares packet by packet: packet
count and sequence numbers, every message type in order, **every decoded field
value**, and Wireshark's own IPv4 checksum verdict and expert-info warnings.

### `mutate.py` — the mutation-testing harness

Copies `rtl/` to a scratch directory, applies **one** deliberate bug to the
copy, runs the bench that should notice, and reports KILLED (some test failed,
as it should) or SURVIVED (every test still passed — the suite has a blind
spot). `rtl/` itself is never modified. Output: `tb/mutation_report.md`.

### `comment_density.py` — an enforceable style rule

Flags runs of more than three consecutive code lines without a comment. The rule
exists because this is a learning project: every few lines should say *what* or
*why*, so a reader never has to reverse-engineer a block of hardware from its
syntax. A checker makes the rule enforceable rather than aspirational. It runs
on plain Windows Python, no simulator needed.

### `setup-sim.sh` — one-shot WSL toolchain install

Verilator, GTKWave, the Python venv and the cocotb packages, run from inside
Ubuntu after `wsl --install -d Ubuntu`.

---

## 8. File by file: synthesis (`syn/`)

Two flows, deliberately. They read the same RTL.

### `yosys_synth.py` — the everyday check, on any machine

Yosys via **YoWASP** (a WebAssembly build installed with `pip`), so it runs on
any host — including an ARM64 laptop, where Vivado does not exist. Per module it
reports:

- **resource counts in real Xilinx primitives** — LUTs, FFs, BRAM36, DSPs,
  carry chains — close to Vivado's, because `synth_xilinx` maps onto the same
  cell library;
- a **static timing estimate**: the slowest register-to-register path in
  picoseconds of *logic* delay, over Yosys's 7-series cell delay models. No
  routing, because nothing has been placed;
- **logic depth**: the longest chain of LUT/MUX/carry cells between registers.

> **How to read the timing number.** Routing is typically about half of a real
> path, so the working rule is *logic ≤ ~3.2 ns* for the 6.4 ns (156.25 MHz)
> clock. The 7-series models are also conservative for an UltraScale+ target.
> This is a screening number, not a signed-off Fmax.

```bash
python syn/yosys_synth.py                 # every module -> syn/reports/yosys_summary.md
python syn/yosys_synth.py price_levels    # just one
FH_YOSYS=/path/to/yowasp-yosys python syn/yosys_synth.py   # explicit binary
```

`FH_YOSYS` overrides the binary; otherwise the script finds the project venv's
copy under either `bin/` (Linux/WSL) or `Scripts/` (Windows), then falls back to
`PATH`. Logs land in `syn/out/` (gitignored); the summary table is written to
`syn/reports/yosys_summary.md` and committed, so the numbers are visible in
review.

### `vivado/ooc_synth.tcl`, `run_all.tcl`, `ooc.xdc` — the sign-off flow

Out-of-context synthesis, place and route on a real part. "Out of context" means
the module is implemented on its own, with no board and no pins, and its ports
are treated as registered elsewhere — which measures *this* logic rather than a
surrounding system.

```bash
vivado -mode batch -source syn/vivado/ooc_synth.tcl \
       -tclargs feed_handler_top xcku5p-ffvb676-2-e
vivado -mode batch -source syn/vivado/run_all.tcl   # every module, one table
```

`ooc.xdc` is four lines and they are the whole story: one 6.4 ns clock, a
half-period input/output budget so an unregistered port path cannot hide, and
false paths on `rst` and the static `cfg_*` inputs. There are no other clocks
and no clock-domain crossings anywhere in the design.

The default part is a Kintex UltraScale+ KU5P: 10G-class transceivers, 480
BRAM36 (the order table needs 352), and part of the free Vivado ML Standard
edition.

It needs an x86-64 machine with Vivado installed, and produces the only numbers
that count as a signed-off Fmax. Results so far are in
[§10](#10-results-latency-area-timing); `price_levels`, `order_table` and
`feed_handler_top` have not been run yet.

### `quartus/build.tcl`, `sta.tcl`, `run.sh`, `ooc.sdc` — routed timing on Intel parts

The same out-of-context idea for machines that have Quartus instead of Vivado
(the default target is the Cyclone V on a DE1-SoC, `5CSEMA5F31C6`). Tested with
Quartus Prime Lite 18.1 on Windows, from Git Bash:

```bash
export PATH="/c/intelFPGA_lite/18.1/quartus/bin64:$PATH"   # adjust to your install
./syn/quartus/run.sh                  # price_levels, hdr_parse, msg_frame, decode
./syn/quartus/run.sh hdr_parse        # one module
```

Each module gets a full project in `syn/out/quartus/<module>/`; open its `.qpf`
in the Quartus GUI to browse the RTL Viewer, Chip Planner and Timing Analyzer.
One line per module is appended to `syn/out/quartus/results.txt`:

| Field | Meaning |
|---|---|
| `FMAX_CORE` | register-to-register Fmax — **the number to quote** |
| `WNS_CORE` | slack at 6.4 ns that `FMAX_CORE` comes from; positive = timing met |
| `WNS_ALL` | worst slack over every path, ports included |
| `FMAX_REPORTED` | Quartus's own Fmax summary, which includes port paths |

Why the core number: Quartus has no out-of-context mode, so `build.tcl` makes
every port except `clk` a *virtual pin*. The I/O budget in `ooc.sdc` is
referenced to an ideal clock, while the registers behind the ports see ~4 ns
of real clock-tree delay — so a register driving an output through *zero*
logic still shows ~-2.5 ns. That measures the constraint, not the design.
`timing_core.rpt` holds the ten worst register-to-register paths in full.

Quartus Standard/Lite parses less SystemVerilog than Verilator or Vivado:
generate blocks need explicit `generate`/`endgenerate` and a separately
declared `genvar`. The RTL is written that way so all three tools accept it.

A Cyclone V is a low-cost 28 nm part, much slower than the Kintex UltraScale+
the design targets, so failing 156.25 MHz here does not by itself mean failing
on the real part. It does find genuinely long paths cheaply — see
[§10](#10-results-latency-area-timing).
---

## 9. How we check it works

Seven layers. Each catches a class of bug the others cannot, which is why all of
them are worth having.

| # | Layer | Catches | Runs where |
|---|---|---|---|
| 1 | `pytest tests` — unit and invariant tests on the model | a `struct` format string off by one byte; an operation that updates the order table but not the price levels | any Python |
| 2 | Wireshark cross-check | **symmetric** framing bugs — misreading the spec consistently in both directions, which our own round trip cannot catch | any Python + tshark |
| 3 | `packetize --check` / `replay` | asymmetric framing bugs; book invariants over a whole file | any Python |
| 4 | cocotb, per module | RTL disagreeing with the model, stage by stage, with the diff naming the field | WSL + Verilator |
| 5 | cocotb, whole pipeline | integration: every message's BBO, every counter, and the latency being constant | WSL + Verilator |
| 6 | mutation testing | **blind spots in layers 4 and 5** — proving the tests can fail | WSL + Verilator |
| 7 | real-data replay + synthesis | everything random stimulus never thought to generate; and whether it can physically run at the clock | WSL; Vivado for sign-off |

### 9.1 Layer 1 — the model's own tests

```bash
python -m pytest tests -q
```

```
............................................................             [100%]
60 passed in 6.97s
```

The two that carry the most weight:

- `tests/test_itch.py` hand-assembles message bytes with a **distinct magic
  number per field**, so a format string wrong by one byte makes a field land on
  a recognisable wrong value and the assertion names which field moved.
- `tests/test_book.py` **rebuilds every price level from the live orders** and
  requires an exact match. That single check catches any operation that updated
  one half of the book and not the other — which is precisely the class of bug
  the RTL's `stat_underflow` counter exists to detect.

### 9.2 Layer 2 — Wireshark cross-check

```bash
python tools/check_pcap.py data/synth_small.itch
```

```
wrote 250 packets (2,000 messages) to ...\itch_check.pcap
IPv4 header checksum, per Wireshark: good=250
OK: Wireshark and our model agree on all 250 packets
    2,000 messages, 12,360 individual field values compared
```

**This matters more than it looks.** Our own round trip (`packetize.py --check`)
proves we can undo our own work. But if we had misread the MoldUDP64 layout,
`packetize` and `depacketize` would be wrong in the *same direction* and the
test would still pass. Wireshark's dissectors were written by other people from
the same public specs, so agreement is real, independent evidence.

It also checks two things our Python does not check itself: the IPv4 header
checksum, computed independently; and that message lengths **tile each packet
exactly** — a wrong length makes the next message's type byte land on garbage,
which is the exact failure mode the framer has when it breaks.

Because `packetize.py` *defines* the stimulus every RTL bench sees, this layer
is what removes "maybe my stimulus is bad" from the list of suspects when a
waveform looks wrong. It is already passing across plain frames, VLAN-tagged
frames, and packing densities from 1 to 50 messages per packet.

`tests/test_packetize.py::test_tshark_agrees_with_our_model` runs it
automatically, and skips when `tshark` is not installed.

### 9.3 Layer 3 — round trip and book invariants

```bash
cd model
python packetize.py ../data/synth.itch --check
python replay.py    ../data/synth.itch
```

```
round trip      : OK, 200,007 messages recovered byte-for-byte, sequence numbers contiguous

book messages applied : 200,000
orphan references     : 0   (clean)
crossed-book messages : 0 (0.0000%)
```

An **orphan** — an execute, cancel, delete or replace of a reference the book has
never seen — is expected when replaying a mid-day extract, because the order was
added before the window opened. A nonzero count on a full-day replay from the
first message is a real bug.

### 9.4 Layers 4 and 5 — the RTL benches

```bash
wsl .venv/bin/python tb/run.py                 # all 77 tests
wsl .venv/bin/python tb/run.py order_table     # one bench
wsl .venv/bin/python tb/run.py order_table -w  # ...and dump waves
```

The discipline that makes these worth anything is in [§2](#2-the-method-software-first-then-hardware-diffed-against-it):
nothing is hard-coded; the oracle is imported. Concretely, per bench:

- **`hdr_parse`** — frames built by `packetize()`, expected output from
  `depacketize()`. One test even checks the agreement is *bidirectional*.
- **`msg_frame`** — the oracle is `itch.read_messages()`, and the stimulus forces
  messages to start at all eight byte offsets and span 2 to 8 beats.
- **`decode`** — every field of every type compared against `itch.decode()`.
- **`order_table`** — placement predicted by `model/table_sim.py`, the same code
  that sized the real table against whole trading days, so the bench and the
  sizing study cannot disagree about what the hardware does.
- **`price_levels`** — the oracle is literally `max()` and `min()` over two
  dicts. Using the slow, obviously-correct method as the reference is the point:
  the RTL must produce the same answer in fixed time.
- **`priority_encoder`** — the oracle is Python's own `int.bit_length()`. For a
  pure function, that is the right kind of oracle: it has no model of its own to
  be wrong.
- **`feed_handler_top`** — see [§6](#6-file-by-file-the-testbenches-tb).

### 9.5 Layer 6 — mutation testing: proving the tests can fail

> **Ten green tests mean nothing until they have been shown capable of going
> red.**

```bash
wsl .venv/bin/python tools/mutate.py        # every mutation
wsl .venv/bin/python tools/mutate.py 3 7    # just these two
```

Each mutation breaks the RTL in one specific, *realistic* way — the kind of bug
that would really be written — and names the bench that should catch it. Twelve
mutations, twelve KILLED (`tb/mutation_report.md`):

| # | file | the bug | tests that caught it |
|---|---|---|---|
| 0 | `order_table.sv` | Replace into the same full set forgets the way it is vacating | 2/16 |
| 1 | `order_table.sv` | Delete of an out-of-band order still removes shares from the ladder | 1/16 |
| 2 | `order_table.sv` | The overflow stash is never used: full sets drop orders | 5/16 |
| 3 | `order_table.sv` | H3 hash replaced by plain low-bit indexing | 2/16 |
| 4 | `order_table.sv` | A Replace signals completion twice (half-applied BBO published) | 2/16 |
| 5 | `price_levels.sv` | Read-during-write forwarding removed from the tick ladder | 3/11 |
| 6 | `price_levels.sv` | BBO RAM write delay one cycle short: size and price out of step | 1/11 |
| 7 | `msg_frame.sv` | A bad length never desynchronises: garbage framed as messages | 1/11 |
| 8 | `msg_frame.sv` | Off-by-one in the leftover shift after a message completes | 10/11 |
| 9 | `decode.sv` | Sub-penny prices silently truncated onto a tick | 1/10 |
| 10 | `hdr_parse.sv` | VLAN tags not detected: hard-coded 62-byte header | 2/10 |
| 11 | `feed_handler_top.sv` | Symbol filter removed: every symbol's orders reach one book | 3/7 |

Read the right-hand column carefully — it is more informative than the verdict.
Mutation #8 fails 10 of 11 tests: an alignment bug is loud, and any one test
would have found it. Mutations #1, #6, #7 and #9 fail exactly **one** test each.
Those four tests are the entire defence against four real bugs, and without the
mutation run there would be no way to know that. A mutation that SURVIVED would
be the interesting result: it would name a behaviour nothing checks.

### 9.6 Layer 7 — real data, and the clock

**Real data.** The random generator only produces what it thought to generate.
A real trading day contains 368 million messages of things nobody would think
of: stub quotes at $0.0001 and $199,999.99, sub-penny prices, `C` messages
printed away from the resting price, orders that live all day.

```bash
# the default: the first 20,000 messages of data/AAPL.itch
wsl .venv/bin/python tb/run.py feed_handler_top

# a full trading day of one symbol, in simulation
REAL_FILE=MSFT.itch REAL_N=0 COCOTB_TEST_FILTER=test_real_data_replay \
    wsl .venv/bin/python tb/run.py feed_handler_top --tag msft
```

The soak asserts what the sizing study promised: `stat_collisions == 0` (the
table dropped nothing) and `stat_missing == 0` (every reference resolved), while
reporting `stat_stash_peak` so the remaining margin is visible. The test skips
cleanly when the extract is absent, since nothing in `data/` is committed.

**The clock.** Correct RTL that cannot close timing is not a design. Every
module is screened by `syn/yosys_synth.py` on every change ([§8](#8-file-by-file-synthesis-syn)),
and that screening is what produced most of the pipelining decisions described
in [§5](#5-file-by-file-the-rtl-rtl): decode's 14 ns single-cycle divide, the
encoder's 8.5 ns path, the order table's 10.3 ns serial EXEC. In each case the
number came first and the restructuring came second.

### 9.7 What a failure looks like

The reason to build it this way is what happens when something breaks. A field
offset wrong by one byte does not produce "the book looks odd after a while"; it
produces a line of this shape, naming the message and the field:

```
seq 4871 (U): RTL (1, 2469900, 500, 1, 2470100, 300) != model (1, 2469900, 800, 1, 2470100, 300)
```

— a message number, its type, and the exact field that differs. From there,
`tb/run.py <bench> -w` dumps an FST, GTKWave opens it, and the pcap of the same
stimulus opens in Wireshark: Wireshark says what *should* be on the wire, the
waveform says what the RTL actually did with it.
### 9.8 Run everything

```bash
# --- anywhere (plain Windows Python is fine) ---------------------------
python -m pytest tests -q                       # layer 1
python tools/check_pcap.py data/synth_small.itch  # layer 2
cd model && python packetize.py ../data/synth.itch --check   # layer 3
cd model && python replay.py    ../data/synth.itch           # layer 3
python syn/yosys_synth.py                       # layer 7 (timing screen)

# --- inside WSL (Verilator) -------------------------------------------
wsl .venv/bin/python tb/run.py                  # layers 4 and 5, 77 tests
wsl .venv/bin/python tools/mutate.py            # layer 6, 12 mutations
REAL_FILE=AAPL.itch REAL_N=0 COCOTB_TEST_FILTER=test_real_data_replay \
    wsl .venv/bin/python tb/run.py feed_handler_top --tag aapl   # layer 7
```

A green run of all of it is the claim this repository makes. Anything less
should be stated as less — which is why the mutation report is committed with
its per-mutation verdicts rather than summarised as "mutation tested".
---

## 10. Results: latency, area, timing

### Latency — the number the design exists for

Measured by `tb/test_feed_handler_top.py::test_fixed_latency`, from the clock
edge that takes in the beat holding a message's **last byte** to the edge that
registers its BBO on the output ports:

| Stage | Cycles |
|---|---|
| `hdr_parse` | 1–2 (2 when the byte needs the *next* beat to realign) |
| `msg_frame` | 1 |
| `decode` | 3 |
| `order_table` | 2 (+1 for a Replace) |
| `price_levels` | 5 |
| output registers | 1 |
| **wire → BBO** | **13–14 cycles = 83–90 ns @ 156.25 MHz** (Replace: 14–15) |

The test does not report an average. It asserts that framer→BBO latency is a
**single value per message type**, that a Replace is exactly one more, and that
the whole wire→BBO spread is at most two cycles — all of which comes from
`hdr_parse`'s realignment, never from the data. Nothing in this pipeline
branches on a value.

### Area and logic timing — Yosys, `synth_xilinx -family xc7 -abc9`

| module | role | LUT | FF | BRAM36 | DSP | levels | logic ns |
|---|---|---|---|---|---|---|---|
| `hdr_parse` | strip Ethernet/IP/UDP/Mold | 1,133 | 985 | 0 | 0 | 10 | 3.37 |
| `msg_frame` | 8 B/cycle message framer | 1,092 | 978 | 0 | 0 | 17 | 3.28 |
| `msg_frame_slow` | 1 B/cycle reference (not a deliverable) | 999 | 997 | 0 | 0 | 17 | 2.98 |
| `decode` | message → book operation | 197 | 979 | 0 | 1 | 9 | 3.17 |
| `order_table` | 131 K-entry 8-way table + stash | 8,749 | 2,592 | **352** | 0 | 21 | **6.38** |
| `priority_encoder` | 4096-bit encoder, one side, unregistered | 4,519 | 0 | 0 | 0 | 14 | 3.92 |
| `price_levels` | tick ladder + both encoders | 29,419 | 9,287 | 16 | 0 | 17 | 5.68 |
| `feed_handler_top` | the whole pipeline | _run pending_ | | | | | |

The full table, regenerated on every run, lives in
`syn/reports/yosys_summary.md`.

Reading this table:

- **Logic ns** is the slowest register-to-register path counting *logic only* —
  nothing is placed or routed. Routing is typically about half of a real path,
  so the working screen is **≤ ~3.2 ns** against the 6.4 ns clock. The 7-series
  delay models are also conservative for the UltraScale+ target.
- **`order_table` is the critical module**, at 6.38 ns of logic and 21 levels,
  and 2.55 ns of that is the 7-series BRAM clock-to-out alone. It is the
  one module whose timing is genuinely uncertain until Vivado runs on a real
  UltraScale+ part, whose BRAMs are substantially faster. If anything in this
  design fails to close at 156.25 MHz, this is it — which is unsurprising, since
  it is the module doing an associative lookup, a tag compare across eight ways
  and a stash, and a write-back in two cycles.
- **`price_levels`** carries the two priority encoders and four 4096×32 RAMs.
- **`priority_encoder`** is reported standalone and unregistered (4519 LUTs,
  3.92 ns), which is why `price_levels` instantiates it with `REGISTERED = 1`.
- **`msg_frame_slow` is not a deliverable** and is listed only because it is
  synthesised alongside everything else.
- BRAM36 = 352 for the order table is 16,384 sets × 8 ways × 97-bit entries.
  That fits the default KU5P part's 480 with room for the ladder.

Regenerate with:

```bash
python syn/yosys_synth.py        # writes syn/reports/yosys_summary.md
```

### Routed timing — Vivado and Quartus

The Yosys table above counts logic only. These numbers are **after placement
and routing on a real part**, so they include wire delay — the delay that
decides whether the design actually runs at 156.25 MHz (a 6.4 ns clock).

**How they are measured.** Each module is implemented *out of context*: on its
own, with no board and no pins, constrained by one 6.4 ns clock. Every input
is assumed to arrive 3.2 ns after the clock edge and every output to be needed
3.2 ns before the next one — half the period is budgeted to the logic outside
the module, so a port that feeds straight into slow logic cannot hide. Scripts:
`syn/vivado/ooc_synth.tcl` + `ooc.xdc`, and `syn/quartus/run.sh` + `ooc.sdc`
(see [§8](#8-file-by-file-synthesis-syn)).

**How to read them.**

- **Slack** is how much time is left over on the worst path at 6.4 ns.
  Positive = timing met at 156.25 MHz; negative = the path is too slow.
- **Fmax** is derived from slack as 1000 / (6.4 − slack). It is an estimate:
  once a constraint is met the tools stop optimising, so the true maximum is
  usually somewhat higher.
- **All paths** includes the port paths with their 3.2 ns budget.
  **Register-to-register** is the module's own logic between flip-flops. Both
  must pass in a real system; the second says how much headroom the logic
  itself has.

**Vivado 2026.1, Kintex UltraScale+ KU5P (`xcku5p-ffvb676-2-e`)** — the part
the design targets:

| module | all paths: slack | all paths: Fmax | reg-to-reg: slack | reg-to-reg: Fmax | LUT | FF | DSP | result |
|---|---|---|---|---|---|---|---|---|
| `hdr_parse` | +1.84 ns | 219 MHz | +4.11 ns | ~436 MHz | 827 | 994 | 0 | **met** |
| `msg_frame` | +0.47 ns | 169 MHz | +2.57 ns | ~261 MHz | 1,403 | 986 | 0 | **met** |
| `decode` | +0.92 ns | 183 MHz | +4.36 ns | ~490 MHz | 201 | 979 | 9 | **met** |
| `price_levels` | _not yet run_ | | | | | | | |
| `order_table` | _not yet run_ | | | | | | | |
| `feed_handler_top` | _not yet run_ | | | | | | | |

In all three the worst path is an **input port** into a register
(`s_tvalid` → `hb` in `hdr_parse`, `s_msg` → a status counter in `decode`,
`s_tkeep` → the buffer reset in `msg_frame`): the 3.2 ns input budget, not the
logic, sets the limit. The logic alone has 2.6–4.4 ns to spare. About 64–80 %
of each worst path is routing, which is why the logic-only Yosys screen asks
for ≤ ~3.2 ns.

**Quartus Prime Lite 18.1, Cyclone V (`5CSEMA5F31C6`)** — a low-cost 28 nm
part, far slower than the KU5P. It is used as a second, independent flow
that runs on a laptop without Vivado, and as a harsh stress test: a path that
is marginal here is a path worth looking at.

| module | reg-to-reg: slack | reg-to-reg: Fmax | ALM | registers | result |
|---|---|---|---|---|---|
| `hdr_parse` (before fix) | −1.25 ns | ~131 MHz | 1,224 | 1,342 | failed |
| `hdr_parse` (after fix) | +0.40 ns | ~167 MHz | 744 | 987 | **met** |
| `price_levels` | −5.71 ns | ~83 MHz | 19,774 | 9,528 | **failed** |
| `msg_frame`, `decode` | _run stopped (laptop out of memory)_ | | | | |

The Quartus flow reports register-to-register as its headline because its port
numbers are distorted: with no out-of-context mode, ports become *virtual
pins* referenced to an ideal clock, while the registers behind them see ~4 ns
of clock-tree delay, so even a register wired straight to an output "fails"
by ~2.5 ns. That is a property of the setup, not the design.

**The `hdr_parse` fix.** Its critical path read the MoldUDP64 sequence number
through a chain of dependent header fields in one cycle: EtherType → VLAN →
IPv4 header length → three adders → the MoldUDP64 offset → a 128-to-1 byte
select. The offset depends on only five bits (VLAN flag + IHL), which are known
several beats before the sequence number is read, so those bits are now
registered early and each byte becomes a 32-to-1 select of fixed positions.
Same outputs on every cycle — checked against the old RTL on 3,000 random
frames including malformed ones — with 39 % fewer ALMs.

**`price_levels` on Cyclone V** fails by 5.7 ns: the update path reads whether
a tick is occupied, computes the new quantity, and then sets or clears one bit
of the 4096-bit occupancy bitmap — 11.6 ns of logic and routing, with the
write fanning out to all 4096 bitmap flip-flops. Whether it closes on the KU5P
is the next Vivado run; if it does not, that update needs another pipeline
stage.

### Throughput

Structural, not measured: every stage accepts a beat every cycle, `decode`
sustains one message per cycle, and `order_table` sustains one operation per two
cycles — which is the tightest spacing the wire can produce, because the
shortest message occupies 21 bytes and only 8 arrive per beat. `stat_overrun`
counts any operation that arrives while the table is busy, so the two-cycle
claim is checked on every single run rather than argued.
---

## 11. Setup and repo layout

### Layout

```
model/   Python reference pipeline — the golden model and the measuring instrument
rtl/     SystemVerilog: 11 files, the whole datapath
tb/      cocotb testbenches; they import model/ as the oracle
tools/   Wireshark dissector, pcap cross-check, mutation harness, style checker
syn/     Yosys flow (any machine) and Vivado out-of-context flow (sign-off)
docs/    design notes written before and during the build
tests/   pytest suite for the Python model
data/    data files and extracts — gitignored, nothing here is committed
```

Also worth reading, all written *before* the corresponding code:

- [`docs/sw-vs-hw.md`](docs/sw-vs-hw.md) — the software and hardware datapaths
  side by side, the module hierarchy, and whether you need Vivado IP blocks
  (mostly: no).
- [`docs/how-it-works.md`](docs/how-it-works.md) — the pipeline stages and where
  the software "cheats" in ways hardware cannot.
- [`docs/rtl-plan.md`](docs/rtl-plan.md) — the plan for steps 5–10 and how each
  module would be verified, written before building it. Worth comparing against
  what actually happened; two of its predictions were wrong in instructive ways
  (see [§12](#12-status-and-what-is-deliberately-not-done)).
- [`docs/setup.md`](docs/setup.md) — toolchain: Windows, WSL, and what runs
  where.

### What runs where

| | |
|---|---|
| Python model, pytest, Wireshark cross-check, Yosys | **anywhere**, including plain Windows Python |
| Verilator + cocotb | **WSL** (Verilator does not run natively on Windows) |
| Vivado sign-off | **x86-64** Windows or Linux with Vivado installed |

### Quick start, no download needed

The synthetic generator emits a valid ITCH BinaryFILE, so the whole software
pipeline runs in seconds without the 4.7 GB sample file.

```bash
python -m pytest tests -q                      # 60 tests, ~7 s

cd model
python demo.py                                 # narrated walkthrough, start here
python gen.py    ../data/synth.itch -n 200000  # synthetic feed
python scan.py   ../data/synth.itch --sample 5 # message mix + framing check
python replay.py ../data/synth.itch --bbo ../data/synth.bbo.csv --print 10
python sizing.py ../data/synth.itch            # the hardware sizing numbers
python packetize.py ../data/synth.itch --check --pcap ../data/synth.pcap
```

Everything reads the same BinaryFILE format, so each command works unchanged on
a full-day download, a single-symbol extract, or synthetic data.

### Simulation setup

One-time, inside WSL:

```bash
bash tools/setup-sim.sh          # verilator, gtkwave, venv in ~/.venvs/itch
# or, if only the venv is missing, a repo-local one:
python3 -m venv .venv && .venv/bin/pip install cocotb cocotbext-axi pytest
```

Then, inside WSL, with whichever venv you made:

```bash
source ~/.venvs/itch/bin/activate && python tb/run.py   # setup-sim.sh venv
.venv/bin/python tb/run.py                              # repo-local venv
```

The `wsl .venv/bin/python ...` commands elsewhere in this README assume the
repo-local venv.

### Synthesis setup

```bash
pip install yowasp-yosys         # Yosys as a WebAssembly build, any platform
python syn/yosys_synth.py
```

**Quartus** — any Quartus Prime Lite/Standard with Cyclone V support; see
[§8](#8-file-by-file-synthesis-syn) for the commands.

**Vivado** (x86-64 Windows or Linux; the scripts target a Kintex UltraScale+
KU5P):

1. From AMD's *Adaptive SoCs & FPGA Design Tools Downloads* page, download the
   **Unified Installer — Windows Self Extracting Web Installer** (~290 MB
   `.exe`). Click the file title itself; *Digest*, *Signature* and *Public
   Key* are only for verifying the download. An AMD account and a short
   export-compliance form are required.
2. Product: **Vivado** (not Vitis). Edition / license tier: the no-cost one.
   From 2026.1 AMD moved to tiered licensing — check that the free tier lists
   Kintex UltraScale+; if not, use 2025.x from the *Version* dropdown, whose
   free *Vivado ML Standard* edition includes the KU5P.
3. Devices: tick **Kintex UltraScale+** (optionally **Artix-7** as a small
   fallback) and untick everything else — Versal, Zynq, Virtex, Spartan.
   Untick Vitis and Power Design Manager. This keeps the install to roughly
   20-40 GB instead of 100+.
4. Open the **Vivado Tcl Shell** from the Start menu, then:

   ```tcl
   cd C:/Users/<you>/Feed_Handler
   vivado -mode batch -source syn/vivado/ooc_synth.tcl -tclargs hdr_parse
   vivado -mode batch -source syn/vivado/run_all.tcl       # every module
   ```

   Results land in `syn/out/vivado/`. With 8 GB of RAM, close other
   applications; `order_table` is the heavy one.

### Using the real data

Nasdaq publishes full days of TotalView-ITCH 5.0 sample data for free (search
"Nasdaq ITCH sample data"; the files live under `emi.nasdaq.com/ITCH/`). The
January 30, 2019 file is about 4.7 GB compressed.

```bash
# put 01302019.NASDAQ_ITCH50.gz in data/, then:
cd model
python scan.py    ../data/01302019.NASDAQ_ITCH50.gz -n 5000000
python extract.py ../data/01302019.NASDAQ_ITCH50.gz --list | head
python extract.py ../data/01302019.NASDAQ_ITCH50.gz --symbol AAPL
python replay.py  ../data/AAPL.itch --print 100
python table_sim.py ../data/AAPL.itch --geom 16384x8 --stash 16
```

Nothing in `data/` is committed: the files are large and redistribution is
restricted. Stock locate numbers are **only valid for the trading day they came
from**.
---

## 12. Status, and what is deliberately not done

### Status

| Step | What | State |
|---|---|---|
| 0 | Repo and tools | done |
| 1 | Spec reading, message parser, symbol extraction | done |
| 2 | Golden-model order book + hardware sizing | done |
| 3 | MoldUDP64/UDP/IP/Ethernet packetizer, AXI-Stream beats, pcap export | done |
| 4 | RTL header parser | done — 10 tests |
| 5 | RTL message framer (1 B/cycle, then 8 B/cycle) | done — 16 tests across both |
| 6 | RTL decoder to normalized book operations | done — 10 tests |
| 7 | Order table in BRAM (hashed, set-associative, stash) | done — 16 tests |
| 8 | Price-level table, bitmap + priority encoder to BBO | done — 18 tests |
| 9 | Integration, real-data replay, fixed-latency measurement | done — 7 tests |
| 10 | Synthesis | **Yosys: done. Vivado (KU5P): `hdr_parse`, `msg_frame`, `decode` met at 156.25 MHz; `price_levels`, `order_table`, top not yet run. Quartus (Cyclone V): partial** |

**All eleven RTL files are complete and wired together.** There is no stub, no
`TODO`, and no unimplemented path in `rtl/`.

### What is deliberately not done

**The rest of the Vivado out-of-context run.** `hdr_parse`, `msg_frame` and
`decode` are routed and meet 156.25 MHz on the KU5P. `price_levels`,
`order_table` and `feed_handler_top` — the three modules with block RAM and
the widest logic — have not been run yet, so there is **no signed-off Fmax for
the whole design** until they are. `price_levels` is the one to watch: it
fails badly on the slower Cyclone V (see [§10](#10-results-latency-area-timing)).

**A single shared order table across all symbols.** Measured and rejected:
1,742,866 simultaneously live orders across all 8,713 symbols means ~4 M entries
with headroom, about 7,282 BRAM36 — several times a mid-range part. The design
tracks one configurable symbol instead (`cfg_locate`), which is why the symbol
filter exists in `feed_handler_top.sv`. This is the one place where a measurement
changed the architecture rather than just a parameter.

**A CSR / AXI-Lite block.** The thirteen status counters leave as plain output
ports. In a real system they would be registers read back over AXI-Lite. That is
a bus-plumbing exercise, not a feed-handler one.

**Gap detection.** `hdr_parse` exports the MoldUDP64 sequence number and message
count, which is exactly what a gap detector needs
(`previous_sequence + previous_count == this_sequence`), but no module consumes
it for that purpose. The sideband is there so it can be added without touching
the datapath.

**Functional coverage.** `docs/rtl-plan.md` proposed a coverage model so that
"we tested it" becomes a list of which cases were actually hit. The mutation
suite does a related job from the other direction — it shows which behaviours
are actually defended — but it is not the same thing.

**`model/sizing.py` still centres the price band on the first price seen**,
which on real data can be a stub quote at $0.0001, making its out-of-band
percentages meaningless. This is the known bug flagged in `docs/rtl-plan.md`.
The RTL sidesteps it entirely by taking `cfg_band_base` as configuration, and
the top-level bench picks the band from the **median add price**
(`band_base_for()` in `tb/test_feed_handler_top.py`). The measurement script is
the thing still to fix, not the design.

### Two predictions from `docs/rtl-plan.md` that turned out wrong

Worth recording, because the plan was written before the build and this is what
it was for.

**"Read-during-write forwarding in the order table is the single most likely
source of a subtle, rare, real bug."** It turned out not to exist. Because the
shortest message is 21 bytes with its prefix and 8 bytes arrive per beat,
consecutive operations are always at least two cycles apart, and a two-cycle
op's writes always land before the next op's reads. The hazard was designed out
rather than debugged. (The ladder in `price_levels.sv` *does* need forwarding,
and mutation #5 confirms it is load-bearing.)

**"Direct-mapped is ruled out; add associativity."** Correct, but incomplete —
associativity alone was not enough. 8-way sets still overflowed on real data,
and the fix that actually got to zero drops was the combination of a *universal*
hash (H3 instead of XOR-fold) **and** a 16-entry stash. Neither alone was
sufficient: H3 with no stash still dropped 430 orders on AAPL's day.

### Still open as design questions

- Whether a Replace should ever split into delete + add under back-pressureless
  burst conditions. Kept as one operation here; the cost is the second ladder
  update cycle and the two-set RAM structure.
- How prices outside the band should be *reported* rather than merely counted.
  Today they are tracked but never laddered, and `stat_out_of_band` is the only
  evidence.
