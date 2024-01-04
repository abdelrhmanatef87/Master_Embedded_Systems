/*
 * main.c
 *
 *  Created on: Jan 3, 2024
 *      Author: future
 */

#include "Linked_List_Students_Project.h"

int main(void) {
	char temp_text[2];
	int numOfStudents = 0;
	while (1) {

		DPRINTF("\n==============================")
		DPRINTF("\n\t Choose one of the following options \n")
		DPRINTF("\n\t 1: Add Student  ")
		DPRINTF("\n\t 2: Delete Student  ")
		DPRINTF("\n\t 3: View Students   ")
		DPRINTF("\n\t 4: Delete Alls  ")
		DPRINTF("\n\t 5: Get Nth Student  ")
		DPRINTF("\n\t 6: Get Number of Students  ")
		DPRINTF("\n\t 7: Get Nth Student From The End  ")
		DPRINTF("\n\t 8: Get Middle Student  ")
		DPRINTF("\n\t 9: Reverse Students ")
		DPRINTF("\n\t 10: Detection of Loops ")
		DPRINTF("\n\t Enter an option number: ")

		gets(temp_text);
		DPRINTF("\n==============================")
		switch (atoi(temp_text)) {

		case 1:
			AddStudent();
			break;
		case 2:
			DeleteStudent();
			break;
		case 3:
			ViewStudents();
			break;
		case 4:
			DeleteAll();
			break;
		case 5:
			Get_Nth_Node();
			break;
		case 6:
			numOfStudents = Get_Length(g_P_FirstStudent);
			printf("\nNumber of Students: %d \n", numOfStudents);
			break;
		case 7:
			Get_Nth_Node_From_end();
			break;
		case 8:
			Middle_Student();
			break;
		case 9:
			Reverse_List();
			break;
		case 10:
			Detect_Loop();
			break;

		default:
			DPRINTF("\nEnter valid option...\n")
			break;
		}

	}
	return 0;
}
