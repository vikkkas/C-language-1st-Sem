#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee VIKAS = {001,34.5,"VIKAS"};

    printf("Code is %d\n",VIKAS.code);
    printf("Salary is %f\n",VIKAS.salary);
    printf("name is %s\n",VIKAS.name);

    struct employee ROHIT = {0};

    printf("Code is %d\n",ROHIT.code);
    printf("Salary is %f\n",ROHIT.salary);
    printf("name is %s\n",ROHIT.name);
    return 0;
}