#include<stdio.h>
#include<string.h>
void encrypt(char *st);
int main()
{
    char st[] = "vikas prasad";
    encrypt(st);
    printf("Encrypted String : %s",st);
    return 0;
}
void encrypt(char *st){
    while(*st!='\0'){
        *st = *st + 1;
        st++;
    }
}