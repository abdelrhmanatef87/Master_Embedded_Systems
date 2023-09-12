/*
 ============================================================================
 Name        : EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype
int power_of_number(int baseNumber, int powerNumber);

int main(void) {

	int baseNumber, powerNumber;
	printf("Enter base number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &baseNumber);
	printf("Enter power number(positive integer): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &powerNumber);

	int power_result = power_of_number(baseNumber, powerNumber);
	printf("%d ^ %d = %d", baseNumber, powerNumber, power_result);

	return 0;
}

/*@param take two integers the base number and his power
 *
 * @brief function that calculates the power of number using recursion
 *
 * @return integer number that represent the power of number
 */

int power_of_number(int baseNumber, int powerNumber) {

	//base case
	if (powerNumber <= 0) {
		return 1;
	} else {

		return baseNumber * power_of_number(baseNumber, powerNumber - 1);
	}
}
