//  C program read integers and appends sum to the end in File Handling
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,i,n,sum=0;
    FILE *fp;
    //Writing numbers to the file
    fp=fopen("temp.txt","w");
    if(fp==NULL)
    {
    printf("File could not open!!");
    exit(0);
    }

    printf("How many numbers? ");
    scanf("%d",&n);
    printf("\nEnter numbers in the file:\n");

    for(i=0;i<n;++i)
    {
    scanf("%d",&a);
    putw(a,fp);
    }
    fclose(fp);

    //Reading the file and doing sum
    fp=fopen("temp.txt","r");
    if(fp==NULL)
    {
    printf("File could not open!!");
    exit(0);
    }

    while((a=getw(fp))!=EOF)
    sum+=a;

    fclose(fp);

    //Appending sum to the file
    fp=fopen("temp.txt","a");
    if(fp==NULL)
    {
    printf("File could not open!!");
    exit(0);
    }

    putw(sum,fp);
    fclose(fp);

    //Displaying file after append
    fp=fopen("temp.txt","r");
    if(fp==NULL)
    {
    printf("File could not open!!");
    exit(0);
    }

    printf("\nFile after append:\n");
    while((a=getw(fp))!=EOF)
    printf("%d ",a);

    fclose(fp);

    return 0;}