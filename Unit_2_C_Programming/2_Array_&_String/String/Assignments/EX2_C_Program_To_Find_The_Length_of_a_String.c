/*
 ============================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char string[100];
	short length = 0;

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", string);  //&string[0]....0

	/* length will increase till get the null
	 * and the loop fill in the condition
	 */

	for (length = 0; length < 100 && string[length] != 0; length++);


	printf("\rLength of string: %d", length);

	return 0;
}
