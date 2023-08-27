/*
 ============================================================================
 Name        : EX6_C_Program_to_Swap_Two_Numbers.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a, b, temp;

	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b);

	//swap using temp variable
	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a = %.2f \n", a);
	printf("After swapping, value of b = %.2f \n", b);

	return 0;
}
