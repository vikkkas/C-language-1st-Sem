#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The sum of first n natural numbers is %d",sum(n));

    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
         return n + sum(n-1);
    }
}