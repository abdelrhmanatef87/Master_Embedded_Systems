/*
 * main.c
 *
 *  Created on: Jan 1, 2024
 *      Author: future
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"

int main(void) {

	element_type i, temp;

	FIFO_buf_t FIFO_buf_uart;
	//init the fifo buffer
	if (FIFO_init(&FIFO_buf_uart, uart_buffer, Length) == FIFO_no_error) {
		printf("FIFO init is Done...\n");
	}

	//enqueue elements
	for (i = 0; i < 7; i++) {

		printf("FiFo Enqueue (%x) \n", i);
		if (FIFO_Enqueue(&FIFO_buf_uart, i) == FIFO_no_error) {
			printf("\t FIFO enqueue (%d) is Done...\n", i);
		} else {
			printf("\t FIFO enqueue  is Faild...\n");
		}
	}

	//print elements before dequeue
	FIFO_Print(&FIFO_buf_uart);

	//dequeue two elements
	if (FIFO_Dequeue(&FIFO_buf_uart, &temp) == FIFO_no_error)
		printf("\t FIFO Dequeue (%x) is Done...\n", temp);
	if (FIFO_Dequeue(&FIFO_buf_uart, &temp) == FIFO_no_error)
		printf("\t FIFO Dequeue (%x) is Done...\n", temp);

	//print elements After dequeue to test dequeue
	FIFO_Print(&FIFO_buf_uart);

	return 0;
}
