#include<stdio.h>
#include<string.h>
void Decrypt(char *st);
int main()
{
    char st[] = "wjlbt!qsbtbe";
    Decrypt(st);
    printf("Decrypted String : %s",st);
    return 0;
}
void Decrypt(char *st){
    while(*st!='\0'){
        *st = *st - 1;
        st++;
    }
}