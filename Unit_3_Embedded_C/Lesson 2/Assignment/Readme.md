# ELF Header

- **Magic:** 7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00
- **Class:** ELF32
- **Data:** 2's complement, little endian
- **Version:** 1 (current)
- **OS/ABI:** UNIX - System V
- **ABI Version:** 0
- **Type:** EXEC (Executable file)
- **Machine:** ARM
- **Version:** 0x1
- **Entry point address:** 0x10000
- **Start of program headers:** 52 (bytes into file)
- **Start of section headers:** 33120 (bytes into file)
- **Flags:** 0x5000002, has entry point, Version 5 EABI
- **Size of this header:** 52 (bytes)
- **Size of program headers:** 32 (bytes)
- **Number of program headers:** 1
- **Size of section headers:** 40 (bytes)
- **Number of section headers:** 9
- **Section header string table index:** 6

## Section Headers

| Nr | Name             | Type           | Addr      | Off    | Size   | ES | Flg | Lk | Inf | Al |
|----|------------------|----------------|-----------|--------|--------|----|-----|---|----|---|
| 0  |                  | NULL           | 00000000  | 000000 | 000000 | 00 |     | 0 | 0  | 0 |
| 1  | .startup         | PROGBITS       | 00010000  | 008000 | 000010 | 00 | AX  | 0 | 0  | 4 |
| 2  | .text            | PROGBITS       | 00010010  | 008010 | 000068 | 00 | AX  | 0 | 0  | 4 |
| 3  | .data            | PROGBITS       | 00010078  | 008078 | 000064 | 00 | WA  | 0 | 0  | 4 |
| 4  | .bss             | PROGBITS       | 000100dc  | 0080dc | 000011 | 00 | WA  | 0 | 0  | 1 |
| 5  | .ARM.attributes  | ARM_ATTRIBUTES | 00000000  | 0080ed | 00002e | 00 |     | 0 | 0  | 1 |
| 6  | .shstrtab        | STRTAB         | 00000000  | 00811b | 000045 | 00 |     | 0 | 0  | 1 |
| 7  | .symtab          | SYMTAB         | 00000000  | 0082c8 | 000180 | 10 |     | 8 | 19 | 4 |
| 8  | .strtab          | STRTAB         | 00000000  | 008448 | 000057 | 00 |     | 0 | 0  | 1 |

**Key to Flags:**
- W (write), A (alloc), X (execute), M (merge), S (strings)
- I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
- O (extra OS processing required) o (OS specific), p (processor specific)

## Program Headers

| Type | Offset   | VirtAddr  | PhysAddr  | FileSiz | MemSiz | Flg   | Align  |
|------|----------|-----------|-----------|---------|--------|-------|--------|
| LOAD | 0x008000 | 0x00010000| 0x00010000| 0x000ed | 0x000ed| RWE   | 0x8000 |

**Section to Segment mapping:**
- Segment 00: .startup .text .data .bss

**Symbol table '.symtab' contains 24 entries:**

| Num | Value    | Size | Type    | Bind   | Vis     | Ndx | Name             |
|-----|----------|------|---------|--------|---------|-----|------------------|
| 0   | 00000000 | 0    | NOTYPE  | LOCAL  | DEFAULT | UND |                  |
| 1   | 00010000 | 0    | SECTION | LOCAL  | DEFAULT | 1
