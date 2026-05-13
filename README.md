# embed

A lightweight C utility that reads binary or ASCII data from standard input
and outputs it as an embeddable data literal in C or x86 assembly format.

## What it does

Converts any file or data stream into a ready-to-paste source code declaration:

**C format:**
unsigned char payload[] =
    "\x7f\x45\x4c\x46\x02\x01\x01\x00...";

**Assembly format:**
payload:
    db  0x7f,0x45,0x4c,0x46,0x02,0x01...

## Usage

./embed <identifier> < input_file
./embed -a <identifier> < input_file   # assembly output
./embed --help

## Build

gcc -o embed embed.c

## Flags

| Flag | Description |
|------|-------------|
| `-a` | Output in x86 assembly `db` format |
| `-h` / `--help` | Show usage and exit |

## Files

- `embed.c` — core logic
- `embed.h` — type aliases, macros, enums, prototypes

## License

MIT License

Copyright (c) 2026 Kane Flores

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
