#include<stdio.h>
int main()
{
    char a;
    printf("Enter any letter of the english alphabet:");
    scanf("%c",&a);

    if(a<=122 && a>=97)
        printf("\nThe given letter is in lowercase.");

        else 
        printf("\nThe given letter is in uppercase.");

    return 0;
}