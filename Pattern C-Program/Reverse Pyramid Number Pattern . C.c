#include<stdio.h>
int main()
{
    int n,row,col,space;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(space=1; space<=n-row; space++)
        {
            printf("  ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}

