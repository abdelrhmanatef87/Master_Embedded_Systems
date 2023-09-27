/*
 ============================================================================
 Name        : EX6_C_Finding_The_Size_of_Both_Union_and_Structure.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

union U_job {
	char name[32];
	float salary;
	int worker_no;

} U_union;

struct S_job {
	char name[32];
	float salary;
	int worker_no;

} S_structure;

int main(void) {
	printf("Size of the union is: %d", sizeof(U_union)); //Size of the union is: 32
	printf("\nSize of the structure is: %d", sizeof(S_structure)); //Size of the structure is: 40

	return 0;
}
