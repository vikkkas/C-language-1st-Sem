#include<stdio.h>
// Sum is an function which takes a and b as inputs and returns an integers as an output.
int sum(int a, int b); // Function Prototype Declaration
int main()
{
    int c;
    c = sum(2,5); // Function Call
    printf("The Sum is : %d \n",c);
    return 0; 
}

int sum(int a , int b){
    int result;
    result= a+b;
    return result;
}