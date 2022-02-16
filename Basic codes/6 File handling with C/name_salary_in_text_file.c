#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char name1[20],name2[20];
    int salary1,salary2;
    printf("Enter the name of the employee 1:");
    scanf("%s",name1);
    printf("Salary1: ");
    scanf("%d",&salary1);
    printf("Enter the name of the employee 2:");
    scanf("%s",name2);
    printf("Salary2: ");
    scanf("%d",&salary2);
    ptr = fopen("name_salary.txt","w");
    fprintf(ptr,"%s,%d\n",name1,salary1);
    fprintf(ptr,"%s,%d",name2,salary2);
    fclose(ptr);

    return 0;
}