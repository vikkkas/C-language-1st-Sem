#include<stdio.h>
int takenumber();
int main()
{
    int c;
    c=takenumber();
    printf("\nEntered number is %d",c);
    
    return 0;
}

int takenumber(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    return a;
}