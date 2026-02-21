#include<stdio.h>
int main()
{
    int i,j;

    for(i=0; i<5; i++) //row
    {
        for(j=0; j<5; j++) //coloum
        {
            if(i>j)
                printf(" * ");
                else
                    printf("  ");
        }
        printf("\n");
    }

    return 0;

}
