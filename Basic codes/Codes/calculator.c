#include<stdio.h> 
int main()
{
    float a,b,c;
    char operation;
    printf("Enter any two number:");
    scanf("%f%f",&a,&b);
    printf("Enter the operation which is to be performed:");
    scanf("%s",&operation);  
    switch(operation){
        case '+' :
        c=a + b;
        printf("Result:%f",c);
        break;
        

        case '-' :
        c=a - b;
        printf("Result:%f",c);
        break;
        

        case '/' :
        c=a / b;
        printf("Result:%f",c);
        break;
        

        case '*' :
        c=a * b;
        printf("Result:%f",c);
        break;

        case '%' :
        c=(int)a%(int)b;
        printf("Result:%f",c);
        break;
        
        default:
            printf("invalid operator");
    }
    return 0;
}