#include<stdio.h>
void npr(int a, int b);

int main()
{
    int a,b;
    printf("P(n/r!) \n");
    printf("Enter the nth Value : ");
    scanf("%d",&a);
    printf("Enter the rth Value : ");
    scanf("%d",&b);
    npr(a,b);
}

void npr(int a , int b)
{
    int i=0,n=b,fact=1;
    float k;
    while(i<n)
    {
        i++;
        fact *=i;
        //printf("%d \n",fact);
    }
    k=a/fact;
    printf("The Value of Permutation [P(n/r!)] is : %f",k);
}