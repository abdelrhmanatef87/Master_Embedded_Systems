/*
 * DC_Motor_CA.c
 *
 *  Created on: Jan 6, 2024
 *      Author: future
 */

#include "DC_Motor_CA.h"

//us_state pointer to funciton
void (*DC_state)();

//attributes
int DC_speed = 0;

//out signal from collision_Avoidance module to input signal for DC_motro module
void DC_Motor_Set(int speed) {

	DC_speed = speed;
	DC_state = STATE(DC_Busy);
	printf("\n\tCA ------ speed = %d ------> DC\n", DC_speed);

}

void DC_init() {

	//init all DC_motor dirvers pwd
	printf("\n\t DC_motor init \n");
}

STATE_define(DC_Idle) {

	//state name
	DC_States_id = DC_Idle;

	//state action
	// pwm to make speed = DC_speed

	printf("\n\tDC Idle State : Speed = %d \n", DC_speed);

}

STATE_define(DC_Busy) {

	//state name
	DC_States_id = DC_Busy;

	//state action
	// pwm to make speed = DC_speed

	printf("\n\tDC Busy State : Speed = %d \n", DC_speed);

	DC_state = STATE(DC_Idle);
}
