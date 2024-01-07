/*
 * State.h
 *
 *  Created on: Jan 5, 2024
 *      Author: future
 */

//header protection
#ifndef STATE_H_
#define STATE_H_

#include <stdio.h>
#include <stdlib.h>

//Automatic state function generated
#define STATE_define(_statFUN_)   void ST_##_statFUN_ ()
#define STATE(_statFUN_)    ST_##_statFUN_

//States Connections (interfaces between each other)
void US_Distance_Get(int distance);
void DC_Motor_Set(int speed);

#endif /* STATE_H_ */
