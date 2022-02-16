#include<stdio.h>
#include<string.h>
int leng(char *string);
int main()
{
    char str1[] = "Vikas";
    printf("string length:%d",leng(str1));

    return 0;
}
int leng(char *string){
    char *str = string;
    int len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    return len;
}