#include<stdio.h>
int main()
{
    char str[100];
    printf("enter your name:");
    gets(str); // Scans multiple strings at a time. 
    puts(str); // printf for string

    return 0;
}