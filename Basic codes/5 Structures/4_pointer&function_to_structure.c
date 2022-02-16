#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp);
int main()
{
    struct employee  e1;
    struct employee  *ptr;
    ptr = &e1;
    (*ptr).code = 101;
    //ptr->code = 101;  also valid
    (*ptr).salary = 35.5;
    strcpy((*ptr).name,"Vikas");
    show(e1);
    return 0;
}
void show(struct employee emp){
    printf("Code:%d\n",emp.code);
    printf("salary:%f\n",emp.salary);
    printf("name:%s\n",emp.name);

}