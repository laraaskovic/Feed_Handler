"""Put model/ on sys.path so tests can `import itch`, `import book`, etc.

The model/ modules import each other by plain name (`from itch import ...`) so
that they also work when run directly as scripts from inside model/.
"""

import sys
from pathlib import Path

MODEL = Path(__file__).resolve().parent.parent / "model"
if str(MODEL) not in sys.path:
    sys.path.insert(0, str(MODEL))
