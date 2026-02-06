#include<stdio.h>
int main()
{
    int a,number,check;
    printf("prime numbers between 1 and 30:\n");
    for(number=1; number<=30; number++)
    {
        check=0;
        if(number==1)
            continue ;
        for(a=2; a<number; a++)
        {
            if(number%a==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
            printf("%d\n",number);
    }
    return 0;
}
