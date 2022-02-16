//CONVERSION TABLE DEGREE F INTO DEGREE C
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf(" **** Fahrenheit to degree table **** ");
    fahrenheit = 32;
    while (fahrenheit <= 212)
    {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("\n %f F = %f C", fahrenheit, celsius);
        fahrenheit++ ;
    }
    return 0;
}