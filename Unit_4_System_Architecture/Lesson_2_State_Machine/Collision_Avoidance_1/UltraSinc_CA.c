/*
 * UltraSinc_CA.c
 *
 *  Created on: Jan 6, 2024
 *      Author: future
 */

#include "UltraSinc_CA.h"

//us_state pointer to funciton
void (*US_state)();

//attributes
int US_distance = 0;

void US_init() {

	//init ultrasinc dirver
	printf("US_init");
}

STATE_define(US_Busy) {

	//state name
	US_States_id = US_Busy;

	//state Action
	US_distance = US_Get_Distance_random(45, 55, 1);

	printf("\n\tUS Waiting State : Distance = %d \n", US_distance);
	US_Distance_Get(US_distance);

	US_state = STATE(US_Busy);

}

int US_Get_Distance_random(int minumin, int maximum, int count) {

//rand() % (maximum - minimum + 1)
//gives a random number between 0 and maximum - minimum (inclusive).
//Adding minimum at the end shifts this range to start from minimum instead of 0.

	for (int i = 0; i < count; i++) {

		int random_number = (rand() % (maximum - minumin + 1)) + minumin;
		return random_number;
	}
	return 1;
}

