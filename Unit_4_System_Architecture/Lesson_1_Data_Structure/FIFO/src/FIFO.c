/*
 ============================================================================
 Name        : FIFO.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "FIFO.h"

/*@brief function to check is queue buffer is full or not
 *
 * @param pointer to structure of fifo buffer that you want to check
 *
 * @return fifo status full or no or doesnot exist
 */
FIFO_buf_status_t FIFO_Is_Full(FIFO_buf_t *FIFO_buffer) {

	//if fifo is valid or not
	if (!FIFO_buffer->base_m || !FIFO_buffer->head_m || !FIFO_buffer->tail_m)
		return FIFO_null;

	//if fifo is full or not
	if (FIFO_buffer->count_m == FIFO_buffer->length_m)
		return FIFO_full;

	return FIFO_no_error;
}

/*@brief function to print elements in queue buffer
 *
 * @param pointer to structure of fifo buffer that you want to print
 *
 * @return nothing just print
 */
void FIFO_Print(FIFO_buf_t *FIFO_buffer) {

	element_type *temp = FIFO_buffer->tail_m;
	int i;
	//if fifo is empty or not
	if (FIFO_buffer->count_m == 0)
		printf("FiFo is empty..");
	else {
		printf("\n===============FIFO Print=============\n");
		for (i = 0; i < FIFO_buffer->count_m; i++) {
			printf("item %d : %X \n", i + 1, *temp++);
		}
		printf("\n============================\n");

	}
}

/*@brief function to initialize queue
 *
 * @param pointer to structure of fifo buffer that you want to init
 * @param pointer to array of the queue with element_type which defined before in fifo.h
 * @param number of elements
 *
 * @return fifo status no error or does not exist
 */
FIFO_buf_status_t FIFO_init(FIFO_buf_t *FIFO_buffer, element_type *buffer,
		unsigned int length) {

	//check buffer existance
	if (buffer == NULL)
		return FIFO_null;

	FIFO_buffer->length_m = length;
	FIFO_buffer->count_m = 0;
	FIFO_buffer->base_m = buffer;
	FIFO_buffer->head_m = buffer;
	FIFO_buffer->tail_m = buffer;

	return FIFO_no_error;
}

/*@brief function to add element in  queue buffer
 *
 * @param pointer to structure of fifo buffer that you want to add on it
 * @param element that you want to add
 *
 * @return fifo status added with no error  or full can not add or doesnot exist
 */
FIFO_buf_status_t FIFO_Enqueue(FIFO_buf_t *FIFO_buffer, element_type element) {

	//if fifo is valid or not
	if (!FIFO_buffer->base_m || !FIFO_buffer->head_m || !FIFO_buffer->tail_m)
		return FIFO_null;

	//if fifo is full or not
	if (FIFO_Is_Full(FIFO_buffer) == FIFO_full)
		return FIFO_full;

	//enqueue element
	*(FIFO_buffer->head_m) = element;
	FIFO_buffer->count_m++;

	//circular fifo
	if (FIFO_buffer->head_m
			== (FIFO_buffer->base_m
					+ FIFO_buffer->length_m * sizeof(element_type)))
		FIFO_buffer->head_m = FIFO_buffer->base_m;
	else
		FIFO_buffer->head_m++;

	return FIFO_no_error;
}
/*@brief function to get element from  queue buffer
 *
 * @param pointer to structure of fifo buffer that you want to get from it
 * @param pointer to variable which we will store dequeued element on it
 *
 * @return fifo status dequeue with no error  or empty can not get or doesnot exist
 */
FIFO_buf_status_t FIFO_Dequeue(FIFO_buf_t *FIFO_buffer, element_type *element) {

	//if fifo is valid or not
	if (!FIFO_buffer->base_m || !FIFO_buffer->head_m || !FIFO_buffer->tail_m)
		return FIFO_null;

	//if fifo is empty or not
	if (FIFO_buffer->count_m == 0)
		return FIFO_empty;

	//enqueue element
	*element = *(FIFO_buffer->tail_m);
	FIFO_buffer->count_m--;

	//circular fifo
	if (FIFO_buffer->tail_m
			== (FIFO_buffer->base_m
					+ FIFO_buffer->length_m * sizeof(element_type)))
		FIFO_buffer->tail_m = FIFO_buffer->base_m;
	else
		FIFO_buffer->tail_m++;

	return FIFO_no_error;
}
