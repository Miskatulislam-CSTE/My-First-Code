#include<stdio.h>
int main()
{
    int a,x;
    printf("enter any number: ");
    scanf("%d",&a);
    switch(a)
    {
        x=a+3 ;
        case 0:
            printf("zero");
            break ;
        case 1:
            printf("one");
            break;
            defult:
                printf("not number");
    }

    return 0;
}
