#include<stdio.h>
void add(int a);
int main()
{
    int i=4;
    printf("the value of i is %d \n",i);
    add(i);
    printf("the address of  of i in main function is  %u \n",&i);


    return 0;
}

void add(int a){
    printf("the address of the variable in function is:%u\n",&a);
}
