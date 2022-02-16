#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *p , *tmp  ;
    char lwr[60] , upr[60];
    int len , i;
    p = fopen("temp1.txt","rb");
    fgets(lwr,500,p);
    printf("The string is %s\n",lwr);
    len = strlen(lwr);
    printf("Length is %d\n",len);
    for(i=0;i<len;i++)
    {
       switch (lwr[i])
        {
            case 96 ... 122:
                lwr[i] = lwr[i] - 32;
                break; 
        }
    }
    printf("The string in uppercase will be %s",lwr);
    fclose(p);
    p = fopen("temp1.txt","w");
    for(i=0;i<=len;i++)
    {
        fputc(lwr[i],p);
    }
    fclose(p);
}