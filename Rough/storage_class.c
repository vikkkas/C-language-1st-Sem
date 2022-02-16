#include<stdio.h>
#include<string.h>
int func(int a , int b){
    auto int sum;
    sum = a + b;
    return sum;
}
int main()
{
   int sum = func(3,4);
    printf("%d",sum);

    return 0;
}