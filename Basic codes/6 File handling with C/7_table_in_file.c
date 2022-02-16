#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    int n;
    printf("Enter the number whose table is to be printed : ");
    scanf("%d",&n);
    ptr = fopen("table.txt","w");
    for(int i=0; i<10; i++){
        fprintf(ptr,"%d X %d = %d\n",n,(i+1),n*(i+1));
    }
    fclose(ptr);
    return 0;
}