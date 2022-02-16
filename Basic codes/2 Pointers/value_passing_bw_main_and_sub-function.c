#include<stdio.h>
void SumAndAvg(int a,int b,int *sum,float *avg);
int main()
{
    int a=3,b=6,sum;
    float avg;

    SumAndAvg(a,b,&sum,&avg);

    printf("the sum of the given two numbers is %d\n",sum);
    printf("the avg of the given two numbers is %f",avg);
    
    

    return 0;
}

void SumAndAvg(int a,int b,int *sum,float *avg){
        *sum=a+b;
        *avg= (float)*sum/2;
}