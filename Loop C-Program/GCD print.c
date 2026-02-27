#include<stdio.h>
int main()
{
    int num1,num2,a,b,temp,gcd;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    a=num1;
    b=num2 ;
    while(b!=0)
    {
        temp=b;
        b=a%b ;
        a=temp ;
    }
    gcd=a;
    printf("GCD is = %d",a);
    return 0;
}
