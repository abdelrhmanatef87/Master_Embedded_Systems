/*
 ============================================================================
 Name        : EX3_C_Program_To_Find_Transpose_Of_A_Matrix.c
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

	int row, columns, i, j;

	printf("Enter rows and columns of the matrix : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &row, &columns);

	int matrix[row][columns];
	int transpose_matrix[columns][row];

	printf("\rEnter elements of the matrix: \n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < columns; j++) {
			printf("Enter element a%d%d : ", i + 1, j + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("Enterd Matrix: \n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < columns; j++) {
			printf("%d  ", matrix[i][j]);
		}
		printf("\r\n");
	}

	for (i = 0; i < columns; i++) {
		for (j = 0; j < row; j++) {
			transpose_matrix[i][j] = matrix[j][i];
		}
	}

	printf("Transpose of Matrix: \n");
	for (i = 0; i < columns; i++) {
		for (j = 0; j < row; j++) {
			printf("%d  ", transpose_matrix[i][j]);
		}
		printf("\r\n");
	}

	return 0;
}
