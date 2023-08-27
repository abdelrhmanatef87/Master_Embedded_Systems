/*
 ============================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int first_number, second_number, sum;

	printf("Enter two integers: ");

	fflush(stdin);
	fflush(stdout);

	scanf("%d %d", &first_number, &second_number);

	sum = first_number + second_number;

	printf("sum: %d", sum);

	return 0;
}
