/*
 ============================================================================
 Name        : EX1_C_Program_to_Demonstrate_How_to_Handle_the_Pointers_in_the_Program.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m = 29;
	printf("Address of m : 0x%p \n", &m);
	printf("Value of m : %d \n", m);

	printf("\r\n");

	int *ab = &m;
	printf("Now ab is  assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%p \n", (int*) ab);
	printf("Value of pointer ab : %d \n", *ab);

	printf("\r\n");

	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%p \n", (int*) ab);
	printf("Value of pointer ab : %d \n", *ab);

	printf("\r\n");

	*ab = 7;
	printf("The pointer variable ab is assigned with value 7 now.\n");
	printf("Address of m : 0x%p \n", &m);
	printf("Value of m : %d \n", m);

	printf("\r\n");

	return 0;
}
