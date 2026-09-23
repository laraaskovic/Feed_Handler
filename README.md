# ITCH Feed Handler — FPGA Learning Project

A hardware market-data feed handler, built to learn how high-throughput,
fixed-latency systems are designed. The target is a pipeline that parses Nasdaq
TotalView-ITCH 5.0 off a 10 Gb/s Ethernet stream and maintains a live order
book, with no backpressure anywhere in the datapath.

The method is software-first: build the whole pipeline in Python, then build it
again in SystemVerilog and check every RTL stage against the Python version.
The Python model is both the reference for verification and the source of the
sizing numbers the RTL hard-codes.

**Independence.** This is an independent personal project built entirely from
the public Nasdaq TotalView-ITCH 5.0 specification and public sample data. It
contains no employer code, designs, or notes, and no employer equipment was
used.

## Status

| Step | What | State |
|---|---|---|
| 0 | Repo and tools | done |
| 1 | Spec reading, message parser, symbol extraction | **done (software)** |
| 2 | Golden-model order book + hardware sizing | **done (software)** |
| 3 | MoldUDP64/UDP/IP/Ethernet packetizer, AXI-Stream beats, pcap export | **done (software)** |
| 4 | RTL header parser | **done** — 10 cocotb tests, mutation-checked |
| 5 | RTL message framer (1 B/cycle, then 8 B/cycle) | next |
| 6 | RTL decoder to normalized book operations | not started |
| 7 | Order table in BRAM (hashed, tagged) | not started |
| 8 | Price-level table, bitmap + priority encoder to BBO | not started |
| 9 | Full verification: constrained-random + real-data replay | not started |
| 10 | Vivado synthesis, Fmax / utilization / latency, write-up | not started |

## Layout

```
model/   Python reference pipeline (the golden model)
tools/   Wireshark dissector + pcap cross-check   (see tools/README.md)
docs/    architecture notes                       (see docs/how-it-works.md)
rtl/     SystemVerilog
tb/      cocotb tests  (run: wsl .venv/bin/python tb/run.py)
syn/     Vivado scripts and reports
data/    data files and extracts (gitignored, nothing here is committed)
tests/   pytest suite for the Python model
```

**Start here:**
- [docs/sw-vs-hw.md](docs/sw-vs-hw.md) — what the feed handler's logic *is*, the
  software and hardware datapaths side by side, the module hierarchy, and
  whether you need Vivado IP blocks (mostly: no).
- [docs/how-it-works.md](docs/how-it-works.md) — the pipeline stages and the
  verification layering.
- [docs/rtl-plan.md](docs/rtl-plan.md) — the plan for steps 5–10 and how each
  module gets verified, written before building it.
- [docs/setup.md](docs/setup.md) — toolchain: Windows, WSL and what runs where.

## Quick start (no download needed)

The synthetic generator emits a valid ITCH BinaryFILE, so the whole software
pipeline runs in seconds without the 4.7 GB sample file.

```bash
python -m pytest tests -q                      # 60 tests, ~2 s

cd model
python demo.py                                 # narrated walkthrough, start here
python gen.py    ../data/synth.itch -n 200000  # synthetic feed
python scan.py   ../data/synth.itch --sample 5 # message mix + framing check
python replay.py ../data/synth.itch --bbo ../data/synth.bbo.csv --print 10
python sizing.py ../data/synth.itch            # the four hardware sizing numbers
python packetize.py ../data/synth.itch --check --pcap ../data/synth.pcap
```

That last command wraps the messages in MoldUDP64/UDP/IPv4/Ethernet, verifies
the round trip, and writes a capture openable in Wireshark. See
[tools/README.md](tools/README.md).

Everything reads the same BinaryFILE format, so each command works unchanged on
a full-day download, a single-symbol extract, or synthetic data.

## Running the RTL tests

Simulation runs in WSL (Verilator does not run natively on Windows); Vivado
stays on the Windows side for step 10.

```bash
wsl .venv/bin/python tb/run.py              # all benches
wsl .venv/bin/python tb/run.py hdr_parse    # one bench
wsl .venv/bin/python tb/run.py hdr_parse -w # ...and dump waves
wsl gtkwave tb/sim_build/hdr_parse/dump.fst
```

One-time setup inside WSL, if the venv is missing:

```bash
python3 -m venv .venv && .venv/bin/pip install cocotb cocotbext-axi pytest
```

The testbenches import `model/` and use it as the oracle, so the Python model
is a permanent dependency of the RTL tests, not scaffolding to be deleted.

## Using the real data

Nasdaq publishes full days of TotalView-ITCH 5.0 sample data for free (search
"Nasdaq ITCH sample data"; the files live under `emi.nasdaq.com/ITCH/`). The
January 30, 2019 file is about 4.7 GB compressed.

Despite some download pages saying "pcap", these are **not** network captures.
They are Nasdaq BinaryFILE: a flat sequence of `[2-byte big-endian length]
[message]` to EOF. Network framing gets added by this project in step 3.

```bash
# put 01302019.NASDAQ_ITCH50.gz in data/, then:
cd model
python scan.py    ../data/01302019.NASDAQ_ITCH50.gz -n 5000000
python extract.py ../data/01302019.NASDAQ_ITCH50.gz --list | head
python extract.py ../data/01302019.NASDAQ_ITCH50.gz --symbol AAPL
python replay.py  ../data/AAPL.itch --print 100
python sizing.py  ../data/AAPL.itch
```

Nothing in `data/` is committed: the files are large and redistribution is
restricted.

## The seven messages that matter

Only seven of the ~22 ITCH message types change the order book. Everything else
is dropped in the first pipeline stage.

| Type | Name | Effect | Bytes |
|---|---|---|---|
| A | Add Order | new order at a price | 36 |
| F | Add Order with MPID | same, plus participant id | 40 |
| E | Order Executed | reduce shares | 31 |
| C | Order Executed with Price | reduce shares, printed at another price | 36 |
| X | Order Cancel | partial cancel: reduce shares | 23 |
| D | Order Delete | remove the order | 19 |
| U | Order Replace | delete old order, add a new one | 35 |

Three facts about this set shape the entire design:

1. **E, C, X, D and U identify the order only by its 64-bit reference.** No
   side, no price, no symbol. So the book cannot be maintained without a lookup
   table keyed on order reference. That is why step 7 exists, and why its
   latency sits on the critical path of every message.
2. **A replace inherits the side of the order it replaces.** It must read the
   order table before it can write a new entry, and it touches two price levels.
   It is the most expensive message in the feed.
3. **`C` prints a different execution price, but the book loses shares at the
   order's original price.** Using the printed price is a classic ITCH bug that
   silently corrupts the book for the rest of the day.

The **stock locate** field is the other key detail: `R` (Stock Directory)
messages map each 8-character symbol to a small integer at the start of each
day, and every later message carries that integer. So the RTL never compares
symbol strings: the locate *is* the book index, for free.

## What `model/` contains

| File | Role |
|---|---|
| `demo.py` | A narrated 13-step walkthrough: hand-written messages, printing the order table, the price ladder and the BBO after each one. Run this first to see what the book actually does. |
| `itch.py` | The only module that knows the wire format: message layouts, the spec length table, BinaryFILE read/write. |
| `scan.py` | Step 1a. Message-type histogram, framing validation against the length table, Python throughput baseline. |
| `extract.py` | Step 1b. Lists `symbol -> locate`, extracts one symbol's whole stream into `data/`. |
| `book.py` | Step 2. The golden order book. Structures deliberately mirror the hardware: order table, per-price quantity map, cached best prices. |
| `replay.py` | Step 2b. Replays a file and writes the BBO trace that the RTL is diffed against, plus a trace comparator. |
| `sizing.py` | Step 2c. The four measurements that size the hardware. |
| `packetize.py` | Step 3. Wraps messages in MoldUDP64/UDP/IPv4/Ethernet, emits 64-bit AXI-Stream beats, exports pcap. Also holds the depacketizer, which is the reference for RTL steps 4 and 5. |
| `gen.py` | Synthetic feed generator. Keeps the project unblocked by the download, and becomes the constrained-random stimulus source in step 9. |

## Checking that it works

Four layers, each catching a different class of bug:

```bash
python -m pytest tests -q                    # unit and round-trip tests
python tools/check_pcap.py data/synth.itch   # Wireshark cross-check

cd model
python packetize.py ../data/synth.itch --check   # our own round trip
python replay.py    ../data/synth.itch           # book invariants
```

The Wireshark cross-check matters more than it looks. Our own round trip proves
we can undo our own work, but if we had misread the MoldUDP64 layout then
`packetize` and `depacketize` would be wrong in the *same* direction and the
test would still pass. Wireshark's dissectors were written independently from
the same public specs, so agreement between them is real evidence. `tools/`
holds a Lua dissector for ITCH 5.0 (Wireshark's built-in one only covers 4.1)
plus a script that diffs Wireshark's dissection against ours, packet by packet
and field by field. It is already passing: Wireshark and the model agree on
every sequence number, message type, and individual field value, across plain
frames, VLAN-tagged frames, and packing densities from 1 to 50 messages per
packet.

Reminder: the Nasdaq sample files are not pcaps and Wireshark cannot open them.
They only become openable once `packetize.py` has added the network framing.

## Sizing: measurement to design decision

`sizing.py` produces four numbers, each answering one design question (and each
a defensible answer to "why that size?"):

| Measurement | Sizes | Why |
|---|---|---|
| Peak simultaneously live orders, across all symbols | Order table depth (step 7) | Order references are unique per *day*, not per symbol, so one shared table serves every book. Hash tables need headroom, so the report gives power-of-two depths at 2x and 4x. |
| Daily price range in ticks, and orders falling outside a candidate band | Price band width (step 8) | The per-tick quantity table only covers a window around the opening price. The out-of-band count is the cost of each candidate width. |
| Collision rate of three candidate hashes, simulated over the whole day | Hash choice and collision policy (step 7) | A 64-bit reference has to become a table index in one cycle. Candidates: low bits (free), XOR-fold (free), multiply-by-golden-ratio (better mixing, costs DSPs). The simulator models a direct-mapped table with drop-on-collision, so the rate *is* the fraction of orders the book would silently miss. |
| Peak book messages per millisecond | Throughput target | The no-backpressure design must survive the burst, not the daily average. |

A caveat the tests pin down: the synthetic generator issues sequential order
references, which flatters the low-bits hash. Those collision numbers only mean
something on real data.

## Invariants the golden model enforces

The book checks itself while it runs, which is what makes it usable as a
reference:

- share counts never go negative, and a reduce can never exceed what an order
  holds (raises in strict mode, clamps and counts in `--lax`);
- an execute, cancel, delete or replace of an unknown order is counted as an
  **orphan**. This is expected when replaying a prefix or a mid-day extract,
  because the order was added before the window opened, but a nonzero count on
  a full-day replay from the first message is a real bug;
- the book is rarely crossed. Crossed books do occur in real feeds, so this is
  a rate to watch, not a hard assertion;
- `tests/test_book.py` rebuilds every price level from the live orders and
  requires an exact match. That single check catches any operation that updated
  the order table but not the price levels, or vice versa.

## Design decisions already made

**No backpressure.** A market data feed cannot be told to slow down: there is
no flow control on a multicast UDP feed, and a dropped message means a
permanently wrong book. So every stage must accept a beat every cycle at line
rate. This rules out anything with variable latency in the datapath: no
retries, no multi-cycle hash probing, no stalls waiting on BRAM. It is also the
reason the step 7 collision policy has to be decided up front rather than
handled "later".

**Slow version first.** The step 5 message framer gets built twice: once at one
byte per cycle, then once at eight. Both are verified against the same Python
model, so when the fast version fails, the slow one says whether the bug is in
the protocol understanding or in the barrel-shifter logic.

**Byte lane order.** Frame byte 0 goes in `tdata[7:0]`, the lowest lane. That
is the cocotbext-axi convention, and the RTL must follow it or every field
lands byte-swapped.

## Still to decide

- Order table collision policy: drop the order, or evict the incumbent? Both
  corrupt the book; the question is which failure is detectable and how it gets
  reported. `sizing.py` quantifies how often it would happen.
- Whether a replace stays one combined operation or splits into delete + add.
  Splitting doubles the worst-case work in a burst (step 6).
- How prices outside the band are handled and flagged (step 8).
