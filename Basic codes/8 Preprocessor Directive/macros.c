#include<stdio.h>
#include<string.h>
int main()
{
    printf("The file name is %s\n",__FILE__);
    printf("The time is %d\n",__TIME__);
    printf("The date is %s\n",__DATE__);
    printf("Line No. is %d\n",__LINE__);
    printf("ANSI Check : %d\n",__STDC__);

    return 0;
}