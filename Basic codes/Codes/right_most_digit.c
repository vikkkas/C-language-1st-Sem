#include<stdio.h>
int main()
{
    float a;
    int b;
    printf("Enter a no. :",a);
    scanf("%f",&a);

    b=(int)a%10;
    printf("The last digit of the given no. is :%d",b);
    return 0;
}
