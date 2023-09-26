/*
 ============================================================================
 Name        : EX2_C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 Author      : Abdelrhman Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * struct two members to represent distance
 * in feets and inches
 */
struct struct_distance {

	int m_feet;
	float m_inch;
};

//prototypes of functions
struct struct_distance read_distance(int distanceNumber);
struct struct_distance Add_Distances(struct struct_distance FirstDistance,
		struct struct_distance SecondDistance);

int main(void) {

	//read two distances
	struct struct_distance FirstDistance = read_distance(1);
	struct struct_distance SecondDistance = read_distance(2);

	//calculate their summation
	struct struct_distance sum_distance = Add_Distances(FirstDistance,
			SecondDistance);

	printf("\nsum of distances = %d '-%0.1f\" ", sum_distance.m_feet,
			sum_distance.m_inch);

	return 0;
}

/*
 * @param distance number variable to represent
 *        which this if first or second distance
 *
 * @brief taking distance in feet and inches
 *
 * @return  variable distance struct_distance type
 *          contain values taken from the user
 */
struct struct_distance read_distance(int distanceNumber) {

	struct struct_distance distance;

	printf("\n");
	printf("Enter information for distance number %d \n", distanceNumber);
	printf("Enter feet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &distance.m_feet);

	printf("Enter inch: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &distance.m_inch);

	return distance;
}

/*@param two variable struct_distance type , to represent
 *       first and second distances
 *
 *@brief func adding two distances by add feets and inches of them
 *
 * @return summation of the two distances in struct_distace type
 */

struct struct_distance Add_Distances(struct struct_distance FirstDistance,
		struct struct_distance SecondDistance) {

	struct struct_distance sum_distance;

	//one feet = 12 inches
	sum_distance.m_feet = FirstDistance.m_feet + SecondDistance.m_feet
			+ (int) (FirstDistance.m_inch + SecondDistance.m_inch) / 12;

	sum_distance.m_inch = (FirstDistance.m_inch + SecondDistance.m_inch)
			- (int) (FirstDistance.m_inch + SecondDistance.m_inch);

	return sum_distance;
}
