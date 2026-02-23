#include<stdio.h>
int main()
{
    int i,j;

    for(i=1; i<=4; i++) //row
    {
        for(j=1; j<=4; j++) //coloum
        {
            if(i>j)
                printf("%d",j);
                else
                printf(" ");
        }
        printf("\n");
    }

    return 0;

}
