#include <stdio.h>
int main()
{
    int matr1[3][3], matr2[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter the value of element a%d%d matrix 1:\n", i + 1, j + 1);
            scanf("%d", &matr1[i][j]);
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter the value of element a%d%d for matrix 2:\n", i + 1, j + 1);
            scanf("%d", &matr2[i][j]);
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("value of sum of elements of both the matrices a%d%d is : %d\n", i + 1, j + 1, (matr1[i][j]) + (matr2[i][j]));
        }
    }

    return 0;
}