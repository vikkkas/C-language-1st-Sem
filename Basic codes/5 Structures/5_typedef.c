#include<stdio.h>
#include<string.h>
typedef struct employee 
{
    int code;
    float salary;
    char name[10];
}emp;               // gives an alias name to struct employee.
void show(emp emp1);
int main()
{
    emp  e1;
    emp  *ptr;
    ptr = &e1;
    (*ptr).code = 101;
    //ptr->code = 101;  also valid
    (*ptr).salary = 35.5;
    strcpy((*ptr).name,"Vikas");
    show(e1);
    return 0;
}
void show(emp emp1){
    printf("Code:%d\n",emp1.code);
    printf("salary:%f\n",emp1.salary);
    printf("name:%s\n",emp1.name);

}