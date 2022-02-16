#include<stdio.h>
int main()
{
    int i=5;
    printf("The value after i++ is:%d\n",++i);
    printf("The value after i++ is:%d\n",i++);
    printf("The value after i++ is:%d\n",i);
    i+=20;
    printf("The value after i++ is:%d",i);

    return 0;
}

// i++ ---> pehle print kare fir increament.
// ++i ---> pehle increament fir print.