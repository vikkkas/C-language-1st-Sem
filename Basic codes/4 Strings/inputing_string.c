#include<stdio.h>
int main()
{
    char str[34];
    printf("Enter your name:");
    scanf("%s",str); // Here without & also it will work.
    printf("your name is %s",str);

    return 0;
}