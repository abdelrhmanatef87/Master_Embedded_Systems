/*
 ============================================================================
 Name        : EX10_C_Program_To_Find_Largest_Number_Among_Three_Numbers.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float number1, number2, number3;

	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f", &number1, &number2, &number3);

	if (number1 > number2) {
		number2 = number1;
	}
	if (number2 > number3) {
		number3 = number2;
	}

	printf("Largest number = %.2f ", number3);

	return 0;
}
