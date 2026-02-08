#include<stdio.h>
int main()
{
    int a,b,sum,avg;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    avg=sum/2;
    printf("avg=%.2f",avg);
    return 0;
}

