/*
 * Linked_List_Students_Project.h
 *
 *  Created on: Jan 3, 2024
 *      Author: future
 */

#ifndef LINKED_LIST_STUDENTS_PROJECT_H_
#define LINKED_LIST_STUDENTS_PROJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

//instead write it redundant code to solve  eclipse problem
#define DPRINTF(...) fflush(stdin);fflush(stdout);\
					 printf(__VA_ARGS__);\
					 fflush(stdin);fflush(stdout);

//effective data part in linkedlist
struct Sdata {
	unsigned int ID_m;
	char name_m[40];
	float height_m;
};

//LinkedList node [effective data , pointer to next student]
struct SStudent {

	struct Sdata student;
	struct SStudent *PNextStudent_m;
};

//head pointer to the first element in the list
extern struct SStudent *g_P_FirstStudent;

//APIs
void FillStudent(struct SStudent *PNewStudent);
int DeleteStudent();
void AddStudent();
void ViewStudents();
void DeleteAll();
void Get_Nth_Node();
int Get_Length();
void Get_Nth_Node_From_end();
void Middle_Student();
void Detect_Loop();
void Reverse_List();

#endif /* LINKED_LIST_STUDENTS_PROJECT_H_ */
