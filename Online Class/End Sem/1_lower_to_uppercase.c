#include<stdio.h>
int main()
{
    char alp;
    char uppercase,lowercase;
    printf("Enter any character:");
    scanf("%s",&alp);
    if(alp>=65 && alp<=90){
        alp=1;
    }
    else if (alp>=97 && alp <=122){
        alp=2;
    }
    switch (alp)
    {
    case  '1' :
        printf("the entered charachter %s is an uppercase character and its lowercase charachter will be %s ",alp,alp+32);
        break;
    case  '2' :
        printf("the entered charachter %s is an lowercase character and its uppercase charachter will be %s ",alp,alp-32);
        break;
    default: 
    printf("The entered character is an invalid character as per english aplhabets");
        break;
    }

    return 0;
}