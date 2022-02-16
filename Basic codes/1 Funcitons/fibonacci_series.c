#include<stdio.h>
int series(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The nth term of this fibonacci series is fibonacci series:%d ",series(n));

    return 0;
}
int series(int n)
{
    if(n==1){
        return 0;
    }
    else if(n==2) {
        return 1;
    }
    else{
        return series(n-2)+ series (n-1);
    }
}