/*
 ============================================================================
 Name        : EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

	float first_matrix[2][2];
	float second_matrix[2][2];

	short i;
	short j;

	printf("Enter the elements of 1st matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			printf("Enter a%d%d : ", i + 1, j + 1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f", &first_matrix[i][j]);

		}
	}

	printf("Enter the elements of 2st matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			printf("Enter b%d%d : ", i + 1, j + 1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f", &second_matrix[i][j]);

		}
	}

	//override the sum in the first matrix
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			first_matrix[i][j] += second_matrix[i][j];

		}
	}

	printf("Sum Of The Matrix: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			printf("%0.1f  ", first_matrix[i][j]);

		}
		printf("\n");
	}

	return 0;
}
