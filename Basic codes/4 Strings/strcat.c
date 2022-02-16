#include<stdio.h>
#include<string.h>
int main()
{
    char st1[45]="Hello ";
    char *str = "Vikas";
    strcat(st1,str);
    printf("Now st1 is %s",st1);
    return 0;
}