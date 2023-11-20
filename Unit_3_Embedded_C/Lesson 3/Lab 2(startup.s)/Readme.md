| ELF Header Attribute             | Value                                    |
|---------------------------------|------------------------------------------|
| Magic                           | 7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 |
| Class                           | ELF32                                    |
| Data                            | 2's complement, little endian            |
| Version                         | 1 (current)                              |
| OS/ABI                          | UNIX - System V                          |
| ABI Version                     | 0                                        |
| Type                            | EXEC (Executable file)                    |
| Machine                         | ARM                                      |
| Version                         | 0x1                                      |
| Entry point address             | 0x8000000                                |
| Start of program headers        | 52 (bytes into file)                     |
| Start of section headers        | 67844 (bytes into file)                  |
| Flags                           | 0x5000200, Version5 EABI, soft-float ABI|
| Size of this header              | 52 (bytes)                               |
| Size of program headers         | 32 (bytes)                               |
| Number of program headers       | 2                                        |
| Size of section headers         | 40 (bytes)                               |
| Number of section headers       | 16                                       |
| Section header string table index| 15                                       |

## Section Headers

| [Nr] | Name             | Type           | Addr     | Off    | Size   | ES | Flg | Lk | Inf | Al |
|------|------------------|----------------|----------|--------|--------|----|-----|----|-----|----|
| 0    | NULL             | NULL           | 00000000 | 000000 | 000000 | 00 |     | 0  | 0   | 0  |
| 1    | .text            | PROGBITS       | 08000000 | 010000 | 0000e8 | 00 | AX  | 0  | 0   | 4  |
| 2    | .data            | PROGBITS       | 080000e8 | 0100e8 | 000004 | 00 | WA  | 0  | 0   | 4  |
| 3    | .bss             | NOBITS         | 20000000 | 020000 | 000004 | 00 | WA  | 0  | 0   | 4  |
| 4    | .ARM.attributes  | ARM_ATTRIBUTES | 00000000 | 0100ec | 00002f | 00 |     | 0  | 0   | 1  |
| 5    | .comment         | PROGBITS       | 00000000 | 01011b | 00007b | 01 | MS  | 0  | 0   | 1  |
| ...  | ...              | ...            | ...      | ...    | ...    | ...| ... | ...| ... | ...|

## Program Headers

| Type | Offset   | VirtAddr  | PhysAddr  | FileSiz | MemSiz | Flg | Align  |
|------|----------|-----------|-----------|---------|--------|-----|--------|
| LOAD | 0x010000 | 0x08000000| 0x08000000| 0x000ec | 0x000ec| RWE | 0x10000|
| LOAD | 0x020000 | 0x20000000| 0x20000000| 0x00000 | 0x00004| RW  | 0x10000|

The section to segment mapping can also be represented in a table format.

## Symbol Table '.symtab'

| Num  | Value     | Size | Type    | Bind  | Vis    | Ndx | Name            |
|------|-----------|------|---------|-------|--------|-----|-----------------|
| 0    | 00000000  | 0    | NOTYPE  | LOCAL | DEFAULT| UND | ...             |
| 1    | 08000000  | 0    | SECTION | LOCAL | DEFAULT| 1   | ...             |
| 2    | ...       | ...  | ...     | ...   | ...    | ... | ...             |

No version information found in this file.
Attribute Section: aeabi

| Attribute                      | Value              |
|--------------------------------|--------------------|
| Tag_CPU_name                   | "Cortex-M3"        |
| Tag_CPU_arch                   | v7                 |
| Tag_CPU_arch_profile           | Microcontroller    |
| Tag_THUMB_ISA_use              | Thumb-2            |
| Tag_ABI_PCS_wchar_t            | 4                  |
| Tag_ABI_FP_denormal            | Needed             |
| Tag_ABI_FP_exceptions          | Needed             |
| Tag_ABI_FP_number_model        | IEEE 754           |
| Tag_ABI_align_needed           | 8-byte             |
| Tag_ABI_enum_size              | small              |
| Tag_CPU_unaligned_access       | v6                 |

