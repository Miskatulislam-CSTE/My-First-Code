#include<stdio.h>
int main()
{
    int i;
    printf("number between 1 and 30 :\n");
    for(i=1; i<=30; i=i+2)
    {
        if(i%3==0)
        {
            continue;
        }

     printf("%d\n",i);
    }
    return 0;
}
