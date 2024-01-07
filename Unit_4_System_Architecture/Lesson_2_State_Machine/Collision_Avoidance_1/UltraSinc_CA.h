/*
 * UltraSinc_CA.h
 *
 *  Created on: Jan 6, 2024
 *      Author: future
 */

#ifndef ULTRASINC_CA_H_
#define ULTRASINC_CA_H_

#include <math.h>
#include "State.h"

enum {

	US_Busy

} US_States_id;

//declare states functions us
STATE_define(US_Busy);
void US_init();

//declartion of pointer and his definition in UltraSinc_CA.c
extern void (*US_state)();

#endif /* ULTRASINC_CA_H_ */
