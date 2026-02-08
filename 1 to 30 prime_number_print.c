#include<stdio.h>
int main()
{
    int a,n,check=0;
    printf("prime numbers between 1 and 20:\n");
    for(a=2; a<30; a++)
    {
         if(n%a==0)
            {
                check++;
            }
         if(check==0)
         {
            printf("%d",n);
            continue
         }
    }
    return 0;
}

