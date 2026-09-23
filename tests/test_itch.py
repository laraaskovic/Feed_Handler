"""Tests for the wire-format decoder (model/itch.py).

The decoder is the one place a spec misreading would silently corrupt
everything downstream, so these tests use hand-assembled bytes with values
chosen to be unmistakable (distinct magic numbers per field).  If a struct
format string is wrong by even one byte, a field lands on the wrong value and
the assertion names which field moved.
"""

import struct

import pytest

import itch
from itch import MSG_LENGTHS, decode, read_messages, write_messages


def header(msg_type: str, locate: int, tracking: int, ts: int) -> bytes:
    return msg_type.encode() + struct.pack(">HH", locate, tracking) + ts.to_bytes(6, "big")


TS = 0x0102_0304_0506          # a timestamp with every byte distinct


def test_add_order():
    raw = (
        header("A", 0x1234, 0x5678, TS)
        + struct.pack(">Q", 0xDEAD_BEEF_0000_0001)
        + b"B"
        + struct.pack(">I", 500)
        + b"AAPL    "
        + struct.pack(">I", 1234500)        # $123.45
    )
    assert len(raw) == MSG_LENGTHS["A"]
    m = decode(raw)
    assert m.type == "A"
    assert m.locate == 0x1234
    assert m.tracking == 0x5678
    assert m.timestamp == TS
    assert m.order_ref == 0xDEAD_BEEF_0000_0001
    assert m.side == "B"
    assert m.shares == 500
    assert m.symbol == "AAPL"              # trailing spaces stripped
    assert m.price == 1234500
    assert itch.price_to_str(m.price) == "123.4500"
    assert m.mpid == ""


def test_add_order_with_mpid():
    raw = (
        header("F", 7, 0, TS)
        + struct.pack(">Q", 42)
        + b"S"
        + struct.pack(">I", 100)
        + b"MSFT    "
        + struct.pack(">I", 3_000_000)
        + b"NSDQ"
    )
    assert len(raw) == MSG_LENGTHS["F"]
    m = decode(raw)
    assert (m.type, m.side, m.symbol, m.mpid) == ("F", "S", "MSFT", "NSDQ")
    assert m.price == 3_000_000


def test_order_executed():
    raw = header("E", 7, 0, TS) + struct.pack(">QIQ", 42, 250, 0xABCD)
    assert len(raw) == MSG_LENGTHS["E"]
    m = decode(raw)
    assert (m.type, m.order_ref, m.shares, m.match) == ("E", 42, 250, 0xABCD)


def test_order_executed_with_price():
    raw = (
        header("C", 7, 0, TS)
        + struct.pack(">QIQ", 42, 250, 0xABCD)
        + b"Y"
        + struct.pack(">I", 999_900)
    )
    assert len(raw) == MSG_LENGTHS["C"]
    m = decode(raw)
    assert (m.type, m.order_ref, m.shares) == ("C", 42, 250)
    assert (m.printable, m.exec_price) == ("Y", 999_900)


def test_order_cancel():
    raw = header("X", 7, 0, TS) + struct.pack(">QI", 42, 75)
    assert len(raw) == MSG_LENGTHS["X"]
    m = decode(raw)
    assert (m.type, m.order_ref, m.shares) == ("X", 42, 75)


def test_order_delete():
    raw = header("D", 7, 0, TS) + struct.pack(">Q", 42)
    assert len(raw) == MSG_LENGTHS["D"]
    m = decode(raw)
    assert (m.type, m.order_ref) == ("D", 42)


def test_order_replace():
    raw = header("U", 7, 0, TS) + struct.pack(">QQII", 42, 43, 300, 1_000_000)
    assert len(raw) == MSG_LENGTHS["U"]
    m = decode(raw)
    assert (m.type, m.order_ref, m.new_order_ref) == ("U", 42, 43)
    assert (m.shares, m.price) == (300, 1_000_000)


def test_unmodelled_type_returns_none():
    # 'P' (Trade) is a real ITCH message this project does not model.
    raw = header("P", 1, 0, TS) + b"\x00" * (MSG_LENGTHS["P"] - 11)
    assert decode(raw) is None


def test_timestamp_is_six_bytes_big_endian():
    # 6 bytes of 0xFF is the largest representable timestamp: ~78 hours in ns,
    # comfortably more than a trading day, which is why 6 bytes suffices.
    raw = header("D", 1, 0, (1 << 48) - 1) + struct.pack(">Q", 1)
    assert decode(raw).timestamp == (1 << 48) - 1


def test_binaryfile_roundtrip(tmp_path):
    """write_messages/read_messages must be exact inverses.

    This is the software version of the step 5 RTL framer's job, so it is worth
    having a test that fails loudly if the length-prefix handling drifts.
    """
    msgs = [
        header("D", 1, 0, TS) + struct.pack(">Q", i)
        for i in range(100)
    ]
    path = tmp_path / "rt.itch"
    assert write_messages(str(path), iter(msgs)) == 100
    assert list(read_messages(str(path))) == msgs


def test_truncated_file_is_detected(tmp_path):
    """A short read must raise, not silently return fewer messages."""
    path = tmp_path / "trunc.itch"
    body = header("D", 1, 0, TS) + struct.pack(">Q", 1)
    path.write_bytes(struct.pack(">H", len(body)) + body[:-3])
    with pytest.raises(EOFError):
        list(read_messages(str(path)))


def test_generated_file_has_spec_lengths(tmp_path):
    """Every message the generator emits must match the spec length table.

    This guards the generator as much as the table: if they agree, a length
    mismatch found later is a real framing bug rather than bad stimulus.
    """
    import gen

    path = tmp_path / "g.itch"
    write_messages(str(path), gen.generate(n_messages=5000, seed=7))
    seen = set()
    for msg in read_messages(str(path)):
        t = chr(msg[0])
        seen.add(t)
        assert len(msg) == MSG_LENGTHS[t], f"{t} is {len(msg)} bytes"
    # All seven book types should actually appear, or the stimulus is too thin.
    assert set("AFECXDU") <= seen
