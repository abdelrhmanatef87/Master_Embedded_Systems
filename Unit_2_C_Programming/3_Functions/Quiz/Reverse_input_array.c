/*
 ============================================================================
 Name        : Reverse_input_array.c
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
void array_reverse(int number_list[], int items_number);
void array_printing(int number_list[], int items_number);

int main(void) {

	int items_number;
	printf("Enter the number of items: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &items_number);

	int number_list[items_number];
	printf("Enter an list of numbers: ");
	fflush(stdin);
	fflush(stdout);

	//take the array
	array_input(number_list, items_number);

	//making reverse of the array
	array_reverse(number_list, items_number);

	printf("Reverse: ");
	array_printing(number_list, items_number);

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

/*@param two integers represent the number of items
 *       and array of these items
 *
 * @brief just function to reverse the items
 *        of the the array
 */

void array_reverse(int number_list[], int items_number) {
	int temp, cnt = 0;
	for (int i = items_number - 1; i >= items_number / 2; i--) {
		temp = number_list[i];
		number_list[i] = number_list[cnt];
		number_list[cnt] = temp;
		cnt++;
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
