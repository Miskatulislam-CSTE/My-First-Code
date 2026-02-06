#include<stdio.h>
int main()
{
    float a,b;
    printf("enter two numbers: ");
    scanf("%f%f",&a,&b);
    printf("sum=%f\n",a+b);
    printf("sub=%f\n",a-b);
    printf("mult=%f\n",a*b);
    if(b!=0)
        printf("divi=%f",a/b);
    else
        printf("divi=not possible(divisor is 0)\n");
    return 0;
}
