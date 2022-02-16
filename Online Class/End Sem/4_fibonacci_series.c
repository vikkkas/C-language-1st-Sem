#include<stdio.h>
int series(int n);
void printSeries(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The nth term of this fibonacci series is fibonacci series:%d\n ",series(n));
    printSeries(n);
    
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
void printSeries(int n ){
    int series(int n);
    for(int i=0; i<=n;i++){
        printf("%d \t",series(n-i));
    }

}