#include<stdio.h>
int main()
{
    char str[] = {'v','i','k','a','s','\0'};
    char str1[]= "vikas";
    char *ptr=str;
    printf("%s\n",str);
    printf("%s\n",str1);
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}