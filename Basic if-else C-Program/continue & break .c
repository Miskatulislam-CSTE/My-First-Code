#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<15;i++)
    {
        if(i%2==0)
            continue;
        printf("%d\n",i);
        if(i==12)
            break;
    }
    return 0;
}
