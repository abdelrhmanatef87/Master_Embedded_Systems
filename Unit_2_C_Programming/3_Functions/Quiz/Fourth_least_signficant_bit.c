/*
 ============================================================================
 Name        : Fourth_least_signficant_bit.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype
int Fourth_leastBit(short int num);

int main(void) {

	int num;
	printf("Enter number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);

	printf("%d", Fourth_leastBit(num));
	return 0;
}

/*@param  integer number but should be 32-bit
 *
 * @brief function return binary integer 0 or 1 denoting
 *         the 4th least significant bit of number
 *
 * @return integer number represent the 4th least
 *         significant bit 1 or 0
 */

int Fourth_leastBit(short int num) {

	int bit = (1 & (num >> 3));
	return bit;
}
