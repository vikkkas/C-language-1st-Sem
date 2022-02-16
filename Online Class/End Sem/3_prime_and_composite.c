#include<stdio.h>
void  numType(int n);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    numType(n);
    
    return 0;
}
void  numType(int n){
    int prime = 1;
    for(int i=2; i<n ; i++)
    {
        if(n%i==0){
        prime=0;
        
        }
    }
    if(prime==0){
        printf("The given no. is not a prime number.");
    }
    else{
        printf("The given no. is a prime number.");
    }

}
