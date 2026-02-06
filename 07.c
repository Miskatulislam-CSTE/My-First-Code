#include<stdio.h>
int main()
{
    int a,b,value;
    char sign;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    value=a+b;
    sign ='+';
    printf("%d %c %d=%d\n",value);
    value=a-b;
    sign='-';
    printf("%d %c %d=%d\n",value);
    value=a*b;
    sign='*';
    printf("%d %c %d=%d\n",value);
    value=a/b;
    sign='/';
    printf("%d %c %d=%d\n",value);
    return 0;
}
