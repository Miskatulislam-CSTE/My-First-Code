#include<stdio.h>
int main()
{
    int i,j,space;

    for(i=4; i>=1; i--) //row
    {
        for(space=1;space<=4-i;space++)
        {
         printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;

}



