#include<stdio.h>
int main()
{
    int i,n=55,prime=1;

    for(i=2; i<n ; i++)
    {
        if(n%i==0){
        prime=0;
        break;
        }
    }

    if(prime==0){
        printf("The given no. is not a prime number.");
    }
    else{
        printf("The given no. is a prime number.");
    }
    return 0;
}