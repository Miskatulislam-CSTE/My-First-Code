#include<stdio.h>
#include<stdlib.h>
int main()
{
       long long num1,num2,a,b,temp,GCD,lcm;
    printf("Enter two numbers: ");
    scanf("%lld%lld",&num1,&num2);
    a=llabs(num1);
    b=llabs(num2);
    while(b!=0)
    {
        temp=b ;
        b=a%b;
        a=temp ;
    }
    GCD=a ;
    printf("GCD is : %lld\n",GCD);
    if(GCD==0)
    {
        printf("lCM is : 0\n");
    }
    else
    {
    lcm=(llabs(num1)/GCD) *llabs(num2)  ;
    printf("LCM is : %lld\n",lcm);
    }
    return 0 ;
}
