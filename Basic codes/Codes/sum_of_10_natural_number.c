#include<stdio.h>
int main()
{
    int i,sum=0,n=10; 

    for(i=0; i<=n ; i++)
    {
        sum+=i;
    }
    printf("The sigma of (1 to 10) is : %d",sum);
    return 0;
}