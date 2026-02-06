#include<stdio.h>
int main()
{
    int T,c=1,n;
    scanf("%d",&T);
    while( c <= T)
    {
        scanf("%d",&n);
        if(n % 2 == 0 )
            printf("even\n");
        else
            printf("odd\n");
        c++;
    }
    return 0;
}
