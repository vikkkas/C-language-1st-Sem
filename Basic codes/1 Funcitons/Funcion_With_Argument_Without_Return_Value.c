#include<stdio.h>
void prntstr(int n)
{
    for(int i=0;i<n;i++)
    printf("%c",'*');
}
int main()
{
    prntstr(5);
    return 0;
}