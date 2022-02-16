#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character or number:");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
    {
        printf("The given character is an capital letter");
    }
    else if(a>=97 && a<=122)
    {
        printf("The given character is an small letter");
    }
    else
    {
    printf("The entered character is a number or a special character");
    }
    return 0;
}