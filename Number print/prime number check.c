#include<stdio.h>
int main()
{
    int number,i,check;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number<=1)
    {
        check=1 ;
    }
    else
    {
    for(i=2; i*i<=number; i++)
    {
        if(number%i==0)
        {
            check++ ;
            break ;
        }
    }
    }
    if(check==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0 ;
}
