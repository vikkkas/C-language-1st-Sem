#include<stdio.h>
int sum(int a , int b);
int main()
{
    int x=4 , y=7;
    printf("The value of x and b is %d and %d respectively\n",x,y);
    printf("The value of x+y is %d\n",sum(4,3));
    printf("The value of x and y after fuction call is %d and %d respectively\n",x,y);
    return 0;
}
int sum(int a , int b){
    int c=a+b;
    a=13213;
    b=15615;
    return c;
}