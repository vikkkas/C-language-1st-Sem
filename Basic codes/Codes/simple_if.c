// Convert the negative integer in to positive integer
#include<stdio.h>
int main()

{
    int number;
    printf("enter a negative integer:");
    scanf("%d",&number);


    if (number<0)

    {
        number=-number;
        printf("The absolute value of the given negative integer is: %d",number);
    }
    return 0;
}
