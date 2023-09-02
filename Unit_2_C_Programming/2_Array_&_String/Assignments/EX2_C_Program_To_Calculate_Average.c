/*
 ============================================================================
 Name        : EX2_C_Program_To_Calculate_Average.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

	int number_of_data;
	printf("Enter the number of data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number_of_data);

	float data[number_of_data];
	float sum = 0;

	for (int i = 0; i < number_of_data; i++) {

		printf("Enter number : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &data[i]);
		sum += data[i];
	}

	float average = sum / number_of_data;

	printf("Average = %.2f ", average);

	return 0;
}
