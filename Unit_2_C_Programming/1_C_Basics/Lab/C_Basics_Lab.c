/*
 ============================================================================
 Name        : C_Basics_Lab.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	for (int i = 0; i <= 9; i++) {

		for (int j = i; j <= 9; j++) {
			printf("%d ", j);
		}

		printf("\n");
	}

	return 0;
}
