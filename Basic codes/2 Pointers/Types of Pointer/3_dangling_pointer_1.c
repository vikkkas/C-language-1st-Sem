#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
    // De-allocating or free variable memory
   int *ptrr=(int *)malloc(sizeof(int)); 
   int x=80; 
   ptrr=&x; 
   free(ptrr); 
   return 0; 
}