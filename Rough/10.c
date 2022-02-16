#include<stdio.h>
#include<string.h>
   int minimumAttacks(int X, int K) {
    int n,T;
    int m=X;
    while(m<K){
        m=m+X+2*(n-1);
        n++;
    }
    T = n ;
    return T;
   }
int main()
{
    printf("%d",minimumAttacks(57,802315));

    return 0;
}