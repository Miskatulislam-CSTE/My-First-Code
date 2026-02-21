#include<stdio.h>
int main()
{
    int T,i=5,n;
    scanf("%d", &T);
    do
    {
        scanf("%d",&n);
        if( n % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
        i++;
    }
    while(i<=T);
    return 0;
}
