/*
 ============================================================================
 Name        : EX4_C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numberOfElements;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &numberOfElements);

	int elements[numberOfElements];

	printf("\nInput %d number of elements in the array : \n", numberOfElements);
	for (int i = 0; i < numberOfElements; i++) {

		printf("element-%d :", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &elements[i]);
	}

	// make pointer to point in the last element in the array
	int *pointer_to_elements = elements + numberOfElements - 1;
	printf("\r\nThe elements of array in reverse order are : \n");

	for (int i = numberOfElements; i > 0; i--) {

		printf("element-%d : %d ", i, *pointer_to_elements--);
		printf("\n");
	}

	return 0;
}
