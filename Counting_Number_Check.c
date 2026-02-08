#include<stdio.h>
int main()
{
    int number,temp,count=0;
    printf("Enter any number: ");
    scanf("%d",&number);
    temp=number ;
    while(temp!=0)
    {
        temp=temp/10 ;
        count++ ;
    }
    printf("The original number is : %d\n",number);
    printf("Total number of digits :%d\n",count);
    return 0;
}
