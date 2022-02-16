#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    int n;
    printf("Enter a character:");
    gets(str1);
    printf("for lowercase press 1 and for uppercase press 2:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("lowercase:%s",strlwr(str1));
        break;
    case 2:
        printf("uppercase:%s",strupr(str1));
        break;    
    
    default:
        printf("invalid input");
        break;
    }

    return 0;
}