#include<stdio.h>
int main()
{
    int a,number,check,total_prime_number,sum;
    printf("prime numbers between 1 and 30:\n");
    for(number=1; number<=50; number++)
    {
        check=0;
        if(number==1)
            continue ;
        for(a=2; a*a<=number; a++)
        {
            if(number%a==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            printf("%d\n",number);
            total_prime_number++ ;
            sum = sum+number;
        }
    }
    printf("the total prime numberis =%d\n", total_prime_number);
    printf("the sum is = %d\n",sum);
    return 0;
}

