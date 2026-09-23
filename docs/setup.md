# Toolchain setup

Three environments, each doing what it is best at:

| Where | What runs there | Why |
|---|---|---|
| **Windows** | the Python golden model, Wireshark/tshark, Vivado (step 10) | Vivado and Wireshark are native Windows installs, and the model is pure stdlib so it runs anywhere |
| **WSL Ubuntu** | Verilator, cocotb, GTKWave | Verilator needs a Unix-like environment; it does not run natively on Windows |
| **VS Code on Windows** | editing, via the WSL remote extension | one copy of the repo, edited from Windows, tested from Linux |

The repo itself lives on the Windows side and WSL reaches it through
`/mnt/c/...`, so there is only ever one copy to keep straight.

## 1. Install WSL Ubuntu (Windows side, needs Administrator)

Open **PowerShell as Administrator** — right-click the Start button, then
"Terminal (Admin)" — and run:

```powershell
wsl --install -d Ubuntu
```

This enables the Virtual Machine Platform feature, downloads Ubuntu, and may
require a **reboot**. After rebooting, launch **Ubuntu** from the Start menu; it
will ask you to create a username and password the first time (this is a local
Linux account, unrelated to your Windows login).

Check it worked, from a normal PowerShell:

```powershell
wsl --list --verbose      # should show Ubuntu, State Running, Version 2
```

If `wsl --install` complains that virtualization is disabled, it has to be
turned on in your BIOS/UEFI (usually called SVM on AMD, VT-x on Intel).

## 2. Install the simulators (inside Ubuntu)

From the Ubuntu shell:

```bash
cd /mnt/c/Users/laraa/Documents/GitHub/Feed_Handler
bash tools/setup-sim.sh
```

That installs Verilator, GTKWave, and a Python venv holding cocotb,
cocotb-bus, cocotbext-axi and pytest. It finishes by running the golden-model
test suite under Linux Python, which confirms the mount and the line endings
are fine.

Activate the venv in each new shell:

```bash
source ~/.venvs/itch/bin/activate
```

### If the apt Verilator is too old

`apt` gives you whatever Verilator the distro packaged. cocotb wants 5.0 or
newer for good SystemVerilog support. Check with `verilator --version`; if it
is 4.x, build a current one from source:

```bash
sudo apt-get install -y git help2man perl python3 make autoconf g++ flex bison \
    ccache libgoogle-perftools-dev numactl perl-doc libfl2 libfl-dev zlib1g-dev
git clone https://github.com/verilator/verilator
cd verilator && git checkout stable
autoconf && ./configure && make -j"$(nproc)" && sudo make install
```

This takes a while but is a one-time cost.

## 3. Edit from Windows, test from Linux

Install the **WSL** extension in VS Code, then from the Ubuntu shell:

```bash
code .
```

VS Code reattaches itself to the WSL side, so the terminal inside the editor is
Linux (where Verilator lives) while the editing experience stays on Windows.

## What stays on Windows

- **Wireshark / tshark** — `tools/check_pcap.py` runs on the Windows side. No
  reason to install Wireshark twice.
- **Vivado** — step 10 only. Install the free edition when you get there, and
  pick a device that edition supports.

## Line endings

`.gitattributes` sets `* text=auto`, so git normalises line endings and the
same checkout is usable from both sides. If a shell script ever fails inside
WSL with `bad interpreter: /bin/bash^M`, that is a CRLF file; fix it with
`dos2unix` or `sed -i 's/\r$//' <file>`.
