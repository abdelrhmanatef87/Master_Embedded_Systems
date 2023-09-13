/*
 ============================================================================
 Name        : Clear_specified_bit_in_a_given_number.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype
int clear_bit(int number, int bit);

int main(void) {

	int number, bit;

	printf("Enter Input number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	printf("Enter a bit position: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &bit);

	int result = clear_bit(number, bit);
	printf("result = %d", result);

	return 0;
}

/*@param takes two integers first the number second the bit
 * position that you want to clear
 *
 * @brief  function to clear the given bit
 *
 * @return integer number represent the new value after clear the bit
 */
int clear_bit(int number, int bit) {

	int result = (number &= ~(1 << bit));
	return result;

}
