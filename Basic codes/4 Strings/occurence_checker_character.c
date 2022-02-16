#include<stdio.h>
#include<string.h>
int occurence(char *str,char c);
int main()
{
    char st[] = "Vikas";
    int n = occurence(st,'i');
    printf("occurences : %d",n);
    return 0;
}
int occurence(char *str,char c){
    int count = 0;
    while(*str!='\0'){
        if(*str == c){
            count++;
        }
        str++;
    }
    return count;
}
