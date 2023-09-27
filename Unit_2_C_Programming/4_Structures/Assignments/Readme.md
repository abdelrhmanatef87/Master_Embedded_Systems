# Homework 5

| **EX1: C Program to Store Information (name, roll, and marks) of a Student Using Structure** |
|---------------------------------------------------------------------------------------------|
| **Output** |
| Enter information of students: |
| Enter name: Adele |
| Enter roll number: 21 |
| Enter marks: 334.5 |
| Displaying Information |
| Name: Adele |
| Roll: 21 |
| Marks: 334.50 |

| **EX2: C Program to Add Two Distances (in inch-feet) System Using Structures** |
|------------------------------------------------------------------------------|
| **Output** |
| Enter information for the 1st distance |
| Enter feet: 12 |
| Enter inch: 3.45 |
| Enter information for the 2nd distance |
| Enter feet: 12 |
| Enter inch: 9.2 |
| Sum of distances = 25"-06.6" |

| **EX3: C Program to Add Two Complex Numbers by Passing Structure to a Function** |
|-------------------------------------------------------------------------------|
| **Output** |
| For the 1st complex number |
| Enter real and imaginary respectively: 2.3 4.5 |
| For the 2nd complex number |
| Enter real and imaginary respectively: 3.4 5 |
| Sum = 5.7 + 49.50i |

| **EX4: C Program to Store Information of Students Using Structure** |
|------------------------------------------------------------------|
| **Output** |
| Enter information of students: |
| For roll number 1 |
| Enter name: Tom |
| Enter marks: 98 |
| For roll number 2 |
| Enter name: Jerry |
| Enter marks: 89 |
| Displaying information of students: |
| Information for roll number 1: |
| Name: Tom |
| Marks: 98 |

| **EX5: C Program to find area of a circle, passing arguments to macros. [Area of circle=πr^2]** |
|---------------------------------------------------------------------------------------------|
| **Output** |
| Enter the radius: 3 |
| Area = 28.27 |

| **EX6: Write the output of this program** |
|------------------------------------------|
|
    
    
    union U_job
    {
        char name [32] ;
        float salary;
        int worker_no;
    
    } U_union;
    
    struct S_job
    {
        char name [32];
        float salary;
        int worker_no;
    
    } S_structure;
    
    
    int main ()
    {
        printf ("Size of the union is: %d", sizeof (U_union));
        printf ("\nSize of the structure is: %d", sizeof (S_structure));
    
        return 0;
    }|
