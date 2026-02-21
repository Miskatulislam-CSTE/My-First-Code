#include<stdio.h>
int main()
{
    int i,j,space;

    for(i=1; i<=5; i++) //row
    {
        for (space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=5-1;i>=1;i--)
    {
        for(space=1;space<=5-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}


