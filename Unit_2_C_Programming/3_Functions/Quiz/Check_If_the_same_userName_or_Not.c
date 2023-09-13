/*
 ============================================================================
 Name        : Check_If_the_same_userName_or_Not.c
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
void compare_userName(char string[100], char userName[100]);

int main(void) {

	char userName[100];
	printf("Enter user name: ");
	fflush(stdin);
	fflush(stdout);
	fgets(userName, 100, stdin);

	char string[100];
	printf("Enter your user name to verify: ");
	fflush(stdin);
	fflush(stdout);
	fgets(string, 100, stdin);

	compare_userName(string, userName);

	return 0;
}

/*@param two arraies of  user name and string that you
 *       want to check if there are equal
 *
 * @brief function to compare two strings
 */

void compare_userName(char string[100], char userName[100]) {

	//strcmpi if equal will return 0 so the condition will be true
	if (strcmpi(string, userName) == 0) {
		printf("same username ,verified");
	} else {
		printf("not equal any username ,try again");

	}
}

