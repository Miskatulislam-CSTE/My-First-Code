#include<stdio.h>
int main()
{
    int n,reaminder,revarge_n,real_number ;
    printf("Enter any number: ");
    scanf("%d",&n);
    real_number=n ;
    while(n!=0)
    {
        reaminder =n%10 ;
        revarge_n=revarge_n*10+reamider ;
        n=n/10;

    }
    printf("the real number=%d\n",real_number);
    printf("the revarge number=%d\n",revarge_n);
    return 0;
}

