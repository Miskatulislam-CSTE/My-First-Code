#include<stdio.h>
int main()
{
    int t,i=1,a;
    printf("Enter how many numbers(t): ");
    scanf("%d",&t);
    do
    {
        printf("Enter number %d:",i);
        scanf("%d",&a);
        if(a>0)
            printf("positive\n");
        else if(a<0)
            printf("negative\n");
        else
            printf("zero\n");
            i++;
    }
    while(i<=t);
        return 0;
}
