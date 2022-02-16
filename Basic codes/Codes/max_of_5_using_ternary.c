#include<stdio.h>
int main()

{
    int a,b,c,d,e,L1,L2,L3,L4;
    printf("enter 5 number: \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    L1=a>b?a:b;
    L2=L1>c?L1:c;
    L3=L2>d?L2:d;
    L4=L3>e?L3:e;
    printf("Maximum amongst these five is %d",L4);

}5

