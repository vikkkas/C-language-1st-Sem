#include<stdio.h>
void multable(int *mul,int num){
    printf("**** The multiplication table of %d ****\n",num);
    for(int i=0; i<10; i++){
        mul[i] = num*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("%d X %d = %d \n",num,i+1,mul[i]);
    }
    printf("*******************************\n");
}
int main()
{
    int mul[3][10];
    multable(mul[0],2);
    multable(mul[1],7);
    multable(mul[2],9);

    

    return 0;
}