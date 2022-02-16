#include<stdio.h>
int main()
{
    int i=0, n=3,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("The factorial of given no. is:%d",factorial);

    return 0;
}