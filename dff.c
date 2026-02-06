#include<stdio.h>
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("enter eny lowercase letter: ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("uppercase letter=%c",upper);
    return 0;
}
