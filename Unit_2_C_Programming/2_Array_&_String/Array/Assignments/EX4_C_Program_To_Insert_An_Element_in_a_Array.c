/*
 ============================================================================
 Name        : EX4_C_Program_To_Insert_An_Element_in_a_Array.c
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

	int data[number_of_elements + 1];
	int i, element, location;

	printf("Enter elements: ");
	fflush(stdin);
	fflush(stdout);

	for (i = 0; i < number_of_elements; i++) {

		scanf("%d", &data[i]);

	}

	for (i = 0; i < number_of_elements; i++) {

		printf("%d ", data[i]);

	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &element);

	printf("\nEnter the location: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &location);

	for (i = number_of_elements; i > location - 1; i--) {
		data[i] = data[i - 1];
	}

	data[location - 1] = element;

	for (i = 0; i < number_of_elements + 1; i++) {

		printf("%d ", data[i]);

	}

	return 0;
}
