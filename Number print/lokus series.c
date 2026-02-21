#include<stdio.h>
int main()   //Locus series soru hoi 2 1 take
{
    int n,i,first=2,second=1,next ;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d %d ",first,second);
    for(i=1; i<=n; i++)   // 2 1 3 4 7 ......
    {
        next = first+second ;
        printf("%d ",next);
        first = second ;
        second = next ;
    }
    printf("\n");
    return 0 ;
}
