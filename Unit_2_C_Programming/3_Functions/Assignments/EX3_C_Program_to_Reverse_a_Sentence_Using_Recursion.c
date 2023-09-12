/*
 ============================================================================
 Name        : EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototype
void reverse_sentence();

int main(void) {

	printf("Enter a sentence: ");
	fflush(stdin);
	fflush(stdout);
	reverse_sentence();

	return 0;
}

/*
 *@brief function that get sentence andd print the reverse  of it
 */

void reverse_sentence() {

	char character;
	scanf("%c", &character);

	//Base case
	if (character != '\n') {
		reverse_sentence();
	}

	printf("%c", character);

}

