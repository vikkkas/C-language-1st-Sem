#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    int m,n;
    ptr = fopen("integer.txt","r");
    fscanf(ptr,"%d",&m);
    printf("The value of my integer is %d\n",m);
    fclose(ptr);
    ptr = fopen("integer.txt","w");
    n = m * 2 ;
    fprintf(ptr,"%d",n);
    fclose(ptr);

    return 0;
}