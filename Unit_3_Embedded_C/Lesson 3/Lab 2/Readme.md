| ELF Header Attribute | Value                                     |
|----------------------|-------------------------------------------|
| Magic                | 7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 |
| Class                | ELF32                                     |
| Data                 | 2's complement, little endian             |
| Version              | 1 (current)                               |
| OS/ABI               | UNIX - System V                           |
| ABI Version          | 0                                         |
| Type                 | EXEC (Executable file)                     |
| Machine              | ARM                                       |
| Version              | 0x1                                       |
| Entry point address  | 0x8000000                                 |
| Start of program headers | 52 (bytes into file)                  |
| Start of section headers | 134964 (bytes into file)             |
| Flags                | 0x5000200, Version5 EABI, soft-float ABI |
| Size of this header  | 52 (bytes)                                |
| Size of program headers | 32 (bytes)                              |
| Number of program headers | 2                                      |
| Size of section headers | 40 (bytes)                               |
| Number of section headers | 16                                     |
| Section header string table index | 15                            |

## Section Headers

The section headers' content can be organized in a table format similar to the previous representation. 

## Program Headers

| Type | Offset   | VirtAddr  | PhysAddr  | FileSiz | MemSiz | Flg | Align  |
|------|----------|-----------|-----------|---------|--------|-----|--------|
| LOAD | 0x010000 | 0x08000000| 0x08000000| 0x00160 | 0x00160| R E | 0x10000|
| LOAD | 0x020000 | 0x20000000| 0x08000160| 0x00010 | 0x01014| RW  | 0x10000|

The section to segment mapping can also be represented in a table format.

## Symbol Table '.symtab'

The symbol table content can be formatted into a table, showcasing the different entries' details.

## Attribute Section: aeabi

The attribute section details can be tabulated, depicting the various file attributes.

