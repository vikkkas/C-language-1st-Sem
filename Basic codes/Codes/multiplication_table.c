#include<stdio.h>
int main()
{
    int i,n;
    printf("*****Multiplication Table*****\n",n);
    printf("Enter the number whose multiplication table is to known:");
    scanf("%d",&n);
    printf("*****Multiplication Table of %d*****\n",n);

    for(i=1;i<=10;i++)
    {
    printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}