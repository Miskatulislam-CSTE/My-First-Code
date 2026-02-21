#include<stdio.h>
#include<ctype.h>
int main()
{

    char lower,upper;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    upper= toupper(lower);
    printf("The uppercase letter is = %c\n",upper);

    return 0;
}
