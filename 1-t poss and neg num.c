#include<stdio.h>
int main()
{
    int t,i,n;
    printf("Enter how many numbers(t): ");
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
      printf("Enter number%d: ", i);
       scanf("%d",&n);
       if(n>0)
        printf("positive\n");
       else if(n<0)
        printf("negative\n");
       else
        printf("zero\n");

    }
    return 0;
}
