#include<stdio.h>
int main ()
{
 int num, org_num, remainder, result=0;
 printf("Enter a three digit integer");
 scanf("%d", &num);
 org_num = num;
 while(org_num!=0)
 {
     remainder=org_num%10;
     result+=remainder*remainder*remainder;
     org_num/=10;
 }
 if(result==num)
 {
     printf("%d is armstrong number", num);
 }
 else
 {
     printf("%d is not a armstrong number", num);
    }
}
