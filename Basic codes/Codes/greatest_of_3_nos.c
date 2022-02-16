#include<stdio.h> 

int main()
{
    int a,b,c;

    printf("Enter three integer values:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){

        printf("The greatest among this nos. is : %d",a);

    }
    else if (b>c){
        printf("The greatest among this nos. is: %d",b);

    }

    else {
        printf("The greatest among this nos. is: %d",c);
    }
    return 0;
}