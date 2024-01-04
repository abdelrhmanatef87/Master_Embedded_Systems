/*
 ============================================================================
 Name        : Linked_List_Students_Project.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "Linked_List_Students_Project.h"

//head pointer to the first element in the list
struct SStudent *g_P_FirstStudent = NULL;

/*@brief funcation to take student information id , name , height
 *
 * @param pointer to structure of student that you want to
 *        fill it is information
 *
 * @return nothing (void)
 */

void FillStudent(struct SStudent *PNewStudent) {

//getting the ID of the student
	char temp_text[40];
	DPRINTF("\nEnter ID: ")
	gets(temp_text);
	PNewStudent->student.ID_m = atoi(temp_text);

//getting the name of the student
	DPRINTF("\nEnter Name: ")
	gets(PNewStudent->student.name_m);

//getting the height of the student
	DPRINTF("\nEnter Height: ")
	gets(temp_text);
	PNewStudent->student.height_m = atof(temp_text);
}
/*@brief funcation to delete specific student based on id
 *
 *@param  none
 *
 * @return integer value 1 if it is deleted 0 if do not
 */
int DeleteStudent() {

//take selected id to delete
	char temp_text[4];
	DPRINTF("\nEnter Selected ID to delete it : ")
	gets(temp_text);
	int Selected_ID = atoi(temp_text);

//define pointer to head to naviagete till get selected student
	struct SStudent *PSelectedStudent = g_P_FirstStudent;
//point to last element to connect the list after delete node
	struct SStudent *PPreviousStudent = NULL;

//check if the list is empty
	if (g_P_FirstStudent == NULL) {

		DPRINTF("There is no students to delete ...\n")

	} else { //if list not empty

		while (PSelectedStudent) { //loop untill last element point to null or till get selected one
			if (PSelectedStudent->student.ID_m == Selected_ID) {

				//if the first element not the required one
				if (PPreviousStudent != NULL) {
					PPreviousStudent->PNextStudent_m =
							PSelectedStudent->PNextStudent_m;

				} else {  // 1st student == selected id

					g_P_FirstStudent = PSelectedStudent->PNextStudent_m;

				}
				free(PSelectedStudent);
				return 1;
			}

			PPreviousStudent = PSelectedStudent;
			PSelectedStudent = PSelectedStudent->PNextStudent_m;
		}

		//if loop finished without any id == selected id
		DPRINTF("\n can not Find Selected Student ID..\n")
		return 0;
	}
	return 1;
}

/*@brief funcation to Add  student on the list
 *
 *@param  none
 *
 * @return none (void)
 */
void AddStudent() {

//pointer of the new record which will point to null
	struct SStudent *PNewStudent;
//pointer to the last record to make it point to new record
	struct SStudent *PLastStudent;

//check if the List is empty
	if (g_P_FirstStudent == NULL) {

		//create new student using dynamic memory allocation
		PNewStudent = (struct SStudent*) malloc(sizeof(struct SStudent));
		g_P_FirstStudent = PNewStudent;

	} else {
		//point to the head to navigate untill the last elements
		PLastStudent = g_P_FirstStudent;
		while (PLastStudent->PNextStudent_m) {
			PLastStudent = PLastStudent->PNextStudent_m;
		}
		//create new student using dynamic memory allocation
		PNewStudent = (struct SStudent*) malloc(sizeof(struct SStudent));
		//check if malloc return null does not have space
		if (PNewStudent == NULL) {
			DPRINTF("Can Not Create New Student.....\n")
		} else {
			//make last element point to new one
			PLastStudent->PNextStudent_m = PNewStudent;
		}
	}

//Fill new record
	FillStudent(PNewStudent);
//set  pointer next student of new student to null
	PNewStudent->PNextStudent_m = NULL;
}

/*@brief funcation to view all students on the list
 *
 *@param  none
 *
 * @return none (void)
 */

void ViewStudents() {

//pointer to point to head and navigate till last student
	struct SStudent *PStudent = g_P_FirstStudent;
	unsigned int count = 0;

//if list is empty
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\nEmpty List ...\n")
	} else {
		while (PStudent) { //if not empty loop till this pointer point to null (last elment)

			//print student information
			DPRINTF("\nRecord Number %d \n", count + 1)
			DPRINTF("\tID : %d\n", PStudent->student.ID_m)
			DPRINTF("\tName : %s\n", PStudent->student.name_m)
			DPRINTF("\tHeight : %0.1f\n", PStudent->student.height_m)

			//point to next student
			PStudent = PStudent->PNextStudent_m;
			count++;
		}
	}

}

/*@brief funcation to delete all student on the list
 *
 *@param  none
 *
 * @return none (void)
 */

void DeleteAll() {

//pointer to point to head and navigate till last student
	struct SStudent *PCurrentStudent = g_P_FirstStudent;

//check if the list is empty nothing to delete
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\nEmpty List ...\n")
	} else {

		//if not empty loop untill reach last student(termination: pointer point to null)
		while (PCurrentStudent) {

			struct SStudent *PDelete = PCurrentStudent;
			//point to next student
			PCurrentStudent = PCurrentStudent->PNextStudent_m;
			//delete the last student
			free(PDelete);
		}

		//After delete all records make head points to null
		g_P_FirstStudent = NULL;
	}

}

/*@brief funcation to view Nth student on the list
 *
 *@param  none
 *
 * @return none (void)
 */

void Get_Nth_Node() {

//take nth node from user
	char temp_text[4];
	DPRINTF("\nEnter Nth Node: ")
	gets(temp_text);
//pointer to point to head and navigate till Nth one
	struct SStudent *list = g_P_FirstStudent;
	int count = atoi(temp_text);
	count--;

//if list empty
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\nThere is no nodes empty list ....  \n")
	} else {
		//loop till nth one
		while (count) {
			//point to next element
			list = list->PNextStudent_m;
			count--;
		}
	}
//check if user enter nth node and nth more than number of nodes
	if (list) {
		DPRINTF("\nRecord Number %d \n", atoi(temp_text))
		DPRINTF("\tID : %d\n", list->student.ID_m)
		DPRINTF("\tName : %s\n", list->student.name_m)
		DPRINTF("\tHeight : %0.1f\n", list->student.height_m)
	} else {
		DPRINTF("\n Record %d doesnot exis..\n", atoi(temp_text))
	}
}

/*
 *Get length using loops method
 */

//void Get_Length() {
//	int count = 0;
//	struct SStudent *P_length = g_P_FirstStudent;
//
//	if (g_P_FirstStudent == NULL) {
//		DPRINTF("\nNumber of Students %d \n", 0)
//
//	} else {
//		while (P_length) {
//			P_length = P_length->PNextStudent_m;
//			count++;
//		}
//	}
//	DPRINTF("\nNumber of Students %d \n", count)
//
//}
/*@brief get number of students using recursive code
 *
 *@param pointer to sturcture that we will pass head to it
 *
 *@return integer value number of students
 */
int Get_Length(struct SStudent *p_student) {

//if list is empty number of students is zero
	if (g_P_FirstStudent == NULL) {
		return 0;
	} else {
		// our termination condition
		if (p_student == NULL) {
			return 0;
		} else {
			// recursive parts
			return 1 + Get_Length(p_student->PNextStudent_m);
		}
	}
}

/*@brief get middle student if  odd  1->2->3->4->5 then output should be 3,
 *       if even  1->2->3->4->5->6 then output should be 4
 *
 *@param pointer to sturcture that we will pass head to it
 *
 *@return integer value number of students
 */

void Middle_Student() {

	/*
	 * Traverse linked list using two
	 * pointers. Move slow pointer by
	 *one and fast pointer by two.
	 */
	struct SStudent *slow_ptr = g_P_FirstStudent; //point to element one
	struct SStudent *fast_ptr = g_P_FirstStudent->PNextStudent_m->PNextStudent_m; //point to element three

	int middle_count = 1;
	//check if list empty ....
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\n\tEmpty list ...\n");
	} else {
		while (fast_ptr) {
			slow_ptr = slow_ptr->PNextStudent_m;
			fast_ptr = fast_ptr->PNextStudent_m;
			middle_count++;
		}

		//print student information
		DPRINTF("\nRecord Number %d (middle student) \n", middle_count)
		DPRINTF("\tID : %d\n", slow_ptr->student.ID_m)
		DPRINTF("\tName : %s\n", slow_ptr->student.name_m)
		DPRINTF("\tHeight : %0.1f\n", slow_ptr->student.height_m)
	}
}

/*@brief function to get Nth student from the end of the list
 *
 *@param none
 *
 *@return none (void)
 */

void Get_Nth_Node_From_end() {

	//take nth node from the end
	char temp_text[4];
	DPRINTF("\nEnter Nth Node From the End: ")
	gets(temp_text);
	int nth_end = atoi(temp_text);

	int count = nth_end;
	int length = Get_Length(g_P_FirstStudent);

	struct SStudent *main_ptr = g_P_FirstStudent;
	struct SStudent *refer_ptr = g_P_FirstStudent;

	//check if list empty ....
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\n\tEmpty list ...\n");
	} else if (nth_end > length) { //check if nth student more than number of students...
		DPRINTF("\n\tEnter valid number, number of students: %d \n", length)
	} else {
		//loop untill the difference between them == nth
		while (count) {
			refer_ptr = refer_ptr->PNextStudent_m;
			count--;
		}
		//loop untill refer_ptr getting the end
		while (refer_ptr) {
			main_ptr = main_ptr->PNextStudent_m;
			refer_ptr = refer_ptr->PNextStudent_m;
		}

		//print student information
		DPRINTF("\nRecord Number %d From End \n", nth_end)
		DPRINTF("\tID : %d\n", main_ptr->student.ID_m)
		DPRINTF("\tName : %s\n", main_ptr->student.name_m)
		DPRINTF("\tHeight : %0.1f\n", main_ptr->student.height_m)
	}

}

/*@brief function to reverse students order
 *
 * @param none
 *
 * @return none (void)
 */
void Reverse_List() {

	struct SStudent *Ptr_Current = g_P_FirstStudent;
	struct SStudent *Ptr_Previous = NULL;
	struct SStudent *Ptr_Next = NULL;

	//check if list empty ....
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\n\tEmpty list ...\n");
	} else {
		while (Ptr_Current) {

			Ptr_Next = Ptr_Current->PNextStudent_m;
			Ptr_Current->PNextStudent_m = Ptr_Previous;
			Ptr_Previous = Ptr_Current;
			Ptr_Current = Ptr_Next;
		}
		g_P_FirstStudent = Ptr_Previous;

	}

	//call function to print the list after reverse
	ViewStudents();

}

/*@brief function to detect loop using Floyd’s Cycle-Finding Algorithm
 *
 * @param none
 *
 * @return none (void)
 */
void Detect_Loop() {

	/*
	 * Traverse linked list using two
	 * pointers. Move slow pointer by
	 *one and fast pointer by two.
	 */
	struct SStudent *slow_ptr = g_P_FirstStudent; //point to element one
	struct SStudent *fast_ptr = g_P_FirstStudent->PNextStudent_m->PNextStudent_m; //point to element three

//check if list empty ....
	if (g_P_FirstStudent == NULL) {
		DPRINTF("\n\tEmpty list ...\n")
	} else {

		while (fast_ptr) {
			slow_ptr = slow_ptr->PNextStudent_m;
			fast_ptr = fast_ptr->PNextStudent_m;

			if (slow_ptr == fast_ptr) {

				DPRINTF("\n\t There is a Loop ...\n")
				break;
			}
		}
		if (slow_ptr != fast_ptr) {

			DPRINTF("\n\t No Loop ...\n")
		}

	}

}

