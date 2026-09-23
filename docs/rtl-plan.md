# RTL plan: steps 5–10, and how each one is verified

Step 4 is done. This is the plan for the rest, written before building it so the
design decisions are on record and can be judged later against what actually
happened.

## The verification method, stated once

Every module follows the same three-part pattern. It is worth naming because
it is the actual discipline of the project, more than any individual module:

1. **A Python counterpart is the oracle.** The testbench imports `model/` and
   asks "does the RTL agree?" Nothing is hard-coded in a testbench. When they
   disagree, one of them is wrong and the diff says which byte.
2. **Mutation testing proves the tests work.** Deliberately break the RTL in a
   specific way, confirm that exactly the tests aimed at that behaviour fail
   and the others do not. Ten green tests mean nothing until they have been
   shown capable of going red. Step 4's VLAN mutation is the template.
3. **Real data last.** Random stimulus only finds what it thought to generate.
   The January 30 2019 file has 368 million messages of things nobody would
   think to generate.

| RTL module | Python oracle |
|---|---|
| `hdr_parse.sv` ✅ | `packetize.depacketize()` |
| `msg_frame.sv` | `itch.read_messages()` |
| `decode.sv` | `itch.decode()` |
| `order_table.sv` | `book.Book.orders` |
| `price_levels.sv` + `priority_encoder.sv` | `book.Book.bbo()` |
| whole pipeline | `replay.py`'s BBO trace |

---

## Step 5 — `msg_frame.sv`, the hard one

**Job.** Take the message-block stream from `hdr_parse`, read each 2-byte
length prefix, and emit one complete ITCH message per `valid` pulse with its
first byte at bit 0.

**Why it is hard.** `hdr_parse` computed its barrel-shift amount *once per
packet*. The framer recomputes it *per message*, and messages are 19–50 bytes,
so the offset walks through all eight byte positions and messages straddle beat
boundaries constantly. Worked example — a packet of 36-byte Add Orders:

```
message 0  starts at payload byte  0   → beat 0, offset 0
message 1  starts at payload byte 38   → beat 4, offset 6
message 2  starts at payload byte 76   → beat 9, offset 4
message 3  starts at payload byte 114  → beat 14, offset 2
```

**One simplification worth banking.** MoldUDP64 never splits a message across
packets — each packet carries whole messages only. So the framer can reset its
state at every `tlast` and never needs to hold a partial message across a
packet boundary. This is the single biggest reason this module is merely hard
rather than horrible.

**Interface.** Output is a fixed-width register plus a length:

```systemverilog
output logic [MAX_MSG*8-1:0] m_msg,      // MAX_MSG = 50, the largest ITCH message
output logic [7:0]           m_len,
output logic                 m_valid
```

50 bytes because `I` (NOII) is the longest message in the spec — and it is not
hypothetical: the real file has 3.68 million of them, 1% of the day. A
400-bit bus sounds alarming and is not; it is flops and wires, and it collapses
in step 6 when the decoder keeps only the fields it wants.

**Build it twice.**

- `msg_frame_slow.sv` — one byte per cycle. Trivially correct, and **not a
  deliverable**: at 156.25 MHz one byte per cycle is 156 MB/s against a line
  rate of 1250 MB/s. Its only job is to be an RTL-level reference that is
  obviously right, tested with byte-wide stimulus.
- `msg_frame.sv` — eight bytes per cycle, barrel shifter, the real module.

Both are checked against `itch.read_messages()`. When the fast one fails, the
slow one tells you whether the bug is in your understanding of the protocol or
in the shifting logic. That is the entire point of writing it twice.

**Tests.**

| Test | Targets |
|---|---|
| every start offset 0–7 | the barrel shifter's eight cases |
| one message per packet | the degenerate case |
| 50 messages per packet | long runs, offset walking through all 8 |
| shortest (`D`, 19 B) and longest (`I`, 50 B) | a message spanning 2 vs 8 beats |
| message ending exactly on a beat boundary | the off-by-one that always exists |
| back-to-back packets, zero gap | no recovery cycle at `tlast` |
| slow vs fast on identical input | the two RTL versions agree |
| **mutation**: drop the leftover register | straddling messages must corrupt |

---

## Step 6 — `decode.sv`

**Job.** Turn a message into a normalized book operation:

```systemverilog
typedef enum logic [1:0] { OP_ADD, OP_REDUCE, OP_DELETE, OP_REPLACE } op_e;
// plus: locate, order_ref, new_order_ref, side, price_ticks, qty
```

**Mostly free.** Field extraction is fixed bit slices — pure wires, all fields
in the same cycle. Three things in it are *not* free:

**1. Price to tick index.** The price-level table is indexed by tick, so we
need `(price - band_base) / 100`. Dividing by 100 is not a shift. Options:

- multiply by a reciprocal constant and shift (`× 0x51EB851F >> 37`), exact
  over our bounded range, costs one DSP and a pipeline stage;
- require `price % 100 == 0` and flag violations — true for equities above
  $1, false for sub-penny prices, so it needs the flag.

Plan: reciprocal multiply, plus a `stat_subpenny` counter for prices that are
not tick multiples.

**2. The replace decision.** A `U` is naturally delete-then-add: two order
table writes and two price level updates from one message. In a burst that
doubles the worst-case work, and `U` is **7.39%** of real traffic — measured,
not guessed. Plan: keep it as a single `OP_REPLACE` carrying both references,
and let the order table handle it in one pass.

**3. Dropping non-book types.** Everything outside `AFECXDU` is discarded here.
On the real day that is 1.42% of messages.

**Tests.** Feed every message type, compare field-by-field against
`itch.decode()`. Exhaustive is feasible: seven types with directed values at
field boundaries (max order ref, max price, zero qty), plus random.

---

## Step 7 — `order_table.sv`

**Job.** `order_ref → (side, price_ticks, qty)` in BRAM.

**Blocked on a measurement.** Order references are unique per *day across all
symbols*, so the table is shared and must hold the **global** peak of
simultaneously live orders. AAPL alone peaks at 42,774; the global figure needs
one full-day pass and is not yet measured.

**Direct-mapped is already ruled out.** Measured on real AAPL references, at
65,536 entries:

| hash | collision rate | peak load |
|---|---|---|
| low bits | 76.7% | 25.0% |
| XOR-fold | 39.5% | 42.8% |
| multiply | 43.4% | 47.8% |

Low-bit indexing is the *worst* on real data while looking perfect on synthetic
sequential IDs — real references are sparse and structured. And even XOR-fold
collides at roughly the load factor, because that is what direct-mapped tables
do. The conclusion is not "pick a better hash", it is **"add associativity"**:
4 or 8 ways compared in parallel in one cycle.

**Read-during-write forwarding.** BRAM reads cost a cycle, so two messages
touching the same order back-to-back would have the second read stale data. A
bypass path compares addresses and forwards the in-flight write. This is the
single most likely source of a subtle, rare, real bug in the project.

**Collision policy.** When all ways are occupied: drop the new order, count it,
and raise a sticky error flag. Dropping corrupts the book quietly, which is why
it must be counted rather than ignored — the counter is the only evidence.

**Tests.**

| Test | Targets |
|---|---|
| Python mirror of the same hash and table | entry-by-entry agreement |
| back-to-back access to the same reference | RDW forwarding |
| synthetic references crafted to collide | the way-allocation policy |
| table deliberately undersized | the collision counter is accurate |
| replace: read old + write new in one pass | the expensive-message path |
| **mutation**: delete the forwarding path | the back-to-back test must fail |

---

## Step 8 — `price_levels.sv` + `priority_encoder.sv`

**Job.** Per-tick share totals per side, a bitmap of non-empty levels, and a
two-level priority encoder producing the BBO.

```
bitmap[4095:0]   one bit per tick
    │ split into 64 groups of 64
    ├─ stage 1: any bit set per group?        → summary[63:0]
    ├─ stage 2: highest set bit of summary    → group (6 bits)
    └─ stage 3: highest set bit within group  → offset (6 bits)
  best_bid_tick = {group, offset}
```

**Why 64×64 and not one flat 4096.** A flat 4096-input priority encoder is a
combinational chain far too deep for 6.4 ns. Two shallow stages fit. This is a
pure timing concern with no software analogue.

**Nothing is "tracked".** Software caches the best price and invalidates it;
hardware recomputes it combinationally every cycle, so clearing one bitmap bit
changes the answer by itself. The cache-invalidation problem simply does not
exist here.

**Blocked on a measurement, and there is a known bug.** `sizing.py` centres the
band on the *first price seen*, which on real data can be a stub quote at
$0.0001 or $199,999.99 — hence its nonsensical "99.6% outside a 1024-tick
band". Needs a robust centre (median, or the price at market open) before the
band width can be chosen.

**Out-of-band prices are certain, not hypothetical.** AAPL's observed range is
$0.0001 to $199,999.99. Plan: clamp, count in `stat_out_of_band`, and exclude
from the BBO — a wrong BBO is worse than a missing level, and the counter makes
it visible.

**Tests.** Compare the BBO against `book.Book.bbo()` after *every* message.
Directed cases: a level emptying and refilling, a new best on both sides, the
book going completely empty (`no best bid` ≠ `best bid of zero`), prices
outside the band, a crossed book.

---

## Step 9 — integration and real data

**Wire it up.** `feed_handler_top.sv` chains all five stages. Then:

1. **Constrained random**, reusing `gen.py`'s weights as the knobs: crank
   replaces up, squeeze the price band, force collisions.
2. **Real data replay.** Push `data/AAPL.itch` through `packetize.py` into the
   full pipeline and diff the BBO after every message against
   `replay.py`'s trace. 1.66 million messages for AAPL.
3. **Functional coverage**, so "we tested it" becomes a list of which cases
   were actually hit: every message type, every start offset, collisions,
   out-of-band, level empty/refill, book empty.

**Latency measurement.** Tag each message with an index at the framer and carry
it through as sideband, so the testbench can measure cycles from a message's
final byte to its BBO update directly, rather than inferring it.

---

## Step 10 — synthesis

**Out-of-context synthesis in Vivado**, on a device the free edition supports,
targeting 156.25 MHz. Out-of-context because it measures *your* logic without a
surrounding system distorting the numbers.

Record, per module and for the whole pipeline:

- **Fmax** — the actual maximum, not just "meets 156.25"
- **Utilization** — LUTs, FFs, BRAMs, DSPs
- **Latency** — cycles from a message's last byte to the BBO update
- **The critical path** — which logic limits Fmax, which is the interesting
  part and almost certainly the order table lookup

These three numbers are what replace "low latency" and "line rate" on a résumé
with something defensible.

---

## Two measurements blocking steps 7 and 8

Neither blocks steps 5 or 6, so they can be done in parallel, but both must be
answered before the corresponding module is written:

1. **Global peak live orders** across all 8,713 symbols — sets the order table
   depth. One full-day pass.
2. **A robust price band centre** in `sizing.py` — sets the band width, and the
   current implementation is wrong.
