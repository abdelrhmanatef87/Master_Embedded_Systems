/*
 * Collision_Avoidance_1.h
 *
 *  Created on: Jan 5, 2024
 *      Author: future
 */

//header protection
#ifndef COLLISION_AVOIDANCE_1_H_
#define COLLISION_AVOIDANCE_1_H_

#include <math.h>
#include "State.h"

//declartion of pointer and his definition in Collision_Avoidance_1.c
extern void (*CA_state)();

//define collision Avoidance states
enum {

	CA_WAITING, // 0 , if distance <= 50 (our threshold)
	CA_DRIVING  // 1 , if distance > 50 (our threshold)

} CA_States_id;

//declare states functions CA
STATE_define(CA_WAITING);
STATE_define(CA_DRIVING);
int US_Get_Distance_random(int minumin, int maximum, int count); // just for test random value in distance

#endif /* COLLISION_AVOIDANCE_1_H_ */
