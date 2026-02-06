#include<stdio.h>
int main()
{
    int number,i,check;
    printf("prime numbers between 1 to 200:\n");
    for(number=1;number<=200;number++)
    {
        if(number<=1)
        {
            continue;
        }
        check=0 ;
            for(i=2;i*i<=number;i++)
            {
                if(number%i==0)
                {
                    check++;
                    break;
                }
            }
        if(check==0)
        {
            printf("%d ",number);
        }
    }
    printf("\n");
    return 0;
}
