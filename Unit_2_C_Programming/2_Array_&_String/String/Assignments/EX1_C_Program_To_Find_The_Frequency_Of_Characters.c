/*
 ============================================================================
 Name        : EX1_C_Program_To_Find_The_Frequency_Of_Characters.c
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
	char character;
	short count = 0;

	printf("Enter a String: ");
	fflush(stdin);
	fflush(stdout);
	gets(string);

	printf("\rEnter a character to find frequency: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);

	for (short i = 0; i < 100 && string[i] != 0; i++) {

		/*
		 * if any character in the string equal the character
		 * we will increase the count that describe the frequency
		 */

		if (string[i] == character) {
			count++;
		}
	}

	printf("\rFrequency of %c = %d ", character, count);

	return 0;
}
