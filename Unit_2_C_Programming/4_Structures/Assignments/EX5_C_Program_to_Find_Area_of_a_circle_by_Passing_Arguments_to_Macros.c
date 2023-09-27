/*
 ============================================================================
 Name        : EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define area(r) (PI * r * r)

int main(void) {

	int radius;
	float area;

	printf("Enter the radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &radius);

	area = area(radius);

	printf("Area = %.2f", area);

	return 0;
}

