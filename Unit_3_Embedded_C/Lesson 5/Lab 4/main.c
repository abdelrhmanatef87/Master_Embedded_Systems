/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

//inclusion of the plateform types .h file to use typedef declared inside it
#include "Plateform_Types.h"
#include <stdlib.h>

#define RCC_Base 0x40021000
#define GPIO_Base 0x40010800

//inside reset and clock control register
#define APB2ENR_Register     *((Vuint32_t *)(RCC_Base + 0x18))
//inside General purpose input output register
#define CRH_Register         *((Vuint32_t *)(GPIO_Base + 0x04))
#define GPIOA_ODR Register   *((Vuint32_t *)(GPIO_Base + 0x0C))

typedef union {
	Uint32_t ALL_PORTS;
	struct {
		Uint32_t reserved :13;
		Uint32_t Pin_13 :1;

	} pin;

} R_ODR_t;


void * _sbrk (int incr) {
	static unsigned char * heap_ptr = NULL ;
	unsigned char * prev_heap_ptr = NULL ;
	extern unsigned int _E_bss ;
	extern unsigned int _heap_top ;
   
   //first time
	if (heap_ptr == NULL) {
		heap_ptr = (unsigned char *)&_E_bss;
	}
    
   prev_heap_ptr = heap_ptr ;

   //protect stack 
	if ((heap_ptr + incr) > (unsigned char * ) (&_heap_top)) {
		return (void *) NULL ;
	}

	//booking increment size 
	heap_ptr += incr ;
	return (void *) prev_heap_ptr;
}
volatile int i ;
Uint32_t global_variables[3] = {1,2,3};
Uint32_t const const_variavles [3] = {1,2,3};
volatile R_ODR_t *R_ODR = (volatile R_ODR_t*) (GPIO_Base + 0x0c); 


int main(void) {
     
     unsigned int * ptr = (unsigned int * ) malloc(10*sizeof(int));
	APB2ENR_Register |= (1 << 2); // set 1 in bit 2
	CRH_Register &= 0xFF0FFFFF; //to make pins from 20 -> 23 all zeros to assign 2 to it
	CRH_Register |= 0x00200000; // assign 2
     
	while (1) {

		R_ODR->pin.Pin_13 = 1; // set bit 13 to 1
		for (i = 0; i < 5000; i++) ;  // delay


		R_ODR->pin.Pin_13 = 0; // clear bit 13 from 1 to 0
		for (i = 0; i < 5000; i++) ;  // delay

	}
    free(ptr);
	return 0;
}

