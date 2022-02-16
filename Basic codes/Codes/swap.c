#include<stdio.h>
int main()
{
    int n,m,e;
    printf(" Enter the first number\n");
    scanf("%d", &n);
    printf(" Enter the second number\n");
    scanf("%d", &m);
    e=n;
    n=m;
    m=e;
    printf("1st No= %d\n",n);
    printf("2nd no= %d\n",m);


}
