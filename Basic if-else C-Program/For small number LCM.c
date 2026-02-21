#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter any numbers: ");
    scanf("%d%d",&a,&b);
    if(a>=b)
        x=a;
    else
        x=b ;
    while(1)
    {
        if(x%a==0 && x%b==0)
        {
            printf("LCM=%d",x);
            break;
        }
        x++ ;
    }


        return 0 ;
}

