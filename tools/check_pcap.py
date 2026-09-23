"""Cross-check our packetizer and decoder against Wireshark's own dissection.

This is an *independent* check, which is the only kind worth much.  The
round-trip test in packetize.py proves we can undo our own work - but if we had
misread the MoldUDP64 layout, packetize and depacketize would be wrong in the
same direction and the test would still pass.  Wireshark's dissectors were
written by other people from the same public specs, so agreement between the
two is real evidence.

What gets compared, packet by packet:

  1. packet count and MoldUDP64 sequence numbers,
  2. the ITCH message type of every message, in order,
  3. every decoded field value: stock locate, tracking number, the 6-byte
     timestamp, order references, side, shares, symbol and price,
  4. Wireshark's verdict on the IPv4 header checksum, plus any malformed-packet
     or expert-info warnings.

Item 3 is the one that matters most for the RTL.  Those field offsets are what
step 6's decoder hard-codes, and an offset that is wrong by a byte or two still
produces plausible-looking numbers.  Two independent implementations agreeing
on every field of every message is what makes them trustworthy.

Requires tshark, the command-line Wireshark, which the standard installer
includes.  It is found automatically in C:\\Program Files\\Wireshark even when
that directory is not on PATH.

Usage:
    python tools/check_pcap.py data/synth.itch
    python tools/check_pcap.py data/synth.itch --random-boundaries --vlan 100
    python tools/check_pcap.py data/synth.itch --keep data/look.pcap
"""

from __future__ import annotations

import argparse
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

from itch import decode, read_messages              # noqa: E402
from packetize import packetize, write_pcap         # noqa: E402

LUA = ROOT / "tools" / "itch50_moldudp64.lua"

# Wireshark's expert-info severity scale (epan/proto.h).  These are bit values,
# not a 0-10 ranking, so a naive "severity > 10" test flags everything.
# A Lua runtime error inside a dissector surfaces here as PI_ERROR - which is
# how this script caught a bug in our own dissector on its first run.
PI_COMMENT, PI_CHAT, PI_NOTE = 0x100000, 0x200000, 0x400000
PI_WARN, PI_ERROR = 0x600000, 0x800000


def severity_name(level: int) -> str:
    for value, name in ((PI_ERROR, "ERROR"), (PI_WARN, "warning"),
                        (PI_NOTE, "note"), (PI_CHAT, "chat"),
                        (PI_COMMENT, "comment")):
        if level >= value:
            return name
    return f"level {level}"


# The fields to compare, in the order tshark is asked for them.  Each entry maps
# a Wireshark field name to a function producing the value our model expects, or
# None when this message type does not carry that field.  Order matters: tshark
# reports repeated occurrences in packet order, so our lists must be built the
# same way.
def _field_plan():
    def if_types(types, get):
        return lambda m: get(m) if m.type in types else None

    return [
        ("itch50.locate", lambda m: m.locate),
        ("itch50.tracking", lambda m: m.tracking),
        ("itch50.timestamp", lambda m: m.timestamp),
        ("itch50.order_ref", if_types("AFECXDU", lambda m: m.order_ref)),
        ("itch50.new_order_ref", if_types("U", lambda m: m.new_order_ref)),
        ("itch50.side", if_types("AF", lambda m: m.side)),
        ("itch50.shares", if_types("AFECXU", lambda m: m.shares)),
        ("itch50.symbol", if_types("AFR", lambda m: m.symbol)),
        ("itch50.price", if_types("AFU", lambda m: m.price)),
        ("itch50.exec_price", if_types("C", lambda m: m.exec_price)),
    ]


FIELD_PLAN = _field_plan()
META_FIELDS = ["moldudp64.sequence", "moldudp64.count", "itch50.type",
               "ip.checksum.status", "_ws.expert.severity", "_ws.malformed"]


def find_tshark() -> str | None:
    """Look on PATH, then in the usual Windows install locations."""
    found = shutil.which("tshark")
    if found:
        return found
    for guess in (
        r"C:\Program Files\Wireshark\tshark.exe",
        r"C:\Program Files (x86)\Wireshark\tshark.exe",
    ):
        if Path(guess).exists():
            return guess
    return None


def tshark_fields(tshark: str, pcap: str, fields: list[str]) -> list[list[str]]:
    """Run tshark once and return one row of field values per packet.

    -X lua_script: loads our ITCH 5.0 dissector for this run only, so nothing
    needs installing into the Wireshark plugins directory just to run a test.
    Repeated occurrences of a field (several ITCH messages in one packet) come
    back comma joined in packet order.
    """
    cmd = [
        tshark, "-r", pcap,
        "-X", f"lua_script:{LUA}",
        "-o", "ip.check_checksum:TRUE",
        "-T", "fields", "-E", "separator=|",
    ]
    for f in fields:
        cmd += ["-e", f]
    out = subprocess.run(cmd, capture_output=True, text=True, check=True)
    if out.stderr.strip():
        print(f"tshark stderr: {out.stderr.strip()}")
    return [line.split("|") for line in out.stdout.splitlines()]


def expected_for_packet(messages: list[bytes]) -> dict[str, list[str]]:
    """What our model says Wireshark should report for one packet's messages."""
    out: dict[str, list[str]] = {name: [] for name, _ in FIELD_PLAN}
    for raw in messages:
        m = decode(raw)
        if m is None:
            continue            # a type our model does not decode; skip its fields
        for name, get in FIELD_PLAN:
            value = get(m)
            if value is not None:
                out[name].append(str(value))
    return out


def split_occurrences(value: str) -> list[str]:
    """tshark joins repeated field occurrences with commas."""
    return [v.strip() for v in value.split(",")] if value else []


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("path", help="input ITCH BinaryFILE")
    p.add_argument("-n", "--limit", type=int, default=2000,
                   help="messages to use (default 2000; keeps tshark quick)")
    p.add_argument("--msgs-per-packet", type=int, default=8)
    p.add_argument("--random-boundaries", action="store_true")
    p.add_argument("--vlan", type=int, default=None)
    p.add_argument("--seed", type=int, default=0)
    p.add_argument("--keep", help="also write the pcap here, to open by hand")
    p.add_argument("--max-report", type=int, default=10,
                   help="stop printing after this many discrepancies")
    a = p.parse_args()

    tshark = find_tshark()
    if not tshark:
        print("tshark not found.")
        print("Install Wireshark from https://www.wireshark.org/download.html")
        print("keeping the TShark component ticked, then re-run.  The script")
        print(r"looks in C:\Program Files\Wireshark automatically.")
        return 2
    print(f"using {tshark}")

    # --- what we believe we built
    msgs = list(read_messages(a.path, a.limit))
    packets = list(packetize(msgs, a.msgs_per_packet, a.random_boundaries,
                             a.seed, a.vlan))
    pcap = a.keep or str(Path(tempfile.gettempdir()) / "itch_check.pcap")
    write_pcap(pcap, [f for f, _, _ in packets])
    print(f"wrote {len(packets):,} packets ({len(msgs):,} messages) to {pcap}")

    # --- what Wireshark thinks we built
    field_names = [name for name, _ in FIELD_PLAN]
    rows = tshark_fields(tshark, pcap, META_FIELDS + field_names)

    problems = 0
    reported = 0
    notes: dict[str, int] = {}
    checksum_states: dict[str, int] = {}
    fields_compared = 0

    def report(msg: str) -> None:
        nonlocal problems, reported
        problems += 1
        if reported < a.max_report:
            print(msg)
            reported += 1
        elif reported == a.max_report:
            print("   ... further discrepancies suppressed (--max-report)")
            reported += 1

    if len(rows) != len(packets):
        report(f"!! packet count: we wrote {len(packets)}, "
               f"tshark read {len(rows)}")

    for i, (row, (_frame, seq, batch)) in enumerate(zip(rows, packets)):
        row = row + [""] * (len(META_FIELDS) + len(field_names) - len(row))
        got_seq, got_count, got_types, ck_status, severity, malformed = row[:6]
        got_fields = dict(zip(field_names, row[6:]))
        types = [chr(m[0]) for m in batch]

        if got_seq != str(seq):
            report(f"!! packet {i}: sequence {got_seq!r}, expected {seq}")
        if got_count != str(len(types)):
            report(f"!! packet {i}: count {got_count!r}, expected {len(types)}")
        if split_occurrences(got_types) != types:
            report(f"!! packet {i}: types {got_types!r}, "
                   f"expected {' '.join(types)}")
        if malformed:
            report(f"!! packet {i}: tshark reports malformed")

        for s in split_occurrences(severity):
            if not s.isdigit():
                continue
            level = int(s)
            if level >= PI_WARN:
                report(f"!! packet {i}: expert {severity_name(level)} "
                       f"({level} = 0x{level:06x})")
            elif level:
                name = severity_name(level)
                notes[name] = notes.get(name, 0) + 1

        for s in split_occurrences(ck_status):
            checksum_states[s] = checksum_states.get(s, 0) + 1

        # --- the field-by-field comparison
        expected = expected_for_packet(batch)
        for name in field_names:
            want = expected[name]
            got = split_occurrences(got_fields[name])
            fields_compared += len(want)
            if got != want:
                report(f"!! packet {i}: {name}\n"
                       f"     tshark: {got}\n"
                       f"     model : {want}")

    # ip.checksum.status: 0 bad, 1 good, 2 unverified, 3 not present.
    names = {"0": "BAD", "1": "good", "2": "unverified", "3": "not present"}
    print("\nIPv4 header checksum, per Wireshark: "
          + ", ".join(f"{names.get(k, k)}={v}"
                      for k, v in sorted(checksum_states.items())))
    if checksum_states.get("0"):
        print("!! Wireshark says our IPv4 checksum is wrong")
        problems += 1
    if notes:
        print("informational expert info: "
              + ", ".join(f"{k}={v}" for k, v in sorted(notes.items())))

    print()
    if problems:
        print(f"FAILED: {problems} discrepancies between our model and Wireshark")
        return 1
    print(f"OK: Wireshark and our model agree on all {len(rows):,} packets")
    print(f"    {len(msgs):,} messages, {fields_compared:,} "
          f"individual field values compared")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
