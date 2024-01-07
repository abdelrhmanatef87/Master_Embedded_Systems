/*
 * main.c
 *
 *  Created on: Jan 5, 2024
 *      Author: future
 */

#include "Collision_Avoidance_1.h"
#include "UltraSinc_CA.h"
#include "DC_Motor_CA.h"

void Setup() {

	//init all the drivers
	//init IRQ ....
	//init HAL (hardware abstraction layer) ex US_Driver , DC_Driver
	//init BLOCK
	US_init();
	DC_init();
	//set states pointer for each block
	CA_state = STATE(CA_WAITING);
	US_state = STATE(US_Busy);
	DC_state = STATE(DC_Idle);

}

int main(void) {

	volatile int d = 0; //volatile to ignore optimizer
	Setup();

	while (1) {
		//call state for each block in order of sequence diagram
		US_state(); // it will not overflow as it pointer to address of function
		CA_state();
		DC_state();
		//delay
		for (d = 0; d < 1000; d++)
			;
	}
	return 0;
}
