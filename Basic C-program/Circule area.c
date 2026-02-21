#include<stdio.h>
#define pi 3.1416
int main()
{
    float area,radius;
    printf("Enter circle radius:  ");
    scanf("%f",&radius);
    area = pi*radius*radius ;
    printf("area is=%.2f",area);
    return 0 ;
}
