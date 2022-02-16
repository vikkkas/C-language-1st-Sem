#include<stdio.h>
int main()
{
    int skip=5,i;
    printf("Enter the value of i:");
    scanf("%d",&i);
    
    while(i<10){
        i++;
        if(i!=skip){
            continue;
        }
        else{printf("value of i:%d\n",i);
            
        }
        
    }

    return 0;
}