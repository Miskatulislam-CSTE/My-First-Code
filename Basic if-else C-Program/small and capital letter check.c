#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter any letter: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("capital letter");
    else if(ch>='a' && ch<='z')
        printf("small letter");
    else
        printf("not letter");
    return 0 ;
}
