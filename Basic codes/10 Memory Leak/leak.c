#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i=0;
    int *i2;
    while(i<45555){
        printf("Welcome\n");
        i2=malloc(37444 * sizeof(int));
        if(i % 100 == 0){
            getchar();
        }
        i++;
        free(i2); // without this memory leak will happen.
    }

    return 0;
}