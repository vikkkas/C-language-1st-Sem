#include<stdio.h>
int main()

{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    (num<5) ? printf("%d is less than 5",num) : printf("%d is not less than 5",num);
    return 0;
}

