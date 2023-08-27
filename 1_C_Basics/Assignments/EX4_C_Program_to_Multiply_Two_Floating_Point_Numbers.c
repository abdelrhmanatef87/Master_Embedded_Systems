/*
 ============================================================================
 Name        : EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float first_number, second_number, multiply;

	printf("Enter two numbers: ");

	fflush(stdin);
	fflush(stdout);

	scanf("%f %f", &first_number, &second_number);

	multiply = first_number * second_number;

	printf("product: %f", multiply);

	return 0;
}
