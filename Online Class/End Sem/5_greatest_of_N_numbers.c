#include <stdio.h>
int main()
{
    int n;
    float b, a;

    printf(" How many Real numbers : ");
    scanf("%d", &n);
    printf(" Enter the %d Real numbers : ", n);
    scanf("%f", &a);
    for (int i = 1; i <= n - 1; i++)
    {
        scanf("%f", &b);
        a = (b > a ? b : a);
    }
    printf("\n\n The largest of %d real numbers using Conditional ternary Operator is : %f", n, b);
    return 0;
}
