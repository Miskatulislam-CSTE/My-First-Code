#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,temp,reaminder;
    int revarse_number=0,palindrome ;
    printf("Enter any number: ");
    scanf("%d",&number);
    number=abs(number);
    temp=number ;
    while(temp!=0)
    {
        reaminder=temp%10 ;
        temp=temp/10 ;
        revarse_number=revarse_number*10+reaminder ;
    }
    if(number==revarse_number)

        printf("the number is palindrome");
        else
            printf("Not palindrome number");

    return 0 ;
}
