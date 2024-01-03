# FIFO (First-In-First-Out) Implementation in C

This repository contains a FIFO implementation in C, providing functionality for a circular buffer-based FIFO data structure.

## Overview

- **FIFO.h**: Header file containing FIFO data types, initialization, enqueue, dequeue, and other related functions.
- **FIFO.c**: Source file implementing the functions declared in FIFO.h.
- **main.c**: Sample usage of the FIFO functionalities.

## Usage

### Structure

- `FIFO_buf_t`: FIFO buffer structure maintaining the FIFO properties.
- `element_type`: Data type selected for elements within the FIFO.
- `Length`: Size of the FIFO buffer (default set to 5).

### Functions

- `FIFO_init`: Initializes the FIFO buffer with the specified length and sets up the buffer pointers.
- `FIFO_Enqueue`: Adds an element to the FIFO buffer.
- `FIFO_Dequeue`: Removes an element from the FIFO buffer.
- `FIFO_Is_Full`: Checks if the FIFO buffer is full.
- `FIFO_Print`: Prints the elements within the FIFO buffer.

## Example

A sample usage of the FIFO functionality is demonstrated in `main.c`. It initializes a FIFO buffer, enqueues elements, dequeues elements, and prints the FIFO contents before and after dequeue operations.


