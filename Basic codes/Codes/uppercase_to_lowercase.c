#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character of english alphabet:");
    scanf("%c",&c);

    if(c>=65 && c<= 87){

    printf("Lowercase of the above letter is:%c",c+32);
    return 0;}
    else if (c>=97 && c<=119){
    printf("uppercase of the above letter is:%c",c-32);

    }
}