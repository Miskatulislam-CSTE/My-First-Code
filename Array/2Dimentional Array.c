#include<stdio.h>  //2 Dimensional array declare and                                                                                                                                               Initialization
int main()
{
    int num[3][3]={{1,2,4},{2,4,1},{5,3,2}};
    for(int index=0; index<3; index++)
    {
       for(int j=0; j<3; j++)
       {
           printf("%d ",num[index][j]);
       }
       printf("\n");
    }
    return 0;
}
