/*
 ============================================================================
 Name        : EX1_C_Program_to_Store_Information_of_a_Student_Using_Structure.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * structure contains name and roll number and marks of student
 * where m_ in the variable names indicates that it is member
 */
struct struct_student {

	char m_name[50];
	int m_rollNumber;
	float m_marks;
};

int main(void) {

	struct struct_student Sstudent;

	// getting the information about the student
	printf("Enter information of students: \r\n");

	//taking student name
	printf("Enter name: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", &Sstudent.m_name);

	//taking the roll number
	printf("Enter roll number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &Sstudent.m_rollNumber);

	//taking the student marks
	printf("Enter marks: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &Sstudent.m_marks);

	//displaying the information that was taken
	printf("\r\nDisplaying Information: \n");
	printf("Name: %s\n", Sstudent.m_name);
	printf("Roll: %d\n", Sstudent.m_rollNumber);
	printf("Marks: %.2f", Sstudent.m_marks); //just two numbers after the floating point

	return 0;
}
