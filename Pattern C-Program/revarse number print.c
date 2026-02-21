#include<stdio.h>
int main()
{
    int number,n,reaminder,revarse_number=0;
    printf("Enter any number: ");
    scanf("%d",&number);
    n=number ;
    while(n!=0)
    {
        reaminder=n%10 ;
        revarse_number=revarse_number*10+reaminder ;
        n=n/10 ;
    }
    printf("revarse number is=%d",revarse_number);
    return 0;
}
