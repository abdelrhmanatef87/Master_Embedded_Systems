/*
 ============================================================================
 Name        : EX2_C_Program_to_Print_All_Alphabets_Using_a_pointer.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char alphabets[26];
	char *pointer_to_alphabets = alphabets;

	for (int i = 0; i < 26; i++) {

		*pointer_to_alphabets = i + 'A';
		pointer_to_alphabets++;
	}

	pointer_to_alphabets = alphabets;

	for (int i = 0; i < 26; i++) {

		printf("%c ", *pointer_to_alphabets++);
	}

	return 0;
}
