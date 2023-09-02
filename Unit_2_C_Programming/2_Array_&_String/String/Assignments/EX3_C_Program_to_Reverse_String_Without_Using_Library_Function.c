/*
 ============================================================================
 Name        : EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
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
	char reverse_string[100];
	short cnt = 0;

	printf("Enter the string  : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", string);

	int length = strlen(string);

	for (int i = length - 1; i >= 0; i--) {

		reverse_string[cnt] = string[i];
		cnt++;
	}

	//null termination
	reverse_string[cnt] = 0;

	printf("Reverse string is : %s", reverse_string);

	return 0;
}
