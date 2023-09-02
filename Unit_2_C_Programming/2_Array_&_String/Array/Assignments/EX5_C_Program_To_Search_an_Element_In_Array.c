/*
 ============================================================================
 Name        : EX5_C_Program_To_Search_an_Element_In_Array.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number_of_elements;
	printf("Enter the number of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number_of_elements);

	int data[number_of_elements];
	int i, element;

	printf("Enter elements: ");
	fflush(stdin);
	fflush(stdout);

	for (int i = 0; i < number_of_elements; i++) {

		scanf("%d", &data[i]);

	}

	for (i = 0; i < number_of_elements; i++) {

		printf("%d ", data[i]);

	}

	printf("\nEnter the element to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &element);

	for (int i = 0; i < number_of_elements; i++) {
		if (data[i] == element) {
			printf("Number found at the location = %d", i + 1);
			break;
		}
	}

	if (i == number_of_elements - 1) {
		printf("Not Found ");
	}

	return 0;
}
