#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a in the largest");
    else if(b>a && b>c)
        printf("b in the largest");
    else if(c>a && c>b)
        printf("c in the largest");
    else
        printf("all equall");
    return 0;
}
