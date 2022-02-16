#include<stdio.h>
int main()
{
    char *str="Vikas Prasad";
    printf("%s\n",str);
    str="Vikas"; // We can reinitialise an string if we use pointer while defining.
    printf("%s",str);

    return 0;
}