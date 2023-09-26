/*
 ============================================================================
 Name        : EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * struecture for complex number that contain
 * both float numbers real and imaginary
 */
struct struct_complex {

	float m_real;
	float m_imaginary;
} Sfrist_complex, Ssecond_complex, Ssum_complex;

//prototypes
struct struct_complex read_complexNumber(int Number, char order[5]);
struct struct_complex Add_Complex(struct struct_complex FirstComplex,
		struct struct_complex SecondComplex);

int main(void) {

	Sfrist_complex = read_complexNumber(1, "st");
	Ssecond_complex = read_complexNumber(2, "nd");
	Ssum_complex = Add_Complex(Sfrist_complex, Ssecond_complex);

	printf("Sum = %.1f + %.1fi ", Ssum_complex.m_real,
			Ssum_complex.m_imaginary);

	return 0;
}

/*@param integer number to represent the position of complex number
 *       that will read  1 or 2 ..
 *
 *@brief func to read complix number that contain real and imaginary
 *       numbers
 *
 * @return structure from struct complex type which was read
 */
struct struct_complex read_complexNumber(int Number, char order[5]) {

	struct struct_complex complexNumber;

	printf("\n");
	printf("for %d%s complex number \n", Number, order);
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &complexNumber.m_real, &complexNumber.m_imaginary);

	return complexNumber;
}

/*@param two structure from struct_complex type FirstComplex represent first
 *       complex number and secondComplex represent second complex number
 *
 * @breif function to calculate sum of two complex numbers by passing
 *        structure to function
 *
 * @return struct variable contain addition of two complex numb
 */

struct struct_complex Add_Complex(struct struct_complex FirstComplex,
		struct struct_complex SecondComplex) {

	struct struct_complex sum_complex;

	sum_complex.m_real = FirstComplex.m_real + SecondComplex.m_real;
	sum_complex.m_imaginary = FirstComplex.m_imaginary
			+ SecondComplex.m_imaginary;

	return sum_complex;
}
