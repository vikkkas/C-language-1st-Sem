#include<stdio.h>
#include<string.h>
int main()
{
    char src[100],tar[100];
    int n;
    printf("Enter a string:");
    gets(src);
    printf("the length of string is : %d\n",strlen(src));
    printf("enter number of charachter to be copied to new string:");
    scanf("%d",&n);
    strncpy(tar,src,n);
    printf("The new string is :");
    puts(tar);

    return 0;
}