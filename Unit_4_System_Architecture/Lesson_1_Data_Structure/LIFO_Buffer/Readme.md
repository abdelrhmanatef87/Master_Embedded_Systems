# LIFO (Last-In-First-Out) Implementation in C

This repository contains a LIFO implementation in C, providing functionality for a stack-based data structure.

## Overview

- **LIFO.h**: Header file containing LIFO data types, initialization, push, pop, and other related functions.
- **LIFO.c**: Source file implementing the functions declared in LIFO.h.
- **main.c**: Sample usage of the LIFO functionalities.

## Usage

### Structure

- `LIFO_Buff_t`: LIFO buffer structure maintaining the LIFO properties.
- `element_type`: Data type selected for elements within the LIFO.
- `Length`: Size of the LIFO buffer (default set to 5).
- `LIFO_Buff_push`: Function to push an element onto the LIFO.
- `LIFO_Buff_pop`: Function to pop an element from the LIFO.
- `LIFO_Buff_init`: Function to initialize the LIFO buffer.

## Example

The `main.c` file demonstrates a sample usage of the LIFO functionality. It initializes two LIFO buffers, performs push and pop operations, and prints the results.


