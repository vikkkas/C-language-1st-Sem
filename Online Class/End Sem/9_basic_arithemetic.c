#include <stdio.h>
int main()
{
    int a, b;
    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;
    printf("Enter any two number:");
    scanf("%d%d", ptrA, ptrB);

    printf("SUM=%d\n", (*ptrA) + (*ptrB));
    printf("DIFFRENCE=%d\n", (*ptrA) - (*ptrB));
    printf("PRODUCT=%d\n", (*ptrA) * (*ptrB));
    printf("QUOTIENT=%d\n", (*ptrA) / (*ptrB));
    printf("REMAINDER=%d\n", (*ptrA) % (*ptrB));
    return 0;
}