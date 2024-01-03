//header protection
#ifndef _LIFO_H
#define _LIFO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//user configurations
//select the element type ex.(uint8_t , uint32_t ...)
//Default 8 bits
#define element_type uint8_t

//create buffer1
#define Length 5
element_type buffer1[Length];

//create buffer2
element_type buffer2[Length];

//type definitions
typedef struct {

	unsigned int length_m;
	unsigned int count_m;
	element_type *base_m;
	element_type *head_m;
} LIFO_Buff_t;

typedef enum {
	LIFO_no_error,  //0  , done no error
	LIFO_full,      //1  , error in push
	LIFO_empty,     //2  , error in pop
	LIFO_null       //3  , if buffer does not exist
} LIFO_Buff_status_t;

//APIs
LIFO_Buff_status_t LIFO_Buff_push(LIFO_Buff_t *LIFO_Buff, element_type item);
LIFO_Buff_status_t LIFO_Buff_pop(LIFO_Buff_t *LIFO_Buff, element_type *item);
LIFO_Buff_status_t LIFO_Buff_init(LIFO_Buff_t *LIFO_Buff, element_type *buff,
		unsigned int length);

#endif //end of _LIFO_H
