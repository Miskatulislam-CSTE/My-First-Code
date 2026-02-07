#include<stdio.h>
int main()
{
    float celcious_tem ,fahrenheit_temp ;
    printf("Enetr any celcious tempresure: ");
    scanf("%f",&celcious_tem);
    fahrenheit_temp= 1.8*celcious_tem+32 ;
    printf("fahrenheit tempresure=%.2f",fahrenheit_temp);
    return 0;
}
