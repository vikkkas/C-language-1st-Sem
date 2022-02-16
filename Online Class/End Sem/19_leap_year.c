#include <stdio.h>
void leap();
int year;
int main()
{
    printf("Enter a year: ");
    scanf("%d", &year);
    leap();
    return 0;
}
void leap(){
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
}