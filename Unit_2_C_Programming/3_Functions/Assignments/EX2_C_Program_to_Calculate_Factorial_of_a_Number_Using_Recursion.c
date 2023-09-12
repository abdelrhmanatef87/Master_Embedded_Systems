/*
 ============================================================================
 Name        : EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//prototype
int factorial_number(int number);

int main(void) {

	int number;

	printf("Enter an positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	printf("Factorial of %d = %d ", number, factorial_number(number));
	return 0;
}

/*@param integer number
 *
 *@brief function to calculate factorial of positive
 *integer number using recuresion
 *
 *@return integer number that represent the factorial
 */

int factorial_number(int number) {

	//Base case
	if (number <= 1) {
		return 1;
	} else {
		return number * factorial_number(number - 1);

	}
}
