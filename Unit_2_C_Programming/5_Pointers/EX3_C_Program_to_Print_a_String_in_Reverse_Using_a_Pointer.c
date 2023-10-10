/*
 ============================================================================
 Name        : EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char string[100];
	char *pointer_to_string = string;

	printf("pointer : print a string in reverse order: \n");
	printf("------------------------------------------------\n");
	printf("Input a string: ");
	fflush(stdout);
	scanf("%s", string);

	pointer_to_string += strlen(string);

	printf("Reverse of the string is: ");

	for (int i = 0; i <= strlen(string); i++) {
		printf("%c", *pointer_to_string--);

	}
	return 0;
}
