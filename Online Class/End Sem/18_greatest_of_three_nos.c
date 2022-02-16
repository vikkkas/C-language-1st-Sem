#include <stdio.h>
int max();
int a, b, c;
int main()
{
    int d;
    printf("Enter three integer values:");
    scanf("%d%d%d", &a, &b, &c);
    d = max();
    printf("the maximum of all the three numbers is : %d", d);
    return 0;
}
int max()
{
    if (a > b && a > c)
    {

        return a;
    }
    else if (b > c)
    {
        return b;
    }

    else
    {
        return c;
    }
}