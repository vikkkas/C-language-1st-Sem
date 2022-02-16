#include<stdio.h>
#include<string.h>

typedef struct complex {
    int real;
    int complex;
}comp;

void display(comp c);

int main()
{
    comp nums[5];
    for(int i=0;i<5;i++){
        printf("Enter the value of real part of number %d :",i+1);
        scanf("%d",&nums[i].real);
        printf("Enter the value of imaginary part of the number %d :",i+1);
        scanf("%d",&nums[i].complex);
    }
    for(int i=0;i<5;i++){
        display(nums[i]);
    }
    return 0;
}
void display(comp c){
    printf("the value of real part of number %d \n",c.real);
    printf("the value of real part of number %d \n",c.complex);
}