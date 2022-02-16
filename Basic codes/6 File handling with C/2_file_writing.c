#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    int number = 10 ;
    fptr = fopen("generated.txt","w");
    fprintf(fptr,"The number is %d",number);
    fclose(fptr);

    return 0;
}