/*
 * FIFO.h
 *
 *  Created on: Jan 1, 2024
 *      Author: future
 */

// header protection
#ifndef _FIFO_H
#define _FIFO_H

#include <stdint.h>
#include <stdio.h>

//user configuration
//select the element type ex.(uint8_t , uint32_t ...)
//Default 8 bits
#define element_type uint8_t

// creating buffer 1
#define Length 5
element_type uart_buffer[Length];

//FIFO datatypes
typedef struct {
	unsigned int length_m;
	unsigned int count_m;
	element_type *head_m;
	element_type *tail_m;
	element_type *base_m;
} FIFO_buf_t;

//FIFO status
typedef enum {
	FIFO_no_error, // 0 ,if there is no error
	FIFO_full,     // 1 ,if queue is full can not enqueue
	FIFO_empty,    // 2 ,if queue is empty can not dequeue
	FIFO_null      // 3 ,if there is no queue

} FIFO_buf_status_t;

//APIs
FIFO_buf_status_t FIFO_init(FIFO_buf_t *FIFO_buffer, element_type *buffer,
		unsigned int length);
FIFO_buf_status_t FIFO_Enqueue(FIFO_buf_t *FIFO_buffer, element_type element);
FIFO_buf_status_t FIFO_Dequeue(FIFO_buf_t *FIFO_buffer, element_type *element);
FIFO_buf_status_t FIFO_Is_Full(FIFO_buf_t *FIFO_buffer);
void FIFO_Print(FIFO_buf_t *FIFO_buffer);

#endif // end of _FIFO_H
