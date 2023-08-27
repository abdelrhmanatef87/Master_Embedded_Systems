/*
 ============================================================================
 Name        : EX9_C_Program_To_Check_Vowel_Or_Consonant.c
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

	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);

	switch (character) {

	case 'a':
	case 'A': {
		printf("%c is a vowel.", character);
		break;
	}

	case 'e':
	case 'E': {
		printf("%c is a vowel.", character);
		break;
	}

	case 'i':
	case 'I': {
		printf("%c is a vowel.", character);
		break;
	}

	case 'o':
	case 'O': {
		printf("%c is a vowel.", character);
		break;
	}

	case 'u':
	case 'U': {
		printf("%c is a vowel.", character);
		break;
	}

	default: {
		printf("%c is a consonant.", character);

	}

	}

	return 0;
}
