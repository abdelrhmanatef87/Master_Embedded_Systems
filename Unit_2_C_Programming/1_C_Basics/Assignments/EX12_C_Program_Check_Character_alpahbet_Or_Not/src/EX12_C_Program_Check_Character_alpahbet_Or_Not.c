/*
 ============================================================================
 Name        : EX12_C_Program_Check_Character_alpahbet_Or_Not.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char character;

	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);

	/*
	 * take a character and check if it between a and z or
	 * A and z else it not an alphabet
	 */

	if (character >= 'a' || character >= 'A' && character <= 'z'
			|| character <= 'Z') {

		printf("%c is  an alphabet ", character);

	} else {
		printf("%c is not an alphabet ", character);

	}

	return 0;
}
