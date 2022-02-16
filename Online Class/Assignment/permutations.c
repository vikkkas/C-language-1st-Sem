#include<stdio.h>
void perm(int a , int b);
int main()
{
    int n,r;
    printf("enter value of n and r for finding permutation P(n/r):");
    scanf("%d%d",&n,&r);   
    perm(n,r);
    return 0;
}

void perm(int a , int b)
{
    int c=1;
    int k;
    for (int i=1;i<=b;i++)
    {
        k=(c*=(a-b+i));
    }
    printf("The permutation for the given inputs is:%d",c);
}