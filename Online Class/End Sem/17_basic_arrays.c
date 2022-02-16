#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    int *ptr;
    ptr = &arr[n];
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
    printf("Value of element %d is %d and address is %p.\n",i+1,arr[i],ptr);
    }
    return 0;
}