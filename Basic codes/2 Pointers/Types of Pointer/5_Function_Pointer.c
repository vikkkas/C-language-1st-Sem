#include<stdio.h>
#include<string.h>
int sum(int a, int b){
    return a + b;
}
int main()
{
    printf("The sum of 1 and 2 is %d\n",sum(4,6)); // testing the function
    int (*fptr) (int,int); // declaring the function pointer
    fptr = &sum // creating a function pointer
    int d;
    d =  (*fptr)(4,6); // derefrencing the pointer
    printf("%d\n",d);

    return 0;
}