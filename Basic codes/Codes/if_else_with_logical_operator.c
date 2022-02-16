// C program for driving license
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    if (age<=90 && age>=18)
    {
        printf("You are eligible to give driving test for driving license.");

    }
    else
    {
        printf ("You are no eligible to apply for driving license.");
    }
    return 0;
}
// Code with harry : time stamp 2:55 hours is important for logical operators.
