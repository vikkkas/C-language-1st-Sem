#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt","w");
    putc('c',ptr);

    return 0;
}