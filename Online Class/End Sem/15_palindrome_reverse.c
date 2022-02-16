#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], rev[100];
    printf("Enter a string:");
    gets(str1);
    strrev(str1);
    strcpy(rev, str1);
    printf("The reversed string is :");
    puts(rev);
    int val = strcmp(str1, rev);
    if (val == '0')
    {
        printf("The given string is an palindrome.");
    }
    else if(val != '0')
    {
        printf("The given string is not an palindrome.");
    }

    return 0;
}