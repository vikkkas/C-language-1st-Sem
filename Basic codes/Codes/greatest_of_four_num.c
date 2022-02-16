#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any four number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b&&a>c&&a>d)
    {
        printf("The largest number amongst these four is:%d",a);
    }
    else if (b>a&&b>c&&b>d)
    {
        printf("The largest number amongst these four is:%d",b);
    }
    else if (c>a&&c>b&&c>d)
    {
        printf("The largest number amongst these four is:%d",c);
    }
    else
    {
        printf("The largest number amongst these four is:%d",d);
    }
    return 0;
}
