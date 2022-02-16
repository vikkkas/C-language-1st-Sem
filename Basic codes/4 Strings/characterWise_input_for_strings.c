#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],c;
    int i=0;
    printf("enter value for first string:");
    scanf("%s",&str1);
    printf("enter value for second string character by character:");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]= c;
        i++;
    }

    printf("the value of str1 is %s\n",str1);
    printf("the value of str2 is %s\n",str2);

    return 0;
}