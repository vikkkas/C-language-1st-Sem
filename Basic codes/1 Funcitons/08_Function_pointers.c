// Callback Function
#include<stdio.h>
#include<string.h>
int sum(int a, int b){
    return a+b;
}
void greetGMandExecute(int (*fptr)(int , int)){
    printf("Good morning user\n");
    printf("The sum of 5 and 7 is %d \n",fptr(5,7));
}
int main()
{
    int (*ptr)(int , int);
    ptr = &sum;
    greetGMandExecute(ptr);
    return 0;
}