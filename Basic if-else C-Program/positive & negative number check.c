#include<stdio.h>
int main()
{
    int n,t,i;
    printf("Enter how many numbers(t): ");
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(n>0)
            printf("positive number\n");
        else if(n<0)
            printf("negative number\n");
        else
            printf("number is zero\n");
    }
    return 0 ;
}
