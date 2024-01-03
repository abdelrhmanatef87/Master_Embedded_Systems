/*
 ============================================================================
 Name        : main.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Lifo.h"

int main(void) {

	LIFO_Buff_t uart_LIFO_Buff, I2C_LIFO_Buff;

	//static memory allocation
	LIFO_Buff_init(&uart_LIFO_Buff, buffer1, Length);

	//dynamic memory allocation
	// 5 * 4 = 20 Bytes in .heap seciton
	element_type *buffer2 = (element_type*) malloc(5 * sizeof(element_type));
	LIFO_Buff_init(&I2C_LIFO_Buff, buffer2, Length);

	element_type i;
	for (i = 0; i < 7; i++) {

		switch (LIFO_Buff_push(&uart_LIFO_Buff, i)) {

		case LIFO_null:
			printf("not valid LIFO Buffer\n");
			break;
		case LIFO_full:
			printf("LIFO Buffer is full\n");
			break;
		case LIFO_no_error:
			printf("LIFO Push %X\n", i);
			break;
		case LIFO_empty:
			printf("LIFO Buffer is empty\n");
			break;
		}
	}
	printf("\n");

	element_type temp = 0;	//just to store pop value on it
	for (i = 0; i < 7; i++) {

		switch (LIFO_Buff_pop(&uart_LIFO_Buff, &temp)) {
		case LIFO_null:
			printf("not valid LIFO Buffer\n");
			break;
		case LIFO_empty:
			printf("LIFO Buffer is empty\n");
			break;
		case LIFO_no_error:
			printf("LIFO PoP %X\n", temp);
			break;
		case LIFO_full:
			printf("LIFO Buffer is full\n");
			break;
		}
	}
	return 0;
}
