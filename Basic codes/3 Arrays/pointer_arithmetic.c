#include<stdio.h>
int main()
{
    int i=34;
    int *ptr=&i;
    printf("The value of ptr is %u\n",ptr);
    ptr++; // incereases by 4 bytes;
    // ptr= ptr + 1 ; does the same also
    printf("The value of ptr is %u\n",ptr);


    return 0;
}