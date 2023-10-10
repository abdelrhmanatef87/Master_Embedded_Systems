/*
 ============================================================================
 Name        : EX5_C_Program_to_Show_a_Pointer_to_an_Array_Which_Contents_are_Pointer_to_Structure.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct struct_Empolyee {
	char m_EmployeeName[100];
	int m_EmployeeId;
};

int main(void) {

	struct struct_Empolyee s_employee1 = { "ahmed", 1001 };
	struct struct_Empolyee s_employee2 = { "Alex", 1002 };
	struct struct_Empolyee s_employee3 = { "samy", 1003 };

	// arr is an array of pointer to structure
	struct struct_Empolyee *arr[] = { &s_employee1, &s_employee2, &s_employee3 };
	//pointer to array which contents are pointer to structure
	struct struct_Empolyee (*(*pt)[3]) = &arr;

	/*
	 * pt = &arr so  (**(*&arr +1))
	 * *&arr = arr so (**(arr+1))
	 * *(arr+1) = arr[1] so *(arr[1])
	 * arr[1] =&s_emploee2 so it will be *&s_empolyee2
	 * so it will be s_employee2
	 *
	 */
	printf("Exmployee Name : %s \r\n", (**(*pt + 1)).m_EmployeeName);
	printf("Exmployee ID : %d \n", (**(*pt + 1)).m_EmployeeId);

	return 0;
}
