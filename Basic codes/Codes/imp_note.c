#include<stdio.h>
int main()
{
   int a=3;
    printf("%d %d %d",a,++a,a++);

    return 0;
}

// OUTPUT will be 5 5 3 because in printf the sequence is from right to left.
// also it depends on the behaviour of compiler.
// according to gcc it is from right to left
// argument passing depends on compiler