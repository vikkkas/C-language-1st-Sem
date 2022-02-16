#include<stdio.h>
int rev(int a);
int main()
{
    int n,d;
    printf("enter an integer: ");
    scanf("%d", &n);
    d=rev(n);
    printf("Reversed number = %d" ,d);
}
int rev(int a){
    int rev=0,remainder;
    while(a!=0)
    {
        remainder = a % 10;
        rev = rev * 10 + remainder;
        a /= 10;
    }
    return rev;
}