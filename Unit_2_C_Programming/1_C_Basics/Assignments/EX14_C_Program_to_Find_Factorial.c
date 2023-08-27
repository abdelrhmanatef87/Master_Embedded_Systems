/*
 ============================================================================
 Name        : EX14_C_Program_to_Find_Factorial.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, factorial = 1;

	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	if (number < 0) {
		printf("Error!!! Factorial of negative numbers does not exist. ");
	} else if (number == 0) {
		printf("Factorial of 0 = 1");
	} else {

		for (int i = 1; i <= number; i++) {
			factorial *= i;
		}

		printf("Factorial of %d = %d ", number, factorial);
	}

	return 0;
}
