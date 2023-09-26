/*
 ============================================================================
 Name        : EX4_C_Program_to_Store_Information_of_Students_Using_Structure.c
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

//prototypes
struct struct_student read_students(void);
void print_students(struct struct_student Sstudent[10]);

int main(void) {

	struct struct_student Sstudent[10];

	//getting the information about the student
	printf("Enter information of students: \r\n");
	//take each student information for 10 students
	for (int i = 0; i < 10; i++) {
		Sstudent[i] = read_students();
	}

	printf("\r\nDisplaying Information: \n");
	//print students information
	print_students(Sstudent);

	return 0;
}

struct struct_student read_students(void) {

	struct struct_student Sstudent;

	//taking student name
	printf("Enter name: ");
	fflush(stdin);
	fflush(stdout);
	fgets(Sstudent.m_name, 50, stdin);

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

	printf("\n");

	return Sstudent;
}

void print_students(struct struct_student Sstudent[10]) {

	for (int i = 0; i < 10; i++) {
		printf("\nName: %s", Sstudent[i].m_name);
		printf("Roll: %d\n", Sstudent[i].m_rollNumber);
		printf("Marks: %.2f\n", Sstudent[i].m_marks); //just two numbers after the floating point
	}
}

