/*
 ============================================================================
 Name        : Swapping_two_arrays_with_different_length.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype
void array_input(int number_list[], int items_number);
void swapping_arrays(int first_array[], int updateSize, int second_array[]);
void array_printing(int number_list[], int items_number);

int main(void) {

	int FirstArraySize;
	printf("Enter the number of items in the first list: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &FirstArraySize);

	int SecondArraySize;
	printf("Enter the number of items in the second list: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &SecondArraySize);

	//getting the max size between them to use in swapping function
	int updateSize;
	if (FirstArraySize > SecondArraySize) {
		updateSize = FirstArraySize;
	} else {
		updateSize = SecondArraySize;

	}

	int first_array[FirstArraySize];
	printf("Enter items of first list: ");
	fflush(stdin);
	fflush(stdout);
	array_input(first_array, FirstArraySize);

	int second_array[SecondArraySize];
	printf("Enter items of second list: ");
	fflush(stdin);
	fflush(stdout);
	array_input(second_array, SecondArraySize);

	//Before swapping
	printf("Before swapping\r\n");
	printf("First Array: \n");
	array_printing(first_array, FirstArraySize);
	printf("\nSecond Array:\n ");
	array_printing(second_array, SecondArraySize);

	//swapping process
	swapping_arrays(first_array, updateSize, second_array);

	//After swapping
	printf("\r\nAfter swapping\r\n");
	printf("First Array:\n ");
	array_printing(first_array, SecondArraySize);
	printf("\nSecond Array:\n ");
	array_printing(second_array, FirstArraySize);

	return 0;
}

/*@param two integers represent the number of items
 *       and array of these items
 *
 * @brief just function to take the input of items
 *        of the the array
 */
void array_input(int number_list[], int items_number) {

	for (int i = 0; i < items_number; i++) {
		scanf("%d", &number_list[i]);

	}
}

/*@param two arraies of integers represent the first and second
 *       lists and integer number to represet the maximun size
 *       between them
 *
 * @brief just function to swap  the  items of two given arrays
 *        with different list
 */
void swapping_arrays(int first_array[], int updateSize, int second_array[]) {

	int temp;
	for (int i = 0; i < updateSize; i++) {
		temp = first_array[i];
		first_array[i] = second_array[i];
		second_array[i] = temp;
	}
}

/*@param two integers represent the number of items
 *       and array of these items
 *
 * @brief just function to print the items
 *        of the the array
 */
void array_printing(int number_list[], int items_number) {
	for (int i = 0; i < items_number; i++) {
		printf("%d ", number_list[i]);

	}
}
