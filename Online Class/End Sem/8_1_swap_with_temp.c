#include<stdio.h>
int main()
{
    int a,b,temp;
    printf(" Enter the first number:");
    scanf("%d", &a);
    printf(" Enter the second number:");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("The first number after swap is = %d\n",a);
    printf("The second number after swap is = %d\n",b);


}
