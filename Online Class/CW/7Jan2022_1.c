#include<stdio.h>
int main()
{
    int a,b,i=0;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    for(i=a; i<b; i)
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }
    
    
    return 0;
}