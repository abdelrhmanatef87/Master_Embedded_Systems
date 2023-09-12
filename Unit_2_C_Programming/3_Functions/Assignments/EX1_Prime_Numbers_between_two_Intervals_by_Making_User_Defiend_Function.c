/*
 ============================================================================
 Name        : EX1_Prime_Numbers_between_two_Intervals_by_Making_User_Defiend_Function.c
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
void prime_numbers(int start, int end);

int main(void) {

	int start, end;

	printf("Enter two numbers(intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &start, &end);

	prime_numbers(start, end);

	return 0;
}

/*@param take two integers start and end of the interver
 *
 *@breif get the prime numbers from interval
 *
 *@return nothing
 */

void prime_numbers(int start, int end) {

	printf("prime numbers between %d and %d are: ", start, end);
	for (; start <= end; start++) {

		/* prime numbers only divisible by themself and 1
		 * so we will check  if the number divisible
		 * from  any number between 2 untill the number-1
		 */
		int i = 2;
		for (; i < start; i++) {
			if (start % i == 0 || start == 1) {
				break;
			}
		}

		if (i == start) {
			printf("%d ", start);
		}
	}
}

