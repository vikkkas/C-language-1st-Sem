#include<stdio.h>
#include<math.h>
int fact(int a);
void series();
int n,r,c;
int main()
{
    printf("Enter the value of n:");
    scanf("%d",&n);
    series();

    return 0;
}
int fact(int a)
{
    int e=1;
    for(int i=1;i<=a;i++)
    {
       c= (e*=i);
    }
    return c;

}
void series(){
int fact(int a);
    float sum=0;
    float d;
    int f;
    
    for(r=1;r<=n;r++)
    {
        f=fact(r);
        sum+=(pow(r,r))/f;
    }
    
    printf("The sum of this expression is:%f",sum);
}