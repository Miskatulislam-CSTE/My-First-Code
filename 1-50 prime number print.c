#include<stdio.h>
int main()
{
    int i,n,check;
    printf("prime numbers between 1and 50: \n");
    for(n=1; n<=50; n++)
    {
        check=0;
        if(n<=1)
        {
            continue;
        }
        else
        {
            for(i=2; i<n; i++)
            {
                if(n%i==0)
                {
                    check=1;
                    break;
                }
            }
        }
        if(check==0)
            printf("%d\n",n);
    }
    return 0;

}
