#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    result=a+b;
    printf("sum=%d\n",result);
    result=a-b;
    printf("sub=%d\n",result);
    result=a*b;
    printf("mult=%d\n",result);
    if(b!=0)
    {
    result=a/b;
    printf("divi=%d\n",result);
    result=a%b;
    printf("remainder=%d\n",result);
    }
    else
    {
        printf("divi=not possible(divisor is zero)");
    }
    return 0;
}
