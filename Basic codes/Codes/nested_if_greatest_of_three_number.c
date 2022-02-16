#include<stdio.h>
int main()

{
    int a,b,c;

    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b)&&(a>c))
    {
      printf("The given number a is =%d the largest",a);

     }

    else if(b>c)
     {
         printf("The given number b is =%d the largest",b);

     }
         else
        {
            printf("The given number c is =%d the largest",c);
        }

    return 0;
}
