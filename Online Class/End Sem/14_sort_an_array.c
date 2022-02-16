#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Array Elements in ascending order are:");
    for(int i=0;i<n;i++){
        printf("\t%d\t",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nArray Elements in decending order are:");
    for(int i=0;i<n;i++){
        printf("\t%d\t",arr[i]);
    }
    return 0;
}   