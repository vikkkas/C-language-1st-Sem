#include<stdio.h>
#include<string.h>
int main()
{
    int *ptr;
    {
        int i = 0;
        ptr = &i; 
    }
    // ptr is now dangling.
    printf("%d",*ptr);
    return 0;
}