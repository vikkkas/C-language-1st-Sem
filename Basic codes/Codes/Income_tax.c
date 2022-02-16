#include<stdio.h>

int main()
{
    float a,b=0;
    printf("Enter the Amount \n");
    scanf("%f",&a);
    
    if(a>=250000 && a<=500000)
    {
        b=b+0.05*(a-250000);
    }
    else if(a>=500000 && a<=1000000)
    {
        b=b+0.20*(a-500000);
    }
    else if(a>=1000000)
    {
        b=b+0.30*(a-1000000);
    }
    printf("Your net income tax is paid is %f \n",b);
    
    return 0 ;
}