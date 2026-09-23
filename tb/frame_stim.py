"""Shared stimulus and expectations for the two message framers.

msg_frame.sv (8 bytes/cycle) and msg_frame_slow.sv (1 byte/cycle) must agree
with each other and with itch.read_messages(). Keeping their stimulus in one
module is what makes "the two versions agree" a real claim: both benches
build packets from the same functions, so any difference in outcome is a
difference in the RTL, not in the test.

This file holds no cocotb tests of its own - only helpers - so importing it
never registers a test twice.
"""

from __future__ import annotations

# struct builds the big-endian length prefixes; sys and Path find model/.
import struct
import sys
from pathlib import Path

# The golden model lives in model/; the testbenches import it directly.
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "model"))

import gen                                              # noqa: E402

# Must match MAX_MSG in both framers: 'I' (NOII) is the longest message.
MAX_MSG = 50


def mold_body(messages: list[bytes]) -> bytes:
    """The length-prefixed message block, which is what hdr_parse hands over."""
    # Big-endian 2-byte length, then the message, repeated.
    return b"".join(struct.pack(">H", len(m)) + m for m in messages)


def msgs_of_type(t: str, n: int, seed: int = 0) -> list[bytes]:
    """n messages all of one ITCH type, for exact-length control.

    Budget generously: the generator mirrors real traffic weights, so rare
    types like 'C' (under 1%) need thousands generated to yield a few dozen.
    """
    out = []
    # Filter a large generated stream down to the one type wanted.
    for raw in gen.generate(n_messages=n * 500 + 5000, seed=seed):
        if chr(raw[0]) == t:
            # Keep each match, stopping as soon as n have been collected.
            out.append(raw)
            if len(out) == n:
                break
    # Running short would silently weaken the test, so it is an error.
    assert len(out) == n, f"only found {len(out)} of {n} '{t}' messages"
    return out


def expected_messages(packets) -> list[tuple[int, bytes]]:
    """(sequence, message) for every message of every well-formed packet.

    packets is a list of (messages, first sequence number). MoldUDP64
    numbers messages, so the nth message of a packet is seq + n.
    """
    out: list[tuple[int, bytes]] = []
    for messages, seq in packets:
        # Sequence advances by one per MESSAGE, not per packet.
        out.extend((seq + i, m) for i, m in enumerate(messages))
    return out


def bad_packets() -> list[tuple[bytes, list[bytes], int]]:
    """Malformed payloads, as (payload bytes, messages that survive, errors).

    Each case breaks framing a different way. The framer must emit the
    messages that preceded the damage, count exactly ONE error for the
    packet, and come back cleanly on the next packet. "Exactly one" matters:
    a counter that ticks every cycle while confused measures time, not faults.
    """
    d = msgs_of_type("D", 3, seed=21)        # 19-byte deletes
    a = msgs_of_type("A", 2, seed=22)        # 36-byte adds
    good = mold_body([d[0], a[0]])
    cases = []
    # 1. A length field far above any real message (255 > MAX_MSG).
    cases.append((good + struct.pack(">H", 255) + d[1], [d[0], a[0]], 1))
    # 2. A zero length field: no ITCH message is empty.
    cases.append((good + struct.pack(">H", 0) + d[1], [d[0], a[0]], 1))
    # 3. One stray byte after the last message.
    cases.append((good + b"\x00", [d[0], a[0]], 1))
    # 4. The last message cut short by three bytes.
    cases.append((good + mold_body([d[2]])[:-3], [d[0], a[0]], 1))
    return cases
