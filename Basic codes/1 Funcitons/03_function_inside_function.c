#include<stdio.h>
void GoodMorning();
void GoodEvening();
void GoodNight();
int main()  
    
{
    GoodMorning();

    return 0;
}

void GoodMorning(){
    printf("good morning vikas\n");
    GoodEvening();
    
}


void GoodEvening(){
    printf("good Evening vikas\n");
    GoodNight();
}


void GoodNight(){
    printf("good night vikas\n");
}