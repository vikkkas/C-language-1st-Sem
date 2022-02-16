#include <stdio.h>
void converter(char conv, float temp);
int main()
{
    float temp;
    char conv;
    printf("Enter temperature:");
    scanf("%f", &temp);
    printf("For C to F press 'f' or'F' and for F to C press 'c' or 'C':");
    scanf("%s", &conv);
    converter(conv, temp);

    return 0;
}
void converter(char conv, float temp)
{
    float C, F;
    if (conv == 'c' || conv == 'C')
    {
        C = ((temp)-32) * 5 / 9;
        printf("The temperature in Celcius is : %f", C);
    }
    else if (conv == 'f' || conv == 'F')
    {
        F = (1.8 * (temp)) + 32;
        printf("The temperature in Farhenheit is : %f", F);
    }
}