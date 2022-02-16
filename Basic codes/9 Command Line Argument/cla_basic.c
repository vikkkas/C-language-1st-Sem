#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n",argc);
    for(int i=0;i<argc;i++){
    printf("This argument at index number is %d has a value of %s\n",i,argv[i]);
    }
    
    return 0;
}