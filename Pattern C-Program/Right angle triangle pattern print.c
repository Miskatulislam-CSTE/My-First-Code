#include<stdio.h>
int main()
{
    int row,col,m,n;
    int count=1;
    printf("Enter the row number: ");
    scanf("%d",&m);
    printf("Enter the col number: ");
    scanf("%d",&n);

    for(row=1; row<=m; row++)
    {

        for(col=1; col<=n; col++)

        {
            if(row>col)
            {
            printf("%d",count);
            printf(" ");
            count++ ;
            }
        }
        printf("\n");

    }
    return 0;
}
