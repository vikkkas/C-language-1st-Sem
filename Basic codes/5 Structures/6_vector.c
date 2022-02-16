#include<stdio.h>
#include<string.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector vec1, struct vector vec2){
    struct vector sum;
    sum.x = vec1.x + vec2.x;
    sum.y = vec1.y + vec2.y;
    return sum; 
}

int main()
{
    struct vector v1,v2,result;

    v1.x = 34;
    v1.y = 355;
    printf("X dim is %d and Y dim is %d \n",v1.x,v1.y);
    
    v2.x = 72;
    v2.y = 75;
    printf("X dim is %d and Y dim is %d \n",v2.x,v2.y);
    result = sumVector(v1,v2);
    printf("Sum of X dim of V1 & V2 is %d and Y dim is %d \n",result.x,result.y);
    return 0;
}