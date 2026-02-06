#include<stdio.h>

int main()
{
    long long int stat_point,ending_point,number,reaminder;
    long long int sum ,temp,count=0 ;
    printf("Enter stating point: ");
    scanf("%lld",&stat_point);
    printf("Enter ending point: ");
    scanf("%lld",&ending_point);
    for(number=stat_point; number<=ending_point ; number++)
    {
        sum=0;
        temp=number ;
        while(temp!=0)
        {
            reaminder=temp%10 ;
            sum=sum+(reaminder*reaminder*reaminder);
            temp=temp/10 ;
        }
        if(number==sum)
        {
            printf("%lld\n",number);
            count++;
        }
    }
        if(count==0)
        {
            printf("No 3-digit Armstrong numbers found in this range.\n");
        }

        return 0;
}
