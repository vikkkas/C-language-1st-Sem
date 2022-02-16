#include<stdio.h>
#define PI 3.14 // compiler replaces pi with 3.14 everywhere in the program
#define square(r) r*r // works like function
int main()
{
    float var = PI;
    int R = 4;
    printf("The value of PI is %f \n",var);
    printf("The area of circle is %f",PI * square(R));

    return 0;
}