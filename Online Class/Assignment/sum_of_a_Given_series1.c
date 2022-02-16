#include<stdio.h>
#include<math.h>
void sum();
int n;
int main()
{
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum();

    return 0;
}
void sum(){
    int f=1,i;
    float b=0;
    for(i=1;i<=n;i++)
    {
        f*=i;
        b+=(pow(i,i)/f);
    }
    printf("the value of b is %f",b);
}