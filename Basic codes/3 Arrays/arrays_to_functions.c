#include<stdio.h>
void printarray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    ptr[2]=5555; // This value will change in arr array of main  as well.
}
int main()
{   
    int arr[] = {1,1654,1465,1651,52,88};
    printarray(arr,6);  
    printf("%d",arr[2]);
    return 0;
}
