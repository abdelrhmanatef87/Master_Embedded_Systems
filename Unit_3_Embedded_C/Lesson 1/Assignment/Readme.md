# Embedded C  First Assignments

##  Create a file containing `typedef` declarations for platform types

**Platform Types File**

Create a file named `platform_types.h` that contains `typedef` declarations for commonly used platform types such as `uint8_t`, `int32_t`, etc. The purpose of this file is to define standard types for use in embedded systems and to provide portability across different platforms.

| **Step** | **Description** |
|----------|-----------------|
| 1        | Create a new file named `platform_types.h`. |
| 2        | Add `typedef` declarations for common platform types. Example: |
|          | ```c |
|          | typedef unsigned char uint8_t; |
|          | typedef signed char int8_t; |
|          | typedef unsigned short uint16_t; |
|          | typedef signed short int16_t; |
|          | typedef unsigned int uint32_t; |
|          | typedef signed int int32_t; |
|          | ``` |
| 3        | Save the file. |
| 4        | You can now include this file in your embedded C projects to use these standard platform types. |


# Toggle an LED in STM32F103C6

Create a program that toggles an LED connected to a GPIO pin on an STM32F103C6 microcontroller. 

| **Step** | **Description** |
|----------|-----------------|
| 1        | Set up an STM32 development environment with a toolchain (e.g., STM32CubeIDE). |
| 2        | Create a new STM32 project and configure the GPIO pin connected to the LED as an output. |
| 3        | Write C code to toggle the LED. |
