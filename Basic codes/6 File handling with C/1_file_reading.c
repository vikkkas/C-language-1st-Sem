#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    int num,num2;
    ptr = fopen("vikas.txt","r");
    if(ptr == NULL){
        printf("This file does not exist.");
    }
    else{
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);
        printf("The value of num is %d \n",num);
        printf("The value of num2 is %d",num2);
    }
    return 0;
}