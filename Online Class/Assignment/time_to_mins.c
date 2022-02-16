#include<stdio.h>   
float time(int hour, int mins, float secs);
int main()
{
    printf("The time in minutes is:%f",time(7,2,10));
    return 0;
}
float time(int hour,int mins, float secs){
    float c;
    return c=hour*60+mins+secs/60;
}
