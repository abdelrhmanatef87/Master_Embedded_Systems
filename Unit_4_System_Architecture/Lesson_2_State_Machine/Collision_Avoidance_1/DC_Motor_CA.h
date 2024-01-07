/*
 * DC_Motor_CA.h
 *
 *  Created on: Jan 6, 2024
 *      Author: future
 */

#ifndef DC_MOTOR_CA_H_
#define DC_MOTOR_CA_H_

#include <math.h>
#include "State.h"

enum {

	DC_Idle, DC_Busy

} DC_States_id;

//declare states functions DC
STATE_define(DC_Idle);
STATE_define(DC_Busy);
void DC_init();

//declartion of pointer and his definition in DC_Motor_CA.c
extern void (*DC_state)();

#endif /* DC_MOTOR_CA_H_ */
