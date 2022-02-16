#include<stdio.h>
#include<string.h>
int main()
{
    char st1[45]="Hello ";
    char *str = "Vikas";
    int val = strcmp(st1,str);   // Compares two string.
    printf("value of val is %d",val); // learn as first string ASCII value - second string of mismatching character.
    return 0;                    // if value is negative its -1.
}                                // for positive +1.
                                 // if both string are equal then its 0. 