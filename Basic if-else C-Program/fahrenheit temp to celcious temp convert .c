#include<stdio.h>
int main()
{
    float celcious_tem ,fahrenheit_temp ;
    printf("Enetr any fahrenheit tempresure: ");
    scanf("%f",&fahrenheit_temp);
    celcious_tem= (float)5/9*(fahrenheit_temp-32);
    printf("celcious tempresure=%.2f",celcious_tem);
    return 0;
}

