#include<stdio.h>
float average(int a, int b, int c);
int main()
{
    int a,b,c;
    float d;
    printf("Enter value of a :\n");
    scanf("%d",&a);
    printf("Enter value of b :\n");
    scanf("%d",&b);
    printf("Enter value of c :\n");
    scanf("%d",&c);
    d=average(a,b,c);
    printf("The average of a,b and c is :%f",d); 

    return 0;
}

float average(int a, int b, int c){
    float result;
    result=(a+b+c)/3;
    return result;
    
}