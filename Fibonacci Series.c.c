#include<stdio.h>
int main()
{
    long long int first=0,second=1,fibo;
    int n, count=0;
    printf("Enter any range: ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count ;
        }
        else
        {
        fibo=first+second ;
        first=second ;
        second=fibo ;
        }
    printf(" %lld ",fibo);
    count++ ;
    }
    return 0;
}
