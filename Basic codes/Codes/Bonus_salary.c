#include<stdio.h>

int main()
{
    float s,b;
    char g;
    printf("What is your salary ? \n");
    scanf("%f",&s);
    printf("What is your Sex/Gender (M/F) ? \n");
    scanf("%s",&g);

    if(g=='M'||g=='m')
    { if(s<=10000)
      {
          b=0.07*s;
      }
      else
      {
          b=0.05*s;
      }
    }

    else if(g=='F'||g=='f')
    {
        if(s<=10000)
        {
            b=0.12*s;
        }
        else
        {
            b=0.1*s;
        }
    }
    printf("Your Bonus is :%f",b);
    return 0 ;
}