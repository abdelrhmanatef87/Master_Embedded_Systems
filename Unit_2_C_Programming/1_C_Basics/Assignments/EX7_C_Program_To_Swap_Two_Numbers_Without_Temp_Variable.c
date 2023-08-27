/*
 ============================================================================
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a, b;

	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b);

	// swaping without temp variable assume a = 10 and b = 20
	a = a + b;  //a = 30
	b = a - b;  //b = 10
	a = a - b;	//a = 20

	printf("After swapping, value of a = %.2f \n", a);
	printf("After swapping, value of b = %.2f \n", b);

	return 0;
}
