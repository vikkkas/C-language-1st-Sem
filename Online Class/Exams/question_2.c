#include<stdio.h>
int main()
{
    int C[10][10],A[10][10],B[10][10],ch;
    printf("*** Menu-driven program for matrix operations in C ***");
    printf("\n Matrix A\n");
    printf("\n Enter the numbers you want to insert in the matrix A:");
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            printf("\t");
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n Matrix A:\n");
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            printf("%d",A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n Enter the numbers you want to insert in the matrix B:");
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            printf("\t");
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n Matrix B:\n");
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            printf("%d",B[i][j]);
            printf("\t");
        }
    printf("\n");
    }
    printf("\n Enter 1 for Addition of Matrix A & B ");
    printf("\n Enter 2 for Subtraction Of Matrix A and matrix B ");
    printf("\n Enter 3 for Multiplication of Matrix A & B \n");
    scanf("\n %d",&ch);
    switch(ch)
    {
        case 1:printf("\n A+B=\n");
        for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("%d \t",C[i][j]);
            }
        printf("\n");
        }
        break;
        case 2:printf("\n A-B=\n");
        for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=2;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
                printf("%d \t",C[i][j]);
            }
        printf("\n");
        }
        break;
        case 3:printf("\n A*B=\n");
        for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=2;j++)
            {
                C[i][j]=(A[i][1]*B[1][j])+(A[i][2]*B[2][j]);
                printf("%d \t",C[i][j]);
            }
        printf("\n");
        }
        break;
        default: printf("\n Wrong Choice");
        }
        return 0;
}