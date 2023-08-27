/*
 ============================================================================
 Name        : EX11_C_Program_Check_Number_Positive_Or_Negative_Or_Zero.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float number;

	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &number);

	if (number > 0) {
		printf("%.2f is positive. ", number);
	} else if (number == 0) {
		printf("You entered Zero. ");
	} else {
		printf("%.2f is negative. ", number);

	}

	return 0;
}
