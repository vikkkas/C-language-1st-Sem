#include<stdio.h>
int main()
{   
    int n;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    int array[n];
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                for(int k=j;k<n-1;k++){
                    array[k]=array[k+1];
                    n--;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }

    return 0;
}