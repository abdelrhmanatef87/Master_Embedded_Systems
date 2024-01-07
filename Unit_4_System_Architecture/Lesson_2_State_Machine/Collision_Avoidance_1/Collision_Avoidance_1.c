/*
 ============================================================================
 Name        : Collision_Avoidance_1.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//include header
#include "Collision_Avoidance_1.h"

//variables (attributes)
unsigned int CA_speed = 0;
unsigned int CA_distance = 0;
unsigned int CA_threshold = 50;

// state pointer to function that take nothing and return void
void (*CA_state)();

// out signal from ultrasinc which is input for collision_Avoidance block
void US_Distance_Get(int distance) {

	CA_distance = distance;
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_WAITING)) : (CA_state =
											STATE(CA_DRIVING));

	printf("\n\tUS ------ distance = %d ------> CA\n", CA_distance);
}

STATE_define(CA_WAITING) {

	//state name
	CA_States_id = CA_WAITING;

	printf("\n\tCA Waiting State : Distance = %d , Speed = %d \n", CA_distance,
			CA_speed);

	//state Action
	CA_speed = 0;
	DC_Motor_Set(CA_speed);

}
STATE_define(CA_DRIVING) {

	//state name
	CA_States_id = CA_DRIVING;
	printf("\n\tCA Driving State : Distance = %d , Speed = %d \n", CA_distance,
			CA_speed);

	//state Action
	CA_speed = 30;
	DC_Motor_Set(CA_speed);

}

/* int US_Get_Distance_random(int minumin, int maximum, int count) {


 //rand() % (maximum - minimum + 1)
 //gives a random number between 0 and maximum - minimum (inclusive).
 //Adding minimum at the end shifts this range to start from minimum instead of 0.

 for (int i = 0; i < count; i++) {

 int random_number = (rand() % (maximum - minumin + 1)) + minumin;
 return random_number;
 }
 return 1;
 }
 */

