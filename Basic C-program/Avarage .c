#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=(a+b+c);
    avg=(float)sum/3 ;
    printf("Avarage =%.2f",avg);
    return 0;
}
