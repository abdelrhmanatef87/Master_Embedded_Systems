/*
 ============================================================================
 Name        : Last_Occurance.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype
int Last_Occurance(int numbers_list[], int items_number, int item);

int main(void) {

	int items_number;
	printf("Enter the number of items: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &items_number);

	int numbers_list[items_number];
	printf("Enter an list of numbers: ");
	fflush(stdin);
	fflush(stdout);

	for (int i = 0; i < items_number; i++) {
		scanf("%d", &numbers_list[i]);
	}

	int item;
	printf("Enter the item to search : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &item);

	int index = Last_Occurance(numbers_list, items_number, item);
	printf("the result : %d", index);

	return 0;
}
/*@param take three integers, items number to store in array number list
 *       and take the item we want to search for
 *
 * @brief  array to find last occurance of a given number in array
 *
 * @return integer number represent the index of the last occurancer
 */

int Last_Occurance(int numbers_list[], int items_number, int item) {

	int i;
	for (i = items_number - 1; i >= 0; i--) {
		if (item == numbers_list[i]) {
			return i + 1;
			break;
		}

	}
	if (i < 0) {
		return -1; //item not exist in the list
	}

	return 1; // just to remove  the warning
}
