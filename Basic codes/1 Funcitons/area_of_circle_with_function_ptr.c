#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float Edistance(int x1, int y1, int x2, int y2){
    int a = (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
    return sqrt(a);
}
float areaOfCircle(int x1, int y1, int x2, int y2,float (*distance)(int, int, int, int)){
    return 3.14*distance(x1,y1,x2,y2)*distance(x1,y1,x2,y2);
}
int main()
{
    int x1,x2,y1,y2;
    float dst;
    printf("****Enter the coordinates of diameter****\n");

    printf("Enter the value of X1:");
    scanf("%d",&x1);
    
    printf("Enter the value of X2:");
    scanf("%d",&x2);

    printf("Enter the value of y1:");
    scanf("%d",&y1);

    printf("Enter the value of y2:");
    scanf("%d",&y2);
 
    dst = areaOfCircle(x1,x2,y1,y2,Edistance);
    printf("the area of the given circle is %.2f\n",dst);

    return 0;
}