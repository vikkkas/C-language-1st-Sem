#include<stdio.h>
int main()
{
    int marks[4]; // Allocate space for 4 integers.

    printf("Enter the value of marks for student 1:\n");
    scanf("%d",&marks[0]);
    printf("Enter the value of marks for student 2:\n");
    scanf("%d",&marks[1]);
    printf("Enter the value of marks for student 3:\n");
    scanf("%d",&marks[2]);
    printf("Enter the value of marks for student 4:\n");
    scanf("%d",&marks[3]);

    printf("The marks of student 1 , student 2, student 3 and student 4 are %d , %d , %d and %d respectively.",marks[0],marks[1],marks[2],marks[3]);

    return 0;
}