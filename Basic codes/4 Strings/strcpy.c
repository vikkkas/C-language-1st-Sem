#include<stdio.h>
#include<string.h>
int main()
{
    char *str;
    str="This";
    char str2[50];
    strcpy(str2,str);
    printf("now str2 is %s",str2);

    return 0;
}