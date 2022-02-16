#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], sub[100];
    int count = 0, count1 = 0, l1,l2;
    printf("\nEnter a string : ");
    gets(str);

    l1 = strlen(str);

    printf("\nEnter a substring : ");
    gets(sub);

    l2 = strlen(sub);
    for (int i = 0; i < l1;i++)
    {
        int j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
    }
    printf("%s occurs %d times in %s", sub, count1, str);
}