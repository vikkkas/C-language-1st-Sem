#include<stdio.h>
#include<string.h>
void slice(char *ptr,int m,int n);
int main()
{
    char st[]="vikas";
    slice(st,2,5);
    printf("%s",st);
    return 0;
}
void slice(char *ptr,int m,int n){
    int i=0;
    while((m+i)<n){
        ptr[i] = ptr[i+m];
        i++;
    }
    ptr[i-1] = '\0';
}