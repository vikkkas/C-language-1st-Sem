#include<stdio.h>
#include<string.h>
int main()
{
    char line[50],s;
    int i,x;
    printf("Enter a character: ");
    gets(line);
    printf("What do you want to do with character?\n1. Lowercase Transformation\n2. Uppercase Transformation\n");
    scanf("%d", &x);


    switch (x) {
    case 1:
        for(i=0;line[i]!='\0';i++)
            {
                if(line[i]>='A'&&line[i]<='Z')
                {
                    printf("The lowercase: \n");
                    puts(strlwr(line));
                }
            }
        break;
    case 2:
        for(i=0;line[i]!='\0';i++)
            {
                if(line[i]>='a'&&line[i]<='z')
                {
                    printf("The Uppercase: \n");
                    puts(strupr(line));

                }
            }
        break;

    }
    return 0;

}
