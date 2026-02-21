#include<stdio.h>
int main()
{
    float marks ;
    printf("your exam marks: ");
    scanf("%f",&marks);
    if(marks>=33)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}
