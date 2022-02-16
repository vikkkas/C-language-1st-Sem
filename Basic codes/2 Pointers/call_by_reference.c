#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int main()
{
    int x=4,y=7;
    printf("The value of x and y before swap is %d and %d respectively\n",x,y);
    // wrong_swap(x,y); // This swap will not work as it is by call by reference.
    swap(&x,&y); // Call by reference.
    printf("The value of x and y after swap is %d and %d respectively\n",x,y);
    

    return 0;
}
void wrong_swap(int a,int b){
    int temp;
    a=temp;
    a=b;
    b=temp;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}