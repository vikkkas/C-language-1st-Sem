#include<stdio.h>
int main()

{
    int num;
    printf("enter any number:");
    scanf("%d",&num);

    if (num==1)
    {
        printf("the number is 1");
    }
    else if (num==2)
    {
        printf("the number is 2");
    }
    else if (num==3)
        printf("the number is 3");

    else
    {
        printf("the number is not 1,2 or 3");
    }
    return 0;
}
// here the else condition is optional.
