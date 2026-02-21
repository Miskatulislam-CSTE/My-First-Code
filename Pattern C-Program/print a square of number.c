#include<stdio.h>
int main()
{
    int i,j;

    for(i=1; i<=3; i++) //row
    {
        for(j=1; j<=4; j++) //coloum
        {
                printf("%d",j);
        }
        printf("\n");
    }

    return 0;

}

