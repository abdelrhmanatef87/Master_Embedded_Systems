/*
 ============================================================================
 Name        : EX15_C_Program_Calculator_Using_Switch.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char sign;
	float first_operand, second_operand, result;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &sign);

	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &first_operand, &second_operand);

	//simple calculator

	switch (sign) {

	case '+': {

		result = first_operand + second_operand;
		printf("%.2f %c %.2f = %.2f", first_operand, sign, second_operand,
				result);
		break;
	}

	case '-': {

		result = first_operand - second_operand;
		printf("%.2f %c %.2f = %.2f", first_operand, sign, second_operand,
				result);
		break;
	}

	case '*': {

		result = first_operand * second_operand;
		printf("%.2f %c %.2f = %.2f", first_operand, sign, second_operand,
				result);
		break;
	}

	case '/': {

		if (second_operand != 0) {

			result = first_operand / second_operand;
			printf("%.2f %c %.2f = %.2f", first_operand, sign, second_operand,
					result);
			break;

		} else {
			// run time error if we divide by zero
			printf("can not divide by zero. ");
			break;
		}
	}

	default: {
		printf("Enter a valid choice.");
	}

	}

	return 0;
}
