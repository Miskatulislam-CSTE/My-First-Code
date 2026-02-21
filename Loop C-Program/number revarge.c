#include<stdio.h>
int main()
{
    int n,real_number,revarsed_number,reaminder;
    printf("Enter any number: ");
    scanf("%d",&n);
    real_number=n ;
    while(n!=0)
    {
        reaminder=n%10 ;
        revarsed_number= revarsed_number*10+reaminder ;
        n=n/10 ;
    }
    printf("The real number is=%d\n",real_number);
    printf("The revarsed number=%d\n",revarsed_number);
    return 0;
}
