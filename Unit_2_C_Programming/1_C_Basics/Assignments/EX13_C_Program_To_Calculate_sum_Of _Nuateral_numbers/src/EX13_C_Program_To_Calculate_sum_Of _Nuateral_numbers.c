/*
 ============================================================================
 Name        : EX13_C_Program_To_Calculate_sum_Of.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, sum;

	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	/*
	 * we can use this equation to get the summation
	 * from 1 to n in O(1) instead of O(n) using loop
	 */
	sum = number * (number + 1) / 2;

	printf("Sum = %d", sum);

	return 0;
}
