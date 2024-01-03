#include "Lifo.h"

/*
 * @brief function to create stack buffer
 *
 * @param pointer to structure
 * @param pointer to address of the array, element_type refer type of data of this buffer
 * @param number of elements
 *
 * @return status of buffer which is typedef of enum
 */
LIFO_Buff_status_t LIFO_Buff_init(LIFO_Buff_t *LIFO_Buff, element_type *buff,
		unsigned int length) {

	//if dynamic allocation and not have space will return null so we checking
	if (buff == NULL)
		return LIFO_null;

	//initialize LIFO buffer
	LIFO_Buff->base_m = buff;
	LIFO_Buff->head_m = buff;
	LIFO_Buff->length_m = length;
	LIFO_Buff->count_m = 0;

	return LIFO_no_error;
}

/*@brief function to push item in stack
 *
 * @param pointer to structure
 * @param   item that you want to push,element_type refer type of data of this buffer
 *
 * @return status of buffer which is typedef of enum
 */
LIFO_Buff_status_t LIFO_Buff_push(LIFO_Buff_t *LIFO_Buff, element_type item) {

	//check LIFO valid or not
	if (!LIFO_Buff->base_m || !LIFO_Buff->head_m)
		return LIFO_null;
	//check LIFO length full or not
	if (LIFO_Buff->count_m == LIFO_Buff->length_m)
		return LIFO_full;

	//push item
	*(LIFO_Buff->head_m) = item;
	LIFO_Buff->head_m++;
	LIFO_Buff->count_m++;

	return LIFO_no_error;

}

/*
 * @brief function to pop item in stack
 *
 * @param pointer to structure
 *
 * @param  ponter to store address of item
 *       that you want to pop the value on it
 *
 *
 * @return status of buffer which is typedef of enum
 */
LIFO_Buff_status_t LIFO_Buff_pop(LIFO_Buff_t *LIFO_Buff, element_type *item) {

	//check LIFO Valid or not
	if (!LIFO_Buff->base_m || !LIFO_Buff->head_m)
		return LIFO_null;

	//check LIFO empty or not
	if (LIFO_Buff->count_m == 0)
		return LIFO_empty;

	//pop item
	LIFO_Buff->head_m--;
	*(item) = *(LIFO_Buff->head_m);
	LIFO_Buff->count_m--;

	return LIFO_no_error;
}
