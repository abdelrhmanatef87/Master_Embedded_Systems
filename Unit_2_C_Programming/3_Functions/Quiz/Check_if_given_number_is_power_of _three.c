/*
 ============================================================================
 Name        : Check_if_given_number_is_power_of.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype
int CheckPower_OfThree(int number);

int main(void) {

	int number;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	int result = CheckPower_OfThree(number);
	printf("The result: %d", result);

	return 0;
}

/*@param integer number to check
 *
 * @breif  if number is a power of 3 we will return 0
 * 		   if not return 1
 *
 * @return  integer variable equal  0 or 1
 */
int CheckPower_OfThree(int number) {

	if (number % 3 == 0) {
		return 0;
	} else {
		return 1;
	}
}
