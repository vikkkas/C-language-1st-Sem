#include<stdio.h>
int main()
{
    int a,b;
    a=34;
    b=6;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%b=%d\n",a%b);
    return 0;
}
/*here while division we get answer as 5 instead of the actual answer
 which is because we are using variable in integers and the answer of this is in float*/
